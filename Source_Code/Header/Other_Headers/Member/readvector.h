#ifndef   ___READVECTOR___H___
#define   ___READVECTOR___H___


// Build-In Header

#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<sys/stat.h>

// User Define Header
#include "../Book/borrow_book.h"
#include "classproject.h"
#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../Design_Header/designproject.h"
#include "../../Other_Headers/Login/LOGIN_SYSTEM.h"

Member mb;

extern fstream filebook;
extern fstream file,filecopy;
extern Member mb;

string BINS = "App_Data";
string Member_Folder = BINS + "//Member";
string filemb = Member_Folder + "//MEMBER.bin";
string filecp = Member_Folder + "//MEMBERCOPY.bin";

fstream file,filecopy;


///////////////////////////////////// FUNCTION PROPOTYPE ///////////////////
void Main_Interface_Menu();
void MenuOption();
void TextOutputmember(int a,int b);
void BoxSearchMember();
void BoxUpdatemember();
void BoxDeleteMember();
void Image_sadDeleUn(int a,int b);
void Text_ImageMemberRecord(int a,int b);

////////////////////////////////////

//member auto id

void AutoMemberId(){
		
	file.open(filemb, ios::in | ios::binary);
	
	int StartID=1000;
	
	while(file.read((char*)&mb,sizeof(mb))){
		
		StartID=mb.Getmemberid();
	}
	mb.SetId(StartID +1);
	file.close();
}

void InsertMember(){
    
    struct stat bs;
    
    
	if(stat(BINS.c_str(), &bs) != 0){
			
		mkdir(BINS.c_str());
		
		if(stat(Member_Folder.c_str(), &bs) != 0){
			
		   mkdir(Member_Folder.c_str());
	   }
	}

	if(stat(Member_Folder.c_str(), &bs) != 0){
			
		mkdir(Member_Folder.c_str());
	}
		
	file.open(filemb,ios::out | ios::app | ios::binary);
	
	mb.Input();
	
	file.write((char*)&mb,sizeof(Member));
	
	file.close();
	
}
void OutputMember(){
	
	bool CheckID = false;
	
	file.open(filemb,ios::in | ios::out | ios::binary);
	
	if(file.fail()){
		
		gotoxy(65,32);
		
		foreColor(6); cout<<"FILE IS NOT FOUND!";
		
		gotoxy(65,34);
		
		foreColor(6);  cout<<"PLEASE INPUT DATA. "; Hinsy::setcolor(7); cout << "PRESS [ESC] TO CHOOSE OPTION AGAIN.";
		
		return;
	}	
	else if(file.eof() != true){
		
		file.seekg(0, std::ios::end);
	    std::streampos fileSize = file.tellg();
	    file.seekg(0, std::ios::beg);
	
	    if(fileSize == 0)
		{
	        // File is empty
	        Hconsole::clearBox(0,0,150,40,7);delay(20);
	        
	        for(int i=0; i<40; i++){
	        	
	        	VLine(1,0,0+i,7,219);
	        	VLine(2,0,0+i,7,219);
	        	delay(0);
			}
			
	        for(int i=0; i<150; i++){
	        	
	        	HLine(0,39,0+i,4,219);
	        	delay(0);
			}
			
			for(int i=0; i<40; i++){
	        	
	        	VLine(149,0,0+i,7,219);
	        	VLine(150,0,0+i,7,219);
	        	delay(0);
			}
	        for(int i=0; i<151; i++){
	        	
	        	HLine(0,0,0+i,4,219);
	        	delay(0);
			}

	       	Image_sadDeleUn(55,9);
        
	       	Text_ImageMemberRecord(30,23);
	       	
	       	foreColor(4); gotoxy(30,30); cout << "PRESS [ESC] FOR BACK.";
	       	
	        filebook.close();
	        
	        return;
	        
	    }else{
	    	
			
			cls();
				
			TextOutputmember(3,1);
			
			drawBoxSingleLine(3,9,144,1,1);
				
			gotoxy(5,10); Member::Header();
				
			int i=0;
				
			while(file.read((char*)&mb,sizeof(Member))){
					
				i+=3;
					
				drawBoxSingleLine(3,9+i,144,1,3);
							
				gotoxy(5,10+i);	mb.Output();
							
			}
			
			drawBoxSingleLine(50,12+i,50,1,3);
					
			foreColor(7);gotoxy(60,13+i);cout<<"PRESS [ESC] TO BACK MENU.";
					
			drawBoxSingleLine(2,8,146,6+i,7);
		
		}
	}
		
	file.close();					
}

