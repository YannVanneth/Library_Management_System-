
#include "Header/ANT_Header/antheaderplusplus.h"
#include "Header/ANT_Header/HinsyOOP_Modifiled.h"
#include "Header/ANT_Header/antheaderinput.h"
#include "Header/Other_Headers/Member/readvector.h" 
#include "Header/Other_Headers/Member/classproject.h"
#include "Header/Design_Header/designproject.h"
#include "Header/Design_Header/design.h"
#include "Header/Design_Header/App_Design.h"
#include "Header/Other_Headers/Member/function.h"
#include "Header/Other_Headers/Member/optionmember.h"
#include "Header/Other_Headers/Member/member_option.h"
#include "Header/Other_Headers/Login/LOGIN_SYSTEM.h"
#include "Header/Other_Headers/Book/borrow_book.h"
#include "Header/Other_Headers/Book/option_book.h"
#include "Header/Other_Headers/Graph/book_graph.h"
#include "Header/Other_Headers/TimeAndDate/dateandtime.h"

using namespace HinsyOOP;

int main(){
	
	ConsoleProperty();
	Hinsy::setFont(16,700,L"Consolas",true);
	
	///////////////////// PREPARE PROJECT //////////////////////////
	showanimetion();
	Main_Interface_Menu();

	getch();
	cls();
	
	return 0;
}