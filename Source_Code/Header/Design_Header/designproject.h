#ifndef   ___DESIGNPROJECT___H__
#define   ___DESIGNPROJECT___H__


///////////////////////////////////

#include<iostream>
#include<conio.h>
#include "../ANT_Header/antheaderplusplus.h"
#include "../ANT_Header/antheaderinput.h"
#include "../Other_Headers/Book/borrow_book.h"
#include "App_Design.h"
#include <chrono>
#include <ctime>

using namespace chrono;
using namespace std;
///////////////////////////////////
void TextLibrary(int a, int b);
void datemonthyear();
///////////////////////////////////

/////////// edit date 02-04-2024 from line 1721

void TextA(int a,int b){

foreColor(4);
gotoxy(a,b);      cout<<R"(      _       )";
gotoxy(a,b+1);    cout<<R"(     / \      )";
gotoxy(a,b+2);    cout<<R"(    / _ \     )";
gotoxy(a,b+3);    cout<<R"(   / ___ \    )";
gotoxy(a,b+4);    cout<<R"( _/ /   \ \_  )";
gotoxy(a,b+5);    cout<<R"(|____| |____| )";
              

}

void TextN(int a,int b){
	
foreColor(4);	
gotoxy(a,b);  cout<<R"( ____  _____  )";
gotoxy(a,b+1);cout<<R"(|_   \|_   _| )";
gotoxy(a,b+2);cout<<R"(  |   \ | |   )";
gotoxy(a,b+3);cout<<R"(  | |\ \| |   )";
gotoxy(a,b+4);cout<<R"( _| |_\   |_  )";
gotoxy(a,b+5);cout<<R"(|_____|\____| )";
             
}

void TextT(int a,int b){

foreColor(4);
gotoxy(a,b);    cout<<R"( _________  )";
gotoxy(a,b+1);  cout<<R"(|  _   _  | )";
gotoxy(a,b+2);  cout<<R"(|_/ | | \_| )";
gotoxy(a,b+3);  cout<<R"(    | |     )";
gotoxy(a,b+4);  cout<<R"(   _| |_    )";
gotoxy(a,b+5);  cout<<R"(  |_____|   )";
            

}

void Move_slomo(){
	
	Hconsole::clearBox(0,0,150,40,7);
	        
	for(int i=0; i<40; i++){
	        	
	    VLine(1,0,0+i,7,219);
	    VLine(2,0,0+i,7,219);
	    delay(0);
	}
			
	for(int i=0; i<150; i++){
	        	
	   	HLine(0,39,0+i,3,219);
	    delay(0);
	}
			
	for(int i=0; i<40; i++){
	        	
	    VLine(149,0,0+i,7,219);
	    VLine(150,0,0+i,7,219);
	    delay(0);
	}
	for(int i=0; i<151; i++){
	        	
	    HLine(0,0,0+i,3,219);
	    delay(0);
	}
}

void ImageCar(int a,int b){
	
	
	setcursor(0,0);
	for(int i=0;i<120;i++){
	    
		foreColor(3);
		
		gotoxy(a+i,b+1); cout<<R"(   ___________________           )";
		gotoxy(a+i,b+2); cout<<R"(   |              |   \          )";
		gotoxy(a+i,b+3); cout<<R"(   |    ANT       |____\_____    )";
		gotoxy(a+i,b+4); cout<<R"(   | _____        |    |_o__ |   )";
		
		foreColor(6);
		gotoxy(a+i,b+5); cout<<R"(   [/ ___ \       |   / ___ \|   )";
		gotoxy(a+i,b+6); cout<<R"(  []_/.-.\_\______|__/_/.-.\_[]  )";
		gotoxy(a+i,b+7); cout<<R"(     |(O)|             |(O)|     )";
		gotoxy(a+i,b+8); cout<<R"(      '-'               '-'      )";
		
		
		delay(10);	
	
	}
	cls();
	

}

void Moveon(int a,int b){
	for(int i=1;i<=20;i++){
		
		delay(15);
		HLine(a,b,1+i,7,223);
	}
	for(int i=1;i<=8;i++){
		
		delay(15);
		VLine(a+22,b-1,1+i,7,219);
	}
	for(int i=1;i<=20;i++){
		
		delay(15);
		HLine(a+(20-i),b+8,1+i,7,220);
	}
	for(int i=1;i<=8;i++){
		
		delay(15);
		VLine(a,b+(7-i),1+i,7,219);
	}
}

void TextWelcome(int a,int b){
	
	setcursor(0,0);
	
	Hconsole::clearBox(0,0,150,40,7);
	        
	        for(int i=0; i<40; i++){
	        	
	        	VLine(1,0,0+i,7,219);
	        	VLine(2,0,0+i,7,219);
	        	delay(1);
			}
			
	        for(int i=0; i<150; i++){
	        	
	        	HLine(0,39,0+i,4,219);
	        	delay(0);
			}
			
			for(int i=0; i<40; i++){
	        	
	        	VLine(149,0,0+i,7,219);
	        	VLine(150,0,0+i,7,219);
	        	delay(1);
			}
	        for(int i=0; i<151; i++){
	        	
	        	HLine(0,0,0+i,4,219);
	        	delay(0);
			}
	
	foreColor(7);gotoxy(a,b);    cout<<R"( __        _______ _     ____ ___  __  __ _____ )";foreColor(7);cout<<R"(  _____ ___  )";foreColor(7);cout<<R"(  _     ___ ____  ____      _    ______   ___ )";delay(150);
	foreColor(7);gotoxy(a,b+1);  cout<<R"( \ \      / / ____| |   / ___/ _ \|  \/  | ____|)";foreColor(7);cout<<R"( |_   _/ _ \ )";foreColor(7);cout<<R"( | |   |_ _| __ )|  _ \    / \  |  _ \ \ / / |)";delay(150);
	foreColor(7);gotoxy(a,b+2);  cout<<R"(  \ \ /\ / /|  _| | |  | |  | | | | |\/| |  _|  )";foreColor(7);cout<<R"(   | || | | |)";foreColor(7);cout<<R"( | |    | ||  _ \| |_) |  / _ \ | |_) \ V /| |)";delay(150);
	foreColor(4);gotoxy(a,b+3);  cout<<R"(   \ V  V / | |___| |__| |__| |_| | |  | | |___ )";foreColor(4);cout<<R"(   | || |_| |)";foreColor(4);cout<<R"( | |___ | || |_) |  _ <  / ___ \|  _ < | | |_|)";delay(150);
	foreColor(4);gotoxy(a,b+4);  cout<<R"(    \_/\_/  |_____|_____\____\___/|_|  |_|_____|)";foreColor(4);cout<<R"(   |_| \___/ )";foreColor(4);cout<<R"( |_____|___|____/|_| \_\/_/   \_\_| \_\|_| (_))";delay(150);


Moveon(35,12);
delay(50);
TextA(39,13); 
 
Moveon(65,12);
delay(50);
TextN(69,13); 
 
Moveon(95,12); 
delay(50); 
TextT(99,13);

for(int i=0; i<100; i++){
	
	foreColor(4);gotoxy(30,23);cout<<i+1<<" %";
	        	
	HLine(30,25,0+i,7,204);
	delay(25);
	
}

delay(250);                                                                                                     

}


void MenuBoxBook(int a,int b){
	
	setcursor(0,0);
	
	
	drawBoxDoubleLineWithBG(a-20,b-3,102,35,6);
	
	drawBoxDoubleLineWithBG(a-4,b-1,68,25,7);
	drawBoxDoubleLineWithBG(a-2,b,64,23,3);
	
	TextLibrary(a-17,b);
	TextLibrary(a+70,b);
	
	foreColor(1);
		
	gotoxy(a,b+1);  cout<<R"( _________________________________________________________ )";
	gotoxy(a,b+2);  cout<<R"(||-------------------------------------------------------||)";
	gotoxy(a,b+3);  cout<<R"(||.--.    .-._                        .----.             ||)";
	gotoxy(a,b+4);  cout<<R"(|||==|____| |H|___            .---.___|""""|_____.--.___ ||)";
	gotoxy(a,b+5);  cout<<R"(|||  |====| | |xxx|_          |+++|=-=|_  _|-=+=-|==|---|||)";
	gotoxy(a,b+6);  cout<<R"(|||==|    | | |   | \         |   |   |_\/_|Black|  | ^ |||)";
	gotoxy(a,b+7);  cout<<R"(|||  |    | | |   |\ \   .--. |   |=-=|_/\_|-=+=-|  | ^ |||)";
	gotoxy(a,b+8);  cout<<R"(|||  |    | | |   |_\ \_( oo )|   |   |    |Magus|  | ^ |||)";
	gotoxy(a,b+9);  cout<<R"(|||==|====| |H|xxx|  \ \ |''| |+++|=-=|""""|-=+=-|==|---|||)";
	gotoxy(a,b+10); cout<<R"(||`--^----'-^-^---'   `-' ""  '---^---^----^-----^--^---^||)";
	gotoxy(a,b+11); cout<<R"(||-------------------------------------------------------||)";
	foreColor(3);
	gotoxy(a,b+12); cout<<R"(||-------------------------------------------------------||)";
	gotoxy(a,b+13); cout<<R"(||               ___                   .-.__.-----. .---.||)";
	gotoxy(a,b+14); cout<<R"(||              |===| .---.   __   .---| |XX|<(*)>|_|^^^|||)";
	gotoxy(a,b+15); cout<<R"(||         ,  /(|   |_|III|__|''|__|:x:|=|  |     |=| B |||)";
	gotoxy(a,b+16); cout<<R"(||      _a'{ / (|===|+|   |++|  |==|   | |  |BOOKS| | O |||)";
	gotoxy(a,b+17); cout<<R"(||      '/\\/ _(|===|-|   |  |''|  |:x:|=|  |SHOP | | O |||)";
	gotoxy(a,b+18); cout<<R"(||_____  -\{___(|   |-|   |  |  |  |   | |  |     | | K |||)";
	gotoxy(a,b+19); cout<<R"(||       _(____)|===|+|[I]|DK|''|==|:x:|=|XX|<(*)>|=|^^^|||)";
	gotoxy(a,b+20); cout<<R"(||              `---^-^---^--^--'--^---^-^--^-----^-^---^||)";
	gotoxy(a,b+21); cout<<R"(||-------------------------------------------------------||)";
	gotoxy(a,b+22); cout<<R"(||_______________________________________________________||)";
	
	
	
	drawBoxDoubleLineWithBG(a-14,b+28,88,1,6);
	
	for(int i=0;i<88;i++){
		
		gotoxy(a-14,b+27);cout<<"LOADING...";
		gotoxy(a+68,b+27);cout<<i+13 <<" %";
		
		foreColor(7);
		gotoxy(a-14+i,b+29); cout<<char(219);delay(25);
	}
	
}

void TextLibrary(int a,int b){


	foreColor(3);	
	gotoxy(a,b+1);  cout<<R"(   __  )";
	gotoxy(a,b+2);  cout<<R"(  / /  )";
	gotoxy(a,b+3);  cout<<R"( / /__ )";
	gotoxy(a,b+4);  cout<<R"(/____/_)";
	gotoxy(a,b+5);  cout<<R"(  /  _/)";
	gotoxy(a,b+6);  cout<<R"( _/ /  )";
	gotoxy(a,b+7);  cout<<R"(/___/_ )";
	gotoxy(a,b+8);  cout<<R"(  / _ ))";
	gotoxy(a,b+9);  cout<<R"( / _  |)";
	gotoxy(a,b+10);  cout<<R"(/____/ )";
	gotoxy(a,b+11);  cout<<R"(  / _ \)";
	gotoxy(a,b+12);  cout<<R"( / , _/)";
	gotoxy(a,b+13);  cout<<R"(/_/|_| )";
	gotoxy(a,b+14);  cout<<R"(  / _ |)";
	gotoxy(a,b+15);  cout<<R"( / __ |)";
	gotoxy(a,b+16);  cout<<R"(/_/_|_|)";
	gotoxy(a,b+17);  cout<<R"(  / _ \)";
	gotoxy(a,b+18);  cout<<R"( / , _/)";
	gotoxy(a,b+19);  cout<<R"(/_/|_|_)";
	gotoxy(a,b+20);  cout<<R"( \ \/ /)";
	gotoxy(a,b+21);  cout<<R"(  \  / )";
	gotoxy(a,b+22);  cout<<R"(  /_/  )";

}

void TextMenu(int a,int b){

	setcursor(0,0);
	
	foreColor(5);
	gotoxy(a,b+1);  cout<<R"(.___  ___.  _______ .__   __.  __    __  )";
	gotoxy(a,b+2);  cout<<R"(|   \/   | |   ____||  \ |  | |  |  |  | )";
	foreColor(3);
	gotoxy(a,b+3);  cout<<R"(|  \  /  | |  |__   |   \|  | |  |  |  | )";
	gotoxy(a,b+4);  cout<<R"(|  |\/|  | |   __|  |  . `  | |  |  |  | )";
	foreColor(6);
	gotoxy(a,b+5);  cout<<R"(|  |  |  | |  |____ |  |\   | |  `--'  | )";
	gotoxy(a,b+6);  cout<<R"(|__|  |__| |_______||__| \__|  \______/  )";
	
	HLine(a,b+7,40,1,196);
                                         

}

void ImageBook(int a,int b,int c){

	setcursor(0,0);
	
	foreColor(c);	
	gotoxy(a,b+1);  cout<<R"(      ______ ______          )";
	gotoxy(a,b+2);  cout<<R"(    _/      Y      \_        )";
	gotoxy(a,b+3);  cout<<R"(   // ~~ ~~ | ~~ ~  \\       )";
	gotoxy(a,b+4);  cout<<R"(  // ~ ~ ~~ | ~~~ ~~ \\      )";
	gotoxy(a,b+5);  cout<<R"( //________.|.________\\     )";
	gotoxy(a,b+6);  cout<<R"(`----------`-'----------'	  )";

}

void TreeImage1(int a,int b){

	foreColor(2);
	gotoxy(a,b+1);   cout<<R"(	     /\    )";
	gotoxy(a,b+2);   cout<<R"(     /\*\     )";
	gotoxy(a,b+3);   cout<<R"(    /\O\*\    )";
	gotoxy(a,b+4);   cout<<R"(   /*/\/\/\   )";
	gotoxy(a,b+5);   cout<<R"(  /\O\/\*\/\  )";
	gotoxy(a,b+6);   cout<<R"( /\*\/\*\/\/\ )";
	gotoxy(a,b+7);   cout<<R"(/\O\/\/*/\/O/\)";
	foreColor(6);
	gotoxy(a,b+8);   cout<<R"(      ||      )";
	gotoxy(a,b+9);   cout<<R"(      ||      )";
	gotoxy(a,b+10);  cout<<R"(      ||      )";
}
void TreeImage2(int a,int b){

	foreColor(2);
	gotoxy(a,b+1);   cout<<R"(	   /\    )";
	gotoxy(a,b+2);   cout<<R"(     /\*\     )";
	gotoxy(a,b+3);   cout<<R"(    /\O\*\    )";
	gotoxy(a,b+4);   cout<<R"(   /*/\/\/\   )";
	gotoxy(a,b+5);   cout<<R"(  /\O\/\*\/\  )";
	gotoxy(a,b+6);   cout<<R"( /\*\/\*\/\/\ )";
	gotoxy(a,b+7);   cout<<R"(/\O\/\/*/\/O/\)";
	foreColor(6);
	gotoxy(a,b+8);   cout<<R"(      ||      )";
	gotoxy(a,b+9);   cout<<R"(      ||      )";
	gotoxy(a,b+10);  cout<<R"(      ||      )";
}

void BoxAllMenu(){
	
	setcursor(0,0);
	
	//call others function
	ImageBook(30,3,3);
	ImageBook(100,3,7);
	TextMenu(58,2);
//	TreeImage1(15,25);
//	TreeImage2(125,25);
    BigTree(1,22);
    BigTree(105,22);

	
	//big box
//	drawBoxDoubleLineWithBG(35,10,85,20,6);
//	drawBoxDoubleLineWithBG(37,11,81,18,5);
//	drawBoxDoubleLineWithBG(39,12,77,16,3);
	
	//box text option
	drawBoxSingleLine(44,14,25,3,6);
	
	drawBoxSingleLine(85,14,25,3,6);
	
	drawBoxSingleLine(44,20,25,3,6);
	
	drawBoxSingleLine(85,20,25,3,6);
	
	drawBoxSingleLine(65,26,25,3,6);
	
	//tesxt messagae
	
	foreColor(7);	
	gotoxy(43,33); cout<<"USE ALL ARROW KEY TO MOVE OPTION AND PRESS [ENTER] TO SELECT OPTION.";
	HLine(43,34,68,1,196);
	
	HLine(5,37,140,1,219);
	
}

//////////////////////////////////////////////////////////////
//inputmeber
//////////////////////////////////////////////////////////////