void SearchMember(){
	
	string strid; int searchid; bool isCheck=false;
	
	file.open(filemb, ios::in | ios::binary);
	
	if(file.fail()){
		
		setcursor(0,0);
		
		foreColor(4); gotoxy(65,32); cout << "RECORD IS NOT FOUND!!!";
		
		foreColor(6); gotoxy(65,34); cout<<"PLEASE INPUT DATA."; Hinsy::setcolor(7); cout << "PRESS [ESC] TO CHOOSE OPTION AGAIN.";
		
	}
	else if(file.good()){
			
		cls();
		
		BoxSearchMember();
		Member::HeaderSearch(86,13);
			
		setcursor(1,1);
		
		foreColor(6); gotoxy(16,13); cout << "ENTER MEMBER ID TO SEARCH  : ";
		
		while(true){
				
			foreColor(7); inputNumber(strid); 
			if(strid == "\0"){
				continue;
			}
			else{
						
				searchid = stoi(strid);
				break;
			}
					
		}
			
		file.read((char*)&mb, sizeof(mb));
	
		while(file.eof() != true ){
				
			if(searchid == mb.Getmemberid()){
				 	
				setcursor(0,0);
				 	
				mb.OutputSearch();
					
				isCheck = true;
				
			}
			file.read((char*)&mb, sizeof(mb));
				 
		}
		if(isCheck == false){
				
			setcursor(0,0);
				
			foreColor(4); gotoxy(86,33);cout << "THIS MEMBER ID IS NOT FOUND!!!";
			
			foreColor(6); gotoxy(86,34);cout << "PRESS [ESC] FOR BACK MENU | [ENTER] FOR SEARCH MORE.";
				
		}
		if(isCheck == true){
				
			foreColor(6); gotoxy(86,34);cout << "PRESS [ESC] FOR BACK MENU | [ENTER] FOR SEARCH MORE.";
				
		}
	}
	
	file.close();
}
void UpdateMemberName() {

    struct stat bs;
    		
	if(stat(BINS.c_str(), &bs) != 0){
			
		mkdir(BINS.c_str());
		
		if(stat(Member_Folder.c_str(), &bs) != 0){
			
		   mkdir(Member_Folder.c_str());
	   }
	}
	
	if(stat(Member_Folder.c_str(), &bs) != 0){
			
		   mkdir(Member_Folder.c_str());
	   }
	
  	file.open(filemb, ios::out | ios::in | ios::binary);
  	
  	
  
  	string strid, newname; int newid; bool isCheck = false;
  	
  	if(file.fail()){
  		
  		setcursor(0,0);
  		
		foreColor(4); gotoxy(65,32);cout << "RECORD IS NOT FOUND!!!";
		
		foreColor(6); gotoxy(65,34); cout<<"PLEASE INPUT DATA. PRESS [ESC] TO CHOOSE OPTION AGAIN.";
  		
	}
	
	else if(file.good()){
			
		cls();
		
		BoxUpdatemember();
			
		//output message to box
	  	Member::TextUpdate();
		Member::HeaderSearch(86,13);
	
		setcursor(1,1);
		  	
		  	
		foreColor(3); gotoxy(14,12); cout << "ENTER ID OF MEMBER TO UPDATE   : ";
		  
		while (true) {
		    
		    foreColor(7); inputNumber(strid);
		    if (strid == "\0") {
		      	continue;
		    } else {
		      
		      	newid = stoi(strid);
		      
		      	break;
		    }
		}
		  	
		file.read((char*)&mb, sizeof(mb));
			
		while(file.eof() != true){
				
			if(newid==mb.Getmemberid()){
					
				mb.UpdateMember();
					
				mb.OutputSearch();
					
				int lastRead = file.tellg();
	        	
		       	file.seekp(lastRead-sizeof(mb));
		        	
		       	file.write((char*)&mb, sizeof(mb));
		       	
		       	isCheck = true;
		        	
			}
			file.read((char*)&mb, sizeof(mb));
		}
			
		if (isCheck == false) {
    
		   	setcursor(0,0);
		    	
			foreColor(4); gotoxy(86,33); cout << "THIS MEMBER ID IS NOT FOUND!";
				
			foreColor(6); gotoxy(86,34); cout << "PRESS [ESC] FOR BACK MENU | [ENTER] FOR UPDATE MORE.";
		    
		}else {
		    
		   	setcursor(0,0);
		    	
			foreColor(2); gotoxy(86,33); cout << "INFORMATIONS WAS UPDATED SUCCESSFULLY.!!";
				
			foreColor(6); gotoxy(86,34); cout << "PRESS [ESC] FOR BACK MENU | [ENTER] FOR UPDATE MORE.";
		}	
	}
		
  	
  
  file.close();
}

