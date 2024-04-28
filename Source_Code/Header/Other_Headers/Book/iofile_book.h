#ifndef IOFILE_BOOK_H
#define IOFILE_BOOK_H

// USer Define - Header

#include "../../Design_Header/design.h"
#include "../../ANT_Header/HinsyOOP_Modifiled.h"

#include "borrow_book.h"
#include "book_class.h"

// Build-in Header 

#include<sys/stat.h>


extern fstream filebook;
extern fstream filecopy;
extern string file_book,file_bookcp;
extern string filemb,filebk,reTurn;

using namespace HinsyOOP;

Book bookObject;
fstream filebook;

string BIN_Files   = "App_Data";
string Book_Folder = BIN_Files + "//Book";
string filebk   = Book_Folder + "//BOOK.bin";
string file_bookcp = Book_Folder + "//BOOKCOPY.bin";

///// propotype function /////

void BoxInputBook();
void BorderBoxSearch(int a,int b);
void BoxUpdateBook(int a,int b);
void Image_sadDeleUn(int a,int b);
void Outofstock(int a,int b);
void DeleteUnsuccess(int a,int b);
void bookandpeopleimage(int a,int b);
///////////////////////////////////////


void AutoBookId()
{
		
	filebook.open(filebk, ios::in | ios::binary);
	
	int StartID=1000;
	
	while(filebook.read((char*)&bookObject,sizeof(Book)))
	{
		
		StartID=bookObject.Getbookid();
	}
	
	bookObject.setId(StartID +1);
	filebook.close();
}

void insertBooktoFile()
{
	
	struct stat bs;
    

	if(stat(BIN_Files.c_str(), &bs) != 0)
	{
			
		mkdir(BIN_Files.c_str());
		
		if(stat(Book_Folder.c_str(), &bs) != 0)
		{
			
		mkdir(Book_Folder.c_str());
	   }
	   
	}
	
	
	if(stat(Book_Folder.c_str(), &bs) != 0)
	{
			
		mkdir(Book_Folder.c_str());
		
    }
	


	Hinsy::clearBox(45,10,100,30,0);
	
	BoxInputBook();
	
	setcursor(true, 1);
	
			
	filebook.open(filebk, ios::out | ios::app | ios::binary);
	
	bookObject.InputBook();
	
	filebook.write((char*)&bookObject, sizeof(Book));
	
	filebook.close();
	
	
}

void outPutBooksfromFile()
{
	Hinsy::clearBox(45,10,100,30,0);
	
    setcursor(false, 0);
    
    filebook.open(filebk, ios::in | ios::binary);
    
    if(filebook.fail()) 
	{
        setcursor(false, 0);
        
        Image_sadDeleUn(75,9);
        
       	Outofstock(50,23);;
       	
		foreColor(4); gotoxy(50,30); cout << "PRESS [ESC] FOR BACK.";
		
        foreColor(7);
        
        return;
    }

    // Check if the file is empty
    filebook.seekg(0, std::ios::end);
    std::streampos fileSize = filebook.tellg();
    filebook.seekg(0, std::ios::beg);

    if(fileSize == 0)
	{
        Image_sadDeleUn(75,9);
        
       	Outofstock(50,23);
       	
       	foreColor(4); gotoxy(50,30); cout << "PRESS [ESC] FOR BACK.";
       	
        filebook.close();
        
        return;
    }

    int nm = 4;

    HLine(50, nm + 5, 90, 4);
    
    gotoxy(55, nm + 6); Book::header();
    
    HLine(50, nm + 7, 90, 4);
    
    int n = 0; int g=0;
    
    while (filebook.read((char*)&bookObject, sizeof(Book))) 
	{
        
        g+=2;
        
        gotoxy(55, g+12);bookObject.Output();
        
        n=g;
    }

    drawBoxSingleLine(50, 12, 90, n+1, 6);
    
    foreColor(7); gotoxy(50,n+15); cout << "PRESS [ESC] FOR BACK.";

    filebook.close();
}




