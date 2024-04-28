#ifndef MEMBER_GRAPH_H
#define MEMBER_GRAPH_H

#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"
using namespace std;


using namespace std;

void asciiGraph();

void member_graph(

int totalMember = 1, int memberId = 0,
				 int amountBorrow = 0,
                  int memberId1 = 0,
                  int amountBorrow1 = 0,
                  int memberId2 = 0, 
                  int amountBorrow2 = 0,
                  int memberId3 = 0, 
                  int amountBorrow3 = 0,
                  int memberId4 = 0,
                  int amountBorrow4 = 0        			  
				  
){
	asciiGraph();
	
     
	setcursor(false, 0);
	int x = 8;
	
	int steps = (18 * amountBorrow) / totalMember;
	int steps1 = (18 * amountBorrow1) / totalMember;
	int steps2 = (18 * amountBorrow2) / totalMember;
	int steps3 = (18 * amountBorrow3) / totalMember;
	int steps4 = (18 * amountBorrow4) / totalMember;
	
	
	//calculate percentage
	
	double percentMember = ((double) amountBorrow / totalMember) * 100;
	double percentMember1 = ((double) amountBorrow1 / totalMember) * 100;
	double percentMember2 = ((double) amountBorrow2 / totalMember) * 100;
	double percentMember3 = ((double) amountBorrow3 / totalMember) * 100;
	double percentMember4 = ((double) amountBorrow4 / totalMember) * 100;
	
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
	gotoxy(46, 37); cout<<"THE GRAPH DISPLAYS THE MOST READ MEMBER IN THE LIBRARY";
	gotoxy(61, 38); cout<<"PRESS [ESC] TO EXIT GRAPH";
	
	
	//box		
	DrawRectangle(10,8,125,26,5);
	
	
	
	drawBoxSingleLineWithBG(20 + x, 28 - steps, 10, steps, 170);
	drawBoxSingleLineWithBG(40 + x, 28 - steps1, 10, steps1, 196); 
	drawBoxSingleLineWithBG(60 + x, 28 - steps2, 10, steps2, 230);
	
	drawBoxSingleLineWithBG(80 + x, 28 - steps3, 10, steps3, 196);
	drawBoxSingleLineWithBG(100 + x,28 - steps4, 10, steps4, 230);
	
	
	//member id
	foreColor(7);
	gotoxy(31, 32); cout<<memberId;
	gotoxy(51, 32); cout<<memberId1;
	gotoxy(71, 32); cout<<memberId2;
	gotoxy(91, 32); cout<<memberId3;
	gotoxy(111, 32); cout<<memberId4;
	
	
	//percentage
	gotoxy(31, 27 - steps); cout << fixed << setprecision(2) << percentMember<<"%";
	gotoxy(51, 27 - steps1); cout<<percentMember1<<"%";
	gotoxy(71, 27 - steps2); cout<<percentMember2<<"%";
	gotoxy(91, 27 - steps3); cout<<percentMember3<<"%";
	gotoxy(111, 27 - steps4); cout<<percentMember4<<"%";
	
	

	
	foreColor(7);
}





#endif
