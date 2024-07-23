#ifndef __LOGIN_DESIGN_H__
#define __LOGIN_DESIGN_H__

#include "../ANT_Header/HinsyOOP_Modifiled.h"
#include "../Other_Headers/Login/LOGIN_SYSTEM.h"
#include "designproject.h"

using namespace HinsyOOP;

void BoookAndMemerOption();
void first_about_us();

void NoConsole_Resize(){
	
	HWND console = GetConsoleWindow();
   
    HMENU menu = GetSystemMenu(console, FALSE);
    
    if (menu != NULL) {
    	
        DeleteMenu(menu, SC_SIZE, MF_BYCOMMAND);
        DeleteMenu(menu, SC_MAXIMIZE, MF_BYCOMMAND);
        
    }
}

void ConsoleProperty(){
	
	system("MODE CON COLS=150 LINES=40");
	SetConsoleTitle("LIBRARY MANAGEMENT SYSTEM");
	NoConsole_Resize();
	
}

void openUrl(const char* url) {
	
    ShellExecute(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);

}

void BoroeurnText(int a,int b){

Hconsole::gotoxy(a,b);         Hconsole::setcolor(7); cout << R"(  __  __ ___       ___ ___    _   ___ _  _   ___  ___  ___  ___  ___ _   _ ___ _  _  )";
Hconsole::gotoxy(a,b+1);       Hconsole::setcolor(7); cout << R"( |  \/  | _ \     | _ \ _ \  /_\ / __| || | | _ )/ _ \| _ \/ _ \| __| | | | _ \ \| | )";
Hconsole::gotoxy(a,b+2);       Hconsole::setcolor(5); cout << R"( | |\/| |   /  _  |  _/   / / _ \ (__| __ | | _ \ (_) |   / (_) | _|| |_| |   / .` | )";
Hconsole::gotoxy(a,b+3);       Hconsole::setcolor(6); cout << R"( |_|  |_|_|_\ (_) |_| |_|_\/_/ \_\___|_||_| |___/\___/|_|_\\___/|___|\___/|_|_\_|\_| )";
                                                                                    
}

void VannethText(int a,int b){
	 
Hconsole::gotoxy(a,b);       Hconsole::setcolor(7); cout << R"(  __  __ ___      __   ___   _  _ _  _  __   ___   _  _ _  _ ___ _____ _  _  )";
Hconsole::gotoxy(a,b+1);     Hconsole::setcolor(7); cout << R"( |  \/  | _ \     \ \ / /_\ | \| | \| | \ \ / /_\ | \| | \| | __|_   _| || | )";
Hconsole::gotoxy(a,b+2);     Hconsole::setcolor(5); cout << R"( | |\/| |   /  _   \ V / _ \| .` | .` |  \ V / _ \| .` | .` | _|  | | | __ | )";
Hconsole::gotoxy(a,b+3);     Hconsole::setcolor(6); cout << R"( |_|  |_|_|_\ (_)   |_/_/ \_\_|\_|_|\_|   \_/_/ \_\_|\_|_|\_|___| |_| |_||_| )";
                                                                            
}

void DavidText(int a,int b){
	
Hconsole::gotoxy(a,b);     Hconsole::setcolor(7); cout << R"(  __  __ ___        ___  ___ _   _ _  _   ___   ___   _____ ___   )";
Hconsole::gotoxy(a,b+1);   Hconsole::setcolor(7); cout << R"( |  \/  | _ \      / _ \| __| | | | \| | |   \ /_\ \ / /_ _|   \  )";
Hconsole::gotoxy(a,b+2);   Hconsole::setcolor(5); cout << R"( | |\/| |   /  _  | (_) | _|| |_| | .` | | |) / _ \ V / | || |) | )";
Hconsole::gotoxy(a,b+3);   Hconsole::setcolor(6); cout << R"( |_|  |_|_|_\ (_)  \___/|___|\___/|_|\_| |___/_/ \_\_/ |___|___/  )";
                                                                                    
}
void About_Us_text(int a,int b){
	
	
Hconsole::gotoxy(a,b);   Hconsole::setcolor(5); cout << R"(      __       _______     ______    ____  ____  ___________      ____  ____   ________  )";
Hconsole::gotoxy(a,b+1); Hconsole::setcolor(5); cout << R"(     /""\     |   _  "\   /    " \  ("  _||_ " |("     _   ")    ("  _||_ " | /"       ) )";
Hconsole::gotoxy(a,b+2); Hconsole::setcolor(5); cout << R"(    /    \    (. |_)  :) // ____  \ |   (  ) : | )__/  \\__/     |   (  ) : |(:   \___/  )";
Hconsole::gotoxy(a,b+3); Hconsole::setcolor(3); cout << R"(   /' /\  \   |:     \/ /  /    ) :)(:  |  | . )    \\_ /        (:  |  | . ) \___  \    )";
Hconsole::gotoxy(a,b+4); Hconsole::setcolor(3); cout << R"(  //  __'  \  (|  _  \\(: (____/ //  \\ \__/ //     |.  |         \\ \__/ //   __/  \\   )";
Hconsole::gotoxy(a,b+5); Hconsole::setcolor(3); cout << R"( /   /  \\  \ |: |_)  :)\        /   /\\ __ //\     \:  |         /\\ __ //\  /" \   :)  )";
Hconsole::gotoxy(a,b+6); Hconsole::setcolor(6); cout << R"((___/    \___)(_______/  \"_____/   (__________)     \__|        (__________)(_______/   )";
Hinsy::HLine(a,b+8,140,6,254);                                                                                         

}

