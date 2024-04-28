#ifndef __GRAPH_H__
#define __GRAPH_H__

#include "../../ANT_Header/HinsyOOP.h"
#include <vector>
using namespace HinsyOOP;


//void DrawGraphY(int x, int y, int h, int color = 7, int line = 179){ // y
//	
//	foreColor(color);
//	
//	for(int i = 0; i < h; i++){
//		gotoxy(x - 1,y - i + 1);cout << (char)line;
//		
//	}	
//}
//
//void DrawGraphX(int x, int y, int w, int color = 7, int line = 196){ // x
//	
//	foreColor(color);
//	
//	for(int i = 0; i < w; i++){
//		
//		gotoxy(x + i,y);cout << (char)line;
//		
//	}
//
//}
class Graph{
	  
	  vector<float> top;
	  
	  public:
	  	
	  	//void ...
};


	
void Graph_Book(){
	
	int x = 5,y = 35;
	
	int a = 100; int b = 74; int c = 25; int d = 67;
	
	Hinsy::setcursor(false,0);
	
	Hinsy::setFont(14, 100,L"consolas",1);
	
	// graph point - 
	
	Hinsy::HLine(x,y-8,1,7,195); Hinsy::HLine(x,y-8,110,0,196);   // x graph 
	Hinsy::HLine(x,y-16,1,7,195); Hinsy::HLine(x,y-16,110,0,196); // x graph
	Hinsy::HLine(x,y-24,1,7,195); Hinsy::HLine(x,y-24,110,0,196); // x graph 
	Hinsy::HLine(x,y-32,1,7,195); Hinsy::HLine(x,y-32,110,0,196); // x graph
	
	Hinsy::HLine(x,y-1,a,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+a,y-1); cout << " " << a << " BOOKS";; Hconsole::gotoxy((x+a+2)/2,y-1); Hconsole::setcolor(191); cout << " Member 1";// data a
	Hinsy::HLine(x,y-3,b,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+b,y-3); cout << " " << b << " BOOKS";; Hconsole::gotoxy((x+b+2)/2,y-3); Hconsole::setcolor(191); cout << " Member 2";// data b
	Hinsy::HLine(x,y-5,c,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+c,y-5); cout << " " << c << " BOOKS";; Hconsole::gotoxy((x+c+2)/2,y-5); Hconsole::setcolor(191); cout << " Member 3";// data a
	Hinsy::HLine(x,y-7,d,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+d,y-7); cout << " " << d << " BOOKS"; Hconsole::gotoxy((x+d+2)/2,y-7); Hconsole::setcolor(191); cout << " Member 4";// data b
	Hinsy::HLine(x,y-9,a,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+a,y-9); cout << " " << a << " BOOKS";; Hconsole::gotoxy((x+a+2)/2,y-9); Hconsole::setcolor(191); cout << " Member 5";// data a
	Hinsy::HLine(x,y-11,b,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+b,y-11); cout << " " << b << " BOOKS";; Hconsole::gotoxy((x+b+2)/2,y-11); Hconsole::setcolor(191); cout << " Member 6";// data b
	Hinsy::HLine(x,y-13,c,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+c,y-13); cout << " " << c << " BOOKS";; Hconsole::gotoxy((x+c+2)/2,y-13); Hconsole::setcolor(191); cout << " Member 7";// data a
	Hinsy::HLine(x,y-15,d,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+d,y-15); cout << " " << d << " BOOKS"; Hconsole::gotoxy((x+d+2)/2,y-15); Hconsole::setcolor(191); cout << " Member 8";// data b
	Hinsy::HLine(x,y-17,a,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+a,y-17); cout << " " << a << " BOOKS";; Hconsole::gotoxy((x+a+2)/2,y-17); Hconsole::setcolor(191); cout << " Member 9";// data a
	Hinsy::HLine(x,y-19,b,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+b,y-19); cout << " " << b << " BOOKS";; Hconsole::gotoxy((x+b+2)/2,y-19); Hconsole::setcolor(191); cout << " Member 10";// data b
	Hinsy::HLine(x,y-21,c,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+c,y-21); cout << " " << c << " BOOKS";; Hconsole::gotoxy((x+c+2)/2,y-21); Hconsole::setcolor(191); cout << " Member 11";// data a
	Hinsy::HLine(x,y-23,d,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+d,y-23); cout << " " << d << " BOOKS"; Hconsole::gotoxy((x+d+2)/2,y-23); Hconsole::setcolor(191); cout << " Member 12";// data b
	Hinsy::HLine(x,y-25,a,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+a,y-25); cout << " " << a << " BOOKS";; Hconsole::gotoxy((x+a+2)/2,y-25); Hconsole::setcolor(191); cout << " Member 13";// data a
	Hinsy::HLine(x,y-27,b,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+b,y-27); cout << " " << b << " BOOKS";; Hconsole::gotoxy((x+b+2)/2,y-27); Hconsole::setcolor(191); cout << " Member 14";// data b
	Hinsy::HLine(x,y-29,c,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+c,y-29); cout << " " << c << " BOOKS";; Hconsole::gotoxy((x+c+2)/2,y-29); Hconsole::setcolor(191); cout << " Member 15";// data a
	Hinsy::HLine(x,y-31,d,3,219); Hconsole::setcolor(7); Hconsole::gotoxy(x+d,y-31); cout << " " << d << " BOOKS"; Hconsole::gotoxy((x+d+2)/2,y-31); Hconsole::setcolor(191); cout << " Member 16";// data b	
	// Graph structure table 	
	Hinsy::HLine(x,y,110,7,196); // x graph 
	Hinsy::VLine(x+1,y-34,33,7,179); // y graph
	Hinsy::VLine(x+110,y-34,33,7,179);
	Hinsy::HLine(x,y,1,7,192);
	Hinsy::HLine(x+109,y,1,7,217);
   
    Hinsy::gotoxy(x,y+1);  cout << "0";
    Hinsy::gotoxy(x+23,y+1); cout << "25";
    Hinsy::gotoxy(x+48,y+1); cout << "50";
    Hinsy::gotoxy(x+73,y+1); cout << "75";
    Hinsy::gotoxy(x+98,y+1);  cout << "100";
    
	Hinsy::gotoxy(x,y+3); cout << "SIMPLE GRAPH MOST READER";
	
	// Member list Frame 
	Hinsy::drawBoxDoubleLine(x+112,y-33,30,30,9);
	// member list 
	Hconsole::setcolor(7);
	Hinsy::gotoxy(x+113,y-31); cout << " MOST READER MEMBERS | APRIL";
	
	Hconsole::gotoxy(x+113,y-29); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-27); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-25); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-23); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-21); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-19); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-17); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-15); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-13); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-11); cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-9);  cout << " MEMEBER 1";
	Hconsole::gotoxy(x+113,y-7);  cout << " MEMEBER 1";
	
    // Graph data 
    // if(getborrow >
    
    
 