void updateBookByID() 
{
	
	setcursor(true, 1);	
	
    filebook.open(filebk, ios::in | ios::out | ios::binary);
    
    bool isFound = false;
    
    if (filebook.fail()) 
	{
    	
        setcursor(false, 0);
        
        Image_sadDeleUn(75,9);
        
       	Outofstock(50,23);;
       	
		foreColor(4); gotoxy(50,30); cout << "PRESS [ESC] FOR BACK.";
        
        return;
    }
    
    if (filebook.good()) 
	{
        
		int updatebyID; char temp[10];
        
        Hinsy::clearBox(45,8,100,30,0);
        
        DrawRectangle(60,8, 50, 3, 5 );
        
        gotoxy(62, 10);
        
        foreColor(3); 
        
		cout << "ENTER THE ID YOU WANT TO UPDATE: "; 
        
        setcursor(true, 1);
        

        Hinsy::inputNumber(temp);
            
        Hinsy::clearBox(60,8,50,4,0);
        
        updatebyID = stoi(temp);
		
	    while (filebook.read((char*)&bookObject, sizeof(Book)))
		{
	
	        setcursor(true, 1);
	        
	        foreColor(7);
	        
	        char temp[30]; int intTemp;
	        
	        if (updatebyID == bookObject.Getbookid()) 
			{
	            			
				BoxUpdateBook(65,12);
	
	            setcursor(true, 1);
	            	
	            intTemp = bookObject.Getbookid();
	            
	            foreColor(7); gotoxy(95,15); cout << intTemp;
	            	
	            bookObject.setId(intTemp);
	            	
	            foreColor(7); gotoxy(95,18); 
	            
				Hinsy::inputLetter(temp);
				
	            bookObject.setAuthorName(temp);
	                
	            foreColor(7); gotoxy(95,21);
				 
				Hinsy::inputLetter(temp);
				
	            bookObject.setTitle(temp);
	                
	            foreColor(7); gotoxy(95,24); 
	            
				Hinsy::inputNumber(temp);
				
	            intTemp = stoi(temp);
	            
	            bookObject.setQty(intTemp);
	                
	            foreColor(7); gotoxy(95,27);
				
				Hinsy::inputLetter(temp);
	            
				bookObject.Settype(temp);
	                
	            Hinsy::clearBox(45,8,100,30,0);
	                
	            BorderBoxSearch(60,12);
	                
	            bookObject.OutputSearch();
	            
	            int lastRead = filebook.tellg();
	        	
		       	filebook.seekp(lastRead-sizeof(Book));
		        	
		       	filebook.write((char*)&bookObject, sizeof(Book));
	            
	            isFound = true;
	            
	            break;
	        }
	    }
    }
    
    filebook.close();
    
    if (!isFound) 
	{
    	setcursor(false, 0);
    	
    	bookandpeopleimage(75,9);
    	
    	foreColor(7);gotoxy(67, 30);cout << "PRESS [ESC] TO BACK | PRESS [ENTER] TO UPDATE MORE." ;
    }
    
    
}

void deletebyId()
{

	ofstream backup;

	filebook.open(filebk, ios::in | ios::binary);

	backup.open("TempFile.bin", ios::out | ios::binary);

	bool isFound = false;
	
	Hinsy::clearBox(45,8,100,30,0);

	if(filebook.fail())
	{
		setcursor(false, 0);
        
        Image_sadDeleUn(75,9);
        
       	Outofstock(50,23);;
       	
		foreColor(4); gotoxy(50,30); cout << "PRESS [ESC] FOR BACK.";
        
	}

	if(filebook.good())

	{	

	  	char deletebyId[20];
	  
	  	Hinsy::clearBox(60,10,50,3,0);

	 	DrawRectangle(60,10, 50, 3, 5 );
	 	
        gotoxy(62, 12);
        foreColor(3); 
        
        setcursor(1,1);
        
		cout << "ENTER THE ID YOU WANT TO DELETE: "; 
		
	  	foreColor(7); Hinsy::inputNumber(deletebyId);
	  	
		Hinsy::clearBox(60,10,50,4,0);

		filebook.read((char*)&bookObject, sizeof(Book));

		while(filebook.eof() != true)

		{
			if( atoi(deletebyId) == bookObject.Getbookid() )

			{
	            isFound = true;

			}

	        if( atoi(deletebyId) != bookObject.Getbookid() )

			{
				
	            backup.write((char*)&bookObject, sizeof(Book));

			}

			filebook.read((char*)&bookObject, sizeof(Book));

		}

		//* Validate Data in file */

		if(isFound == false)

		{

			setcursor(false, 0);

			Image_sadDeleUn(80,9);
			
			DeleteUnsuccess(60,23);
			
			foreColor(4);gotoxy(65, 36);cout << "PRESS [ESC] TO BACK | PRESS [ENTER] TO DELETE MORE." ;
	        
	        

		} 

		if(isFound == true) 

		{
			
			Hinsy::clearBox(60,10,50,3,0);
    		setcursor(0,0);
    		
    		Image_Import(60,10);
    		
			gotoxy(90,13); foreColor(2); cout << "DELETED SUCCESSFULLY!" ;
			
			gotoxy(80,32); foreColor(7);cout<<"PRESS [ESC] TO BACK | [ENTER] TO IMPORT MORE.";
			
        	foreColor(7);
			

		}

	

		

	} // end if good

	
	filebook.close();	

	backup.close();

	remove(filebk.c_str());
	
	rename("TempFile.bin", filebk.c_str());

}