void OurTeamText(int a,int b){
                                                                 
Hconsole::gotoxy(a,b);     Hconsole::setcolor(7); cout << R"(   ___  _   _ ___   _____ ___   _   __  __  )";
Hconsole::gotoxy(a,b+1);   Hconsole::setcolor(7); cout << R"(  / _ \| | | | _ \ |_   _| __| /_\ |  \/  | )";
Hconsole::gotoxy(a,b+2);   Hconsole::setcolor(5); cout << R"( | (_) | |_| |   /   | | | _| / _ \| |\/| | )";
Hconsole::gotoxy(a,b+3);   Hconsole::setcolor(6); cout << R"(  \___/ \___/|_|_\   |_| |___/_/ \_\_|  |_| )";
                                           
}

void Lecture(int a,int b){

Hconsole::gotoxy(a,b);         Hconsole::setcolor(7); cout << R"(  _    ___ ___ _____ _   _ ___ ___ ___  )";
Hconsole::gotoxy(a,b+1);       Hconsole::setcolor(7); cout << R"( | |  | __/ __|_   _| | | | _ \ __| _ \ )";
Hconsole::gotoxy(a,b+2);       Hconsole::setcolor(5); cout << R"( | |__| _| (__  | | | |_| |   / _||   / )";
Hconsole::gotoxy(a,b+3);       Hconsole::setcolor(6); cout << R"( |____|___\___| |_|  \___/|_|_\___|_|_\ )";

                                   
}
void About_Us_Design(int a,int b){
	
	 Hinsy::setFont(14,600,L"Consolas",true);
	 About_Us_text(a-35,b-3);
	 OurTeamText(a-30,b+10);
	 // Member Box 
	 Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,136); // box 1
	 Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,136); // box 2
	 Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,136); // box 3
	 // Member text	 
	 Hconsole::gotoxy(a-23,b+17); Hconsole::setcolor(143); cout << "OEUN DAVID"; 
	 Hconsole::gotoxy(a+4,b+17); Hconsole::setcolor(143); cout << "YANN VANNETH";
	 Hconsole::gotoxy(a+31,b+17); Hconsole::setcolor(143); cout << "PRACH BOROEUN";
	 
	 // Member Box frame
	 Hinsy::gotoxy(a+15,b+11); Hinsy::setcolor(7); cout << "ANT SCHOLARSHIP STUDENT";
	 Hinsy::gotoxy(a+15,b+12); Hinsy::setcolor(7); cout << "COURSE : C/C++ (MOBILE APP MORNING)";
	 Hinsy::drawBoxDoubleLine(a-35,b+8,90,12,5);
	 
	 // Lecture Frame 
	 Hinsy::drawBoxDoubleLine(a+60,b+10,45,12,6);
	 
	 // Lecture Box 
	 Lecture(a+65,b+8);
	 
	 //
	 Hinsy::gotoxy(a+65,b+14); Hinsy::setcolor(7); cout << "TEACHER : MR. UON HINSY";
	 Hinsy::HLine(a+65,b+16,30,7,254); 
	 Hinsy::gotoxy(a+65,b+18); Hinsy::setcolor(7); cout << "MENTOR";
	 Hinsy::gotoxy(a+65,b+20); Hinsy::setcolor(7); cout << "MISS. VUTH RACHANA AND MR. CHHEAN SEYHA";
     
     Hinsy::gotoxy(a-30,b+26); Hinsy::setcolor(7); cout << "ANT TECHNOLOGY TRAINING CENTER";
     Hinsy::gotoxy(a-30,b+29); Hinsy::setcolor(7); cout << "CONTACT";
     Hinsy::HLine(a-30,b+27,30,9,254);
	 Hinsy::gotoxy(a-30,b+31); Hinsy::setcolor(7); cout << "WEBSITE : WWW.ANTKH.COM";
     Hinsy::gotoxy(a,b+31); Hinsy::setcolor(7);    cout << "ADDRESS : #32, ROAD 606, KHAN TOUL KORK, PHNOM PENH";
     Hinsy::drawBoxDoubleLine(a-35,b+24,90,8,9); // box frame
   
     Hinsy::gotoxy(a+60,b+26); Hinsy::setcolor(6); cout << "[ TIPS ] ";
	 Hinsy::gotoxy(a+60,b+29); Hinsy::setcolor(7); cout << "PRESS THE ARROW KEYS TO SELETE THE TEAM MEMBER."; 
	 Hinsy::gotoxy(a+60,b+31); Hinsy::setcolor(7); cout << "PRESS [ ESC ] TO BACK.";
}