//    
    // For Book Graph 
    
	// 10 borrow of the month ->  1	  data of graph
	// 100 borrow of the month -> 10  data of graph
	// 200 borrow of the month -> 20  data of graph
	// 300 borrow of the month -> 30  data of graph
	// > 300 borrow of the month -> 30 max data ;

    // For Member Graph 
    
	// 10 borrow of the month -> 5	  data of graph
	// 50 borrow of the month -> 25  data of graph
	// > 60 borrow of the month -> 30 data of the graph max 
	
	// Waiting for Book and member record .../////////////
	
}

//void Graph_Member(){
//	
//	int x = 5,y = 35;
//	
//	int a = 10; int b = 20; int c = 5; int d = 30;
//	
//	setcursor(false,0);
//	
//	Hinsy::setFont(14, 100,L"consolas",1);
//	
//	// graph point - 
//	
//	DrawGraphX(x,y-8,1,7,195); DrawGraphX(x,y-8,140,0,196); // x graph 
//	DrawGraphX(x,y-16,1,7,195); DrawGraphX(x,y-16,140,0,196); // x graph
//	DrawGraphX(x,y-24,1,7,195); DrawGraphX(x,y-24,140,0,196); // x graph 
//	DrawGraphX(x,y-32,1,7,195); DrawGraphX(x,y-32,140,0,196); // x graph
//	
//	DrawGraphX(x,y,140,7,196); // x graph 
//	DrawGraphY(x+1,y-2,33,7,179); // y graph
////	DrawGraphX(x,y,1,7,192); 
//	
//    gotoxy(x-2,y);    cout << "0";
//    gotoxy(x-2,y-8); cout << "25";
//    gotoxy(x-2,y-16); cout << "50";
//    gotoxy(x-2,y-24); cout << "75";
//    gotoxy(x-3,y-32); cout << "100";
//   
//    gotoxy(x+2,y+1);  cout << "Member 1";
//    gotoxy(x+15,y+1); cout << "Member 2";
//    gotoxy(x+30,y+1); cout << "Member 3";
//    gotoxy(x+45,y+1); cout << "Member 4";
//    gotoxy(x+60,y+1);  cout << "Member 5";
//    gotoxy(x+75,y+1); cout << "Member 6";
//    gotoxy(x+90,y+1); cout << "Member 7";
//    gotoxy(x+105,y+1); cout << "Member 8";
//    gotoxy(x+120,y+1); cout << "Member 9";
//    gotoxy(x,y+3); cout << "TOP 9 COMMON READER";
//    // Graph data 
//    // if(getborrow >
//	DrawGraphY(x+6,y-2,a,3,219); // data a 
//	delay(100);
//	DrawGraphY(x+19,y-2,b,3,219); // data b
//	delay(120);
//	DrawGraphY(x+34,y-2,c,3,219); // data c
//	delay(140);
//	DrawGraphY(x+49,y-2,d,3,219); // data d
//    delay(160);
//	DrawGraphY(x+64,y-2,a,3,219); // data a 
//	delay(180);
//	DrawGraphY(x+79,y-2,b,3,219); // data b
//	delay(200);
//	DrawGraphY(x+94,y-2,c,3,219); // data c
//	delay(220);
//	DrawGraphY(x+109,y-2,a,3,219); // data a 
//	delay(240); 
//	DrawGraphY(x+124,y-2,d,3,219); // data d
//    
//    // For Book Graph 
//    
//	// 10 borrow of the month ->  1	  data of graph
//	// 100 borrow of the month -> 10  data of graph
//	// 200 borrow of the month -> 20  data of graph
//	// 300 borrow of the month -> 30  data of graph
//	// > 300 borrow of the month -> 30 max data ;
//
//    // For Member Graph 
//    
//	// 10 borrow of the month -> 5	  data of graph
//	// 50 borrow of the month -> 25  data of graph
//	// > 60 borrow of the month -> 30 data of the graph max 
//	
//	// Waiting for Book and member record .../////////////
//}

#endif
