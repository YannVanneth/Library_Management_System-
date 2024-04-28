#ifndef DESIGN_H
#define DESIGN_H

#include "../ANT_Header/antheaderplusplus.h"
#include "../ANT_Header/antheaderinput.h"
#include "../Other_Headers/Book/book_class.h"
#include "../Design_Header/designproject.h"

//void outPutBooksfromFile();

void bookDesign(){
	
	setcursor(false, 0);
	int x = 30, y = 8;
	int xx = 85;
	int w = 40, h = 3;

	int i = 1;
    
	DrawRectangle(25, 5, 105, 27, 5);
	
	drawBoxSingleLine(x, y, 40, 1);
	drawBoxSingleLine(xx, y, 40, 1);
	
	drawBoxSingleLine(x, y + 5, 40, 1);
	drawBoxSingleLine(xx, y + 5, 40, 1);
	
	drawBoxSingleLine(x, y + 10, 40, 1);
	drawBoxSingleLine(xx, y + 10, 40, 1);
	
	drawBoxSingleLine(x, y + 15, 40, 1);
	drawBoxSingleLine(xx, y + 15, 40, 1);
	
	drawBoxSingleLine(x, y + 20, 40, 1);
	drawBoxSingleLine(xx, y + 20, 40, 1);
	
	
	//text
	
	
	gotoxy(40, 9); cout<<"ENTER BOOK ID    : ";
	gotoxy(40, 14); cout<<"ENTER BOOK AUTHOR: ";
	gotoxy(40, 19); cout<<"ENTER BOOK TITLE : ";
	gotoxy(40, 24); cout<<"ENTER BOOK QTY   : ";
	gotoxy(40, 29); cout<<"ENTER BOOK TYPE  : ";
	
}




//void viewBook(){
//	
//	cls();
////	outPutBooksfromFile();
//	
////	string charr = "press enter to go back to menu.";
////	for(int i = 0; i< charr.length(); i++){
////		charr[i];
////		delay(100);
////	}
//	
//	
//
//
//}

//void updateView(){
//	
//	
//	
//}

#endif