void About_Us(){
	char press; int x = 1, y = 1; 
	int a = 40, b = 5;
	
	first_about_us();
	Hinsy::clearBox(0,0,150,40,7);
	About_Us_Design(a,b);
	 
	do{
		 Hconsole::setcursor(false,0);
		 
		 // Member Box 
		 Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,136); // box 1
		 Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,136); // box 2
		 Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,136); // box 3
		 
		 // Member text	 
		 Hconsole::gotoxy(a-23,b+17); Hconsole::setcolor(143); cout << "OEUN DAVID"; 
		 Hconsole::gotoxy(a+4,b+17); Hconsole::setcolor(143); cout << "YANN VANNETH";
		 Hconsole::gotoxy(a+31,b+17); Hconsole::setcolor(143); cout << "PRACH BOROEURN";	
	 
	   if(x == 1 && y == 1){
		  Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,153); // box 1
		  Hconsole::gotoxy(a-23,b+17); Hconsole::setcolor(151); cout << "OEUN DAVID";
	      Hinsy::setcolor(7);
	   }  
	   
	   if(x == 2 && y == 1){
	      
	      Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,153); // box 2
		  Hconsole::gotoxy(a+4,b+17); Hconsole::setcolor(151); cout << "YANN VANNETH";
	   	  Hinsy::setcolor(7);
	   }
	   
	   if( x == 3 && y == 1){
	   	 
	   	 Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,153); // box 3
	   	 Hconsole::gotoxy(a+31,b+17); Hconsole::setcolor(151); cout << "PRACH BOROEURN";
	   	Hinsy::setcolor(7);
	   } 
	   
	 press = getch();
	 
	 switch(press){
	 	 
	    case 75:{ //left
			
			x--;
				
			if (x < 1 && y == 1){
				
				x = 3;
				y = 1;
			
			}
				
			break;
		}
		
		case 77:{ // right
			
			x++;
				
			if( x > 3 && y == 1){
				
				x = 1;
				y = 1;
				
			}
				break;
			}
		
		case 72:{ // up
			
			y--;
				
			if(y < 1 && x == 1){
				
				x = 3;
				y = 1;
				
			}else if (y < 1 && x == 2){
				
				x = 1;
				y = 1;
				
			}else if(y < 1 && x == 3){
				
				x = 2;
				y = 1;
				
			}
				break;
		}
		
		case 80:{ //down
				
			y++;
				
			if(y > 1 && x == 1){
				
				x = 2;
				y = 1;
				
			}else if (y > 1 && x == 2){
				
				x = 3;
				y = 1;
				
			}else if(y > 1 && x == 3){
				
				x = 1;
				y = 1;
				
			}
				break;
		}
		
		} // end switch
		
			if(press == 27){
			
			Hinsy::cls(); BoookAndMemerOption();
		}
	 	 
	 }while(press != 13);
	 
	 
	   if(x == 1 && y == 1){ // OEUN DAVID OPTION 
	   	
	   	doitagain:
	   	int x = 1, y = 1; char key;
	   	
	   	Hinsy::clearBox(a-30,b+10,80,4,7);
	   	Hinsy::clearBox(a-30,b+26,80,6,7);
	   	Hinsy::clearBox(a+60,b+29,48,1,7);
	   	do{
		 
	   	 DavidText(a-30,b+10);
	   	 Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,136); // box 1
		 Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,136); // box 2
		 Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,136); // box 3
		 
		 // Member text	 
		 Hconsole::gotoxy(a-24,b+17); Hconsole::setcolor(143); cout << "ANT WEBSITE"; 
		 Hconsole::gotoxy(a+6,b+17); Hconsole::setcolor(143); cout << "FACEBOOK";
		 Hconsole::gotoxy(a+34,b+17); Hconsole::setcolor(143); cout << "TELEGRAM";
		 
		 
		 Hinsy::gotoxy(a-30,b+26); Hinsy::setcolor(7); cout << "ABOUT HIM";
	     Hinsy::gotoxy(a-30,b+29); Hinsy::setcolor(7); cout << "NAME : OEUN DAVID";
	     Hinsy::gotoxy(a-30,b+31); Hinsy::setcolor(7); cout << "AGE  : 21 YEAROLDS";
	     
	     Hinsy::gotoxy(a+5,b+26); Hinsy::setcolor(7); cout << "EDUCATION";
	     Hinsy::gotoxy(a+5,b+28); Hinsy::setcolor(7); cout << "ANT TECHNOLOGY TRAINING CENTER";
	     Hinsy::gotoxy(a+5,b+30); Hinsy::setcolor(7); cout << "UNVIERSITY : THE ROYAL UNIVERSITY OF PHNOM PENH";
	     Hinsy::gotoxy(a+60,b+29); Hinsy::setcolor(7); cout << "PRESS THE ARROW KEYS TO SELETE THE CONTACT."; 
	     
	     Hinsy::HLine(a-30,b+27,30,9,254);
	     
	     if(x == 1 && y == 1){
	     	
	     	Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,153);
	     	Hconsole::gotoxy(a-24,b+17); Hconsole::setcolor(151); cout << "ANT WEBSITE"; 
	     	Hinsy::setcolor(7);
		 }
		 
		 if(x == 2 && y == 1){
		 	
		 	Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,153);
		 	Hconsole::gotoxy(a+6,b+17); Hconsole::setcolor(151); cout << "FACEBOOK";
		 	Hinsy::setcolor(7);
		 }
		 
		 if(x == 3 && y == 1){
		 	
		 	Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,153);
		 	Hconsole::gotoxy(a+34,b+17); Hconsole::setcolor(151); cout << "TELEGRAM";
		 	Hinsy::setcolor(7);
		 }
		
		key = getch();
		
		switch(key){
		 	
		case 75:{ //left
			
			x--;
				
			if (x < 1 && y == 1){
				
				x = 3;
				y = 1;
			
			}
				
			break;
		}
		
		case 77:{ // right
			
			x++;
				
			if( x > 3 && y == 1){
				
				x = 1;
				y = 1;
				
			}
				break;
			}
		
		case 72:{ // up
			
			y--;
				
			if(y < 1 && x == 1){
				
				x = 3;
				y = 1;
				
			}else if (y < 1 && x == 2){
				
				x = 1;
				y = 1;
				
			}else if(y < 1 && x == 3){
				
				x = 2;
				y = 1;
				
			}
				break;
		}
		
		case 80:{ //down
				
			y++;
				
			if(y > 1 && x == 1){
				
				x = 2;
				y = 1;
				
			}else if (y > 1 && x == 2){
				
				x = 3;
				y = 1;
				
			}else if(y > 1 && x == 3){
				
				x = 1;
				y = 1;
				
			}
				break;
		}
		 
 	} // end of switch
	 
	if(key == 27){
			
			Hinsy::cls(); About_Us();
		}
	 
	}while(key != 13);
	
	   	if(x == 1 && y == 1){
	   	  
	   	  openUrl("http://training.antkh.com/students/?s=5003");
	   	  goto doitagain;

	   	  
	    } 
	    
	    if(x == 2 && y == 1){
	    	
	      openUrl("https://www.facebook.com/mcdavid2u?mibextid=ZbWKwL");
          goto doitagain;
			 	
		}
		
		
		if(x == 3 && y == 1){
	    	
	      openUrl("https://t.me/mcdavidfafa2u");
          goto doitagain;
			 	
		}
 
   } // end of OEUN DAVID
	   
	   	if(x == 2 && y == 1){ // YANN VANNETH
	   		
	   	doitagainVanneth:
	   	int x = 1, y = 1; char key;
	   	
	   	Hinsy::clearBox(a-30,b+10,80,4,7);
	   	Hinsy::clearBox(a-30,b+26,80,6,7);
	   	Hinsy::clearBox(a+60,b+29,48,1,7);
	   	do{
		 
	   	 VannethText(a-30,b+10);
	   	 Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,136); // box 1
		 Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,136); // box 2
		 Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,136); // box 3
		 
		 // Member text	 
		 Hconsole::gotoxy(a-21,b+17); Hconsole::setcolor(143); cout << "GITHUB"; 
		 Hconsole::gotoxy(a+6,b+17); Hconsole::setcolor(143); cout << "FACEBOOK";
		 Hconsole::gotoxy(a+34,b+17); Hconsole::setcolor(143); cout << "TELEGRAM";
		 
		 
		 Hinsy::gotoxy(a-30,b+26); Hinsy::setcolor(7); cout << "ABOUT HIM";
	     Hinsy::gotoxy(a-30,b+29); Hinsy::setcolor(7); cout << "NAME : YANN VANNETH";
	     Hinsy::gotoxy(a-30,b+31); Hinsy::setcolor(7); cout << "AGE  : 20 YEAROLDS";
	     
	     Hinsy::gotoxy(a+5,b+26); Hinsy::setcolor(7); cout << "EDUCATION";
	     Hinsy::gotoxy(a+5,b+28); Hinsy::setcolor(7); cout << "ANT TECHNOLOGY TRAINING CENTER";
	     Hinsy::gotoxy(a+5,b+30); Hinsy::setcolor(7); cout << "UNVIERSITY : THE ROYAL UNIVERSITY OF PHNOM PENH";
	     Hinsy::gotoxy(a+60,b+29); Hinsy::setcolor(7); cout << "PRESS THE ARROW KEYS TO SELETE THE CONTACT."; 
	     
	     Hinsy::HLine(a-30,b+27,30,9,254);
	     
	     if(x == 1 && y == 1){
	     	
	     	Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,153);
	     	Hconsole::gotoxy(a-21,b+17); Hconsole::setcolor(151); cout << "GITHUB"; 
	     	Hinsy::setcolor(7);
		 }
		 
		 if(x == 2 && y == 1){
		 	
		 	Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,153);
		 	Hconsole::gotoxy(a+6,b+17); Hconsole::setcolor(151); cout << "FACEBOOK";
		 	Hinsy::setcolor(7);
		 }
		 
		 if(x == 3 && y == 1){
		 	
		 	Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,153);
		 	Hconsole::gotoxy(a+34,b+17); Hconsole::setcolor(151); cout << "TELEGRAM";
		 	Hinsy::setcolor(7);
		 }
		
		key = getch();
		
		switch(key){
		 	
		case 75:{ //left
			
			x--;
				
			if (x < 1 && y == 1){
				
				x = 3;
				y = 1;
			
			}
				
			break;
		}
		
		case 77:{ // right
			
			x++;
				
			if( x > 3 && y == 1){
				
				x = 1;
				y = 1;
				
			}
				break;
			}
		
		case 72:{ // up
			
			y--;
				
			if(y < 1 && x == 1){
				
				x = 3;
				y = 1;
				
			}else if (y < 1 && x == 2){
				
				x = 1;
				y = 1;
				
			}else if(y < 1 && x == 3){
				
				x = 2;
				y = 1;
				
			}
				break;
		}
		
		case 80:{ //down
				
			y++;
				
			if(y > 1 && x == 1){
				
				x = 2;
				y = 1;
				
			}else if (y > 1 && x == 2){
				
				x = 3;
				y = 1;
				
			}else if(y > 1 && x == 3){
				
				x = 1;
				y = 1;
				
			}
				break;
		}
		 
 	} // end of switch
	 
	if(key == 27){
			
			Hinsy::cls(); About_Us();
		}
	 
	}while(key != 13);
	
	   	if(x == 1 && y == 1){
	   	  
	   	  openUrl("https://github.com/YannVanneth");
	   	  goto doitagainVanneth;

	   	  
	    } 
	    
	    if(x == 2 && y == 1){
	    	
	      openUrl("https://www.facebook.com/yannvanneth/");
          goto doitagainVanneth;
			 	
		}
		
		if(x == 3 && y == 1){
	    	
	      openUrl("https://t.me/YannVanneth");
          goto doitagainVanneth;
			 	
		}
	   	  
	} // end of Yann Vanneth
	    
	    if(x == 3 && y == 1){
	    	
	   	doitagainBoroeurn:
	   	int x = 1, y = 1; char cat;
	   	
	   	Hinsy::clearBox(a-30,b+10,80,4,7);
	   	Hinsy::clearBox(a-30,b+26,80,6,7);
	   	Hinsy::clearBox(a+60,b+29,48,1,7);
	   	do{
		 
	   	 BoroeurnText(a-30,b+10);
	   	 Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,136); // box 1
		 Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,136); // box 2
		 Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,136); // box 3
		 
		 // Member text	 
		 Hconsole::gotoxy(a-21,b+17); Hconsole::setcolor(143); cout << "GITHUB"; 
		 Hconsole::gotoxy(a+6,b+17); Hconsole::setcolor(143); cout << "FACEBOOK";
		 Hconsole::gotoxy(a+34,b+17); Hconsole::setcolor(143); cout << "TELEGRAM";
		 
		 
		 Hinsy::gotoxy(a-30,b+26); Hinsy::setcolor(7); cout << "ABOUT HIM";
	     Hinsy::gotoxy(a-30,b+29); Hinsy::setcolor(7); cout << "NAME : PRACH BOROEURN";
	     Hinsy::gotoxy(a-30,b+31); Hinsy::setcolor(7); cout << "AGE  : 22 YEAROLDS";
	     
	     Hinsy::gotoxy(a+5,b+26); Hinsy::setcolor(7); cout << "EDUCATION";
	     Hinsy::gotoxy(a+5,b+28); Hinsy::setcolor(7); cout << "ANT TECHNOLOGY TRAINING CENTER";
	     Hinsy::gotoxy(a+5,b+30); Hinsy::setcolor(7); cout << "UNVIERSITY : THE ROYAL UNIVERSITY OF PHNOM PENH";
	     Hinsy::gotoxy(a+60,b+29); Hinsy::setcolor(7); cout << "PRESS THE ARROW KEYS TO SELETE THE CONTACT."; 
	     
	     Hinsy::HLine(a-30,b+27,30,9,254);
	     
	     if(x == 1 && y == 1){
	     	
	     	Hconsole::drawBoxDoubleLineWithBG(a-28,b+16,20,1,153);
	     	Hconsole::gotoxy(a-21,b+17); Hconsole::setcolor(151); cout << "GITHUB"; 
	     	Hinsy::setcolor(7);
		 }
		 
		 if(x == 2 && y == 1){
		 	
		 	Hconsole::drawBoxDoubleLineWithBG(a,b+16,20,1,153);
		 	Hconsole::gotoxy(a+6,b+17); Hconsole::setcolor(151); cout << "FACEBOOK";
		 	Hinsy::setcolor(7);
		 }
		 
		 if(x == 3 && y == 1){
		 	
		 	Hconsole::drawBoxDoubleLineWithBG(a+28,b+16,20,1,153);
		 	Hconsole::gotoxy(a+34,b+17); Hconsole::setcolor(151); cout << "TELEGRAM";
		 	Hinsy::setcolor(7);
		 }
		
		cat = getch();
		
		switch(cat){
		 	
		case 75:{ //left
			
			x--;
				
			if (x < 1 && y == 1){
				
				x = 3;
				y = 1;
			
			}
				
			break;
		}
		
		case 77:{ // right
			
			x++;
				
			if( x > 3 && y == 1){
				
				x = 1;
				y = 1;
				
			}
				break;
			}
		
		case 72:{ // up
			
			y--;
				
			if(y < 1 && x == 1){
				
				x = 3;
				y = 1;
				
			}else if (y < 1 && x == 2){
				
				x = 1;
				y = 1;
				
			}else if(y < 1 && x == 3){
				
				x = 2;
				y = 1;
				
			}
				break;
		}
		
		case 80:{ //down
				
			y++;
				
			if(y > 1 && x == 1){
				
				x = 2;
				y = 1;
				
			}else if (y > 1 && x == 2){
				
				x = 3;
				y = 1;
				
			}else if(y > 1 && x == 3){
				
				x = 1;
				y = 1;
				
			}
				break;
		}
		 
 	} // end of switch
	 
	if(cat == 27){
			
		Hinsy::cls(); About_Us();
		
		}
	 
	}while(cat != 13);
	
	   	if(x == 1 && y == 1){
	   	  
	   	  openUrl("https://github.com/boroeurnprach");
	   	  goto doitagainBoroeurn;

	   	  
	    } 
	    
	    if(x == 2 && y == 1){
	    	
	      openUrl("https://www.facebook.com/BoroeurnDev");
          goto doitagainBoroeurn;
			 	
		}
		
		if(x == 3 && y == 1){
	    	
	      openUrl("https://t.me/prach_boroeurn");
          goto doitagainBoroeurn;
			 	
		}
			 	
	}
   
   } // end of functions

