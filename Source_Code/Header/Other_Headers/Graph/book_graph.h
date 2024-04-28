#ifndef BOOK_GRAPH_H
#define BOOK_GRAPH_H

#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"

using namespace std;


using namespace std;

void asciiGraph();

void book_graph(

//books

int totalBook= 1, int borrow = 0,int bookId = 0,
int totalBook1= 1, int borrow1 = 0, int bookId1 = 0,
int totalBook2= 1, int borrow2 = 0, int bookId2 = 0,
int totalBook3= 1, int borrow3 = 0, int bookId3 = 0,
int totalBook4= 1, int borrow4 = 0, int bookId4 = 0
  
){
	asciiGraph();
	
     
	setcursor(false, 0);
	int x = 8;
	
	int steps = (18 * borrow) / totalBook;
	int steps1 = (18 * borrow1) / totalBook1;
	int steps2 = (18 * borrow2) / totalBook2;
	int steps3 = (18 * borrow3) / totalBook3;
	int steps4 = (18 * borrow4) / totalBook4;
	
	
	//calculate percentage
	
	double percentBook = ((double) borrow / totalBook) * 100;
	double percentBook1 = ((double) borrow1 / totalBook1) * 100;
	double percentBook2 = ((double) borrow2 / totalBook2) * 100;
	double percentBook3 = ((double) borrow3 / totalBook3) * 100;
	double percentBook4 = ((double) borrow4 / totalBook4) * 100;
	
	//line
	HLine(10,30, 125,0);
	HLine(10,27, 125,0);
	HLine(10,18, 125,0);
	
	//text
	gotoxy(11, 26); cout<<"0%";
	gotoxy(11, 17); cout<<"50%";
	gotoxy(11, 32); cout<<"ID";
	
	//text detail about graph
	foreColor(7);
	gotoxy(46, 38); cout<<"THE GRAPH DISPLAYS THE MOST READ BOOK IN THE LIBRARY";
	
	
	//box		
	DrawRectangle(10,8,125,26,5);
	
	
	
	drawBoxSingleLineWithBG(20 + x, 28 - steps, 10, steps, 170);
	drawBoxSingleLineWithBG(40 + x, 28 - steps1, 10, steps1, 196); 
	drawBoxSingleLineWithBG(60 + x, 28 - steps2, 10, steps2, 230);
	
	drawBoxSingleLineWithBG(80 + x, 28 - steps3, 10, steps3, 196);
	drawBoxSingleLineWithBG(100 + x,28 - steps4, 10, steps4, 230);
	
	
	//book id
	foreColor(7);
	gotoxy(31, 32); cout<<bookId;
	gotoxy(51, 32); cout<<bookId1;
	gotoxy(71, 32); cout<<bookId2;
	gotoxy(91, 32); cout<<bookId3;
	gotoxy(111, 32); cout<<bookId4;
	
	
	//percentage
	gotoxy(31, 27 - steps); cout << fixed << setprecision(2) << percentBook<<"%";
	gotoxy(51, 27 - steps1); cout<<percentBook1<<"%";
	gotoxy(71, 27 - steps2); cout<<percentBook2<<"%";
	gotoxy(91, 27 - steps3); cout<<percentBook3<<"%";
	gotoxy(111, 27 - steps4); cout<<percentBook4<<"%";
	
	

	
	foreColor(7);
	getch();
}

void asciiGraph(){
	
int x = 50, y = 1;
 gotoxy(x, y++);cout<<R"(   _____ _____            _____  _    _ )";
 gotoxy(x, y++);cout<<R"(  / ____|  __ \     /\   |  __ \| |  | |)";
 gotoxy(x, y++);cout<<R"( | |  __| |__) |   /  \  | |__) | |__| |)";
 gotoxy(x, y++);cout<<R"( | | |_ |  _  /   / /\ \ |  ___/|  __  |)";
 gotoxy(x, y++);cout<<R"( | |__| | | \ \  / ____ \| |    | |  | |)";
 gotoxy(x, y++);cout<<R"(  \_____|_|  \_\/_/    \_\_|    |_|  |_|)";
                                        
                                        

}



#endif