void TextMemberinfo(int a,int b){

foreColor(1);gotoxy(a,b+1);   cout<<R"(  __  __ ______ __  __ ____  ______ _____  )";foreColor(6);cout<<R"(  _____ _   _ ______ ____  _____  __  __       _______ _____ ____  _   _ )";
foreColor(1);gotoxy(a,b+2);   cout<<R"( |  \/  |  ____|  \/  |  _ \|  ____|  __ \ )";foreColor(6);cout<<R"( |_   _| \ | |  ____/ __ \|  __ \|  \/  |   /\|__   __|_   _/ __ \| \ | |)";
foreColor(7);gotoxy(a,b+3);   cout<<R"( | \  / | |__  | \  / | |_) | |__  | |__) |)";foreColor(3);cout<<R"(   | | |  \| | |__ | |  | | |__) | \  / |  /  \  | |    | || |  | |  \| |)";
foreColor(7);gotoxy(a,b+4);   cout<<R"( | |\/| |  __| | |\/| |  _ <|  __| |  _  / )";foreColor(3);cout<<R"(   | | | . ` |  __|| |  | |  _  /| |\/| | / /\ \ | |    | || |  | | . ` |)";
foreColor(3);gotoxy(a,b+5);   cout<<R"( | |  | | |____| |  | | |_) | |____| | \ \ )";foreColor(5);cout<<R"(  _| |_| |\  | |   | |__| | | \ \| |  | |/ ____ \| |   _| || |__| | |\  |)";
foreColor(3);gotoxy(a,b+6);   cout<<R"( |_|  |_|______|_|  |_|____/|______|_|  \_\)";foreColor(5);cout<<R"( |_____|_| \_|_|    \____/|_|  \_\_|  |_/_/    \_\_|  |_____\____/|_| \_|)";

HLine(a+1,b+7,115,3,196);                                                                                                                    
                                                                                                                    

//outputmember
}
void TextOutputmember(int a,int b){

foreColor(1);gotoxy(a,b+1);   cout<<R"(  ____ ___ ____  ____  _        _ __   __)";foreColor(5);cout<<R"(  __  __ _____ __  __ ____  _____ ____  )";foreColor(6);cout<<R"(  ___ _   _ _____ ___  ____  __  __    _  _____ ___ ___  _   _ )";
foreColor(1);gotoxy(a,b+2);   cout<<R"( |  _ \_ _/ ___||  _ \| |      / \\ \ / /)";foreColor(5);cout<<R"( |  \/  | ____|  \/  | __ )| ____|  _ \ )";foreColor(6);cout<<R"( |_ _| \ | |  ___/ _ \|  _ \|  \/  |  / \|_   _|_ _/ _ \| \ | |)";
foreColor(5);gotoxy(a,b+3);   cout<<R"( | | | | |\___ \| |_) | |     / _ \\ V / )";foreColor(6);cout<<R"( | |\/| |  _| | |\/| |  _ \|  _| | |_) |)";foreColor(3);cout<<R"(  | ||  \| | |_ | | | | |_) | |\/| | / _ \ | |  | | | | |  \| |)";
foreColor(3);gotoxy(a,b+4);   cout<<R"( | |_| | | ___) |  __/| |___ / ___ \| |  )";foreColor(3);cout<<R"( | |  | | |___| |  | | |_) | |___|  _ < )";foreColor(5);cout<<R"(  | || |\  |  _|| |_| |  _ <| |  | |/ ___ \| |  | | |_| | |\  |)";
foreColor(3);gotoxy(a,b+5);   cout<<R"( |____/___|____/|_|   |_____/_/   \_\_|  )";foreColor(3);cout<<R"( |_|  |_|_____|_|  |_|____/|_____|_| \_\)";foreColor(5);cout<<R"( |___|_| \_|_|   \___/|_| \_\_|  |_/_/   \_\_| |___\___/|_| \_|)";
                                                                                                                                                

}

void BoxinputMember(){
	
	setcursor(0,0);
	
	TextMemberinfo(16,1);
	
	//big box
	drawBoxDoubleLineWithBG(20,10,110,28,6);
	drawBoxDoubleLineWithBG(22,11,106,26,3);
//	drawBoxDoubleLineWithBG(24,12,102,24,3);
	
	//box inside
	drawBoxSingleLine(26,13,45,21,7);
	drawBoxSingleLine(78,13,45,21,7);
	
	//small box
	drawBoxSingleLine(28,14,41,1,1);
	drawBoxSingleLine(28,17,41,1,3);
	drawBoxSingleLine(28,20,41,1,6);
	drawBoxSingleLine(28,23,41,1,7);
	drawBoxSingleLine(28,26,41,1,3);
	drawBoxSingleLine(28,29,41,1,5);
	drawBoxSingleLine(28,32,41,1,6);
	
	drawBoxSingleLine(80,14,41,1,1);
	drawBoxSingleLine(80,17,41,1,3);
	drawBoxSingleLine(80,20,41,1,6);
	drawBoxSingleLine(80,23,41,1,7);
	drawBoxSingleLine(80,26,41,1,3);
	drawBoxSingleLine(80,29,41,1,5);
	drawBoxSingleLine(80,32,41,1,6);
	
}

void TextSearchMember(int a,int b){
                                                     
foreColor(6);gotoxy(a,b+1);   cout<<R"(   ____  _____    _    ____   ____ _   _ )";foreColor(3);cout<<R"(  __  __ _____ __  __ ____  _____ ____   )";foreColor(5);cout<<R"( ___ _   _ _____ ___  ____  __  __    _  _____ ___ ___  _   _ )";
foreColor(6);gotoxy(a,b+2);   cout<<R"(  / ___|| ____|  / \  |  _ \ / ___| | | |)";foreColor(3);cout<<R"( |  \/  | ____|  \/  | __ )| ____|  _ \  )";foreColor(5);cout<<R"(|_ _| \ | |  ___/ _ \|  _ \|  \/  |  / \|_   _|_ _/ _ \| \ | |)";
foreColor(5);gotoxy(a,b+3);   cout<<R"(  \___ \|  _|   / _ \ | |_) | |   | |_| |)";foreColor(6);cout<<R"( | |\/| |  _| | |\/| |  _ \|  _| | |_) | )";foreColor(3);cout<<R"( | ||  \| | |_ | | | | |_) | |\/| | / _ \ | |  | | | | |  \| |)";
foreColor(3);gotoxy(a,b+4);   cout<<R"(   ___) | |___ / ___ \|  _ <| |___|  _  |)";foreColor(1);cout<<R"( | |  | | |___| |  | | |_) | |___|  _ <  )";foreColor(6);cout<<R"( | || |\  |  _|| |_| |  _ <| |  | |/ ___ \| |  | | |_| | |\  |)";
foreColor(3);gotoxy(a,b+5);   cout<<R"(  |____/|_____/_/   \_\_| \_\\____|_| |_|)";foreColor(1);cout<<R"( |_|  |_|_____|_|  |_|____/|_____|_| \_\ )";foreColor(6);cout<<R"(|___|_| \_|_|   \___/|_| \_\_|  |_/_/   \_\_| |___\___/|_| \_|)";
                                                                                                                                               

                                                                               

}

void imagepeople(int a,int b){
	
	foreColor(6);	
	gotoxy(a,b+1);    cout<<R"(|\_____/|     ////\     )";
	gotoxy(a,b+2);    cout<<R"(|/// \\\|    /// \\\    )";
	gotoxy(a,b+3);    cout<<R"( |/O O\|     |/o o\|    )";
	gotoxy(a,b+4);    cout<<R"( d  ^ .b     C  )  D    )";
	gotoxy(a,b+5);    cout<<R"(  \\m//      | \_/ |    )";
	gotoxy(a,b+6);    cout<<R"(   \_/        \___/     )";
	gotoxy(a,b+7);    cout<<R"( __ooo__    _/<|_|>\_   )";
	gotoxy(a,b+8);    cout<<R"(/_     _\  / |/\_/\| \  )";
	gotoxy(a,b+9);    cout<<R"(| \_v_/ | |    |\|    | )";
	gotoxy(a,b+10);   cout<<R"(|| _/ _/\\| |  |\|  | | )";
	gotoxy(a,b+11);   cout<<R"(||)    ( \| |  |\|  | | )"; 
	gotoxy(a,b+12);   cout<<R"(||      \ | \\ |\|  | | )";
	gotoxy(a,b+13);   cout<<R"(||  --  |  (())\_/  | | )";
	gotoxy(a,b+14);   cout<<R"(((      |   |___|___|_| )";
	gotoxy(a,b+15);   cout<<R"( |______|   |   Y   |)) )";



}

void BoxSearchMember(){
	
	//function
	TextSearchMember(3,2);
	
	//big box
	drawBoxDoubleLineWithBG(8,9,134,27,6);
	
	drawBoxDoubleLineWithBG(10,10,60,25,1);
	drawBoxDoubleLineWithBG(12,11,56,23,3);
	
	drawBoxDoubleLineWithBG(80,10,60,25,1);
	drawBoxDoubleLineWithBG(82,11,56,23,3);
	
	//CALL FUNCTION
	imagepeople(28,17);
	//text search
	drawBoxSingleLine(14,12,52,1,7);
	drawBoxSingleLine(14,15,52,18,7);
	//output after search
	drawBoxSingleLine(84,12,52,1,7);
	drawBoxSingleLine(84,15,52,1,6);
	drawBoxSingleLine(84,18,52,1,4);
	drawBoxSingleLine(84,21,52,1,5);
	drawBoxSingleLine(84,24,52,1,2);
	drawBoxSingleLine(84,27,52,1,1);
	drawBoxSingleLine(84,30,52,1,0);
}



void BoxForReturn(){
	
	setcursor(0,0);
	
	drawBoxDoubleLineWithBG(20,10,50,3,3);
		
	delay(150);
		
	drawBoxDoubleLineWithBG(25,9,40,1,3);
		
	delay(150);
		
	drawBoxDoubleLineWithBG(40,13,10,1,3);
	
	delay(150);
		
	foreColor(7); gotoxy(28,10); cout << "ENTER MEMBER ID TO RETURN BOOK  : ";
	delay(150);	
		
		
	drawBoxDoubleLineWithBG(85,10,50,3,7);delay(150);
	drawBoxDoubleLineWithBG(90,9,40,1,7);delay(150);
	drawBoxDoubleLineWithBG(105,13,10,1,7);delay(150);
	
		
	foreColor(7); gotoxy(98,10);cout << "ENTER BOOK ID TO RETURN : ";delay(150);
		
	drawBoxDoubleLineWithBG(50,20,50,3,4);delay(150);
	drawBoxDoubleLineWithBG(55,19,40,1,4);delay(150);
	drawBoxDoubleLineWithBG(70,23,10,1,4);delay(150);
	
		
	foreColor(7); gotoxy(57,20);cout << "ENTER QUANTITY OF BOOK TO RETURN : ";delay(150);
	
	HLine(71,12,13,7,219);delay(150);
	
	VLine(44,15,6,7,219);
	VLine(45,15,6,7,219);delay(150);
	
	HLine(43,22,6,7,219);delay(150);
	
	VLine(110,15,6,7,219);
	VLine(111,15,6,7,219);delay(150);
	
	HLine(101,22,10,7,219);delay(150);
	
//	VLine(75,25,6,7,219);
//	VLine(76,25,6,7,219);
//	
//	VLine(75,31,5,7,219);
//	VLine(76,31,5,7,219);
//	
//	drawBoxDoubleLineWithBG(40,35,80,1,4);
//	foreColor(7); gotoxy(41,36);cout << "BOOK NOT FOUND IN BORROW RECORDS FOR MEMBER ID: 1111 AND BOOK ID: 4444" ;
//	
//	
//	drawBoxDoubleLineWithBG(82,30,50,1,4);
//	HLine(76,31,5,7,219);
//	foreColor(7); gotoxy(83,31); cout << "PRESS [ESC] FOR BACK | [ENTER] FOR RETURN MORE.";
}


void TextUpdateMemer(int a,int b){


foreColor(5);gotoxy(a,b+1);     cout<<R"(  _   _ ____  ____    _  _____ _____ )";foreColor(6);cout<<R"(  __  __ _____ __  __ ____  _____ ____  )";foreColor(3);cout<<R"(  ___ _   _ _____ ___  ____  __  __    _  _____ ___ ___  _   _ )";
foreColor(5);gotoxy(a,b+2);     cout<<R"( | | | |  _ \|  _ \  / \|_   _| ____|)";foreColor(6);cout<<R"( |  \/  | ____|  \/  | __ )| ____|  _ \ )";foreColor(3);cout<<R"( |_ _| \ | |  ___/ _ \|  _ \|  \/  |  / \|_   _|_ _/ _ \| \ | |)";
foreColor(3);gotoxy(a,b+3);     cout<<R"( | | | | |_) | | | |/ _ \ | | |  _|  )";foreColor(4);cout<<R"( | |\/| |  _| | |\/| |  _ \|  _| | |_) |)";foreColor(6);cout<<R"(  | ||  \| | |_ | | | | |_) | |\/| | / _ \ | |  | | | | |  \| |)";
foreColor(4);gotoxy(a,b+4);     cout<<R"( | |_| |  __/| |_| / ___ \| | | |___ )";foreColor(5);cout<<R"( | |  | | |___| |  | | |_) | |___|  _ < )";foreColor(1);cout<<R"(  | || |\  |  _|| |_| |  _ <| |  | |/ ___ \| |  | | |_| | |\  |)";
foreColor(4);gotoxy(a,b+5);     cout<<R"(  \___/|_|   |____/_/   \_\_| |_____|)";foreColor(5);cout<<R"( |_|  |_|_____|_|  |_|____/|_____|_| \_\)";foreColor(1);cout<<R"( |___|_| \_|_|   \___/|_| \_\_|  |_/_/   \_\_| |___\___/|_| \_|)";
                                                                                                                                        
HLine(a+1,b+6,140,7,196);                                                                             
                                                                                                                                                               

}
void BoxUpdatemember(){
	
	setcursor(0,0);
	
	//call function
	TextUpdateMemer(4,1);
	
	//big box
	drawBoxDoubleLineWithBG(8,9,134,27,3);
	
	drawBoxDoubleLineWithBG(10,10,60,25,5);
	drawBoxDoubleLineWithBG(80,10,60,25,1);
	
	//message update
	drawBoxSingleLine(12,11,56,1,6);
	
	drawBoxSingleLine(12,14,56,1,1);
	drawBoxSingleLine(12,17,56,1,3);
	drawBoxSingleLine(12,20,56,1,4);
	drawBoxSingleLine(12,23,56,1,5);
	drawBoxSingleLine(12,26,56,1,7);
	drawBoxSingleLine(12,29,56,1,4);
	drawBoxSingleLine(12,32,56,1,3);
	

	
	//output after update
	drawBoxSingleLine(82,11,56,23,7);
	
	drawBoxSingleLine(84,12,52,1,7);
	drawBoxSingleLine(84,15,52,1,6);
	drawBoxSingleLine(84,18,52,1,4);
	drawBoxSingleLine(84,21,52,1,5);
	drawBoxSingleLine(84,24,52,1,2);
	drawBoxSingleLine(84,27,52,1,1);
	drawBoxSingleLine(84,30,52,1,0);
	

}

void TextDeleteMember(int a, int b){

foreColor(3);gotoxy(a,b);       cout<<R"( ______   ________  _____     ________  _________  ________ )";foreColor(6);cout<<R"(  ____    ____  ________  ____    ____  ______   ________  _______     )";
foreColor(3);gotoxy(a,b+1);     cout<<R"(|_   _ `.|_   __  ||_   _|   |_   __  ||  _   _  ||_   __  |)";foreColor(6);cout<<R"( |_   \  /   _||_   __  ||_   \  /   _||_   _ \ |_   __  ||_   __ \    )";
foreColor(1);gotoxy(a,b+2);     cout<<R"(  | | `. \ | |_ \_|  | |       | |_ \_||_/ | | \_|  | |_ \_|)";foreColor(5);cout<<R"(   |   \/   |    | |_ \_|  |   \/   |    | |_) |  | |_ \_|  | |__) |   )";
foreColor(1);gotoxy(a,b+3);     cout<<R"(  | |  | | |  _| _   | |   _   |  _| _     | |      |  _| _ )";foreColor(5);cout<<R"(   | |\  /| |    |  _| _   | |\  /| |    |  __'.  |  _| _   |  __ /    )";
foreColor(6);gotoxy(a,b+4);     cout<<R"( _| |_.' /_| |__/ | _| |__/ | _| |__/ |   _| |_    _| |__/ |)";foreColor(3);cout<<R"(  _| |_\/_| |_  _| |__/ | _| |_\/_| |_  _| |__) |_| |__/ | _| |  \ \_  )";
foreColor(6);gotoxy(a,b+5);     cout<<R"(|______.'|________||________||________|  |_____|  |________|)";foreColor(3);cout<<R"( |_____||_____||________||_____||_____||_______/|________||____| |___| )";

HLine(a,b+6,130,7,196);                                                                                                                                   

}
void BoxDeleteMember(){
	
	TextDeleteMember(10,0);
	
	drawBoxDoubleLineWithBG(122,8,3,26,3);
	drawBoxDoubleLineWithBG(120,9,3,24,4);
	
	drawBoxDoubleLineWithBG(26,8,3,26,3);
	drawBoxDoubleLineWithBG(28,9,3,24,4);
	
	//big box
	
	drawBoxDoubleLineWithBG(30,10,90,22,5);
	drawBoxDoubleLineWithBG(32,11,86,20,6);
	drawBoxDoubleLineWithBG(34,12,82,18,3);
	
	drawBoxSingleLine(36,13,78,16,1);
	
	//input id to delete
	drawBoxSingleLine(40,15,70,3,2);
	drawBoxSingleLine(40,20,70,8,2);
	
	HLine(10,37,130,7,219);
}