void CambodiaFlag(int a,int b){

Hinsy::setFont(14,600,L"Consolas",true);
Hconsole::setcolor(9); Hconsole::gotoxy(a,b);     cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+1);   cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+2);   cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+3);   cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+4);   cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+5);   cout << R"(####################################################################################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+6);   cout << R"(#################################################)"; Hconsole::setcolor(7); cout << R"(**)"; Hconsole::setcolor(4); cout << R"(#################################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+7);   cout << R"(################################################)"; Hconsole::setcolor(7); cout << R"(*==*)"; Hconsole::setcolor(4); cout << R"(################################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+8);   cout << R"(################################################)"; Hconsole::setcolor(7); cout << R"(===-)"; Hconsole::setcolor(4); cout << R"(################################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+9);   cout << R"(#####################################)"; Hconsole::setcolor(7); cout << R"(=-)"; Hconsole::setcolor(4); cout << R"(########)"; Hconsole::setcolor(7); cout << R"(+=::=+)"; Hconsole::setcolor(4); cout << R"(########)"; Hconsole::setcolor(7); cout << R"(-=*)"; Hconsole::setcolor(4); cout << R"(####################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+10);  cout << R"(####################################)"; Hconsole::setcolor(7); cout << R"(*==+)"; Hconsole::setcolor(4); cout << R"(#######)"; Hconsole::setcolor(7); cout << R"(+-::-+)"; Hconsole::setcolor(4); cout << R"(#######)"; Hconsole::setcolor(7); cout << R"(+==*)"; Hconsole::setcolor(4); cout << R"(####################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+11);  cout << R"(###################################)"; Hconsole::setcolor(7); cout << R"(*=---+)"; Hconsole::setcolor(4); cout << R"(#####)"; Hconsole::setcolor(7); cout << R"(+--::--+)";Hconsole::setcolor(4); cout << R"(#####)"; Hconsole::setcolor(7); cout << R"(+---=*)"; Hconsole::setcolor(4); cout << R"(###################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+12);  cout << R"(#################################)"; Hconsole::setcolor(7); cout << R"(*=:::-:-=++++---::---++++=-:-:::=*)"; Hconsole::setcolor(4); cout << R"(#################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+13);  cout << R"(#################################)"; Hconsole::setcolor(7); cout << R"(*===::-+=-::===-..-===::-=+-::===*)"; Hconsole::setcolor(4); cout << R"(#################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+14);  cout << R"(##################################)"; Hconsole::setcolor(7); cout << R"(*:-::-:-:-:-::::::::-:-:-:-::-:*)"; Hconsole::setcolor(4); cout << R"(##################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+15);  cout << R"(##################################)"; Hconsole::setcolor(7); cout << R"(*:=::-=---:-:::::::--:-----::=:*)"; Hconsole::setcolor(4); cout << R"(##################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+16);  cout << R"(#################################)"; Hconsole::setcolor(7); cout << R"(+-.-::-::....:::--:::....::-:--.-=)"; Hconsole::setcolor(4); cout << R"(#################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+17);  cout << R"(################################)"; Hconsole::setcolor(7); cout << R"(+:::--:=::::::::----::::::::----:::+)"; Hconsole::setcolor(4); cout << R"(################################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+18);  cout << R"(###############################)"; Hconsole::setcolor(7); cout << R"(+::::---=::::::::----::::::::=---::::+)"; Hconsole::setcolor(4); cout << R"(###############################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+19);  cout << R"(#############################)"; Hconsole::setcolor(7); cout << R"(*=.....::::........:--:........::-:.....=*)"; Hconsole::setcolor(4); cout << R"(#############################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+20);  cout << R"(#############################)"; Hconsole::setcolor(7); cout << R"(=::::::-===::::::::-==-::::::::===-::::::=)"; Hconsole::setcolor(4); cout << R"(#############################)";
Hconsole::setcolor(4); Hconsole::gotoxy(a,b+21);  cout << R"(####################################################################################################)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+22);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+23);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+24);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+25);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";
Hconsole::setcolor(9); Hconsole::gotoxy(a,b+26);  cout << R"(%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%)";

}

