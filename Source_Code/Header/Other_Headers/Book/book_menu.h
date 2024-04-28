#ifndef ___BOOK_MENU__H__
#define ___BOOK_MENU__H__


// User - Define Header

#include "../../ANT_Header/HinsyOOP_Modifiled.h"
#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../Design_Header/designproject.h"
#include "../Member/optionmember.h"
#include "../Graph/book_graph.h"
#include "../Book/graphoption.h"
#include "../Book/borrow_book.h"

/////////////////////////////// propotype function /////////////////////////

void borrowMemberData();
void AciiMemberBorrow(int a,int b);
void AsciiReturnBook(int a,int b);
void ImportQTY();
void BackMenu(int a,int b);
void ViewGraph(int a,int b);
void TextImportBook(int a,int b);
void AsciiBorrowBook(int a,int b);
void TextDeleteBook(int a,int b);
void TextUpdateBook(int a,int b);
void TextSearchBook(int a,int b);
void TextViewBook(int a,int b);
void Image_IsertBook(int a,int b);
void Image_Teaching(int a,int b);
void Image_houseforBook(int a,int b);
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
void Sub_GraphMenu();
void Image_houseBorrow(int a,int b);
void Sub_BorrowMenu();
void invoiceid();

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void book_menu_upate()
{
	 
	char press , in , option; 
	
	bool Ischeck = false;
	
	int x = 1 , y = 1;
	
	again:
		
	cls();
	
	drawBoxDoubleLineWithBG(3,2,34,35,255); Image_houseforBook(110,8); Image_Teaching(45,10);
	
	do 
	{
		
        setcursor(0, 0);
        
		drawBoxDoubleLineWithBG(5,3,30,1,136);
		
        foreColor(143);
        
        gotoxy(10, 4); cout << "I N S E R T";
		
		
		drawBoxDoubleLineWithBG(5,7,30,1,136);
		
        foreColor(143);
        
        gotoxy(10, 8); cout << "V I E W";
		
		
		drawBoxDoubleLineWithBG(5,11,30,1,136);
		
        foreColor(143);
        
        gotoxy(10, 12); cout << "S E A R C H";
		
		
		drawBoxDoubleLineWithBG(5,15,30,1,136);
		
        foreColor(143);
        
        gotoxy(10, 16); cout << "U P D A T E";
		
		
		drawBoxDoubleLineWithBG(5,19,30,1,136);
		
        foreColor(143);
        
        gotoxy(10, 20); cout << "D E L E T E";
		
		
		drawBoxDoubleLineWithBG(5,23,30,1,136);
		
        foreColor(143);
        
        gotoxy(10, 24); cout << "B O R R O W";

        drawBoxDoubleLineWithBG(5,27,30,1,136);
        
		foreColor(143);
		
        gotoxy(10, 28); cout << "I M P O R T B O O K";
		
		drawBoxDoubleLineWithBG(5,31,30,1,136);
		
		foreColor(143);
		
        gotoxy(10, 32); cout << "V I E W G R A P H";
		
		drawBoxDoubleLineWithBG(5,35,30,1,136);
		
        foreColor(143);
        
        gotoxy(10, 36); cout << "B A C K";

        gotoxy(60, 37); foreColor(3); cout << "[TIPS] USE ALL ARROW KEY TO SELECT ONE AND PRESS ENTER TO CHOOSE ONE OPTION.";
        
        HLine(60, 38, 75, 7, 196);

        if ( x == 1 && y == 1 ) 
		{
            drawBoxDoubleLineWithBG(5,3,30,1,153);
            
            Hinsy::clearBox(50,1,90,6,0);
            
            Image_IsertBook(60,1);
            
	        foreColor(159);
	        
	        gotoxy(10, 4); cout << "I N S E R T         <==";
	        
        }
        
        if ( x == 2 && y == 1 ) 
		{
            drawBoxDoubleLineWithBG(5,7,30,1,153);
            
            Hinsy::clearBox(50,1,90,6,0);
            
            TextViewBook(60,1);
            
	        foreColor(159);
	        
	        gotoxy(10, 8); cout << "V I E W             <==";
	        
	        
        }
        
        if ( x == 3 && y == 1 ) 
		{
        	
        	Hinsy::clearBox(50,1,90,6,0);
        	
            drawBoxDoubleLineWithBG(5,11,30,1,153);
            
            TextSearchBook(60,1);
            
	        foreColor(159);
	        
	        gotoxy(10, 12); cout << "S E A R C H         <==";
	        
	        
        }
        
        if ( x == 4 && y == 1 ) 
		{
            drawBoxDoubleLineWithBG(5,15,30,1,153);
            
            Hinsy::clearBox(50,1,90,6,0);
            
            TextUpdateBook(60,1);
            
	        foreColor(159);
	        
	        gotoxy(10, 16); cout << "U P D A T E         <==";
	        
	        
        }
        
        if ( x == 5 && y == 1 ) 
		{
            drawBoxDoubleLineWithBG(5,19,30,1,153);
            
            Hinsy::clearBox(50,1,90,6,0);
            
            TextDeleteBook(60,1);
            
	        foreColor(159);
	        
	        gotoxy(10, 20); cout << "D E L E T E         <==";
	        
	        
        }
        
        if ( x == 6 && y == 1 ) 
		{
            drawBoxDoubleLineWithBG(5,23,30,1,153);
            
            Hinsy::clearBox(50,1,90,6,0);
            
            AsciiBorrowBook(60,1);
            
	        foreColor(159);
	        
	        gotoxy(10, 24); cout << "B O R R O W         <==";
	        
	        
        }
        
        if ( x == 7 && y == 1 ) 
		{
            drawBoxDoubleLineWithBG(5,27,30,1,153);
            
            Hinsy::clearBox(50,1,90,6,0);
            
            TextImportBook(60,1);
            
			foreColor(159);
			
	        gotoxy(10, 28); cout << "I M P O R T B O O K <==";
	        
	        
        }
        
        if ( x == 8 && y == 1 ) 
		{
            drawBoxDoubleLineWithBG(5,31,30,1,153);
            
            Hinsy::clearBox(50,1,90,6,0);
            
            ViewGraph(60,1);
            
			foreColor(159);
			
	        gotoxy(10, 32); cout << "V I E W G R A P H   <==";
	        
	        
        }
        
        if ( x == 9 && y == 1) 
		{
			
        	drawBoxDoubleLineWithBG(5,35,30,1,153);
        	
        	Hinsy::clearBox(50,1,90,6,0);
        	
        	BackMenu(60,1);
        	
	        foreColor(159);
	        
	        gotoxy(10, 36); cout << "B A C K             <==";
	        
	        
        }
        
        foreColor(1);

        press = getch();

        switch ( press ) {
        	
            case 72:{ // up
            
                x--;
                
                if ( x < 1 && y == 1) 
				{
                    x = 9;
                    y = 1;
                }
                
                break;
            }

            case 80:{ // down
            
            	x++;
            	
                if (x > 9 && y == 1) 
				{
                    x = 1;
                    y = 1;
                } 
    
                break;
            }

            case 75:{ // left
            
                y--;
                
                if ( y < 1 && x == 1 ) 
				{
                    x = 9;
                    y = 1;
                }
                
                if ( y < 1 && x == 9 ) 
				{
                    x--;
                    y++;
                }
                
                if ( y < 1 && x < 9 ) 
				{
                    x--;
                    y++;
                }
                
                break;
            }

			case 77:{ // right

            	y++;
            	
                if ( y > 1 && x == 1 ) 
				{
                    x++;
                    y--;
                }
                
                if ( y > 1 && x == 9 ) 
				{
                    x = 1;
                    y--;
                }
                
                if ( y > 1 && x < 9 ) 
				{
                    y--;
                    x++;
                } 
    
                break;
            }
            
//            case 27:{
//            	
//            	BoookAndMemerOption();
//            	
//				break;
//			}
        }

    }while ( press != 13 );
	
	
	if( x == 1 && y == 1) 
	{
		
		do
		{
			
			INPUT:
				
			AutoBookId();
			
			insertBooktoFile();
			
			setcursor(0,0);
			
			foreColor(4); gotoxy(50,31); cout << "PRESS [ESC] FOR BACK | [ ENTER ] FOR INPUT MORE.";
			
			B:
				
			char touch = getch();
			
			if(touch == 13)
			{
				
				goto INPUT;
				
			}
			
			else if(touch == 27)
			{
				book_menu_upate();
				break;
				
			}
			
			else{
				
				goto B;
				
			}
			
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 2 && y == 1)
	{
		
		do{
			
			outPutBooksfromFile();
			
			F:
				
			char touch = getch();
			
			if(touch == 27)
			{
				book_menu_upate();
				break;
			}
			
			else
			{
				
				goto F;
				
			}
		
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 3 && y == 1)
	{
		
		do
		{
			
			searchagain:
				
			searchByID();
			
			a:
			
			option = getch();
			
			if(option == 13){
				
				goto searchagain;
				
			}else if(option == 27){
				
				break;
				
			}else{
				goto a;
			}
			
		}while(option != 27);
		
		goto again;
	}
	
	if(x == 4 && y == 1){
		
		
		do{
			
			UPATE:
				
			updateBookByID();
			
			C:
			
			option = getch();
			
			if(option == 13)
			{
				
				goto UPATE;
				
			}
			
			else if(option == 27)
			{
				
				break;
			}
			
			else
			{
				goto C;
			}
			
		}while(option != 27);
		
		goto again;
	}
	
	if(x == 5 && y == 1)
	{
			
		do
		{
			
			del:
				
			deletebyId();
			
			D:
				
			option = getch();
			
			if(option == 13)
			{
				
				goto del;
				
			}else if(option == 27)
			{
				
				break;
				
				
			}
			
			else
			{
				
				goto D;
				
			}
			
		}while(option != 27);
		
		goto again;
	}
	
	if(x == 6 && y == 1)
	{
		
		cls();
		
		do
		{
			
		   Sub_BorrowMenu();
			
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 7 && y == 1)
	{
		
		do
		{
			
			import:
				
			ImportQTY();
			
			K:
				
			option = getch();
			
			if(option == 13)
			{
				
				goto import;
				
			}
			
			else if(option == 27)
			{
				
				break;
				
			}
			
			else{
				
				goto K;
			}
			
		}while(option != 27);
		
		goto again;
		
	}
	
	if(x == 8 && y == 1)
	{
		
		do
		{
			Hinsy::clearBox(60,37,90,1,7);
			
//			Sub_GraphMenu();
			borrowMemberData();
			
		}while(getch() != 27);
		
		goto again;
	}
	
	if(x == 9 && y == 1)
	{
		
		BoookAndMemerOption();
		
		getch();
	}
	
	
}
void Sub_BorrowMenu()
{
	
	int x = 1; char press,op;

	option:
		
	cls();
		
	setcursor(false,0);
	
	drawBoxDoubleLineWithBG(3,2,34,26,255);
	
	Image_houseBorrow(60,12);
	
	do
	{
	
		drawBoxDoubleLineWithBG(5,3,30,3,136);
		
        foreColor(143);
        
        gotoxy(10, 5);cout <<"B O R R O W";
		
		drawBoxDoubleLineWithBG(5,10,30,3,136);
		
        foreColor(143);
        
        gotoxy(10, 12); cout <<"R E T U R N";
		
		drawBoxDoubleLineWithBG(5,17,30,3,136);
		
        foreColor(143);
        
        gotoxy(10,19); cout <<"V I E W";
		
		drawBoxDoubleLineWithBG(5,24,30,3,136);
		
        foreColor(143);
        
        gotoxy(10,26); cout <<"B A C K";
		
		if( x == 1 )
		{
			drawBoxDoubleLineWithBG(5,3,30,3,153);
			
			Hinsy::clearBox(50,1,100,6,0);
			
        	AsciiBorrowBook(60,1);
        	
	        foreColor(159);
	        invoiceid();
	        gotoxy(10, 5);  cout <<"B O R R O W  <=";
		}
		
		if( x == 2 )
		{
			drawBoxDoubleLineWithBG(5,10,30,3,153);
			
			Hinsy::clearBox(50,1,100,6,0);
			
			AsciiReturnBook(60,1);
			
	        foreColor(159);
	        
	        gotoxy(10, 12); cout <<"R E T U R N  <=";
	        
		}
		
		if( x == 3 )
		{
			
			drawBoxDoubleLineWithBG(5,17,30,3,153);
			
			Hinsy::clearBox(50,1,100,6,0);
			
			AciiMemberBorrow(60,1);
			
	        foreColor(159);
	        
	        gotoxy(10,19);  cout <<"V I E W      <=";
	        
		}
		
		
		if( x == 4 )
		{
			
			drawBoxDoubleLineWithBG(5,24,30,3,153);
			
			Hinsy::clearBox(50,1,100,6,0);
			
        	BackMenu(60,1);
        	
	        foreColor(159);
	        
	        gotoxy(10,26);  cout <<"B A C K      <=";
	        
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
					
					x = 4;
					
				}
				
				break;
			}
			
			case 80:
			{  // down
			
				x++;
				
				if( x > 4)
				{
					
					x = 1;
					
				}
				
				break;
				
			}
		}
		
	}while(press != 13);

	if ( x == 1 )
	{
		
		cls();
		
		do{
			
			again:
			invoiceid();
			Borrow_Book();
			
			aa:
			
			op = getch();
			
			if(op == 13)
			{
				
				goto again;
				
			}
			
			else if(op == 27)
			{
				
				break;
				
			}
			
			else
			{
				
				goto aa;
				
			}
			
		}while(op != 27);
		
		goto option;
		
	}
	
	if ( x == 2 )
	{ 
	
	    cls();
	
		do{
		
			reagain:
				
			Returned_Book();
				
			bb:
				
			op = getch();
				
			if(op == 13){
					
				goto reagain;
				
			}else if(op == 27){
					
				break;
				
			}else{
					
				goto bb;
			}
			
		}while(op != 27);
		
		goto option;
	}
	
	if ( x == 3 )
	{
		
		do
		{
			view:

			View_MemberBorrow();
				
			dd:
				
			op = getch();
				
			if(op == 13)
			{	
			
				goto view;
					
			}
			
			else if(op == 27)
			{
					
				break;
				
			}
			
			else
			{
					
				goto dd;
				
			}
			
		}while(op != 27);
		
		goto option;
	}
	
	
	if ( x == 4 )
	{
		
		cls();
		
		book_menu_upate();
	
	}
	
}

//////////////////////////////////////////////////////
#endif