/////////////////////////
//box menu member
/////////////////////////

void textMenuMember(int a,int b){

foreColor(5);gotoxy(a,b);   cout<<R"( ____    ____  ________  ____  _____  _____  _____ )";foreColor(6);cout<<R"(  ____    ____  ________  ____    ____  ______   _______    )"; 
foreColor(5);gotoxy(a,b+1); cout<<R"(|_   \  /   _||_   __  ||_   \|_   _||_   _||_   _|)";foreColor(6);cout<<R"( |_   \  /   _||_   __  ||_   \  /   _||_   _ \ |_   __ \   )"; 
foreColor(6);gotoxy(a,b+2); cout<<R"(  |   \/   |    | |_ \_|  |   \ | |    | |    | |  )";foreColor(5);cout<<R"(   |   \/   |    | |_ \_|  |   \/   |    | |_) |  | |__) |  )"; 
foreColor(6);gotoxy(a,b+3); cout<<R"(  | |\  /| |    |  _| _   | |\ \| |    | '    ' |  )";foreColor(5);cout<<R"(   | |\  /| |    |  _| _   | |\  /| |    |  __'.  |  __ /   )"; 
foreColor(1);gotoxy(a,b+4); cout<<R"( _| |_\/_| |_  _| |__/ | _| |_\   |_    \ \__/ /   )";foreColor(3);cout<<R"(  _| |_\/_| |_  _| |__/ | _| |_\/_| |_  _| |__) |_| |  \ \_ )"; 
foreColor(1);gotoxy(a,b+5); cout<<R"(|_____||_____||________||_____|\____|    `.__.'    )";foreColor(3);cout<<R"( |_____||_____||________||_____||_____||_______/|____| |___|)";                                              

HLine(a,b+6,111,7,196);

}


void text_book_menu(int a, int b){
	
	
 foreColor(5);gotoxy(a,b);   cout<<R"( ____   ___   ___  _  __ )";foreColor(6);cout<<R"( __  __ _____ _   _ _   _ )";
 foreColor(5);gotoxy(a,b+1); cout<<R"(| __ ) / _ \ / _ \| |/ / )";foreColor(6);cout<<R"(|  \/  | ____| \ | | | | |)";
 foreColor(5);gotoxy(a,b+2); cout<<R"(|  _ \| | | | | | | ' /  )";foreColor(5);cout<<R"(| |\/| |  _| |  \| | | | |)";
 foreColor(5);gotoxy(a,b+3); cout<<R"(| |_) | |_| | |_| | . \  )";foreColor(3);cout<<R"(| |  | | |___| |\  | |_| |)";
 foreColor(5);gotoxy(a,b+4); cout<<R"(|____/ \___/ \___/|_|\_\ )";foreColor(3);cout<<R"(|_|  |_|_____|_| \_|\___/ )";
                                                   

	
}

void BoxMenuMember(){
	
	textMenuMember(20,0);
	
	drawBoxDoubleLineWithBG(26,8,3,29,3);
	drawBoxDoubleLineWithBG(28,9,3,27,6);
	
	drawBoxDoubleLineWithBG(122,8,3,29,3);
	drawBoxDoubleLineWithBG(120,9,3,27,6);
	
	//big box
	drawBoxDoubleLineWithBG(30,10,90,25,5);
	drawBoxDoubleLineWithBG(32,11,86,23,3);
	drawBoxDoubleLineWithBG(34,12,82,21,1);
	
	
	//text menu
	drawBoxSingleLine(40,14,20,3,1);
	drawBoxSingleLine(65,14,20,3,7);
	drawBoxSingleLine(90,14,20,3,2);
	
	drawBoxSingleLine(40,20,20,3,1);
	drawBoxSingleLine(65,20,20,3,7);
	drawBoxSingleLine(90,20,20,3,2);
}


void BoxMenuBook(){
	
	
	drawBoxDoubleLineWithBG(26,8,3,29,3);
	drawBoxDoubleLineWithBG(28,9,3,27,6);
	
	drawBoxDoubleLineWithBG(122,8,3,29,3);
	drawBoxDoubleLineWithBG(120,9,3,27,6);
	
	//big box
	drawBoxDoubleLineWithBG(30,10,90,25,5);
	drawBoxDoubleLineWithBG(32,11,86,23,3);
	drawBoxDoubleLineWithBG(34,12,82,21,1);
	
	
	//text menu
	drawBoxSingleLine(40,14,20,3,1);
	drawBoxSingleLine(65,14,20,3,7);
	drawBoxSingleLine(90,14,20,3,2);
	
	drawBoxSingleLine(40,20,20,3,1);
	drawBoxSingleLine(65,20,20,3,7);
	drawBoxSingleLine(90,20,20,3,2);
	
	drawBoxSingleLine(40,26,20,3,1);
	drawBoxSingleLine(65,26,20,3,7);
	drawBoxSingleLine(90,26,20,3,2);
}

void IMageBookForMenu(int a,int b){
	
	
	foreColor(7);
	
	gotoxy(a,b);     cout<<R"(             .--.           .---.        .-.          )";delay(100);
    gotoxy(a,b+1);   cout<<R"(     .---|--|   .-.     | A |  .---. |~|    .--.      )";delay(100);
    gotoxy(a,b+2);   cout<<R"(  .--|===|Ch|---|_|--.__| S |--|:::| |~|-==-|==|---.  )";delay(100);
    gotoxy(a,b+3);   cout<<R"(  |%%|NT2|oc|===| |~~|%%| C |--|   |_|~|CATS|  |___|-.)";delay(100);
    gotoxy(a,b+4);   cout<<R"(  |  |   |ah|===| |==|  | I |  |:::|=| |    |GB|---|=|)";delay(100);
    gotoxy(a,b+5);   cout<<R"(  |  |   |ol|   |_|__|  | I |__|   | | |    |  |___| |)";delay(100);
    gotoxy(a,b+6);   cout<<R"(  |~~|===|--|===|~|~~|%%|~~~|--|:::|=|~|----|==|---|=|)";delay(100);
    gotoxy(a,b+7);   cout<<R"(  ^--^---'--^---^-^--^--^---'--^---^-^-^-==-^--^---^-')";delay(100);
	
}
void loading(){
	
	setcursor(0,0);
	
	for(int i=0;i<=19;i++){
	
		if(i>=0 && i<=5){
			foreColor(1+i); gotoxy(105+i,22); cout<<char(219);delay(100);//32  90	
		}
		else if(i>=6 && i<=8){
			foreColor(1+i); gotoxy(110,16+i); cout<<char(219)<<char(219);delay(100);	//26  95
		}
		else if(i>=9 && i<=15){
			foreColor(1+i); gotoxy(120-i,25); cout<<char(219);delay(100);	//35  105
		}
		else if(i>=16 && i<=19){
			foreColor(1+i); gotoxy(104,41-i); cout<<char(219)<<char(219);delay(100);	//50  90
		}
		
	}
}
void BoxOptionBookAndMember(int a,int b){
	
	setcursor(0,0);
	
	drawBoxDoubleLineWithBG(a-5,b-5,113,25,3);
	
	foreColor(5);gotoxy(a,b);     cout<<R"(  _____ _   _    _    _   _ _  __ __   _____  _   _ )";foreColor(1);cout<<R"(  _____ ___  ____    _   _ ____ ___ _   _  ____ _ )";delay(100);
	foreColor(5);gotoxy(a,b+1);   cout<<R"( |_   _| | | |  / \  | \ | | |/ / \ \ / / _ \| | | |)";foreColor(1);cout<<R"( |  ___/ _ \|  _ \  | | | / ___|_ _| \ | |/ ___| |)";delay(100);
	foreColor(6);gotoxy(a,b+2);   cout<<R"(   | | | |_| | / _ \ |  \| | ' /   \ V / | | | | | |)";foreColor(5);cout<<R"( | |_ | | | | |_) | | | | \___ \| ||  \| | |  _| |)";delay(100);
	foreColor(3);gotoxy(a,b+3);   cout<<R"(   | | |  _  |/ ___ \| |\  | . \    | || |_| | |_| |)";foreColor(6);cout<<R"( |  _|| |_| |  _ <  | |_| |___) | || |\  | |_| |_|)";delay(100);
	foreColor(3);gotoxy(a,b+4);   cout<<R"(   |_| |_| |_/_/   \_\_| \_|_|\_\   |_| \___/ \___/ )";foreColor(6);cout<<R"( |_|   \___/|_| \_\  \___/|____/___|_| \_|\____(_))";delay(100);
	                                                                                                      
	//function image
	
	IMageBookForMenu(48,18);

}

void ImageBookForsignup(int a,int b,int c){
	

foreColor(c);
	
gotoxy(a,b);     cout<<R"(       __..._   _...__       )";
gotoxy(a,b+1);   cout<<R"(  _..-"      `Y`      "-._   )";
gotoxy(a,b+2);   cout<<R"(  \ --------- |           /  )";
gotoxy(a,b+3);   cout<<R"(  \\ -------- |          //  )";
gotoxy(a,b+4);   cout<<R"(  \\\         |         ///  )";
gotoxy(a,b+5);   cout<<R"(   \\\ _..---.|.---.._ ///   )";
gotoxy(a,b+6);   cout<<R"(    \\`_..---.Y.---.._`//    )";

}

void TextSignupaccount(int a,int b){
	
	
	foreColor(5);gotoxy(a,b);     cout<<R"(   _____ _____ _____ _   _ _    _ _____  )";foreColor(5);cout<<R"(           _____ _____ ____  _    _ _   _ _______ )";
	foreColor(5);gotoxy(a,b+1);   cout<<R"(  / ____|_   _/ ____| \ | | |  | |  __ \ )";foreColor(5);cout<<R"(     /\   / ____/ ____/ __ \| |  | | \ | |__   __|)";
	foreColor(7);gotoxy(a,b+2);   cout<<R"( | (___   | || |  __|  \| | |  | | |__) |)";foreColor(6);cout<<R"(    /  \ | |   | |   | |  | | |  | |  \| |  | |   )";
	foreColor(7);gotoxy(a,b+3);   cout<<R"(  \___ \  | || | |_ | . ` | |  | |  ___/ )";foreColor(6);cout<<R"(   / /\ \| |   | |   | |  | | |  | | . ` |  | |   )";
	foreColor(1);gotoxy(a,b+4);   cout<<R"(  ____) |_| || |__| | |\  | |__| | |     )";foreColor(3);cout<<R"(  / ____ \ |___| |___| |__| | |__| | |\  |  | |   )";
	foreColor(1);gotoxy(a,b+5);   cout<<R"( |_____/|_____\_____|_| \_|\____/|_|     )";foreColor(3);cout<<R"( /_/    \_\_____\_____\____/ \____/|_| \_|  |_|   )";
	                                                                                           
                                                                                           

}

void Imagebear(int a,int b){
	
foreColor(7);gotoxy(a,b);      cout<<R"(     (()__(()      )";
foreColor(7);gotoxy(a,b+1);    cout<<R"(     /       \         )";
foreColor(7);gotoxy(a,b+2);    cout<<R"(    ( /    \  \        )";
foreColor(7);gotoxy(a,b+3);    cout<<R"(     \ o o    /        )";
foreColor(7);gotoxy(a,b+4);    cout<<R"(     (_()_)__/ \       )";   
foreColor(7);gotoxy(a,b+5);    cout<<R"(    / _,==.____ \      )";
foreColor(7);gotoxy(a,b+6);    cout<<R"(   (   |--|      )     )";
foreColor(7);gotoxy(a,b+7);    cout<<R"(   /\_.|__|'-.__/\_    )";
foreColor(6);gotoxy(a,b+8);    cout<<R"(  / (        /     \   )";
foreColor(6);gotoxy(a,b+9);    cout<<R"(  \  \      (      /   )";
foreColor(6);gotoxy(a,b+10);   cout<<R"(   )  '._____)    /    )";
foreColor(6);gotoxy(a,b+11);   cout<<R"((((____.--(((____/     )";

}
void BoxSignUpMenu(){
	
	setcursor(0,0);
	
	
	/////////////////////// bear ///////////////
	Imagebear(10,23);
	Imagebear(118,23);
	
	//////////////////// book ////////////////
	ImageBookForsignup(2,3,6);
	ImageBookForsignup(120,3,3);
	
	//////////////////////// text signup /////
	
	TextSignupaccount(30,3);
	
	/////////////////////// box ///////////////
	
	drawBoxDoubleLineWithBG(40,12,70,20,153);
	
	drawBoxDoubleLineWithBG(46,15,58,14,187);
	
	drawBoxDoubleLineWithBG(52,18,46,8,170);
	
	drawBoxDoubleLineWithBG(60,20,30,3,221);
	
	//////////////////// message///////////////////////
	
	gotoxy(62,22); foreColor(223); cout<<"S I G N U P A C C O U N T";
	
	gotoxy(56,27); foreColor(169); cout<<"PRESS [ENTER] TO SIGNUP | [ESC] TO QUIT. ";
	
	gotoxy(51,29); foreColor(176); cout<<"YOU MUST TO SIGNUP A ACCOUNT TO USE THIS PROGRAM.";
	
	/////////////////////// line under message /////////////////////
	
	HLine(51,30,50,181,196);
	
	///////////////////////// line under box ///////////////////////
	
	HLine(5,35,140,3,221);
	
	foreColor(1);
}
void BoxSignUp(){
	
	foreColor(6);gotoxy(25,22); cout<<"FIRSTNAME";
	drawBoxSingleLine(40,21,30,1,3);
	
	foreColor(6);gotoxy(75,22); cout<<"LASTNAME";
	drawBoxSingleLine(90,21,30,1,3);
	
	foreColor(6);gotoxy(25,26); cout<<"POSITION";
	drawBoxSingleLine(40,25,30,1,3);
	
	foreColor(6);gotoxy(75,26); cout<<"CITY/PROVINCE";
	drawBoxSingleLine(90,25,30,1,3);
	
	foreColor(6);gotoxy(25,30); cout<<"DISTRIC/KHAN";
	drawBoxSingleLine(40,29,30,1,3);
	
	foreColor(6);gotoxy(75,30); cout<<"PHONE NUMBER";
	drawBoxSingleLine(90,29,30,1,3);
}
void BoxFillPassword(){
	
	foreColor(6);gotoxy(43,22); cout<<"USERNAME";
	drawBoxSingleLine(65,21,30,1,3);
	
	foreColor(6);gotoxy(43,26); cout<<"PASSWORD";
	drawBoxSingleLine(65,25,30,1,3);
	
	foreColor(6);gotoxy(43,30); cout<<"VERIFY YOUR PASSWORD";
	drawBoxSingleLine(65,29,30,1,3);
	
}
void FillInformation(int a,int b){
	
	//	FillInformation(30,8);
	
	HLine(a-3,b-4,93,3,219);
	HLine(a-5,b-3,97,1,219);
	
	HLine(a-3,b+8,93,3,219);
	HLine(a-5,b+7,97,1,219);
	
	foreColor(6);gotoxy(a,b);     cout<<R"(  _____ ___ _     _     )";foreColor(7);cout<<R"(  ___ _   _ _____ ___  ____  __  __    _  _____ ___ ___  _   _ )";
	foreColor(6);gotoxy(a,b+1);   cout<<R"( |  ___|_ _| |   | |    )";foreColor(7);cout<<R"( |_ _| \ | |  ___/ _ \|  _ \|  \/  |  / \|_   _|_ _/ _ \| \ | |)";
	foreColor(6);gotoxy(a,b+2);   cout<<R"( | |_   | || |   | |    )";foreColor(7);cout<<R"(  | ||  \| | |_ | | | | |_) | |\/| | / _ \ | |  | | | | |  \| |)";
	foreColor(7);gotoxy(a,b+3);   cout<<R"( |  _|  | || |___| |___ )";foreColor(3);cout<<R"(  | || |\  |  _|| |_| |  _ <| |  | |/ ___ \| |  | | |_| | |\  |)";
	foreColor(7);gotoxy(a,b+4);   cout<<R"( |_|   |___|_____|_____|)";foreColor(3);cout<<R"( |___|_| \_|_|   \___/|_| \_\_|  |_/_/   \_\_| |___\___/|_| \_|)";
	
	HLine(a-16,b+28,123,3,219);
	                                                                                       
	
	
}
void Text_Login(int a,int b){
	
setcursor(0,0);
	
HLine(a-3,b-3,79,3,219);
HLine(a-5,b-2,83,6,219);

HLine(a-3,b+8,79,3,219);
HLine(a-5,b+7,83,6,219);

HLine(a-20,b+28,120,1,219);

foreColor(3);gotoxy(a,b);     cout<<R"(  _     ___   ____ ___ _   _ )";foreColor(7);cout<<R"(     _    ____ ____ ___  _   _ _   _ _____ )";
foreColor(3);gotoxy(a,b+1);   cout<<R"( | |   / _ \ / ___|_ _| \ | |)";foreColor(7);cout<<R"(    / \  / ___/ ___/ _ \| | | | \ | |_   _|)";
foreColor(7);gotoxy(a,b+2);   cout<<R"( | |  | | | | |  _ | ||  \| |)";foreColor(1);cout<<R"(   / _ \| |  | |  | | | | | | |  \| | | |  )";
foreColor(6);gotoxy(a,b+3);   cout<<R"( | |__| |_| | |_| || || |\  |)";foreColor(3);cout<<R"(  / ___ \ |__| |__| |_| | |_| | |\  | | |  )";
foreColor(6);gotoxy(a,b+4);   cout<<R"( |_____\___/ \____|___|_| \_|)";foreColor(3);cout<<R"( /_/   \_\____\____\___/ \___/|_| \_| |_|  )";
                                                                        
foreColor(6);gotoxy(a+15,b+16); cout<<"USERNAME";
foreColor(6);gotoxy(a+15,b+20); cout<<"PASSWORD";

drawBoxSingleLine(a+30,b+15,30,1,3);
drawBoxSingleLine(a+30,b+19,30,1,3);



}
void BoxInformationSignup(int a,int b){
	
	setcursor(0,0);
	
	drawBoxSingleLine(a+20,b+14,30,1,2);//FIRST NAME
	
	drawBoxSingleLine(a+60,b+14,30,1,2);//LAST NAME
	
	drawBoxSingleLine(a+20,b+18,30,1,2);//POSITION
	
	drawBoxSingleLine(a+60,b+18,30,1,2);//CITY
	
	drawBoxSingleLine(a+20,b+22,30,1,2);//DISTRIC
	
	drawBoxSingleLine(a+60,b+22,30,1,2);//PHONE
	
	drawBoxSingleLine(a+20,b+26,30,1,2);//USERNAME
	
	drawBoxSingleLine(a+60,b+26,30,1,2);//PASSWORD
	
	drawBoxSingleLine(a+20,b+30,70,1,4);//question
	
	foreColor(6);gotoxy(a+22,b+15); cout<<"FIRST NAME    : ";
	
	foreColor(6);gotoxy(a+62,b+15); cout<<"LAST  NAME    : ";
	
	foreColor(6);gotoxy(a+22,b+19); cout<<"POSITION      : ";
	
	foreColor(6);gotoxy(a+62,b+19); cout<<"CITY/PROVINCE : ";
	
	foreColor(6);gotoxy(a+22,b+23); cout<<"DISTRICT/KHAN : ";
	
	foreColor(6);gotoxy(a+62,b+23); cout<<"PHONE NUMBER  : ";
	
	foreColor(6);gotoxy(a+22,b+27); cout<<"YOUR USERNAME : ";
	
	foreColor(6);gotoxy(a+62,b+27); cout<<"YOUR PASSWORD : ";
	
	foreColor(7);gotoxy(a+24,b+31); cout << "IS YOUR INFOMATION CORRECT ?";
	
	cout << "  PRESS : [ENTER] YES | [ESC] NO .";
	
}