void BigTree(int a,int b){
   Hconsole::setcolor(10);
   Hconsole::gotoxy(a,b);       cout << R"(                       #                       )";
   Hconsole::gotoxy(a,b+1);     cout << R"(                      ###                      )";
   Hconsole::gotoxy(a,b+2);     cout << R"(              "#:. .:##"##:. .:#"              )";
   Hconsole::gotoxy(a,b+3);     cout << R"(                "####"###"####"                )";
   Hconsole::gotoxy(a,b+4);     cout << R"(          "#:.    .:#"###"#:.    .:#"          )";
   Hconsole::gotoxy(a,b+5);     cout << R"(             "#########"#########"             )";
   Hconsole::gotoxy(a,b+6);     cout << R"(          "#:.  "####"###"####"  .:#"          )";
   Hconsole::gotoxy(a,b+7);     cout << R"(           "#######""##"##""#######"           )";
   Hconsole::gotoxy(a,b+8);     cout << R"(             ."##"#####"#####"##"              )";
   Hconsole::gotoxy(a,b+9);     cout << R"(     "#:. ...  .:##"###"###"##:.  ... .:#"     )";
   Hconsole::gotoxy(a,b+10);    cout << R"(         "#######"##"#####"##"#######"         )";
   Hconsole::gotoxy(a,b+11);    cout << R"(            "#####""#######""#####"            )";
   Hconsole::gotoxy(a,b+12);    cout << R"(               "      000      "               )"; Hconsole::setcolor(8);
   Hconsole::gotoxy(a,b+13);    cout << R"(                      000                      )";
   Hconsole::gotoxy(a,b+14);    cout << R"(                     O000O                     )";
}

