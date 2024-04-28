#ifndef OPTION_BOOK_H
#define OPTION_BOOK_H


// Build-In Header

#include<iostream>
#include<conio.h>
#include<fstream>
#include<vector>
#include<algorithm>
#include<iomanip>

#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../Design_Header/designproject.h"
#include "../Member/optionmember.h"
#include "../Graph/book_graph.h"

/////////////////////////////// propotype function /////////////////////////

void BoookAndMemerOption();
void text_book_menu(int a, int b);
void BoxMenuBook();
void insertBooktoFile();
void outPutBooksfromFile();
void searchByID();
void AutoBookId();
void updateBookByID();
void deletebyId();
void Borrow_Book();
void Returned_Book();
void View_MemberBorrow();
void chooseView();
void invoiceid();

//////////////////////////////////////////////////////

void book_menu_option()
{
	
	char press,in; bool Ischeck=false;
	
	int x=1,y=1;
	
	again:
		
	cls();
	
	text_book_menu(50, 4);
	
	BoxMenuBook();
	
	do 
	{

        setcursor(0, 0);

        foreColor(5);
        
        gotoxy(44, 16); cout << "I N S E R T";

        foreColor(5);
        
        gotoxy(71, 16); cout << "V I E W";

        foreColor(5);
        
        gotoxy(94, 16); cout << "S E A R C H";

        foreColor(5);
        
        gotoxy(44, 22); cout << "U P D A T E";

        foreColor(5);
        
        gotoxy(69, 22); cout << "D E L E T E";

        foreColor(5);
        
        gotoxy(94, 22); cout << "B O R R O W";

        foreColor(5);
        
        gotoxy(44, 28); cout << "R E T U R N";

        foreColor(5);
        
        gotoxy(65, 28); cout << "B O R R O W  M E N U";

        foreColor(5);
        
        gotoxy(96, 28); cout << "B A C K";

        gotoxy(40, 32);
        
        foreColor(3);
        
        cout << "USE ALL ARROW KEY TO SELECT ONE AND PRESS ENTER TO CHOOSE ONE OPTION.";
        
        HLine(40, 33, 70, 7, 196);

        if (x == 1 && y == 1) 
		{
			
            foreColor(6);
            
            gotoxy(44, 16);  cout << "I N S E R T";
            
        }
        
		if (x == 1 && y == 2) 
		{
			
            foreColor(6);
            
            gotoxy(71, 16);  cout << "V I E W";
            
        }
        
		if (x == 1 && y == 3) 
		{
            
			foreColor(6);
			
            gotoxy(94, 16);  cout << "S E A R C H";
            
        }
        
		if (x == 1 && y == 4) 
		{
            
			foreColor(6);
			
            gotoxy(44, 22);  cout << "U P D A T E";
            
        }
        
		if (x == 1 && y == 5) 
		{
            
			foreColor(6);
			
            gotoxy(69, 22);  cout << "D E L E T E";
            
        }
        
		if (x == 1 && y == 6) 
		{
            foreColor(6);
            
            gotoxy(94, 22);  cout << "B O R R O W";
            
        }
        
        if (x == 1 && y == 7) 
		{
            foreColor(6);
            
            gotoxy(44, 28); cout << "R E T U R N";
            
        }
        
        if (x == 1 && y == 8) 
		{
            foreColor(6);
            
            gotoxy(65, 28); cout << "B O R R O W  M E N U";
            
        }
        
        if (x == 1 && y == 9) 
		{
            foreColor(6);
            
            gotoxy(96, 28); cout << "B A C K";
            
        }

        press = getch();

        switch (press) 
		{
            case 75: // left
                
                x--;
                
				if (x < 1) 
				{
					y++;
                }
				
//				if(x < 1 && y > 9)
//				{
//                    y = 1;	
//				}
				
                
                break;

            case 77: // right
                
				if (y == 3) 
				{
					
                    y = 1;
                    
                } 
				
				else 
				{
					
                    y++;
                    
                }
                
				break;

            case 72: // up
                if (x == 1) 
				{
					
                    x = 3;
                    
                } 
				
				else 
				{
					
                    x--;
                    
                }
                
                break;

            case 80: // down
                if (x == 3) 
				{
					
                    x = 1;
                    
                } 
				
				else 
				{
					
                    x++;
                    
                }
                
                break;
        }

    } while (press != 13);
	
	
	if(x == 1 && y == 1)
	{
		
		do
		{
			cls();
			
			AutoBookId();
			
			insertBooktoFile();
			
			foreColor(4); gotoxy(45,31); cout<<"PRESS [ESC] FOR INPUT AGAIN | [ANY KEY] FOR INPUT MORE";
			
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 1 && y == 2)
	{
		cls();
		
		do
		{
			
		chooseView();
			
		}while(getch()!=27);
		
		goto again;
	}
	
	if(x == 1 && y == 3){
		
		cls();
		
		do
		{
			
		searchByID();
			
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 1 && y == 4)
	{
		
		cls();
		
		do
		{
			
			updateBookByID();
				
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 1 && y == 5)
	{
		
		cls();
		
		do
		{
		
		deletebyId();
		
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 1 && y == 6)
	{
		do
		{
			invoiceid();
			Borrow_Book();
			
			
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 1 && y == 7)
	{
		
		cls();
		
		do
		{
			cls();
			
			Returned_Book();
			
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 1 && y == 8)
	{
		
		cls();
		
		do
		{
			cls();
			
			View_MemberBorrow();
			
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 1 && y == 9)
	{
		cls();
		
		BoookAndMemerOption();
		
		getch();
	}
	
	
}


void chooseView()
{
	
	gotoxy(20, 20); cout << "PRESS[1] TO VIEW BOOKS, PRESS[2] TO SEE GRAPH";
	
	switch(getch())
	{
		case '1':
		{
			cls();
			
			outPutBooksfromFile();
			
			break;}  
		
		case '2':
		{
			cls();
			
			book_graph(100, 30, 1002);
			
			break;
		}
	}
}
#endif