void searchByID()
{
    filebook.open(filebk, ios::in | ios::binary);
    
    bool isFound = false;

    if(filebook.fail())
	{
    	
        setcursor(false, 0);
        
        Image_sadDeleUn(75,9);
        
       	Outofstock(50,23);;
       	
		foreColor(4); gotoxy(50,30); cout << "PRESS [ESC] FOR BACK.";
        
    }

    if(filebook.good())
	{
    
    	setcursor(true, 0);
    	
        int searchById;
        
        char temp[30];
        
        Hinsy::clearBox(45,8,100,30,0);
        
       	DrawRectangle(67,8, 50, 3, 5 );
        
        foreColor(3);
		 
		gotoxy(75, 10);cout << "ENTER THE ID YOU WANT TO SEARCH: ";
		
        foreColor(7); Hinsy::inputNumber(temp);
        
        searchById = atoi(temp);
        
    	Hinsy::clearBox(60,8,60,4,0);
    	
    while (filebook.read((char*)&bookObject, sizeof(Book))) 
	{
    	
    	if(searchById == bookObject.Getbookid())
		{
    	
    	setcursor(false, 0);
    	
		BorderBoxSearch(60,12);
        
        bookObject.OutputSearch();

        isFound = true;
        
    	}
    }

        if(!isFound)
		{
        	
        	setcursor(false, 0);
    	
	    	bookandpeopleimage(75,9);
	    	
	    	foreColor(7);gotoxy(67, 30);cout << "PRESS [ESC] TO BACK | PRESS [ENTER] TO SEARCH MORE." ;
	        
        }
    }

    filebook.close();
}

void ImportQTY()
{
	Hinsy::clearBox(45,8,100,30,0);
	
	ofstream Im_qty;
	
	char ch_id[10];
	
	int checkid;
	
	bool Isfound=false;
	
	filebook.open(filebk, ios::in | ios::binary);
	
	Im_qty.open(reTurn,ios::binary);
	
	if(filebook.fail())
	{
		
		cout<<"FILE NOT FOUND!";
		
		return;
	}
	
	if(filebook.good())
	{
		
		Image_Import(60,10);
			
		gotoxy(90,13); foreColor(7); cout << "ENTER BOOK ID FOR IMPORT "; 
		
		setcursor(1,1);
		
		gotoxy(90,14); foreColor(7); cout << "==> : "; foreColor(7); HinsyOOP::HLVInput::inputNumber(ch_id);
		
		checkid = atoi(ch_id);
		
		while(filebook.read((char*)&bookObject,sizeof(Book)))
		{
			
			if(checkid == bookObject.Getbookid())
			{
				
				bookObject.Import();
				
				Im_qty.write((char*)&bookObject,sizeof(Book));
				
				Isfound=true;
			}
			
			if(checkid != bookObject.Getbookid())
			{
				
				Im_qty.write((char*)&bookObject,sizeof(Book));
			}
			
		}
		
		if(Isfound==true)
		{
			
			setcursor(0,0);
			
			gotoxy(90,30); foreColor(2); cout << "IMPORT SUCCESSFULLY!";
			
			gotoxy(80,32); foreColor(7);cout << "PRESS [ESC] TO BACK | [ENTER] TO IMPORT MORE.";
		}
		
		if(Isfound==false)
		{
			
			setcursor(0,0);
			
			gotoxy(85,30); foreColor(4);cout<<"ID NOT FOUND. IMPORT UNSUCCESS!";
			
			gotoxy(80,32); foreColor(7);cout<<"PRESS [ESC] TO BACK | [ENTER] TO IMPORT MORE.";
			
		}
	}
	
	filebook.close();
	
	Im_qty.close();
	
	remove(filebk.c_str());
	
	rename(reTurn.c_str(),filebk.c_str());
}
#endif