void Cloud(int a,int b){
	
Hconsole::setcolor(7); 
Hconsole::gotoxy(a,b);   cout << R"(   __   _    )";	
Hconsole::gotoxy(a,b+1); cout << R"( _(  )_( )_  )";
Hconsole::gotoxy(a,b+2); cout << R"((_   _    _) )";
Hconsole::gotoxy(a,b+3); cout << R"(  (_) (__)   )";

}


void Fences(int a,int b){
	
Hconsole::setcolor(8);
Hconsole::gotoxy(a,b);         cout << R"(  _   _   _   _   _   _   _   _   _   _  )";
Hconsole::gotoxy(a,b+1);       cout << R"(_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_)";
Hconsole::gotoxy(a,b+2);       cout << R"(-| |-| |-| |-| |-| |-| |-| |-| |-| |-| |-)";
Hconsole::gotoxy(a,b+3);       cout << R"( | | | | | | | | | | | | | | | | | | | | )";
Hconsole::gotoxy(a,b+4);       cout << R"(_| |_| |_| |_| |_| |_| |_| |_| |_| |_| |_)";
Hconsole::gotoxy(a,b+5);       cout << R"(-| |-| |-| |-| |-| |-| |-| |-| |-| |-| |-)";
Hconsole::gotoxy(a,b+6);       cout << R"( |_| |_| |_| |_| |_| |_| |_|||_| |_| |_| )";
//Hconsole::gotoxy(a,b+7);       cout << R"(,,,,,,||,,,,,,,,,,,,,,,,,,,,||,,,,,,,,,,,)";
}