void DeleteMember(){
	
	string strid; int deleteid; bool Ischeck=false; bool CheckID=false;
    
	struct stat bs;

	if(stat(BINS.c_str(), &bs) != 0){
			
		mkdir(BINS.c_str());
		
		if(stat(Member_Folder.c_str(), &bs) != 0){
			
		   mkdir(Member_Folder.c_str());
	   }
	}
    
	if(stat(Member_Folder.c_str(), &bs) != 0){
			
			mkdir(Member_Folder.c_str());
		}

	
	file.open(filemb, ios::out | ios::in | ios::binary);
	filecopy.open(filecp, ios::out | ios::binary);
	
	if(file.fail()){
		
		setcursor(0,0);
		foreColor(4); gotoxy(65,32);cout << "RECORD IS NOT FOUND!!!";
		
		foreColor(6); gotoxy(65,34);cout << "PLEASE INPUT DATA. "; Hinsy::setcolor(7); cout << "PRESS [ESC] TO CHOOSE OPTION AGAIN.";
		
		return;
	}
	
	else if(file.good()){
	
		cls();
				
		BoxDeleteMember();
			
		setcursor(1,1);
			
		foreColor(3); gotoxy(42,17); cout<<"ENTER MEMBER ID TO DELETE     : ";
			
		while(true){
				
		    foreColor(7);inputNumber(strid);
		    if (strid == "\0") {
		      	continue;
		    } else {
		      
		      	deleteid = stoi(strid);
		      
		      	break;
		    }	
		}
			
		file.read((char*)&mb, sizeof(mb));
			
		while(file.eof() != true){
				
			if(deleteid == mb.Getmemberid()){
					
				setcursor(0,0);
					
				foreColor(2); gotoxy(42,22);cout<<"THIS MEMBER WAS DELETED SUCCESSFULLY.!!";
				foreColor(6); gotoxy(42,24);cout << "PRESS [ESC] FOR BACK MENU | [ENTER] FOR DELETE MORE.";
					
				Ischeck=true;
					
			}else{
					
				filecopy.write((char*)&mb,sizeof(mb));
				
			}
				
			file.read((char*)&mb, sizeof(mb));
		}
			
		if(Ischeck == false ){
				
			setcursor(0,0);
				
			gotoxy(42,22); Hinsy::setcolor(4); cout<<"THIS MEMBER WAS DELETED UNSUCCESSFULL.!";
				
			foreColor(6); gotoxy(42,24);cout << "PRESS [ESC] FOR BACK MENU | [ENTER] FOR DELETE MORE.";
				
		}
	}
	
	file.close();
	filecopy.close();
	remove(filemb.c_str());
	rename(filecp.c_str(),filemb.c_str());
	
}


/////////////////////////////////////
#endif