void TextShowInformation(int a,int b){
	
setcursor(0,0);
	
HLine(a-3,b-3,114,3,219);
HLine(a-5,b-2,118,7,219);

HLine(a-3,b+8,114,3,219);
HLine(a-5,b+7,118,7,219);
	
	
foreColor(6);gotoxy(a,b);     cout<<R"(     _    ____ ____ ___  _   _ _   _ _____ )";foreColor(3);cout<<R"(  ___ _   _ _____ ___  ____  __  __    _  _____ ___ ___  _   _ )";
foreColor(6);gotoxy(a,b+1);   cout<<R"(    / \  / ___/ ___/ _ \| | | | \ | |_   _|)";foreColor(3);cout<<R"( |_ _| \ | |  ___/ _ \|  _ \|  \/  |  / \|_   _|_ _/ _ \| \ | |)";
foreColor(6);gotoxy(a,b+2);   cout<<R"(   / _ \| |  | |  | | | | | | |  \| | | |  )";foreColor(3);cout<<R"(  | ||  \| | |_ | | | | |_) | |\/| | / _ \ | |  | | | | |  \| |)";
foreColor(7);gotoxy(a,b+3);   cout<<R"(  / ___ \ |__| |__| |_| | |_| | |\  | | |  )";foreColor(1);cout<<R"(  | || |\  |  _|| |_| |  _ <| |  | |/ ___ \| |  | | |_| | |\  |)";
foreColor(7);gotoxy(a,b+4);   cout<<R"( /_/   \_\____\____\___/ \___/|_| \_| |_|  )";foreColor(1);cout<<R"( |___|_| \_|_|   \___/|_| \_\_|  |_/_/   \_\_| |___\___/|_| \_|)";
                                                                                                          

foreColor(3);gotoxy(a+100,b+12);     cout<<R"(.-----. )";
foreColor(3);gotoxy(a+100,b+13);     cout<<R"(`---. | )";
foreColor(3);gotoxy(a+100,b+14);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+15);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+16);     cout<<R"(    | | )"; 
foreColor(3);gotoxy(a+100,b+17);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+18);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+19);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+20);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+21);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+22);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+23);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+24);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+25);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+26);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+27);     cout<<R"(    | | )";
foreColor(3);gotoxy(a+100,b+28);     cout<<R"(.---` | )";
foreColor(3);gotoxy(a+100,b+29);     cout<<R"(`-----` )";


foreColor(3);gotoxy(a,b+12);      cout<<R"(.-----. )";
foreColor(3);gotoxy(a,b+13);      cout<<R"(| .---' )";
foreColor(3);gotoxy(a,b+14);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+15);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+16);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+17);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+18);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+19);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+20);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+21);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+22);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+23);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+24);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+25);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+26);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+27);      cout<<R"(| |     )";
foreColor(3);gotoxy(a,b+28);      cout<<R"(| '---. )";
foreColor(3);gotoxy(a,b+29);      cout<<R"('-----' )";

BoxInformationSignup(a,b);
	
}

void TextLibraryHEADER(int a,int b){

foreColor(3);gotoxy(a,b);     cout<<R"(    _                   ____     ____        _       ____     __   __ )";
foreColor(3);gotoxy(a,b+1);   cout<<R"(   |"|        ___    U | __")uU |  _"\ u U  /"\  uU |  _"\ u  \ \ / / )";
foreColor(3);gotoxy(a,b+2);   cout<<R"( U | | u     |_"_|    \|  _ \/ \| |_) |/  \/ _ \/  \| |_) |/   \ V /  )";
foreColor(3);gotoxy(a,b+3);   cout<<R"(  \| |/__     | |      | |_) |  |  _ <    / ___ \   |  _ <    U_|"|_u )";
foreColor(3);gotoxy(a,b+4);   cout<<R"(   |_____|  U/| |\u    |____/   |_| \_\  /_/   \_\  |_| \_\     |_|   )";
foreColor(7);gotoxy(a,b+5);   cout<<R"(   //  \\.-,_|___|_,-._|| \\_   //   \\_  \\    >>  //   \\_.-,//|(_  )";
foreColor(7);gotoxy(a,b+6);   cout<<R"(  (_")("_)\_)-' '-(_/(__) (__) (__)  (__)(__)  (__)(__)  (__)\_) (__) )";

}
void StyleHeader(int a,int b){
	
foreColor(7);
	
gotoxy(a,b);        cout<<R"(   ,----. )";
gotoxy(a,b+1);      cout<<R"(   )  ,-' )";
gotoxy(a,b+2);      cout<<R"(   |  |   )";
gotoxy(a,b+3);      cout<<R"(   |  |   )";
gotoxy(a,b+4);      cout<<R"(   |  |   )";
gotoxy(a,b+5);      cout<<R"(   |  |   )";
gotoxy(a,b+6);      cout<<R"(   |  |   )";
gotoxy(a,b+7);      cout<<R"(  / _/_   )";
gotoxy(a,b+8);      cout<<R"( / ( ` )  )";
gotoxy(a,b+9);      cout<<R"() (_{;}_) )";
gotoxy(a,b+10);     cout<<R"( \ (_,_)  )";
gotoxy(a,b+11);     cout<<R"(  \  \    )";
gotoxy(a,b+12);     cout<<R"(   |  |   )";
gotoxy(a,b+13);     cout<<R"(   |  |   )";
gotoxy(a,b+14);     cout<<R"(   |  |   )";
gotoxy(a,b+15);     cout<<R"(   |  |   )";
gotoxy(a,b+16);     cout<<R"(   |  |   )";
gotoxy(a,b+17);     cout<<R"(   )  `-. )";
gotoxy(a,b+18);     cout<<R"(   `----' )";



gotoxy(a+105,b);         cout<<R"(.----,    )";
gotoxy(a+105,b+1);       cout<<R"(`-,  (    )";
gotoxy(a+105,b+2);       cout<<R"(  |  |    )";
gotoxy(a+105,b+3);       cout<<R"(  |  |    )";
gotoxy(a+105,b+4);       cout<<R"(  |  |    )";
gotoxy(a+105,b+5);       cout<<R"(  |  |    )";
gotoxy(a+105,b+6);       cout<<R"(  |  |    )";
gotoxy(a+105,b+7);       cout<<R"(  _\_ \   )";
gotoxy(a+105,b+8);       cout<<R"( ( ' ) \  )";
gotoxy(a+105,b+9);       cout<<R"((_{;}_) ( )";
gotoxy(a+105,b+10);      cout<<R"( (_,_) /  )";
gotoxy(a+105,b+11);      cout<<R"(   /  /   )";
gotoxy(a+105,b+12);      cout<<R"(  |  |    )";
gotoxy(a+105,b+13);      cout<<R"(  |  |    )";
gotoxy(a+105,b+14);      cout<<R"(  |  |    )";
gotoxy(a+105,b+15);      cout<<R"(  |  |    )";
gotoxy(a+105,b+16);      cout<<R"(  |  |    )";
gotoxy(a+105,b+17);      cout<<R"(.-`  (    )";
gotoxy(a+105,b+18);      cout<<R"('----`    )";
        

          

}

void carAnime(int a,int b){
	
	setcursor(0,0);
	
	for(int i=0;i<110;i++){
		
		foreColor(7);gotoxy(a+i,b);     cout<<R"(               __                )";
		foreColor(7);gotoxy(a+i,b+1);   cout<<R"(             ~( @\   \           )";
		foreColor(7);gotoxy(a+i,b+2);   cout<<R"(      _________]_[__/_>________  )";
		foreColor(7);gotoxy(a+i,b+3);   cout<<R"(     /  ____ \ <>     |  ____  \ )";
		foreColor(7);gotoxy(a+i,b+4);   cout<<R"(    =\_/ __ \_\_______|_/ __ \__D)";
		foreColor(6);gotoxy(a+i,b+5);   cout<<R"(        (__)             (__)    )";
		
		delay(30);
	}
	cls();
}
void TextAntH(int a,int b){
	
setcursor(0,0);
	
foreColor(1);gotoxy(a,b);     cout<<R"(      __      )";foreColor(7);cout<<R"( _____  ___  )";foreColor(3);cout<<R"( ___________  )";
foreColor(1);gotoxy(a,b+1);   cout<<R"(     /""\     )";foreColor(7);cout<<R"((\    \|   \ )";foreColor(3);cout<<R"((      _    ) )";
foreColor(1);gotoxy(a,b+2);   cout<<R"(    /    \    )";foreColor(7);cout<<R"(|.\\   \    |)";foreColor(3);cout<<R"( )__/  \\__/  )";
foreColor(1);gotoxy(a,b+3);   cout<<R"(   /' /\  \   )";foreColor(7);cout<<R"(|: \.   \\  |)";foreColor(3);cout<<R"(    \\_ /     )";
foreColor(1);gotoxy(a,b+4);   cout<<R"(  //  __'  \  )";foreColor(7);cout<<R"(|.  \    \. |)";foreColor(3);cout<<R"(    |.  |     )";
foreColor(1);gotoxy(a,b+5);   cout<<R"( /   /  \\  \ )";foreColor(7);cout<<R"(|    \    \ |)";foreColor(3);cout<<R"(    \:  |     )";
foreColor(1);gotoxy(a,b+6);   cout<<R"((___/    \___))";foreColor(7);cout<<R"( \___|\____\))";foreColor(3);cout<<R"(     \__|     )";

drawBoxSingleLine(a+5,b+8,30,1,6);
foreColor(7);gotoxy(a+8,b+9);  cout<<"CREATED BY STUDENT RUPP.";  

foreColor(7);gotoxy(a-12,b+12); cout<<"MR.PRACH BOROEURN"; 
foreColor(7);gotoxy(a+15,b+12); cout<<"MR.YANN  VANNETH"; 
foreColor(7);gotoxy(a+40,b+12); cout<<"MR.OEUN  DAVID";                                     

}

void TextWelcomeAnime(int a,int b){
	
foreColor(3);gotoxy(a,b);     cout<<R"( ___       __   _______   ___       ________  ________  _____ ______   _______           _________  ________     )";
foreColor(3);gotoxy(a,b+1);   cout<<R"(|\  \     |\  \|\  ___ \ |\  \     |\   ____\|\   __  \|\   _ \  _   \|\  ___ \         |\___   ___\\   __  \    )";
foreColor(7);gotoxy(a,b+2);   cout<<R"(\ \  \    \ \  \ \   __/|\ \  \    \ \  \___|\ \  \|\  \ \  \\\__\ \  \ \   __/|        \|___ \  \_\ \  \|\  \   )";
foreColor(7);gotoxy(a,b+3);   cout<<R"( \ \  \  __\ \  \ \  \_|/_\ \  \    \ \  \    \ \  \\\  \ \  \\|__| \  \ \  \_|/__           \ \  \ \ \  \\\  \  )";
foreColor(7);gotoxy(a,b+4);   cout<<R"(  \ \  \|\__\_\  \ \  \_|\ \ \  \____\ \  \____\ \  \\\  \ \  \    \ \  \ \  \_|\ \           \ \  \ \ \  \\\  \ )";
foreColor(1);gotoxy(a,b+5);   cout<<R"(   \ \____________\ \_______\ \_______\ \_______\ \_______\ \__\    \ \__\ \_______\           \ \__\ \ \_______\)";
foreColor(1);gotoxy(a,b+6);   cout<<R"(    \|____________|\|_______|\|_______|\|_______|\|_______|\|__|     \|__|\|_______|            \|__|  \|_______|)";
                                                                                                                 
TextAntH(a+35,b+10);

TextLibraryHEADER(a+20,b+25);  

StyleHeader(a,b+10); 

carAnime(a-10,b+32);                                                                                                              
                                                                                                                 

}

void BoxForgotPass(int a,int b){
	
	///////////////////////////////// FIRST QUESTION ///////////////////////////////////
	
	drawBoxSingleLine(a,b,50,1,4);
	
	foreColor(7); gotoxy(a+5,b+1); cout << "WHAT IS YOUR LAST NAME ?";
	foreColor(7); gotoxy(a+56,b+1); cout << "YOUR ANSWER     : ";
	
	drawBoxSingleLine(a+55,b,50,1,4);
	
	///////////////////////////////// SECOND QUESTION ///////////////////////////////////
	
	drawBoxSingleLine(a,b+5,50,1,4);
	foreColor(7); gotoxy(a+5,b+6); cout << "WHAT IS YOUR FIRST NAME ?";
	
	foreColor(7); gotoxy(a+56,b+6); cout << "YOUR ANSWER    : ";
	
	drawBoxSingleLine(a+55,b+5,50,1,4);
	
	///////////////////////////////// FILL NEW PASSWORD ///////////////////////////////////
	
	drawBoxSingleLine(a,b+10,50,1,4);
	                    
	foreColor(7); gotoxy(a+5,b+11);cout << "INPUT YOUR NEW PASSWORD.";
	
	foreColor(7); gotoxy(a+56,b+11); cout << "NEW PASSWORD   : ";
	
	
	drawBoxSingleLine(a+55,b+10,50,1,4);
	
}

void TextforgotPassword(int a,int b){

HLine(a-3,b-3,110,3,219);
HLine(a-5,b-2,114,1,219);

HLine(a-3,b+8,110,3,219);
HLine(a-5,b+7,114,1,219);
	 
foreColor(7);gotoxy(a,b);     cout<<R"(  ______ ____  _____   _____  ____ _______ )";foreColor(4);cout<<R"(  _____         _____ _______          ______  _____  _____  )";
foreColor(7);gotoxy(a,b+1);   cout<<R"( |  ____/ __ \|  __ \ / ____|/ __ \__   __|)";foreColor(4);cout<<R"( |  __ \ /\    / ____/ ____\ \        / / __ \|  __ \|  __ \ )";
foreColor(7);gotoxy(a,b+2);   cout<<R"( | |__ | |  | | |__) | |  __| |  | | | |   )";foreColor(4);cout<<R"( | |__) /  \  | (___| (___  \ \  /\  / / |  | | |__) | |  | |)";
foreColor(7);gotoxy(a,b+3);   cout<<R"( |  __|| |  | |  _  /| | |_ | |  | | | |   )";foreColor(4);cout<<R"( |  ___/ /\ \  \___ \\___ \  \ \/  \/ /| |  | |  _  /| |  | |)";
foreColor(7);gotoxy(a,b+4);   cout<<R"( | |   | |__| | | \ \| |__| | |__| | | |   )";foreColor(4);cout<<R"( | |  / ____ \ ____) |___) |  \  /\  / | |__| | | \ \| |__| |)";
foreColor(7);gotoxy(a,b+5);   cout<<R"( |_|    \____/|_|  \_\\_____|\____/  |_|   )";foreColor(4);cout<<R"( |_| /_/    \_\_____/_____/    \/  \/   \____/|_|  \_\_____/ )";
                                                                                                        
                                                                                                        
BoxForgotPass(a,b+12);
	
}
string GetCurrentDate() 
{
	time_t now = time(0);  // system time 
	struct tm* timeinfo = localtime(&now); // decalring variable for localtime()
	char _recordtime[80];
	strftime(_recordtime, sizeof(_recordtime), "%d/%m/%Y", timeinfo);  // | %H:%M:%S
	return _recordtime;
}
void Textinvoice(int a,int b){
 
	foreColor(5);	
	gotoxy(a,b+1);cout<<R"( ___ _  ___   _____ ___ ___ ___ )";
	gotoxy(a,b+2);cout<<R"(|_ _| \| \ \ / / _ \_ _/ __| __|)";
	foreColor(6);
	gotoxy(a,b+3);cout<<R"( | || .` |\ V / (_) | | (__| _| )";
	gotoxy(a,b+4);cout<<R"(|___|_|\_| \_/ \___/___\___|___|)";
                                           
}