void Building(int a, int b){
	
Hconsole::setcolor(7);	
Hconsole::gotoxy(a,b);       cout << R"(                  _ _.-'`-._ _                   )";
Hconsole::gotoxy(a,b+1);     cout << R"(                 ;.'________'.;                  )"; 
Hconsole::gotoxy(a,b+2);     cout << R"(      _________n.[____________].n_________       )";
Hconsole::gotoxy(a,b+3);     cout << R"(     |""_""_""_""||==||==||==||""_""_""_""]      )";
Hconsole::gotoxy(a,b+4);     cout << R"(     |"""""""""""||..||..||..||"""""""""""|      )";
Hconsole::gotoxy(a,b+5);     cout << R"(     |LI LI LI LI||LI||LI||LI||LI LI LI LI|      )";
Hconsole::gotoxy(a,b+6);     cout << R"(     |.. .. .. ..||..||..||..||.. .. .. ..|      )";
Hconsole::gotoxy(a,b+7);     cout << R"(     |LI LI LI LI||LI||LI||LI||LI LI LI LI|      )";
Hconsole::gotoxy(a,b+8);     cout << R"(  ,,;;,;;;,;;;,;;;,;;;,;;;,;;;,;;,;;;,;;;,;;,,   )";
Hconsole::gotoxy(a,b+9);     cout << R"( ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;  )";

}


