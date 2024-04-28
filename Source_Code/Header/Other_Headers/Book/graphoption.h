#ifndef ___GRAPHOPTION_H_
#define ___GRAPHOPTION_H_


// Build-In Headers

#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>

// User - Define Headers

#include "../../ANT_Header/HinsyOOP_Modifiled.h"
#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../Design_Header/designproject.h"
#include "../Member/optionmember.h"
#include "../Graph/book_graph.h"

/////////////////////////////// propotype function /////////////////////////

void Graph_Book();
void Sub_BorrowMenu();
void Image_houseBorrow(int a,int b);
void borrowBookData();
void Graph_Book();
void book_menu_upate();

////////////////////////////////////////////////////

void Sub_GraphMenu()
{
	
	int x = 1, y = 1;
	
	char press, option;

	option: cls(); setcursor(false,0);
	
	drawBoxDoubleLineWithBG(3,2,34,22,255);
	
	Image_houseBorrow(60,12);
	
	do
	{
	
		drawBoxDoubleLineWithBG(5,3,30,3,136);
		
        foreColor(143);
        
        gotoxy(10, 5);cout << "G R A P H B O O K";
		
		drawBoxDoubleLineWithBG(5,10,30,3,136);
		
        foreColor(143);
        
        gotoxy(10, 12); cout << "G R A P H M E M B E R";
		
		drawBoxDoubleLineWithBG(5,17,30,3,136);
		
        foreColor(143);
        
        gotoxy(10,19); cout << "B A C K";
		
		if( x == 1 && y == 1)
		{
			drawBoxDoubleLineWithBG(5,3,30,3,153);
			
			Hinsy::clearBox(50,1,100,6,0);
        	
	        foreColor(159);
	        
	        gotoxy(10, 5);  cout << "G R A P H B O O K  <=";
		}
		
		if( x == 2 && y == 1)
		{
			drawBoxDoubleLineWithBG(5,10,30,3,153);
			
			Hinsy::clearBox(50,1,100,6,0);
			
	        foreColor(159);
	        
	        gotoxy(10, 12); cout << "G R A P H M E M B E R  <=";
	        
		}
		
		if( x == 3 && y == 1)
		{
			
			drawBoxDoubleLineWithBG(5,17,30,3,153);
			
			Hinsy::clearBox(50,1,100,6,0);
        	
	        foreColor(159);
	        
	        gotoxy(10,19);  cout << "B A C K      <=";
	        
		}
		
		foreColor(7);
		
		press = getch();
		
		switch(press)
		{
			case 72:
			{  // up
			
				x--;
				
				if(x < 1)
				{
					
					x = 3;
					
				}
				
				break;
			}
			
			case 80:
			{  // down
			
				x++;
				
				if( x > 3)
				{
					
					x = 1;
					
				}
				
				break;
				
			}
			
			case 75:
			{  // left
			
			    y--;
			    
			    if( y < 1 && x == 1)
				{
			    	
			    	x = 3;
			    	y = 1;
			    	
				}
				
			    if( y < 1 && x == 2)
				{
			    	
			    	x = 1;
			    	y = 1;
			    	
				}
				
			    if( y < 1 && x == 3)
				{
			    	
			    	x = 2;
			    	y = 1;
			    	
				}
				
				break;
				
			}
			
			case 77:
			{  // Right
			
			    y++;
			    
			    if( y > 1 && x == 1)
				{
			    	
			    	x = 2;
			    	y = 1;
			    	
				}
				
			    if( y > 1 && x == 2)
				{
			    	
			    	x = 3;
			    	y = 1;
			    	
				}
				
			    if( y > 1 && x == 3)
				{
			    	
			    	x = 1;
			    	y = 1;
			    	
				}
				
				break;
			}
			
			case 27:
			{
				book_menu_upate();
				break;
			}
		}
		
	}while(press != 13);

	if ( x == 1 && y == 1)
	{
		cls();
		
		do
		{
			
			again:
			
			borrowBookData();
			
			aa:
			
			option = getch();
			
			if(option == 13)
			{
				
				goto again;
				
			}
			
			else if(option == 27)
			{
				
				break;
				
			}
			
			else
			{
				
				goto aa;
			}
			
		}while(option != 27);
		
		goto option;
	}
	
	if ( x == 2 && y == 1)
	{ 
	
	    cls();
	
		do{
		
			reagain:
				
			cls();
			
			
			borrowBookData();	
				
			bb:
				
			option = getch();
				
			if(option == 13)
			{
					
				goto reagain;
				
			}
			
			else if(option == 27)
			{
					
				break;
				
			}
			
			else
			{
					
				goto bb;
				
			}
			
		}while(option != 27);
		
		goto option;
		
	}
	
	if ( x == 3 && y == 1)
	{
		
		cls();
		
		book_menu_upate();
		
	}
	
}


//////////////////////////////////////////////////
#endif