void logobook(int a,int b){
	
	foreColor(7);
	gotoxy(a,b+1);cout<<R"(      _ _         )";
	gotoxy(a,b+2);cout<<R"( .-. | | |        )";
	gotoxy(a,b+3);cout<<R"( |B|_|V|N|        )";
	gotoxy(a,b+4);cout<<R"( |O|D|.|.|<\      )";
	gotoxy(a,b+5);cout<<R"( |O|A| | | \\     )";
	gotoxy(a,b+6);cout<<R"( |K|V|B|R|  \\    )";
	gotoxy(a,b+7);cout<<R"( | |I| | |   \>   )";
	foreColor(0);
	gotoxy(a,b+8);cout<<R"("""""""""""""""""")";
}
void BoxInvoice(){
	
	//bigbox
	drawBoxDoubleLineWithBG(35,1,80,32,7);
	
	//textinvoice
	Textinvoice(37,1);
	
	foreColor(3); gotoxy(37,7); cout<<"MEMBER NAME    : ";

	foreColor(3); gotoxy(37,9); cout<<"NUMBER INVOICE : ";
	foreColor(7);cout<<"157949555";

	
	//logo
	logobook(95,1);
	
	//line 
	HLine(37,10,76,1,196);
	
	HLine(37,30,76,1,196);
	
	
	
}

void Boxforborrow(int a,int b){
	
	drawBoxSingleLine(a,b,50,1,3);
	foreColor(7);gotoxy(a,b+1); cout<<"ENTER MEMBER ID TO BORROW BOOK  : ";
	
	
	drawBoxSingleLine(a,b+5,50,1,6);
	foreColor(7);gotoxy(a,b+6); cout<<"ENTER BOOK ID TO BORROW         : ";
	

	
	drawBoxSingleLine(a,b+10,50,1,5);
	foreColor(7);gotoxy(a,b+11); cout<<"ENTER AMOUNT OF BOOK QTY       : ";
	
	
	drawBoxSingleLine(a-5,b+15,80,1,7);
	
	foreColor(7);gotoxy(62,26); cout<<"HOW MANY DAYS DO YOU WANT TO BORROW ?   YOUR ANSWER : ";
	
	
}
void TextBorrowBook(int a,int b){

	foreColor(3);gotoxy(a,b);     cout<<R"(  _______   ______   ______    ______    ______   __ __ __     )";foreColor(7);cout<<R"(   _______   ______   ______   ___   ___     )";
	foreColor(3);gotoxy(a,b+1);   cout<<R"(/_______/\ /_____/\ /_____/\  /_____/\  /_____/\ /_//_//_/\    )";foreColor(7);cout<<R"( /_______/\ /_____/\ /_____/\ /___/\/__/\    )";
	foreColor(3);gotoxy(a,b+2);   cout<<R"(\::: _  \ \\:::_ \ \\:::_ \ \ \:::_ \ \ \:::_ \ \\:\\:\\:\ \   )";foreColor(7);cout<<R"( \::: _  \ \\:::_ \ \\:::_ \ \\::.\ \\ \ \   )";
	foreColor(1);gotoxy(a,b+3);   cout<<R"( \::(_)  \/_\:\ \ \ \\:(_) ) )_\:(_) ) )_\:\ \ \ \\:\\:\\:\ \  )";foreColor(5);cout<<R"(  \::(_)  \/_\:\ \ \ \\:\ \ \ \\:: \/_) \ \  )";
	foreColor(6);gotoxy(a,b+4);   cout<<R"(  \::  _  \ \\:\ \ \ \\: __ `\ \\: __ `\ \\:\ \ \ \\:\\:\\:\ \ )";foreColor(4);cout<<R"(   \::  _  \ \\:\ \ \ \\:\ \ \ \\:. __  ( (  )";
	foreColor(6);gotoxy(a,b+5);   cout<<R"(   \::(_)  \ \\:\_\ \ \\ \ `\ \ \\ \ `\ \ \\:\_\ \ \\:\\:\\:\ \)";foreColor(4);cout<<R"(    \::(_)  \ \\:\_\ \ \\:\_\ \ \\: \ )  \ \ )";
	foreColor(6);gotoxy(a,b+6);   cout<<R"(    \_______\/ \_____\/ \_\/ \_\/ \_\/ \_\/ \_____\/ \_______\/)";foreColor(4);cout<<R"(     \_______\/ \_____\/ \_____\/ \__\/\__\/ )";
	                                                                                                           

}
void Snowman(int a,int b){
	
	foreColor(6);
	gotoxy(a,b);   cout<<R"(                 _...Q._                         )";
	gotoxy(a,b+1); cout<<R"(               .'       '.                       )";
	gotoxy(a,b+2); cout<<R"(              /           \                      )";
	foreColor(7);
	gotoxy(a,b+3); cout<<R"(             ;.-""""--.._ |                      )";
	gotoxy(a,b+4); cout<<R"(            /'-._____..-'\|                      )";
	gotoxy(a,b+5); cout<<R"(          .' ;  o   o    |`;                     )";
	gotoxy(a,b+6); cout<<R"(         /  /|   ()      ;  \                    )";
	gotoxy(a,b+7); cout<<R"(    _.-, '-' ; '.__.-'    \  \                   )";
	gotoxy(a,b+8); cout<<R"(.-"`,  |      \_         / `'`                   )";
	gotoxy(a,b+9); cout<<R"( '._`.; ._    / `'--.,_=-;_                      )";
	gotoxy(a,b+10);cout<<R"(    \ \|  `\ .\_     /`  \ `._                   )";
	gotoxy(a,b+11);cout<<R"(     \ \    `/  ``---|    \   (~                 )";
	gotoxy(a,b+12);cout<<R"(      \ \.  | o   ,   \    (~ (~  ______________ )";
	gotoxy(a,b+13);cout<<R"(       \ \`_\ _..-'    \  (\(~   |.------------.|)";
	gotoxy(a,b+14);cout<<R"(        \/  ``        / \(~/     || BOOK  READ ||)";
	gotoxy(a,b+15);cout<<R"(         \__    __..-' -   '.    || """"  """" ||)";
	foreColor(7);
	gotoxy(a,b+16);cout<<R"(          \ \```             \   || CAN BORROW ||)";
	gotoxy(a,b+17);cout<<R"(          ;\ \o               ;  || FOR  READ! ||)";
	gotoxy(a,b+18);cout<<R"(          | \ \               |  ||____________||)";
	gotoxy(a,b+19);cout<<R"(          ;  \ \              ;  '------..------')";
	gotoxy(a,b+20);cout<<R"(           \  \ \ _.-'\      /          ||       )";
	gotoxy(a,b+21);cout<<R"(            '. \-'     \   .'           ||       )";
	gotoxy(a,b+22);cout<<R"(           _.-"  '      \-'           .-||-.     )";
	gotoxy(a,b+23);cout<<R"(           \ '  ' '      \           '..---.- '  )";
	gotoxy(a,b+24);cout<<R"(            \  ' '      _.'                      )";
	gotoxy(a,b+25);cout<<R"(             \' '   _.-'                         )";
	gotoxy(a,b+26);cout<<R"(              \ _.-'                             )";
	gotoxy(a,b+27);cout<<R"(               `                                 )";
}

void TexMember_Borrow(int a,int b){

foreColor(1);gotoxy(a,b);   cout<<R"( ______  _______ ______  ______  _______ ______  )";foreColor(7);cout<<R"(   ______   _____  ______ ______   _____  _  _  _ _______ _____   )";foreColor(6);cout<<R"(   ______   _____   _____  _    _ )";
foreColor(1);gotoxy(a,b+1); cout<<R"(|  ___ \(_______)  ___ \(____  \(_______|_____ \ )";foreColor(7);cout<<R"(  (____  \ / ___ \(_____ (_____ \ / ___ \| || || (_______|____ \  )";foreColor(6);cout<<R"(  (____  \ / ___ \ / ___ \| |  / ))";
foreColor(1);gotoxy(a,b+2); cout<<R"(| | _ | |_____  | | _ | |____)  )_____   _____) ))";foreColor(7);cout<<R"(   ____)  ) |   | |_____) )____) ) |   | | || || |_____   _   \ \ )";foreColor(6);cout<<R"(   ____)  ) |   | | |   | | | / / )";
foreColor(2);gotoxy(a,b+3); cout<<R"(| || || |  ___) | || || |  __  (|  ___) (_____ ( )";foreColor(4);cout<<R"(  |  __  (| |   | (_____ (_____ (| |   | | ||_|| |  ___) | |   | |)";foreColor(3);cout<<R"(  |  __  (| |   | | |   | | |< <  )";
foreColor(2);gotoxy(a,b+4); cout<<R"(| || || | |_____| || || | |__)  ) |_____      | |)";foreColor(4);cout<<R"(  | |__)  ) |___| |     | |    | | |___| | |___| | |_____| |__/ / )";foreColor(3);cout<<R"(  | |__)  ) |___| | |___| | | \ \ )";
foreColor(2);gotoxy(a,b+5); cout<<R"(|_||_||_|_______)_||_||_|______/|_______)     |_|)";foreColor(4);cout<<R"(  |______/ \_____/      |_|    |_|\_____/ \______|_______)_____/  )";foreColor(3);cout<<R"(  |______/ \_____/ \_____/|_|  \_))";
                                                                                                                                                     

}
void Image_forheaderMember(int a,int b){
	
foreColor(7);

gotoxy(a,b);    cout<<R"(   _______                   ________    |            )";
gotoxy(a,b+1);  cout<<R"(  |ooooooo|      ____       | __  __ |   |            )";
gotoxy(a,b+2);  cout<<R"(  |[]+++[]|     [____]      |/  \/  \|   |            )";
gotoxy(a,b+3);  cout<<R"(  |+ ___ +|     ]()()[      |\__/\__/|   |            )";
gotoxy(a,b+4);  cout<<R"(  |:|   |:|   ___\__/___    |[][][][]|   |            )";
gotoxy(a,b+5);  cout<<R"(  |:|___|:|  |__|    |__|   |++++++++|   |            )";
gotoxy(a,b+6);  cout<<R"(  |[]===[]|   |_|_/\_|_|    | ______ |   |            )";
gotoxy(a,b+7);  cout<<R"(_ ||||||||| _ | | __ | | __ ||______|| __|            )";
gotoxy(a,b+8);  cout<<R"(  |_______|   |_|[::]|_|    |________|   \            )";
gotoxy(a,b+9);  cout<<R"(              \_|_||_|_/               ANT\           )";
gotoxy(a,b+10); cout<<R"(                |_||_|                     \          )";
gotoxy(a,b+11); cout<<R"(               _|_||_|_                     \         )";
gotoxy(a,b+12); cout<<R"(      ____    |___||___|                     \        )";
gotoxy(a,b+13); cout<<R"(     /  __\          ____                     \       )";
gotoxy(a,b+14); cout<<R"(     \( oo          (___ \                     \      )";
gotoxy(a,b+15); cout<<R"(     _\_o/           oo~)/                      \     )";
gotoxy(a,b+16); cout<<R"(    / \|/ \         _\-_/_                       |    )";
gotoxy(a,b+17); cout<<R"(   / / __\ \___    / \|/  \                      |    )";
gotoxy(a,b+18); cout<<R"(   \ \|   |__/_)  / / .- \ \                     |    )";
gotoxy(a,b+19); cout<<R"(    \/_)  |       \ \ .  /_/                     |    )";
gotoxy(a,b+20); cout<<R"(     ||___|        \/___(_/                      |    )";
gotoxy(a,b+21); cout<<R"(     | | |          | |  |                       |    )";
gotoxy(a,b+22); cout<<R"(     | | |          | |  |                       |    )";
gotoxy(a,b+23); cout<<R"(     |_|_|          |_|__|                       |    )";
gotoxy(a,b+24); cout<<R"(     [__)_)        (_(___]                       |    )";
foreColor(0);

gotoxy(a,b+25); cout<<R"(_________________________________________________     )";
gotoxy(a,b+26); cout<<R"(-------------------------------------------------     )";

     
}

void Image_Finger(int a,int b){

foreColor(7);
gotoxy(a,b+1);  cout<<R"(    ,     )";
gotoxy(a,b+2);  cout<<R"(   /_\    )";
gotoxy(a,b+3);  cout<<R"(  _( )_   )";
foreColor(3);
gotoxy(a,b+4);  cout<<R"( (_ o _)  )";
gotoxy(a,b+5);  cout<<R"(/ (_,_) \ )";
gotoxy(a,b+6);  cout<<R"()_/   \_( )";
    
}

void cleararrow(int a,int b){
foreColor(7);
gotoxy(a,b+1);  cout<<R"(          )";
gotoxy(a,b+2);  cout<<R"(          )";
gotoxy(a,b+3);  cout<<R"(          )";
foreColor(3);
gotoxy(a,b+4);  cout<<R"(          )";
gotoxy(a,b+5);  cout<<R"(          )";
gotoxy(a,b+6);  cout<<R"(          )";
}

void image_computer(int a,int b){

foreColor(7);
gotoxy(a,b+1);   cout<<R"(   _______________                        |*\_/*|________ )";
gotoxy(a,b+2);   cout<<R"(  |  ___________  |     .-.     .-.      ||_/-\_|______  |)";
foreColor(6);
gotoxy(a,b+3);   cout<<R"(  | |           | |    .****. .****.     | |           | |)";
gotoxy(a,b+4);   cout<<R"(  | |   0   0   | |    .*****.*****.     | |   0   0   | |)";
foreColor(5);
gotoxy(a,b+5);   cout<<R"(  | |     -     | |     .*********.      | |     -     | |)";
gotoxy(a,b+6);   cout<<R"(  | |   \___/   | |      .*******.       | |   \___/   | |)";
foreColor(4);
gotoxy(a,b+7);   cout<<R"(  | |___     ___| |       .*****.        | |___________| |)";
gotoxy(a,b+8);   cout<<R"(  |_____|\_/|_____|        .***.         |_______________|)";
foreColor(1);
gotoxy(a,b+9);   cout<<R"(    _|__|/ \|_|_.............*.............._|________|_  )";
gotoxy(a,b+10);  cout<<R"(   / ********** \                          / ********** \ )";
foreColor(1);
gotoxy(a,b+11);  cout<<R"( /  ************  \                      /  ************  \)";
gotoxy(a,b+12);  cout<<R"(--------------------                    --------------------)";
}
void Image_forview(int a,int b){
	
foreColor(1);	
gotoxy(a,b+1);    cout<<R"(                /|  /|  ---------------------------)";
gotoxy(a,b+2);    cout<<R"(                ||__||  |                         |)";
gotoxy(a,b+3);    cout<<R"(               /   O O\__  WE ARE STUDENT OF RUPP.|)";
gotoxy(a,b+4);    cout<<R"(              /          \                        |)";
gotoxy(a,b+5);    cout<<R"(             /      \     \                       |)";
foreColor(7);
gotoxy(a,b+6);    cout<<R"(            /   _    \     \ ----------------------)";
gotoxy(a,b+7);    cout<<R"(           /    |\____\     \      ||              )";
gotoxy(a,b+8);    cout<<R"(          /     | | | |\____/      ||              )";
gotoxy(a,b+9);    cout<<R"(         /       \| | | |/ |     __||              )";
gotoxy(a,b+10);   cout<<R"(        /  /  \   -------  |_____| ||              )";
foreColor(4);
gotoxy(a,b+11);   cout<<R"(       /   |   |           |       --|             )";
gotoxy(a,b+12);   cout<<R"(       |   |   |           |_____  --|             )";
gotoxy(a,b+13);   cout<<R"(       |  |_|_|_|          |     \----             )";
foreColor(5);
gotoxy(a,b+14);   cout<<R"(       /\                  |                       )";
gotoxy(a,b+15);   cout<<R"(      / /\        |        /                       )";
gotoxy(a,b+16);   cout<<R"(     / /  |       |       |                        )";
gotoxy(a,b+17);   cout<<R"( ___/ /   |       |       |                        )";
gotoxy(a,b+18);   cout<<R"(|____/    c_c_c_C/ \C_c_c_c                        )";
}

