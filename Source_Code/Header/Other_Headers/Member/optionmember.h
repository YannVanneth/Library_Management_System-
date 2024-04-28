#ifndef   ___OPTIONMEMBER__H__
#define   ___OPTIONMEMBER__H__


// Build-In Header

#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>

// User Define Header

#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/HinsyOOP_Modifiled.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../Other_Headers/Member/readvector.h"
#include "../../Other_Headers/Member/classproject.h"
#include "../../Other_Headers/Login/LOGIN_SYSTEM.h"
#include "../../Design_Header/designproject.h"
#include "../Book/option_book.h"
#include "../../Design_Header/App_Design.h"
#include "../Book/book_menu.h"

using namespace HinsyOOP;
//////////////////////////////////propotypefunction//////////////////
void About_Us();
void BoookAndMemerOption();
void AutoMemberId();
void InsertMember();
void OutputMember();
void SearchMember();
void UpdateMemberName();
void DeleteMember();	
bool Account_Login();
void BoxMenuMember();
void BoxAllMenu();
void BoxOptionBookAndMember(int a,int b);
void book_menu_option();
void Main_Interface_Menu();
void memberoption();
void book_menu_upate();
void Move_slomo();

////////////////////////////////


void MenuOption(){
	
	char press,in; bool Ischeck=false;
	
	int x=1,y=1;
	
	option:
		
	cls();
	
	BoxMenuMember();
//	Move_slomo();
	
	do{
		
		setcursor(0,0);
		
		foreColor(5);
		gotoxy(44,16); cout<<"I N S E R T";
		
		foreColor(5);
		gotoxy(71,16); cout<<"V I E W";
		
		foreColor(5);
		gotoxy(94,16); cout<<"S E A R C H";
		
		foreColor(5);
		gotoxy(44,22); cout<<"U P D A T E";
		
		foreColor(5);
		gotoxy(69,22); cout<<"D E L E T E";
		
		foreColor(5);
		gotoxy(96,22); cout<<"B A C K";
		
		
		gotoxy(38,32);
		foreColor(3);
		cout << "USE ALL ARROW KEY TO SELECT ONE AND PRESS ENTER TO CHOOSE ONE OPTION.";
		HLine(38,33,70,7,196);
		
		
		if(x==1 && y==1){
			foreColor(6);
			gotoxy(44,16);  cout<<"I N S E R T";
		}
		if(x==1 && y==2){
			foreColor(6);
			gotoxy(71,16);  cout<<"V I E W";
		}
		if(x==1 && y==3){
			foreColor(6);
			gotoxy(94,16);  cout<<"S E A R C H";
		}
		if(x==2 && y==1){
			foreColor(6);
			gotoxy(44,22);  cout<<"U P D A T E";
		}
		if(x==2 && y==2){
			foreColor(6);
			gotoxy(69,22);  cout<<"D E L E T E";
		}
		if(x==2 && y==3){
			foreColor(6);
			gotoxy(96,22);  cout<<"B A C K";
		}
		
		
		press = getch();
		
		switch(press){
		
		case 75:{ //left
			
			y--;
				
			if (y < 1 && x == 1){
				
				x = 2;
				y = 3;
				
			}
			else if( y < 1 && x == 2){
				
				x = 1;
				y = 3;
				
			}
				
			break;
			}
		
		case 77:{//right
			
			y++;
				
			if( y > 3 && x == 1){
				
				y = 1;
				x = 2;
				
			}else if( y > 3 && x == 2){
				
				y = 1;
				x = 1;
				
			}
				break;
			}
		
		case 72:{ //up
			
			x--;
				
			if(x < 1 && y == 1){
				
				y = 3;
				x = 2;
				
			}else if(x < 1 && y == 2){
				
				x = 2;
				y = 1;
				
			}else if(x < 1 && y == 3){
				
				x = 2;
				y = 2;
			}
				break;
			}
		
		case 80:{//down
				
				x++;
				
			if( x > 2 && y == 1){
				
				x = 1;
				y = 2;
				
			}else if( x > 2 && y == 2){
				
				x = 1;
				y = 3;
				
			}else if( x > 2 && y == 3){
				
				x = 1;
				y = 1;
				
			}
				break;
			}
		}
		
	}while(press != 13);
	
	//////////////////////////////////////
	//all option
	//////////////////////////////////////
	
	if(x==1 && y==1){
		
		do{
			
			input:
				
			cls();
			
			AutoMemberId();
			InsertMember();
			
			a:
			in=getch();
			if(in==13){
				goto input;
			}
			else if(in == 27){
				break;
			}
			else{
				goto a;
				break;
			}
			
		}while(getch() != 27);
		
		cls();
		
		goto option;
	}
	
	///////////////////////////////
	//output
	//////////////////////////////
	
	if(x==1 && y==2){

			
			do{
    		
    		OutputMember();	
    		
			}while(getch() != 27);	
			
			cls();
			
			goto option;

	}
	
	///////////////////////////////
	//search
	//////////////////////////////
	
	if(x==1 && y==3){
		
			
			do{
			
				search:	
				
				SearchMember();
				
				b:
					
				in=getch();
				
				if(in==13){
					
					goto search;
					
				}
				else if(in == 27){
					
					break;
					
				}
				else{
					
					goto b;
					break;
				}
				
			}while(getch() != 27);
			cls();
			goto option;
//		}
	}
	
	
	///////////////////////////////
	//UPDATE
	//////////////////////////////
	
	if(x==2 && y==1){
		
			do{
			
				update:	
				
				UpdateMemberName();
				
				c:
					
				in=getch();
				
				if(in==13){
					
					goto update;
					
				}
				else if(in == 27){
					
					break;
					
				}
				else{
					
					goto c;
					break;
				}
				
			}while(getch() != 27);
			cls();
			goto option;
			
//		}
		
	}
	
	///////////////////////////////
	//DELETE
	//////////////////////////////
	
	if(x==2 && y==2){
			do{
			
				delet:	
				
				DeleteMember();
				
				d:
					
				in=getch();
				
				if(in==13){
					
					goto delet;
					
				}
				else if(in == 27){
					
					break;
					
				}
				else{
					
					goto d;
					break;
				}
				
			}while(getch() != 27);
			cls();
			goto option;
			
	}
	
	
	if(x==2 && y==3){
		cls();
		setcursor(0,0);
		
		BoookAndMemerOption();
		
	}
	
}
void BoookAndMemerOption(){
	char press; bool Ischeck=false;
	
	int x=1,y=1;
	Hinsy::clearBox(0,0,150,40,7);
	BoxAllMenu();
	
	do{
		
		setcursor(0,0);
		
		foreColor(2);
		gotoxy(50,16); cout<<"B O O K S";
		
		foreColor(2);
		gotoxy(92,16); cout<<"M E M B E R";
		
		foreColor(2);
		gotoxy(50,22); cout<<"L O G O U T";
		
		foreColor(2);
		gotoxy(92,22); cout<<"A B O U T  U S";
		
		foreColor(2);
		gotoxy(72,28); cout<<"E X I T";
				
		if(x==1 && y==1){
			
			foreColor(3);
			
			gotoxy(50,16); cout<<"B O O K S";

		}
		if(x==1 && y == 2){
		
			foreColor(3);
			
			gotoxy(92,16); cout<<"M E M B E R";
		
		}
		if(x== 2 && y== 1){
			
			foreColor(3);
			
			gotoxy(50,22); cout<<"L O G O U T";
			
		}
		if(x==2 && y==2){
			
			foreColor(3);
			
			gotoxy(92,22); cout<<"A B O U T  U S";
			
		}
		if(x==3 && y == 1){
			
			foreColor(3);
			gotoxy(72,28); cout<<"E X I T";
		}
		
		press = getch();
		
		switch(press){
			case 75:{ // left
				y--; 
				
				if( y < 1 && x == 1){
					x = 3;
					y = 1;
				}else if( y < 1 && x == 2){
					x = 1;
					y = 2;
				}else if(y < 1 && x == 3){
					x = 2;
					y = 2;
				}
				
				break;
			}
			case 77:{ // right
			
				y++;
				
				if( y > 2 && x == 1){
					x = 2;
					y = 1;
				}else if( y > 2 && x == 2){
					x = 3;
					y = 1;
				}else if(y > 1 && x == 3){
					x = 1;
					y = 1;
				}
				
				break;
			}
			case 72:{ // up
			
				x--;
				
				if( x < 1 && y == 1){
					x = 2;
					y = 2;
				}else if( x < 1 && y == 2){
					x = 3;
					y = 1;
				}else if( x < 1 && y == 3){
					x = 1;
					y = 1;
				}
				break;
			}
			case 80:{ //down
			
				x++;
				
				if( x > 3 && y == 1){
					x = 1;
					y = 2;
				}else if( x > 2 && y == 2){
					x = 1;
					y = 1;
				}
//				}else if( x > 3 && y == 1){
//					x = 1;
//					y = 2;
//				}
				
				break;
			}			
			
		}
		
		
	}while(press != 13);
	
	Hconsole::clearBox(0,0,150,40,7);
	
	if(x==1 && y==1){
			
			Hconsole::clearBox(0,0,150,40,7);
//			book_menu_option();	
			book_menu_upate();
		}
		if(x==1 && y == 2){
			
			Hconsole::clearBox(0,0,150,40,7);
			memberoption();
		
		}
		if(x== 2 && y== 1){
			
			Hconsole::clearBox(0,0,150,40,7);
			
			Main_Interface_Menu();
			
		}
		
		if(x==2 && y==2){
			
			Hconsole::clearBox(0,0,150,40,7);
			
			About_Us();
			
		}
		if(x==3 && y == 1){
			
			Hconsole::clearBox(0,0,150,40,7);
			
			BoxOptionBookAndMember(25,10);
			delay(2000);
			
			exit(0);
		}
	
	
	
	
}

//////////////////////////////////
#endif