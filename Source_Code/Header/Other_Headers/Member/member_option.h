#ifndef   __MEMBER_OPTION_H_
#define   __MEMBER_OPTION_H_


// Build-In Header

#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>

// User Define Header

#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../Other_Headers/Member/readvector.h"
#include "../../Other_Headers/Member/classproject.h"
#include "../../Other_Headers/Login/LOGIN_SYSTEM.h"
#include "../../Design_Header/designproject.h"
#include "../Book/option_book.h"


//////////////////////////////////propotypefunction//////////////////


////////////////////////////////////////////////////////////////////

void memberoption(){
	
	char press,in; bool Ischeck=false;
	
	Hinsy::setcursor(false,0);
	
	int x = 1, y = 1;
	
	option:
		
	Hconsole::clearBox(0,0,150,40,7); Move_slomo(); Image_forheaderMember(5,11);
	
	do{
		
		setcursor(0,0);
		
		drawBoxDoubleLineWithBG(5,2,20,1,136);
		
		foreColor(143);
		
		gotoxy(9,3); cout<<"I N S E R T";
		
		drawBoxDoubleLineWithBG(29,2,20,1,136);
		foreColor(143);
		gotoxy(35,3); cout<<"V I E W";
		
		drawBoxDoubleLineWithBG(53,2,20,1,136);
		
		foreColor(143);
		
		gotoxy(56,3); cout<<"S E A R C H";
		
		
		drawBoxDoubleLineWithBG(77,2,20,1,136);
		
		foreColor(143);
		
		gotoxy(80,3); cout<<"U P D A T E";
		
		drawBoxDoubleLineWithBG(101,2,20,1,136);
		
		foreColor(143);
		
		gotoxy(104,3); cout<<"D E L E T E";
		
		drawBoxDoubleLineWithBG(125,2,20,1,136);
		
		foreColor(143);
		
		gotoxy(128,3); cout<<"B A C K";
		
		gotoxy(63,36);
		
		foreColor(7);
		
		cout << "==> USE ALL ARROW KEY TO SELECT ONE AND PRESS ENTER TO CHOOSE ONE OPTION.";
		
		HLine(63,37,75,7,196);
		
		
		if( x == 1 && y == 1){
			
			drawBoxDoubleLineWithBG(60,11,80,23,7);
			
			image_computer(70,15);
			
			cleararrow(131,4);
			
			cleararrow(34,4);
			
			Image_Finger(10,4);
			
			drawBoxDoubleLineWithBG(5,2,20,1,153);
			
			foreColor(159);
			
			gotoxy(9,3); cout<<"I N S E R T";
			
			foreColor(1);
			
		}
		if( x == 2 && y == 1){
			
			drawBoxDoubleLineWithBG(60,11,80,23,7);
			
			Image_forview(75,12);
			
			cleararrow(10,4);
			
			cleararrow(58,4);
			
			Image_Finger(34,4);
			
			drawBoxDoubleLineWithBG(29,2,20,1,153);
			
			foreColor(159);
			
			gotoxy(35,3); cout<<"V I E W";
			
			foreColor(1);
		}
		if( x == 3 && y == 1 ){
			
			drawBoxDoubleLineWithBG(60,11,80,23,7);
			
			Image_Keyboard(70,18);
			
			cleararrow(34,4);
			
			cleararrow(82,4);
			
			Image_Finger(58,4);
			
			drawBoxDoubleLineWithBG(53,2,20,1,153);
			
			foreColor(159);
			
			gotoxy(56,3); cout<<"S E A R C H";
			
			foreColor(1);
		}
		if(x == 4 && y == 1){
			
			drawBoxDoubleLineWithBG(60,11,80,23,7);
			
			Book_forheader_update(80,13);
			
			cleararrow(58,4);
			
			cleararrow(106,4);
			
			Image_Finger(82,4);
			
			drawBoxDoubleLineWithBG(77,2,20,1,153);
			
			foreColor(159);
			
			gotoxy(80,3); cout<<"U P D A T E";
			
			foreColor(1);
		}
		
		if( x == 5 && y == 1){
			
			drawBoxDoubleLineWithBG(60,11,80,23,6);
			
			image_styledelete(67,12);
			
			image_styledelete(102,12);
			
			cleararrow(82,4);
			
			cleararrow(131,4);
			
			Image_Finger(106,4);
			
			drawBoxDoubleLineWithBG(101,2,20,1,153);
			
			foreColor(159);
			
			gotoxy(104,3); cout<<"D E L E T E";
			
			foreColor(1);
		}
		
		if( x == 6 && y == 1){
			
			drawBoxDoubleLineWithBG(60,11,80,23,7);
			
			Style_Image(62,12);
			
			Style_Image(90,12);
			
			Style_Image(120,12);
			
			Image_wall(80,23);
			
			cleararrow(10,4);
			
			cleararrow(106,4);
			
			Image_Finger(131,4);
			
			drawBoxDoubleLineWithBG(125,2,20,1,153);
			
			foreColor(159);
			
			gotoxy(128,3); cout<<"B A C K";
			
			foreColor(1);
		}
		

		press = getch();
		
		switch(press){
		
		case 75:{ //left
			
			x--;
				
			if ( x < 1 ){
				
				x = 6;	
			}
				
			break;
		}
		
		case 77:{//right
			
			x++;
				
			if( x > 6 ){
				
				x = 1;
				
			}
			
			break;
			
		}
		
		case 72:{ // up
		
			y--;
			
			if(y < 1 && x == 1){
				
				x = 6;
				y++;
				
			}
			
			if(y < 1 && x <= 6){
				
				x--;
				y++;
				
			}
			
			break;
		}
		
		case 80:{ // Down
		
			y++;
			
			if(y > 1 && x == 1){
				
				x++;
				y--;
				
			}
			
			if(y > 1 && x < 6){
				
				x++;
				y--;
				
			}
					
			if(y > 1 && x == 6){
				
				x = 1;
				y--;
				
			}
			
			break;
		}
//		
//		case 27:
//		{
//			
//			BoookAndMemerOption();
//			
//			break;
//		}
	}
	
}while(press != 13);
	
	//////////////////////////////////////
	//all option
	//////////////////////////////////////
	
	if(x == 1 && y == 1){
		
		do{
			
			input:
				
			Hconsole::clearBox(0,0,150,40,7);
			
			AutoMemberId();
			
			InsertMember();
			
			a:
				
			in = getch();
			
			if(in == 13)
			{
				
				goto input;
				
			}
			
			else if(in == 27)
			{
				
				break;
				
			}
			
			else
			{
				
				goto a;
				
				break;
				
			}
			
		}while(getch() != 27);
		
		Hconsole::clearBox(0,0,150,40,7);
		
		goto option;
	}
	
	///////////////////////////////
	//           output          //
	//////////////////////////////
	
	if( x == 2 && y == 1)
	{

		do
		{
    		
    	OutputMember();	
    		
		}while(getch() != 27);	
			
		Hconsole::clearBox(0,0,150,40,7);
			
		goto option;

	}
	
	///////////////////////////////
	//         search            //
	//////////////////////////////
	
	if( x == 3 && y == 1)
	{
		
		do
		{
			
			search:	
				
			SearchMember();
				
			b:
					
			in = getch();
				
			if(in == 13)
			{
					
				goto search;
					
			}
			
			else if( in == 27 )
			{
					
				break;
					
			}
				
			else
			{
					
				goto b;
				
				break;
				
			}
				
		}while(getch() != 27);
		
		Hconsole::clearBox(0,0,150,40,7);
		
		goto option;
		
	}
	
	
	///////////////////////////////
	//           UPDATE         //
	//////////////////////////////
	
	if( x == 4 && y == 1)
	{
		
	    do
		{
			
			update:	
				
			UpdateMemberName();
				
			c:
					
			in = getch();
				
			if(in == 13)
			{
					
				goto update;
					
			}
				
			else if(in == 27)
			{
					
				break;
					
			}
			
			else
			{
					
				goto c;
				
				break;
				
			}
				
		}while(getch() != 27);
			
		Hconsole::clearBox(0,0,150,40,7);
		
		goto option;
		
	}
	
	///////////////////////////////
	//          DELETE          //
	//////////////////////////////
	
	if( x == 5 && y == 1)
	{
		do
		{
			delet:	
				
			DeleteMember();
				
			d:
					
			in = getch();
				
			if(in == 13)
			{
					
				goto delet;
					
			}
				
			else if(in == 27)
			{
					
				break;
					
			}
			
			else
			{
					
				goto d;
				
				break;
				
			}
				
		}while(getch() != 27);
		
		Hconsole::clearBox(0,0,150,40,7);
		
		goto option;
			
	}
	
	
	if(x == 6 && y == 1){
		
		Hconsole::clearBox(0,0,150,40,7);
		
		setcursor(0,0);
		
		BoookAndMemerOption();
		
	}
	
}






/////////////////////////////////////////////////////////////////////
#endif