void Image_Keyboard(int a,int b){

foreColor(7);	
	
gotoxy(a,b+1);     cout<<R"(,---,---,---,---,---,---,---,---,---,---,---,---,---,-------,)";
gotoxy(a,b+2);     cout<<R"(|1/2| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | + | ' | <-    |)";
foreColor(5);
gotoxy(a,b+3);     cout<<R"(|---'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-----|)";
gotoxy(a,b+4);     cout<<R"(| ->| | Q | W | E | R | T | Y | U | I | O | P | ] | ^ |     |)";
foreColor(4);
gotoxy(a,b+5);     cout<<R"(|-----',--',--',--',--',--',--',--',--',--',--',--',--'|    |)";
gotoxy(a,b+6);     cout<<R"(| Caps | A | S | D | F | G | H | J | K | L | \ | [ | * |    |)";
foreColor(3);
gotoxy(a,b+7);     cout<<R"(|----,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'---'----|)";
gotoxy(a,b+8);     cout<<R"(|    | < | Z | X | C | V | B | N | M | , | . | - |          |)";
foreColor(1);
gotoxy(a,b+9);     cout<<R"(|----'-,-',--'--,'---'---'---'---'---'---'-,-'---',--,------|)";
gotoxy(a,b+10);    cout<<R"(| ctrl |  | alt |                          |altgr |  | ctrl |)";
gotoxy(a,b+11);    cout<<R"('------'  '-----'--------------------------'------'  '------')";
}

void Book_forheader_update(int a,int b){
	
foreColor(7);	
gotoxy(a,b+1);      cout<<R"(        _________   _________        )";
gotoxy(a,b+2);      cout<<R"(   ____/      452\ /     453 \____   )";
gotoxy(a,b+3);      cout<<R"( /| ------------- |  ------------ |\ )";
foreColor(5);
gotoxy(a,b+4);      cout<<R"(||| ------------- | ------------- |||)";
gotoxy(a,b+5);      cout<<R"(||| ------------- | ------------- |||)";
gotoxy(a,b+6);      cout<<R"(||| ------- ----- | ------------- |||)";
foreColor(4);
gotoxy(a,b+7);      cout<<R"(||| ------------- | ------------- |||)";
gotoxy(a,b+8);      cout<<R"(||| ------------- | ------------- |||)";
gotoxy(a,b+9);      cout<<R"(|||  ------------ | ----------    |||)";
foreColor(3);
gotoxy(a,b+10);     cout<<R"(||| ------------- |  ------------ |||)";
gotoxy(a,b+11);     cout<<R"(||| ------------- | ------------- |||)";
gotoxy(a,b+12);     cout<<R"(||| ------------- | ------ -----  |||)";
foreColor(1);
gotoxy(a,b+13);     cout<<R"(||| ------------  | ------------- |||)";
gotoxy(a,b+14);     cout<<R"(|||_____________  |  _____________|||)";
gotoxy(a,b+15);     cout<<R"(L/_____/--------\\_//W-------\_____\J)";
}

void Image_PandaHeadermember(int a,int b){
	
foreColor(7);	
 
gotoxy(a,b+1);       cout<<R"(  __                                           )";
gotoxy(a,b+2);       cout<<R"( (`/\                                          )";
gotoxy(a,b+3);       cout<<R"( `=\/\ __...--~~~~~-._   _.-~~~~~--...__       )";
gotoxy(a,b+4);       cout<<R"(  `=\/\               \ /               \\     )";
gotoxy(a,b+5);       cout<<R"(   `=\/                V                 \\    )";
gotoxy(a,b+6);       cout<<R"(   //_\___--~~~~~~-._  |  _.-~~~~~~--...__\\   )";
gotoxy(a,b+7);       cout<<R"(  //  ) (..----~~~~._\ | /_.~~~~----.....__\\  )";
gotoxy(a,b+8);       cout<<R"( ===( ANT )==========\\|//==================== )";
gotoxy(a,b+9);       cout<<R"(__ANT\___/________ANT`---`_____________________)";

}
void image_styledelete(int a,int b){
	
foreColor(7);
	
gotoxy(a,b+1);       cout<<R"(         __                     )";
gotoxy(a,b+2);       cout<<R"(        / /\                    )";
gotoxy(a,b+3);       cout<<R"(       / /  \                   )";
gotoxy(a,b+4);       cout<<R"(      / /    \__________        )";
gotoxy(a,b+5);       cout<<R"(     / /      \        /\       )";
gotoxy(a,b+6);       cout<<R"(    /_/        \      / /       )";
foreColor(4);
gotoxy(a,b+7);       cout<<R"( ___\ \      ___\____/_/_       )";
gotoxy(a,b+8);       cout<<R"(/____\ \    /___________/\      )";
gotoxy(a,b+9);       cout<<R"(\     \ \   \           \ \     )";
gotoxy(a,b+10);       cout<<R"( \     \ \   \____       \ \    )";
gotoxy(a,b+11);       cout<<R"(  \     \ \  /   /\       \ \   )";
foreColor(5);
gotoxy(a,b+12);       cout<<R"(   \   / \_\/   / /        \ \  )";
gotoxy(a,b+13);       cout<<R"(    \ /        / /__________\/  )";
gotoxy(a,b+14);       cout<<R"(     /        / /     /         )";
gotoxy(a,b+15);       cout<<R"(    /        / /     /          )";
foreColor(3);
gotoxy(a,b+16);       cout<<R"(   /________/ /\    /           )";
gotoxy(a,b+17);       cout<<R"(   \________\/\ \  /            )";
gotoxy(a,b+18);       cout<<R"(               \_\/ANT          )";
}

void Image_wall(int a,int b){
	
foreColor(7);
	
gotoxy(a,b+1);       cout<<R"(    _       _                   _            )";
gotoxy(a,b+2);       cout<<R"(   ('<     ('<                 >')           )";
gotoxy(a,b+3);       cout<<R"(   (^)     (^)                 (^)           )";
gotoxy(a,b+4);       cout<<R"(   |m/|   |\m|   |\/|   |\/|   |m/|   |\/|   )";
gotoxy(a,b+5);       cout<<R"(   |  | _ |  | _ |  | _ |  | _ |  | _ |  |   )";
gotoxy(a,b+6);       cout<<R"(   |  |(@)|  |<.>|  |{o}|  |<.>|  |(@)|  |   )";
gotoxy(a,b+7);       cout<<R"( __|__|_|_|__|_|_|__|_|_|__|_|_|__|_|_|__|__ )";
gotoxy(a,b+8);       cout<<R"(|___::_____::_____::_____::_____::_____::___|)";
gotoxy(a,b+9);       cout<<R"(   |  | | |  | | |  | | |  | | |  | | |  |   )";
gotoxy(a,b+10);      cout<<R"(   |  |\|/|  |\|/|  |\|/|  |\|/|  |\|/|  |ANT)";
gotoxy(a,b+11);      cout<<R"(WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW)";
}

void Style_Image(int a,int b){

foreColor(4);	
gotoxy(a,b+1);       cout<<R"(          _______  )";
gotoxy(a,b+2);       cout<<R"(         /       / )";
gotoxy(a,b+3);       cout<<R"(___     /   ____/  )";
foreColor(7);
gotoxy(a,b+4);       cout<<R"(\   \  /   /\      )";
gotoxy(a,b+5);       cout<<R"( \   \/___/  \     )";
gotoxy(a,b+6);       cout<<R"(  \       \   \    )"; 
gotoxy(a,b+7);       cout<<R"(   \_______\   \   )";  
foreColor(5);
gotoxy(a,b+8);       cout<<R"(           /   /   )";  
gotoxy(a,b+9);       cout<<R"(          /   /    )"; 
gotoxy(a,b+10);      cout<<R"(          \  /     )";
gotoxy(a,b+11);      cout<<R"(           \/      )";
}

void Image_wallhouse(int a,int b){
	
foreColor(7);	
gotoxy(a,b+1);       cout<<R"(          /\/|_    __/\\                   )";
gotoxy(a,b+2);       cout<<R"(         /    -\  /-   ~\  .              ')";
gotoxy(a,b+3);       cout<<R"(         \    =_YT_ =   /                  )";
gotoxy(a,b+4);       cout<<R"(         /==*(`    `\ ~ \                  )";
gotoxy(a,b+5);       cout<<R"(        /     \     /    `\                )";
gotoxy(a,b+6);       cout<<R"(        |     |     ) ~   (                )";
gotoxy(a,b+7);       cout<<R"(       /       \   /     ~ \               )";
gotoxy(a,b+8);       cout<<R"(       \       /   \~     ~/               )";
foreColor(0);
gotoxy(a,b+9);       cout<<R"(ANT_/\_/\__  _/_/\_/\__~__/_/\_/\_/\_/\_/\_)";
gotoxy(a,b+10);      cout<<R"(|  |  |  | ) ) |  |  | ((  |  |  |  |  |  |)";
gotoxy(a,b+11);      cout<<R"(|  |  |  |( (  |  |  |  \\ |  |  |  |  |  |)";
gotoxy(a,b+12);      cout<<R"(|  |  |  | )_) |  |  |  |))|  |  |  |  |  |)";
gotoxy(a,b+13);      cout<<R"(|  |  |  |  |  |  |  |  (/ |  |  |  |  |  |)";
gotoxy(a,b+14);      cout<<R"(|  |  |  |  |  |  |  |  |  |  |  |  |  |  |)";
gotoxy(a,b+15);      cout<<R"(-------------------------------------------)";

}
void Image_House(int a,int b){
foreColor(3);	
gotoxy(a,b+1);       cout<<R"(    ) )        /\                 )";
gotoxy(a,b+2);       cout<<R"(   =====      /  \                )";
gotoxy(a,b+3);       cout<<R"(  _|___|_____/ __ \____________   )";
gotoxy(a,b+4);       cout<<R"( |::::::::::/ |  | \:::::::::::|  )";
gotoxy(a,b+5);       cout<<R"( |:::::::::/  ====  \::::::::::|  )";
gotoxy(a,b+6);       cout<<R"( |::::::::/__________\:::::::::|  )";
gotoxy(a,b+7);       cout<<R"( |_________|  ____  |__________|  )";
gotoxy(a,b+8);       cout<<R"(  | ______ | / || \ | _______ |   )";
gotoxy(a,b+9);       cout<<R"(  ||  |   || ====== ||   |   ||   )";
gotoxy(a,b+10);      cout<<R"(  ||--+---|| |    | ||---+---||   )";
gotoxy(a,b+11);      cout<<R"(  ||__|___|| |   o| ||___|___||   )";
gotoxy(a,b+12);      cout<<R"(  |========| |____| |=========|   )";
gotoxy(a,b+13);      cout<<R"( (^^-^^^^^-|________|-^^^--^^^)   )";
gotoxy(a,b+14);      cout<<R"( (,, , ,, ,/________\,,,, ,, ,)   )";
gotoxy(a,b+15);      cout<<R"(','',,,,' /__________\,,,',',;;   )";
}
void Image_Border(int a,int b){

foreColor(6);
	

gotoxy(a,b+1);  cout<<R"(.-=~=-.                                                                 .-=~=-.)";
gotoxy(a,b+2);  cout<<R"((__  _)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(__  _))";
gotoxy(a,b+3);  cout<<R"(( _ __)                                                                 ( _ __))";
gotoxy(a,b+4);  cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+5);  cout<<R"((_ ___)                                                                 (_ ___))";
gotoxy(a,b+6);  cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+7);  cout<<R"(( _ __)                                                                 ( _ __))";
gotoxy(a,b+8);  cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+9);  cout<<R"((_ ___)                                                                 (_ ___))";
gotoxy(a,b+10); cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+11); cout<<R"(( _ __)                                                                 ( _ __))";
gotoxy(a,b+12); cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+13); cout<<R"((_ ___)                                                                 (_ ___))";
gotoxy(a,b+14); cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+15); cout<<R"(( _ __)                                                                 ( _ __))";
gotoxy(a,b+16); cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+17); cout<<R"((_ ___)                                                                 (_ ___))";
gotoxy(a,b+18); cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+19); cout<<R"(( _ __)                                                                 ( _ __))";
gotoxy(a,b+20); cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+21); cout<<R"(( _ __)                                                                 ( _ __))";
gotoxy(a,b+22); cout<<R"((__  _)                                                                 (__  _))";
gotoxy(a,b+23); cout<<R"((_ ___)-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-=-._.-(_ ___))";
gotoxy(a,b+24); cout<<R"(`-._.-'                                                                 `-._.-')";

}

void Style_BookMenu(int a,int b){
	
foreColor(7);
gotoxy(a,b+1);  cout<<R"( ._____. ._____. ._____. ._____.)";
gotoxy(a,b+2);  cout<<R"( | ._. | | ._. | | ._. | | ._. |)";
gotoxy(a,b+3);  cout<<R"( | !_| |_|_|_! | | !_| |_|_|_! |)";
foreColor(4);
gotoxy(a,b+4);  cout<<R"( !___| |_______! !___| |_______!)";
gotoxy(a,b+5);  cout<<R"( .___|_|_| |_________|_|_| |___.)";
gotoxy(a,b+6);  cout<<R"( | ._____| |_____________| |_. |)";
foreColor(5);
gotoxy(a,b+7);  cout<<R"( | !_! | | |         | | ! !_! |)";
gotoxy(a,b+8);  cout<<R"( !_____! | |         | | !_____!)";
gotoxy(a,b+9);  cout<<R"( ._____. | |         | | ._____.)";
foreColor(6);
gotoxy(a,b+10); cout<<R"( | ._. | | |         | | | ._. |)";
gotoxy(a,b+11); cout<<R"( | !_| |_|_|_________| |_|_|_! |)";
gotoxy(a,b+12); cout<<R"( !___| |_____________| |_______!)";
foreColor(3);
gotoxy(a,b+13); cout<<R"( .___|_|_| |___. .___|_|_| |___.)";
gotoxy(a,b+14); cout<<R"( | ._____| |_. | | ._____| |_. |)";
gotoxy(a,b+15); cout<<R"( | !_! | | !_! | | !_! | | !_! |)";
gotoxy(a,b+16); cout<<R"( !_____! !_____! !_____! !_____!)";
}

void Image_houseforBook(int a,int b){
	
	foreColor(7);	
	gotoxy(a,b+1);  cout<<R"(                          []=++-   )";
	gotoxy(a,b+2);  cout<<R"(                      _II__|       )";
	gotoxy(a,b+3);  cout<<R"(                     [[__] |       )";
	gotoxy(a,b+4);  cout<<R"(    _________________||  |___      )";
	gotoxy(a,b+5);  cout<<R"(   /^^^^^^,-.^^^^^^^^\|__|^^^\     )";
	gotoxy(a,b+6);  cout<<R"(  /     ,',-.`.               \    )";
	gotoxy(a,b+7);  cout<<R"( /    ,','   `.`.     ,-"""-.  \   )";
	gotoxy(a,b+8);  cout<<R"(/___,','__   __`.`.__/_,"T"._\__\  )";
	gotoxy(a,b+9);  cout<<R"( |='-'||/\| |^^||`-`=|_|_|_|_|=|   )";
	gotoxy(a,b+10); cout<<R"( |= = ||)(| |__||= ==|_|_|_|_|=|   )";
	gotoxy(a,b+11); cout<<R"( |= ==|"""" """"| = =____= =_==|   )";
	gotoxy(a,b+12); cout<<R"( |== =| __   __ |= =| [] | |^|=|   )";
	gotoxy(a,b+13); cout<<R"( |= ==||/\| |==||== |   o|=|_| |   )";
	gotoxy(a,b+14); cout<<R"( |== =||)(| |  || = | == | == =|   )";
	gotoxy(a,b+15); cout<<R"( |= ==|"""" """"|== |____|= = =|DBN)";
	gotoxy(a,b+16); cout<<R"( """""|_________|"""'====`""""""   )";
}


void Image_Teaching(int a,int b){

foreColor(7);
	
gotoxy(a,b+1);  cout<<R"(                               .-----------------------------. )";
gotoxy(a,b+2);  cout<<R"(                              |    ANT LIBRARY MANAGEMENT    |)";
gotoxy(a,b+3);  cout<<R"(    __________________________|    SYSTEM BY ANT'S STUDENT   |)";
gotoxy(a,b+4);  cout<<R"(   |  _________________________'-------------,---------------')";
gotoxy(a,b+5);  cout<<R"(   | |                         ____         /  | |)";
gotoxy(a,b+6);  cout<<R"(   | |  ANT TRAINING          (___ \           | |)";
gotoxy(a,b+7);  cout<<R"(   | |                       ( (..) )          | |)";
gotoxy(a,b+8);  cout<<R"(   | |                  \\\' |( < ,) )         | |)";
gotoxy(a,b+9);  cout<<R"(   | |                   `|_\_\)--(  )         | |)";
gotoxy(a,b+10); cout<<R"(   | |                    \  ,"""(___)         | |)";
gotoxy(a,b+11); cout<<R"(   | |                     `'\_  __  \         | |)";
gotoxy(a,b+12); cout<<R"(   | |                        |    ,  )        | |)";
gotoxy(a,b+13); cout<<R"(   | |_______________________ /  _/  /_________| |)";
gotoxy(a,b+14); cout<<R"(   |________________________ I ///\./I___________|   )";  
gotoxy(a,b+15); cout<<R"(                             |       |                   )";
gotoxy(a,b+16); cout<<R"(                             |       |                                              )";
gotoxy(a,b+17); cout<<R"(                             '-.._..-'   .---------------------------------------.  )";
gotoxy(a,b+18); cout<<R"(                               | |  )   (  PRESS [ESC] BACK | [ENTER] TO DO MORE. ) )";
gotoxy(a,b+19); cout<<R"(                              _| | /     '---------------------------------------'  )";
gotoxy(a,b+20); cout<<R"(                            .'_.Ã_/7                                                )";
}