void TextLogin(int a,int b){
	
	Hconsole::setcolor(7); Hconsole::gotoxy(a,b);     cout<<R"(  _      ____   _____ _____ _   _  )"; Hconsole::setcolor(3); cout<<R"(           _____ _____ ____  _    _ _   _ _______ )";
	Hconsole::setcolor(7); Hconsole::gotoxy(a,b+1);   cout<<R"( | |    / __ \ / ____|_   _| \ | | )"; Hconsole::setcolor(3); cout<<R"(     /\   / ____/ ____/ __ \| |  | | \ | |__   __|)";
	Hconsole::setcolor(7); Hconsole::gotoxy(a,b+2);   cout<<R"( | |   | |  | | |  __  | | |  \| | )"; Hconsole::setcolor(3); cout<<R"(    /  \ | |   | |   | |  | | |  | |  \| |  | |   )";
	Hconsole::setcolor(3); Hconsole::gotoxy(a,b+3);   cout<<R"( | |   | |  | | | |_ | | | | . ` | )"; Hconsole::setcolor(7); cout<<R"(   / /\ \| |   | |   | |  | | |  | | . ` |  | |   )";
	Hconsole::setcolor(3); Hconsole::gotoxy(a,b+4);   cout<<R"( | |___| |__| | |__| |_| |_| |\  | )"; Hconsole::setcolor(7); cout<<R"(  / ____ \ |___| |___| |__| | |__| | |\  |  | |   )";
	Hconsole::setcolor(3); Hconsole::gotoxy(a,b+5);   cout<<R"( |______\____/ \_____|_____|_| \_| )"; Hconsole::setcolor(7); cout<<R"( /_/    \_\_____\_____\____/ \____/|_| \_|  |_|   )";
	                                                                                           
}

void first_about_us()
{
	foreColor(7);
	Hinsy::setcursor(0,0);
	Hconsole::drawBoxDoubleLineWithBG(22,8,100,1,196);
	Hconsole::drawBoxDoubleLineWithBG(27,5,90,1,145);
	Hconsole::drawBoxDoubleLineWithBG(32,2,80,1,213);

	Hconsole::drawBoxDoubleLine(18,12,108,20,247);
	Hconsole::drawBoxDoubleLine(16,13,112,18,247);
	
	DrawRectangle(48,35,45,1,5);
	gotoxy(54,36); foreColor(199); cout <<"PRESS ANY KEYS TO VIEW OUR DETAIL";
	
	Hinsy::delay(200);
	Hinsy::gotoxy(21,16); foreColor(15); cout << "We're the scholarship students at"; // 26
	Hinsy::gotoxy(55,16); foreColor(150); cout << "[1]ANT Technology Training Center,"; // 60
	Hinsy::gotoxy(90,16); foreColor(15); cout << "specialize in"; // 95
	Hinsy::gotoxy(104,16); foreColor(199); cout << "Mobile Application."; // 110
	
	Hinsy::delay(200);
	Hinsy::gotoxy(39,19); foreColor(199); cout << "Study For 11 Months From 19 February 2024 To 20 December 2024.";
	
	Hinsy::delay(200);
	Hinsy::gotoxy(30,22); foreColor(15); cout << "Thanks to the generous support of the"; // 35
	Hinsy::gotoxy(68,22); foreColor(150); cout << "[2]Ministry of Post and Telecommunication. "; // 73
	
	Hinsy::delay(200);
	Hinsy::gotoxy(24,25); foreColor(15); cout << "This opportunity is allowing us to develop valuable skills in mobile app development and pursue"; // 28

	Hinsy::delay(200);
	Hinsy::gotoxy(51,28); foreColor(15); cout << "exciting careers in the tech industry."; // 55
	
	foreColor(7);
	getch();
	Hinsy::cls();
}

	

#endif