void Image_IsertBook(int a,int b){

foreColor(4);gotoxy(a,b+1);  cout<<R"(  ___ _   _ ____  _____ ____ _____ )";foreColor(7);cout<<R"(  ____   ___   ___  _  __)";
foreColor(4);gotoxy(a,b+2);  cout<<R"( |_ _| \ | / ___|| ____|  _ \_   _|)";foreColor(7);cout<<R"( | __ ) / _ \ / _ \| |/ /)";
foreColor(4);gotoxy(a,b+3);  cout<<R"(  | ||  \| \___ \|  _| | |_) || |  )";foreColor(7);cout<<R"( |  _ \| | | | | | | ' / )";
foreColor(7);gotoxy(a,b+4);  cout<<R"(  | || |\  |___) | |___|  _ < | |  )";foreColor(4);cout<<R"( | |_) | |_| | |_| | . \ )";
foreColor(7);gotoxy(a,b+5);  cout<<R"( |___|_| \_|____/|_____|_| \_\|_|  )";foreColor(4);cout<<R"( |____/ \___/ \___/|_|\_\)";
                                                            
}

void BoxInputBook(){
	
	drawBoxDoubleLineWithBG(44,12,3,13,85);
	drawBoxDoubleLineWithBG(47,11,3,15,119);
	drawBoxDoubleLineWithBG(50,10,3,17,136);
	
	drawBoxDoubleLineWithBG(123,12,3,13,85);
	drawBoxDoubleLineWithBG(120,11,3,15,119);
	drawBoxDoubleLineWithBG(117,10,3,17,136);
	
	//big outside box
	drawBoxDoubleLineWithBG(53,9,64,19,255);
	
	drawBoxDoubleLineWithBG(55,10,25,1,153);
	drawBoxDoubleLineWithBG(85,10,30,1,153);
	
	drawBoxDoubleLineWithBG(55,14,25,1,153);
	drawBoxDoubleLineWithBG(85,14,30,1,153);
	
	drawBoxDoubleLineWithBG(55,18,25,1,153);
	drawBoxDoubleLineWithBG(85,18,30,1,153);
	
	drawBoxDoubleLineWithBG(55,22,25,1,153);
	drawBoxDoubleLineWithBG(85,22,30,1,153);
	
	drawBoxDoubleLineWithBG(55,26,25,1,153);	
	drawBoxDoubleLineWithBG(85,26,30,1,153);
	
//	drawBoxDoubleLineWithBG(55,30,25,1,153);
//	drawBoxDoubleLineWithBG(85,30,30,1,153);
	
	foreColor(159); gotoxy(57,11); cout<<"ENTER BOOK ID        : ";
	foreColor(159); gotoxy(57,15); cout<<"ENTER AUTHOR NAME    : ";
	foreColor(159); gotoxy(57,19); cout<<"ENTER BOOK TITLE     : ";
	foreColor(159); gotoxy(57,23); cout<<"ENTER BOOK QTY       : ";
	foreColor(159); gotoxy(57,27); cout<<"ENTER BOOK TYPE      : ";
	
	
}

////////////// 02-04-2024 ///////////////

void TextViewBook(int a,int b){

foreColor(7);gotoxy(a,b+1);  cout<<R"( _    _____________       __   ____  ____  ____  __ __)";
foreColor(7);gotoxy(a,b+2);  cout<<R"(| |  / /  _/ ____/ |     / /  / __ )/ __ \/ __ \/ //_/)";
foreColor(7);gotoxy(a,b+3);  cout<<R"(| | / // // __/  | | /| / /  / __  / / / / / / / ,<   )";
foreColor(4);gotoxy(a,b+4);  cout<<R"(| |/ // // /___  | |/ |/ /  / /_/ / /_/ / /_/ / /| |  )";
foreColor(4);gotoxy(a,b+5);  cout<<R"(|___/___/_____/  |__/|__/  /_____/\____/\____/_/ |_|  )";
                                                      

}

void TextSearchBook(int a,int b){

foreColor(7);gotoxy(a,b+1);  cout<<R"(   _____ _________    ____  ________  __   ____  ____  ____  __ __)";
foreColor(7);gotoxy(a,b+2);  cout<<R"(  / ___// ____/   |  / __ \/ ____/ / / /  / __ )/ __ \/ __ \/ //_/)";
foreColor(7);gotoxy(a,b+3);  cout<<R"(  \__ \/ __/ / /| | / /_/ / /   / /_/ /  / __  / / / / / / / ,<   )";
foreColor(4);gotoxy(a,b+4);  cout<<R"( ___/ / /___/ ___ |/ _, _/ /___/ __  /  / /_/ / /_/ / /_/ / /| |  )";
foreColor(4);gotoxy(a,b+5);  cout<<R"(/____/_____/_/  |_/_/ |_|\____/_/ /_/  /_____/\____/\____/_/ |_|  )";
                                                                  

}

void TextUpdateBook(int a,int b){
	
foreColor(7);gotoxy(a,b+1);  cout<<R"(   __  ______  ____  ___  ____________   ____  ____  ____  __ __)";
foreColor(7);gotoxy(a,b+2);  cout<<R"(  / / / / __ \/ __ \/   |/_  __/ ____/  / __ )/ __ \/ __ \/ //_/)";
foreColor(7);gotoxy(a,b+3);  cout<<R"( / / / / /_/ / / / / /| | / / / __/    / __  / / / / / / / ,<   )";
foreColor(4);gotoxy(a,b+4);  cout<<R"(/ /_/ / ____/ /_/ / ___ |/ / / /___   / /_/ / /_/ / /_/ / /| |  )";
foreColor(4);gotoxy(a,b+5);  cout<<R"(\____/_/   /_____/_/  |_/_/ /_____/  /_____/\____/\____/_/ |_|  )";
            
}

void TextImportBook(int a,int b){
	
foreColor(7);gotoxy(a,b+1);  cout<<R"(    ______  _______  ____  ____  ______   ____  ____  ____  __ __)";
foreColor(7);gotoxy(a,b+2);  cout<<R"(   /  _/  |/  / __ \/ __ \/ __ \/_  __/  / __ )/ __ \/ __ \/ //_/)";
foreColor(7);gotoxy(a,b+3);  cout<<R"(   / // /|_/ / /_/ / / / / /_/ / / /    / __  / / / / / / / ,<   )";
foreColor(4);gotoxy(a,b+4);  cout<<R"( _/ // /  / / ____/ /_/ / _, _/ / /    / /_/ / /_/ / /_/ / /| |  )";
foreColor(4);gotoxy(a,b+5);  cout<<R"(/___/_/  /_/_/    \____/_/ |_| /_/    /_____/\____/\____/_/ |_|  )";
                                                                 
}

void AsciiBorrowBook(int a,int b){
	
foreColor(7);gotoxy(a,b+1);  cout<<R"(    ____  ____  ____  ____  ____ _       __   ____  ____  ____  __ __)";
foreColor(7);gotoxy(a,b+2);  cout<<R"(   / __ )/ __ \/ __ \/ __ \/ __ \ |     / /  / __ )/ __ \/ __ \/ //_/)";
foreColor(7);gotoxy(a,b+3);  cout<<R"(  / __  / / / / /_/ / /_/ / / / / | /| / /  / __  / / / / / / / ,<   )";
foreColor(4);gotoxy(a,b+4);  cout<<R"( / /_/ / /_/ / _, _/ _, _/ /_/ /| |/ |/ /  / /_/ / /_/ / /_/ / /| |  )";
foreColor(4);gotoxy(a,b+5);  cout<<R"(/_____/\____/_/ |_/_/ |_|\____/ |__/|__/  /_____/\____/\____/_/ |_|  )";
                                                                     

}

void TextDeleteBook(int a,int b){
	
foreColor(7);gotoxy(a,b+1);  cout<<R"(    ____  ________    __________________   ____  ____  ____  __ __)";
foreColor(7);gotoxy(a,b+2);  cout<<R"(   / __ \/ ____/ /   / ____/_  __/ ____/  / __ )/ __ \/ __ \/ //_/)";
foreColor(7);gotoxy(a,b+3);  cout<<R"(  / / / / __/ / /   / __/   / / / __/    / __  / / / / / / / ,<   )";
foreColor(4);gotoxy(a,b+4);  cout<<R"( / /_/ / /___/ /___/ /___  / / / /___   / /_/ / /_/ / /_/ / /| |  )";
foreColor(4);gotoxy(a,b+5);  cout<<R"(/_____/_____/_____/_____/ /_/ /_____/  /_____/\____/\____/_/ |_|  )";
                                                                  

}

void ViewGraph(int a,int b){
	
foreColor(7);gotoxy(a,b+1);  cout<<R"( _    _____________       __   __________  ___    ____  __  __)";
foreColor(7);gotoxy(a,b+2);  cout<<R"(| |  / /  _/ ____/ |     / /  / ____/ __ \/   |  / __ \/ / / /)";
foreColor(7);gotoxy(a,b+3);  cout<<R"(| | / // // __/  | | /| / /  / / __/ /_/ / /| | / /_/ / /_/ / )";
foreColor(4);gotoxy(a,b+4);  cout<<R"(| |/ // // /___  | |/ |/ /  / /_/ / _, _/ ___ |/ ____/ __  /  )";
foreColor(4);gotoxy(a,b+5);  cout<<R"(|___/___/_____/  |__/|__/   \____/_/ |_/_/  |_/_/   /_/ /_/   )";
                                            
}

void BackMenu(int a,int b){

foreColor(7);gotoxy(a,b+1);  cout<<R"(    ____  ___   ________ __    __  __________   ____  __)";
foreColor(7);gotoxy(a,b+2);  cout<<R"(   / __ )/   | / ____/ //_/   /  |/  / ____/ | / / / / /)";
foreColor(7);gotoxy(a,b+3);  cout<<R"(  / __  / /| |/ /   / ,<     / /|_/ / __/ /  |/ / / / / )";
foreColor(4);gotoxy(a,b+4);  cout<<R"( / /_/ / ___ / /___/ /| |   / /  / / /___/ /|  / /_/ /  )";
foreColor(4);gotoxy(a,b+5);  cout<<R"(/_____/_/  |_\____/_/ |_|  /_/  /_/_____/_/ |_/\____/   )";
                                                        

}

void BorderBoxSearch(int a,int b){
	
setcursor(0,0);
foreColor(7);
gotoxy(a,b+1);  cout<<R"(     _______________________________________________________        )";
gotoxy(a,b+2);  cout<<R"(    /\                                                      \       )";
gotoxy(a,b+3);  cout<<R"((O)ANT)><><><><><><><><><><><><><><><><><><><><><><><><><><><)==(O) )";
gotoxy(a,b+4);  cout<<R"(    \/''''''''''''''''''''''''''''''''''''''''''''''''''''''/       )";
gotoxy(a,b+5);  cout<<R"(    (                                                      (        )";
gotoxy(a,b+6);  cout<<R"(     )                                                      )       )";
gotoxy(a,b+7);  cout<<R"(    (                                                      (        )";
gotoxy(a,b+8);  cout<<R"(     )                                                      )       )";
gotoxy(a,b+9);  cout<<R"(    (                                                      (        )";
gotoxy(a,b+10); cout<<R"(     )                                                      )       )";
gotoxy(a,b+11); cout<<R"(    (                                                      (        )";
gotoxy(a,b+12); cout<<R"(     )                                                      )       )";
gotoxy(a,b+13); cout<<R"(    (                                                      (        )";
gotoxy(a,b+14); cout<<R"(     )                                                      )       )";
gotoxy(a,b+15); cout<<R"(    (                                                      (        )";
gotoxy(a,b+16); cout<<R"(     )                                                      )       )";
gotoxy(a,b+17); cout<<R"(    (                                                      (        )";
gotoxy(a,b+18); cout<<R"(     )                                                      )       )";
gotoxy(a,b+19); cout<<R"(    (                                                      (        )";
gotoxy(a,b+20); cout<<R"(    /\''''''''''''''''''''''''''''''''''''''''''''''''''''''\       )";
gotoxy(a,b+21); cout<<R"((O)ANT)><><><><><><><><><><><><><><><><><><><><><><><><><><><)==(O) )";
gotoxy(a,b+22); cout<<R"(    \/______________________________________________________/       )";

foreColor(3); gotoxy(a+10,b+6); cout<<"ENTER BOOK ID        : ";
foreColor(3); gotoxy(a+10,b+9); cout<<"ENTER AUTHOR NAME    : ";
foreColor(3); gotoxy(a+10,b+12);cout<<"ENTER BOOK TITLE     : ";
foreColor(3); gotoxy(a+10,b+15);cout<<"ENTER BOOK QTY       : ";
foreColor(3); gotoxy(a+10,b+18);cout<<"ENTER BOOK TYPE      : ";

foreColor(6); gotoxy(a+5,b+24);cout<<"PRESS [ ESC ] TO BACK | PRESS [ ENTER ] TO SEARCH MORE.";

}

////////////////// 02-04-2024 design update /////////////////

void BoxUpdateBook(int a,int b){
	
foreColor(7);	
gotoxy(a,b+1);  cout<<R"(   __________________________________________________  )";
gotoxy(a,b+2);  cout<<R"( / \                                                 \.)";
gotoxy(a,b+3);  cout<<R"(|   |                                                |.)";
gotoxy(a,b+4);  cout<<R"( \_ |                                                |.)";
gotoxy(a,b+5);  cout<<R"(    |                                                |.)";
gotoxy(a,b+6);  cout<<R"(    |                                                |.)";
gotoxy(a,b+7);  cout<<R"(    |                                                |.)";
gotoxy(a,b+8);  cout<<R"(    |                                                |.)";
gotoxy(a,b+9);  cout<<R"(    |                                                |.)";
gotoxy(a,b+10); cout<<R"(    |                                                |.)";
gotoxy(a,b+11); cout<<R"(    |                                                |.)";
gotoxy(a,b+12); cout<<R"(    |                                                |.)";
gotoxy(a,b+13); cout<<R"(    |                                                |.)";
gotoxy(a,b+14); cout<<R"(    |                                                |.)";
gotoxy(a,b+15); cout<<R"(    |                                                |.)";
gotoxy(a,b+16); cout<<R"(    |   _____________________________________________|___)";
gotoxy(a,b+17); cout<<R"(    |  /                                                /.)";
gotoxy(a,b+18); cout<<R"(    \_/ANT_____________________________________________/. )";

foreColor(3); gotoxy(a+10,b+3); cout<<"ENTER BOOK ID     : ";
foreColor(3); gotoxy(a+10,b+6); cout<<"ENTER AUTHOR NAME : ";
foreColor(3); gotoxy(a+10,b+9);cout<<"ENTER BOOK TITLE  : ";
foreColor(3); gotoxy(a+10,b+12);cout<<"ENTER BOOK QTY    : ";
foreColor(3); gotoxy(a+10,b+15);cout<<"ENTER BOOK TYPE   : ";

//foreColor(3); gotoxy(90,15);cout<<"ENTER BOOK TYPE   : ";

foreColor(6); gotoxy(a+5,b+22);cout<<"PRESS [ ESC ] TO BACK | PRESS [ ENTER ] TO UPDATE MORE.";	

}

void DeleteUnsuccess(int a,int b){
	
foreColor(7);
gotoxy(a+5,b+1);  cout<<R"(  ___ ___    _  _  ___ _____   ___ ___  _   _ _  _ ___  _ )";
gotoxy(a+5,b+2);  cout<<R"( |_ _|   \  | \| |/ _ \_   _| | __/ _ \| | | | \| |   \| |)";
foreColor(3);
gotoxy(a+5,b+3);  cout<<R"(  | || |) | | .` | (_) || |   | _| (_) | |_| | .` | |) |_|)";
gotoxy(a+5,b+4);  cout<<R"( |___|___/  |_|\_|\___/ |_|   |_| \___/ \___/|_|\_|___/(_))";
foreColor(3);                                                          
gotoxy(a,b+6);  cout<<R"(  ___  ___ _    ___ _____ ___   _   _ _  _ ___ _   _  ___ ___ ___ ___ ___ _ )";
gotoxy(a,b+7);  cout<<R"( |   \| __| |  | __|_   _| __| | | | | \| / __| | | |/ __/ __| __/ __/ __| |)";
foreColor(7);
gotoxy(a,b+8);  cout<<R"( | |) | _|| |__| _|  | | | _|  | |_| | .` \__ \ |_| | (_| (__| _|\__ \__ \_|)";
gotoxy(a,b+9);  cout<<R"( |___/|___|____|___| |_| |___|  \___/|_|\_|___/\___/ \___\___|___|___/___(_))";
                                                                            

}

void Image_sadDeleUn(int a,int b){

foreColor(7);
gotoxy(a,b+1);  cout<<R"(             @      @             )";
gotoxy(a,b+2);  cout<<R"(     / \     { _____}      / \    )";
gotoxy(a,b+3);  cout<<R"(   /  |  \___/*******\___/  |  \  )";
gotoxy(a,b+4);  cout<<R"(  (   I  /   ~   '   ~   \  I   ) )";
gotoxy(a,b+5);  cout<<R"(   \  |  |   0       0   |  |  /  )";
gotoxy(a,b+6);  cout<<R"(     \   |       A       |   /    )";
gotoxy(a,b+7);  cout<<R"(       \__    _______    __/      )";
gotoxy(a,b+8);  cout<<R"(          \_____________/         )";
gotoxy(a,b+9);  cout<<R"(    _-------*         *-------_    )";
gotoxy(a,b+10);  cout<<R"(   /  /---      ANT       ---\  \   )";
gotoxy(a,b+11);  cout<<R"( /  /     (   LIBRARY   )     \  \  )";
gotoxy(a,b+12);  cout<<R"({  (     (    SYSTEM!    )     )  } )";
gotoxy(a,b+13);  cout<<R"( \  \    |               |    /  /  )";
gotoxy(a,b+14);  cout<<R"(   \  \  |               |  /  /  )";
gotoxy(a,b+15);  cout<<R"(    **** |               | ****  )"; 
gotoxy(a,b+16);  cout<<R"(   //|\\  \_____________/  //|\\ )";
gotoxy(a,b+17);  cout<<R"(   *         '*** ***'         * )";
gotoxy(a,b+18);  cout<<R"(  ***.       .*** ***.       .***)";
}


void bookandpeopleimage(int a,int b){
	
    foreColor(7);	
	gotoxy(a,b+1);     cout<<R"(             .--.   _                )";
    gotoxy(a,b+2);     cout<<R"(         .---|__| .((\=.             )";
    gotoxy(a,b+3);     cout<<R"(      .--|===|--|/    ,(,            )";
    gotoxy(a,b+4);     cout<<R"(      |  |===|  |\      y            )";
    gotoxy(a,b+5);     cout<<R"(      |%%|   |  | `.__,'             )";
    gotoxy(a,b+6);     cout<<R"(      |%%|   |  | /  \\\             )";
    gotoxy(a,b+7);     cout<<R"(      |  |   |  |/|  | \`----.       )";
    gotoxy(a,b+8);     cout<<R"(      |  |   |  ||\  \  |___.'_      )";
    foreColor(4);
    gotoxy(a,b+9);     cout<<R"(     _|  |   |__||,\  \-+-._.' )_    )";
    gotoxy(a,b+10);    cout<<R"(    / |  |===|--|\  \  \      /  \   )";
    gotoxy(a,b+11);    cout<<R"(   /  `--^---'--' `--`-'---^-'    \  )";
    gotoxy(a,b+12);    cout<<R"(  '================================` )";
    
    foreColor(7);
    gotoxy(a-10,b+14);  cout<<R"(  ___ ___    _  _  ___ _____   ___ ___  _   _ _  _ ___  _ )";
	gotoxy(a-10,b+15);  cout<<R"( |_ _|   \  | \| |/ _ \_   _| | __/ _ \| | | | \| |   \| |)";
	foreColor(4);
	gotoxy(a-10,b+16);  cout<<R"(  | || |) | | .` | (_) || |   | _| (_) | |_| | .` | |) |_|)";
	gotoxy(a-10,b+17);  cout<<R"( |___|___/  |_|\_|\___/ |_|   |_| \___/ \___/|_|\_|___/(_))";
	
}
void Image_Import(int a,int b){
foreColor(7);
gotoxy(a,b+1);  cout<<R"(                /|  /|  ----------------------------------------)";
gotoxy(a,b+2);  cout<<R"(                ||__||  |                                      |)";
gotoxy(a,b+3);  cout<<R"(               /   O O\__                                      |)";
gotoxy(a,b+4);  cout<<R"(              /          \                                     |)";
gotoxy(a,b+5);  cout<<R"(             /      \     \                                    |)";
gotoxy(a,b+6);  cout<<R"(            /   _    \     \ -----------------------------------)";
gotoxy(a,b+7);  cout<<R"(           /    |\____\     \      ||)";
gotoxy(a,b+8);  cout<<R"(          /     | | | |\____/      ||)";
gotoxy(a,b+9);  cout<<R"(         /       \| | | |/ |     __||)";
gotoxy(a,b+10);  cout<<R"(        /  /  \   -------  |_____| ||)";
gotoxy(a,b+11);  cout<<R"(       /   |   |           |       --|)";
gotoxy(a,b+12);  cout<<R"(       |   |   |           |_____  --|)";
gotoxy(a,b+13);  cout<<R"(       |  |_|_|_|          |     \----)";
gotoxy(a,b+14);  cout<<R"(       /\                  |)";
gotoxy(a,b+15);  cout<<R"(      / /\        |        /)";
gotoxy(a,b+16);  cout<<R"(     / /  |       |       |)";
gotoxy(a,b+17);  cout<<R"( ___/ /   |       |       |)";
gotoxy(a,b+18);  cout<<R"(|____/    c_c_c_C/ \C_c_c_c)";
}
void Outofstock(int a,int b){
foreColor(3);
gotoxy(a,b+1);  cout<<R"(  ____   ___   ___  _  __   ___  _   _ _____    ___  _____   ____ _____ ___   ____ _  __)";
gotoxy(a,b+2);  cout<<R"( | __ ) / _ \ / _ \| |/ /  / _ \| | | |_   _|  / _ \|  ___| / ___|_   _/ _ \ / ___| |/ /)";
gotoxy(a,b+3);  cout<<R"( |  _ \| | | | | | | ' /  | | | | | | | | |   | | | | |_    \___ \ | || | | | |   | ' / )";
foreColor(1);
gotoxy(a,b+4);  cout<<R"( | |_) | |_| | |_| | . \  | |_| | |_| | | |   | |_| |  _|    ___) || || |_| | |___| . \ )";
gotoxy(a,b+5);  cout<<R"( |____/ \___/ \___/|_|\_\  \___/ \___/  |_|    \___/|_|     |____/ |_| \___/ \____|_|\_\)";
                                                                                        

}

void AsciiReturnBook(int a,int b){

foreColor(7); 
gotoxy(a,b+1);  cout<<R"(    ____  ______________  ______  _   __   ____  ____  ____  __ __)";
gotoxy(a,b+2);  cout<<R"(   / __ \/ ____/_  __/ / / / __ \/ | / /  / __ )/ __ \/ __ \/ //_/)";
gotoxy(a,b+3);  cout<<R"(  / /_/ / __/   / / / / / / /_/ /  |/ /  / __  / / / / / / / ,<   )";
foreColor(4);
gotoxy(a,b+4);  cout<<R"( / _, _/ /___  / / / /_/ / _, _/ /|  /  / /_/ / /_/ / /_/ / /| |  )";
gotoxy(a,b+5);  cout<<R"(/_/ |_/_____/ /_/  \____/_/ |_/_/ |_/  /_____/\____/\____/_/ |_|  )";

}

void AciiMemberBorrow(int a,int b){
foreColor(7);
gotoxy(a,b+1);cout<<R"(    __  ___________  _______  __________     ____  ____  ____  ____  ____ _       __)";
gotoxy(a,b+2);cout<<R"(   /  |/  / ____/  |/  / __ )/ ____/ __ \   / __ )/ __ \/ __ \/ __ \/ __ \ |     / /)";
gotoxy(a,b+3);cout<<R"(  / /|_/ / __/ / /|_/ / __  / __/ / /_/ /  / __  / / / / /_/ / /_/ / / / / | /| / / )";
foreColor(4);
gotoxy(a,b+4);cout<<R"( / /  / / /___/ /  / / /_/ / /___/ _, _/  / /_/ / /_/ / _, _/ _, _/ /_/ /| |/ |/ /  )";
gotoxy(a,b+5);cout<<R"(/_/  /_/_____/_/  /_/_____/_____/_/ |_|  /_____/\____/_/ |_/_/ |_|\____/ |__/|__/   )";
                                                                                    

}
void Image_houseBorrow(int a,int b){
foreColor(2);	
gotoxy(a,b+2);cout<<R"(                                   /\                                )";
gotoxy(a,b+3);cout<<R"(                              /\  //\\                               )";
gotoxy(a,b+4);cout<<R"(                       /\    //\\///\\\        /\                    )";
gotoxy(a,b+5);cout<<R"(                      //\\  ///\////\\\\  /\  //\\                   )";
gotoxy(a,b+6);cout<<R"(         /\          /  ^ \/^ ^/^  ^  ^ \/^ \/  ^ \                  )";
gotoxy(a,b+7);cout<<R"(        / ^\    /\  / ^   /  ^/ ^ ^ ^   ^\ ^/  ^^  \                 )";
gotoxy(a,b+8);cout<<R"(       /^   \  / ^\/ ^ ^   ^ / ^  ^    ^  \/ ^   ^  \       *        )";
gotoxy(a,b+9);cout<<R"(      /  ^ ^ \/^  ^\ ^ ^ ^   ^  ^   ^   ____  ^   ^  \     /|\       )";
foreColor(7);
gotoxy(a,b+10);cout<<R"(     / ^ ^  ^ \ ^  _\___________________|  |_____^ ^  \   /||o\      )";
gotoxy(a,b+11);cout<<R"(    / ^^  ^ ^ ^\  /______________________________\ ^ ^ \ /|o|||\     )";
gotoxy(a,b+12);cout<<R"(   /  ^  ^^ ^ ^  /________________________________\  ^  /|||||o|\    )";
gotoxy(a,b+13);cout<<R"(  /^ ^  ^ ^^  ^    ||___|___||||||||||||___|__|||      /||o||||||\   )";
gotoxy(a,b+14);cout<<R"( / ^   ^   ^    ^  ||___|___||||||||||||___|__|||          | |       )";
gotoxy(a,b+15);cout<<R"(/ ^ ^ ^  ^  ^  ^   ||||||||||||||||||||||||||||||oooooooooo| |ooooooo)";
gotoxy(a,b+16);cout<<R"(ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo)";
}

void Text_NoMemberBorrow(int a,int b){
 foreColor(4);	
 gotoxy(a,b+1);cout<<R"( _   _  ___    __  __ _____ __  __ ____  _____ ____    ____   ___  ____  ____   _____        __)";
 gotoxy(a,b+2);cout<<R"(| \ | |/ _ \  |  \/  | ____|  \/  | __ )| ____|  _ \  | __ ) / _ \|  _ \|  _ \ / _ \ \      / /)";
 gotoxy(a,b+3);cout<<R"(|  \| | | | | | |\/| |  _| | |\/| |  _ \|  _| | |_) | |  _ \| | | | |_) | |_) | | | \ \ /\ / / )";
 foreColor(7);
 gotoxy(a,b+4);cout<<R"(| |\  | |_| | | |  | | |___| |  | | |_) | |___|  _ <  | |_) | |_| |  _ <|  _ <| |_| |\ V  V /  )";
 gotoxy(a,b+5);cout<<R"(|_| \_|\___/  |_|  |_|_____|_|  |_|____/|_____|_| \_\ |____/ \___/|_| \_\_| \_\\___/  \_/\_/   )";
                                                                                                

}

void Text_ImageMemberRecord(int a,int b){
 foreColor(4);	
gotoxy(a,b+1);cout<<R"(  _   _  ___    __  __ _____ __  __ ____  _____ ____    ____  _____ ____ ___  ____  ____  )";
gotoxy(a,b+2);cout<<R"( | \ | |/ _ \  |  \/  | ____|  \/  | __ )| ____|  _ \  |  _ \| ____/ ___/ _ \|  _ \|  _ \ )";
gotoxy(a,b+3);cout<<R"( |  \| | | | | | |\/| |  _| | |\/| |  _ \|  _| | |_) | | |_) |  _|| |  | | | | |_) | | | |)";
 foreColor(7);	
gotoxy(a,b+4);cout<<R"( | |\  | |_| | | |  | | |___| |  | | |_) | |___|  _ <  |  _ <| |__| |__| |_| |  _ <| |_| |)";
gotoxy(a,b+5);cout<<R"( |_| \_|\___/  |_|  |_|_____|_|  |_|____/|_____|_| \_\ |_| \_\_____\____\___/|_| \_\____/ )";
                                                                                          

}
void Anime_welcome(int a,int b){
	
	setcursor(0,0);
	
	foreColor(7);
	
	gotoxy(a,b+1);cout<<R"( __   __  ___   _______  ___       ______    ______   ___      ___   _______  )";
	gotoxy(a,b+2);cout<<R"(|"  |/  \|  "| /"     "||"  |     /" _  "\  /    " \ |"  \    /"  | /"     "| )";
	gotoxy(a,b+3);cout<<R"(|'  /    \:  |(: ______)||  |    (: ( \___)// ____  \ \   \  //   |(: ______) )";
	gotoxy(a,b+4);cout<<R"(|: /'        | \/    |  |:  |     \/ \    /  /    ) :)/\\  \/.    | \/    |   )";
	foreColor(4);
	gotoxy(a,b+5);cout<<R"( \//  /\'    | // ___)_  \  |___  //  \ _(: (____/ //|: \.        | // ___)_  )";
	gotoxy(a,b+6);cout<<R"( /   /  \\   |(:      "|( \_|:  \(:   _) \\        / |.  \    /:  |(:      "| )";
	gotoxy(a,b+7);cout<<R"(|___/    \___| \_______) \_______)\_______)\"_____/  |___|\__/|___| \_______) )";

}
void Ant_library(int a,int b){
	
	setcursor(0,0);
	
	foreColor(7);
	
	gotoxy(a,b+1);cout<<R"(      __      _____  ___  ___________      ___        __     _______    _______        __        _______   ___  ___  )";
	gotoxy(a,b+2);cout<<R"(     /""\    (\"   \|"  \("     _   ")    |"  |      |" \   |   _  "\  /"      \      /""\      /"      \ |"  \/"  | )";
	gotoxy(a,b+3);cout<<R"(    /    \   |.\\   \    |)__/  \\__/     ||  |      ||  |  (. |_)  :)|:        |    /    \    |:        | \   \  /  )";
	gotoxy(a,b+4);cout<<R"(   /' /\  \  |: \.   \\  |   \\_ /        |:  |      |:  |  |:     \/ |_____/   )   /' /\  \   |_____/   )  \\  \/   )";
	foreColor(4);
	gotoxy(a,b+5);cout<<R"(  //  __'  \ |.  \    \. |   |.  |         \  |___   |.  |  (|  _  \\  //      /   //  __'  \   //      /   /   /    )";
	gotoxy(a,b+6);cout<<R"( /   /  \\  \|    \    \ |   \:  |        ( \_|:  \  /\  |\ |: |_)  :)|:  __   \  /   /  \\  \ |:  __   \  /   /     )";
	gotoxy(a,b+7);cout<<R"((___/    \___)\___|\____\)    \__|         \_______)(__\_|_)(_______/ |__|  \___)(___/    \___)|__|  \___)|___/      )";
	                                                                                                                     

}
void anime_to(int a,int b,int c){
	
	foreColor(7);	
	gotoxy(a,b+1);cout<<R"( .-') _     )";gotoxy(c,b+1);cout<<R"(                 )";
	gotoxy(a,b+2);cout<<R"((  OO) )    )";gotoxy(c,b+2);cout<<R"(                 )";
	gotoxy(a,b+3);cout<<R"(/     '._   )";gotoxy(c,b+3);cout<<R"(     .-'),-----. )";
	gotoxy(a,b+4);cout<<R"(|'--...__)  )";gotoxy(c,b+4);cout<<R"(    ( OO'  .-.  ')";
	gotoxy(a,b+5);cout<<R"('--.  .--'  )";gotoxy(c,b+5);cout<<R"(    /   |  | |  |)";
	gotoxy(a,b+6);cout<<R"(   |  |     )";gotoxy(c,b+6);cout<<R"(    \_) |  |\|  |)";
	gotoxy(a,b+7);cout<<R"(   |  |     )";gotoxy(c,b+7);cout<<R"(      \ |  | |  |)";
	gotoxy(a,b+8);cout<<R"(   |  |     )";gotoxy(c,b+8);cout<<R"(       `'  '-'  ')";
	gotoxy(a,b+9);cout<<R"(   `--'     )";gotoxy(c,b+9);cout<<R"(         `-----' )";

}
void showanimetion(){
	
	for(int i=0;i<40;i++){
		Hconsole::clearBox(0+i,4,80,10,7);
		
		Anime_welcome(0+i,5);
		
		delay(20);
		
	}
	for(int i=0;i<76;i++){
		
		HLine(40,14,0+i,3,219);delay(5);
	}
	for(int i=0;i<6;i++){
		
		VLine(75,14,0+i,3,219);delay(5);
		VLine(76,14,0+i,3,219);delay(5);
	}
	for(int i=0;i<76;i++){
		
		HLine(40,20,0+i,3,219);delay(5);
	}
	
	for(int i=0;i<20;i++){
		
		Hconsole::clearBox(0+i,22,80,10,7);
		
		Ant_library(0+i,21);
		
		delay(20);
		
	}
	for(int i=0;i<10;i++){
		Hconsole::clearBox(20,0+i,10,10,7);
		Hconsole::clearBox(120,0+i,10,10,7);
		anime_to(20,0+i,120);
		
		delay(50);
	}
	delay(70);
	Hconsole::clearBox(0,0,150,40,153);
	Hconsole::clearBox(0,0,150,40,0);
	
}

///////////////////////////////////
#endif