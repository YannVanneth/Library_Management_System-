/*
	Name: HinsyOOP.h
	Copyright: ANT Technoloy Training Center
	Author: Hinsy Lasong( Mr. Uon Hinsy )
	Date: 15/03/24 13:14
	Description: this header file describe about create own input methods, and others design console as namespace & C++ OOP Style
*/


/* 

"Dear Mr. Uon Hinsy,

We are writing to express our sincerest apologies for making modifications to your library without first seeking your permission.
It was not our intention to act without proper authorization, and we acknowledge that our actions may have caused inconvenience or 
concern. 

We understand the importance of respecting intellectual property rights and honoring the work of others. In hindsight, we 
recognize that we should have reached out to you beforehand to discuss any modifications we wished to make. We deeply regret any 
inconvenience or infringement this may have caused. 

Once again, we apologize for any distress our actions may have caused, and we thank you for your understanding and consideration. 
We look forward to hearing from you at your earliest convenience.

Sincerely,
Mobile_App_G1(Yann Vanneth, Prach Boroeurn, Oeun David)


*/

#ifndef ____HINSYOOP_MODIFILED_H____ 
#define ____HINSYOOP_MODIFILED_H____

//////////////////////////////////////////////////////////////////////////////////
//------------------------------------
#include <windows.h>
#include <stdlib.h>// Covert char array to number: atoi, atof, atod...
#include <string>// Covert std::string to number: stoi, stof, stod...
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstring>
#include <ctype.h>
#include <time.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip>

#include "../Other_Headers/TimeAndDate/dateandtime.h"

using namespace std;
//------------------------------------------------------------------------------------------------------------
namespace HinsyOOP /* Start of Namespace */
{
	class  Hconsole {
		public:
			static void setcolor(DWORD color_code);
			static void gotoxy(int x, int y);
			static void delay(int milliseconds);
			static void setcursor(bool visible, DWORD size);
			static void cls();
			static void drawBoxDoubleLine(int x, int y, int w, int h, int color);
			static void drawBoxSingleLine(int x, int y, int w, int h, int color);
			static void drawBoxSingleLineWithBG(int x, int y, int w, int h, int color);
			static void drawBoxDoubleLineWithBG(int x, int y, int w, int h, int color);
			static void HLine(int x, int y, int w, int color, int line);//widht
			static void VLine(int x, int y, int h, int color, int line);//Height
			static void clearBox(int x, int y, int w, int h, int color);
			static string formatCurrency(const long double&  currency, const unsigned int& precision);
			static long double eraseFormatCurrency(const string&  currency);
	};
	//------------------------------------
	class Hinput {
		protected:
			// Char Array
//			static char* inputDate(char* charArray);
//			static char* inputNumberWithSize(char* charArray,int sizeinput);
//			static char* inputLetterWithSize(char* charArray,int sizeinput);
			static char* inputAll(char* charArray);
			static char* inputNumber(char* charArray);
			static char* inputLetter(char* charArray);
			static char* hidePassword(char* charArray);
			static char* inputQty(char* charArray);
			static char* input4Tel(char* charArray);
		    //  std::string
		    static string inputAll(string&  std_string);
		    static string inputNumber(string&  std_string);
		    static string inputLetter(string&  std_string);
			static string hidePassword(string&  std_string);
			static string input4Tel(string&  std_string);
	};
	//------------------------------------
	class HLVInput: private Hinput
	{
		public:
			//                 Overriding
			// Char Array
			static char* inputDate(char* charArray);
			static char* inputNumberWithSize(char* charArray,int sizeinput);
			static char* inputLetterWithSize(char* charArray,int sizeinput);
			static char* inputAll(char* charArray);
			static char* inputQty(char* charArray);
			static char* inputNumber(char* charArray);
			static char* inputLetter(char* charArray);
			static char* hidePassword(char* charArray);
			static char* input4Tel(char* charArray);
		    //  std::string
		    static string inputAll(string&  std_string);
		    static string inputNumber(string&  std_string);
		    static string inputLetter(string&  std_string);
			static string hidePassword(string&  std_string);
			static string input4Tel(string&  std_string);
					
	};
	//------------------------------------
	class  Hinsy: public Hconsole, public HLVInput {
		public:
			static void setFont(UINT hFontSize, UINT fontWeight, const WCHAR* fontName , bool bMaximumWindow);
			static void setFullScreen(int height, int width);
			static void setFullScreen();
			static void setFullScreenNoScroll();
	};
}/* end of Namespace */
//------------------------------------------------------------------------------------------------------------
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//----------------------------------------------------------------------
// Overriding: Char Array 
//----------------------------------------------------------------------
char* HinsyOOP::HLVInput::inputAll(char* charArray)
{	
	while(true)
	{
		if(strcmp(Hinput::inputAll(charArray), "\0") == 0) continue;
		else break;
	}
	
	return charArray;
}
char* HinsyOOP::HLVInput::inputNumber(char* charArray)
{
	while(true)
	{
		if(strcmp(Hinput::inputNumber(charArray), "\0") == 0) continue;
		else break;
	}
	
	return charArray;
}
//char* HinsyOOP::HLVInput::inputLetter(char* charArray)
//{
//	while(true)
//	{
//		if(strcmp(Hinput::inputLetter(charArray), "\0") == 0) continue;
//		else break;
//	}
//	
//	return charArray;
//}
char* HinsyOOP::HLVInput::hidePassword(char* charArray)
{
	while(true)
	{
		if(strcmp(Hinput::hidePassword(charArray), "\0") == 0) continue;
		else break;
	}
	
	return charArray;
}
char* HinsyOOP::HLVInput::inputQty(char* charArray)
{
	while(true)
	{
		if(strcmp(Hinput::inputQty(charArray), "\0") == 0) continue;
		else break;
	}
	
	return charArray;
}

char* HinsyOOP::HLVInput::input4Tel(char* charArray)
{
	while(true)
	{
		if(strcmp(Hinput::input4Tel(charArray), "\0") == 0) continue;
		else break;
	}
	
	return charArray;
}
//----------------------------------------------------------------------
// Overriding: std::string 
//----------------------------------------------------------------------
string HinsyOOP::HLVInput::inputAll(string&  std_string)
{
	while(true)
	{
		if(Hinput::inputAll(std_string) == "\0") continue;
		else break;
	}
	
	return std_string;
}
string HinsyOOP::HLVInput::inputNumber(string&  std_string)
{
	while(true)
	{
		if(Hinput::inputNumber(std_string) == "\0") continue;
		else break;
	}
	
	return std_string;
}
string HinsyOOP::HLVInput::inputLetter(string&  std_string)
{
	while(true)
	{
		if(Hinput::inputLetter(std_string) == "\0") continue;
		else break;
	}
	
	return std_string;
}
string HinsyOOP::HLVInput::hidePassword(string&  std_string)
{
	while(true)
	{
		if(Hinput::hidePassword(std_string) == "\0") continue;
		else break;
	}
	
	return std_string;
}
string HinsyOOP::HLVInput::input4Tel(string&  std_string)
{
	while(true)
	{
		if(Hinput::input4Tel(std_string) == "\0") continue;
		else break;
	}
	
	return std_string;
}

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//----------------------------------------------------------------------
// Char Array
//----------------------------------------------------------------------
char* HinsyOOP::HLVInput::inputDate(char* charArray)
{
	again:
	char input;
	int index = 0;
	
	while(true)
	{

		char Day[3];
		
		Day[0] = charArray[0];
		Day[1] = charArray[1];
		Day[2] = '\0';
		
		char Month[3];
		
		Month[0] = charArray[3];
		Month[1] = charArray[4];
		Month[2] = '\0';
		
		char year[5];
		
		year[0] = charArray[6];
		year[1] = charArray[7];
		year[2] = charArray[8];
		year[3] = charArray[9];
		year[4] = '\0';
	
		input = getch();   
		
		DateAndTime d;
	
	
		if(input == 13 && index > 9)
		{
			if(d.isValidDate(atoi(Day),atoi(Month),atoi(year)) == true)
			{
			  
			   break;
				
			}
			
			else if(d.isValidDate(atoi(Day),atoi(Month),atoi(year)) == false)
			{
				
				if(input == 8)// key backspace
				{
							
							if(index>0)
							{
								printf("\b \b");
								
								index--;
								charArray[index] = '\0';
							}
				}
				
		    }
		    
		}
		
		else if(input == 8)// key backspace
		{
			
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
						
		if(!(input>= '0' && input<= '9'))
		{	
		   		continue;
		}
		
		
		else
		{
			if(index < 10){ // DD/MM/YYYY 
			    
			    if(index == 2 || index == 5) {
			    	
			    	printf("/");
			    	charArray[index] = '/'; 
					index++;
					 
				}
					

				printf("%c", input);
				
				// add char array
				
				charArray[index] = input;
				
				//next position	
							
				index++;
				
			}
			
			else continue;
		}
		
     }
		  
	// set to NULL
	charArray[index] = '\0'; //charArray[index] = NULL;
	
	return charArray;
}

char* HinsyOOP::HLVInput::inputNumberWithSize(char* charArray,int sizeinput)
{
	char input;
	int index = 0;
	
	while(true)
	{
		input = getch();   
		

		if(input == 13 && index == sizeinput)
		{
            break;
		}
		
		if(input == 8)// key backspace
		{
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		
		else if(!(input>='0' && input<='9')  )
		{	
			continue;
		}
			
		else
		{
			if(index < sizeinput){
				
				printf("%c", input);
				// add char array
				charArray[index] = input;
				//next position				
				index++;
			}
			
			else
			{
				continue;
			}
		}
			
	}
	
	// set to NULL
	charArray[index] = '\0'; //charArray[index] = NULL;
	
	return charArray;
}
char* HinsyOOP::HLVInput::inputLetterWithSize(char* charArray,int sizeinput)
{
	char input;
	int index = 0;
	
	while(true)
	{
		input = getch();   
		

		if(input == 13 && index == sizeinput)
		{
            break;
		}
		
		if(input == 8)// key backspace
		{
			if(index > 0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		
		else if(!(input>='a' && input<='z' || input>='A' && input<='Z' || input == 32 ))
		{	
			continue;
		}
			
		else
		{
			
			if(index < sizeinput){
			    
				printf("%c", input);
				// add char array
				charArray[index] = input;
				//next position				
				index++;
			}
			
			else continue;
		}
	   	
        if(index == 0){
        	continue;
		}
			
	}
	
	// set to NULL
	charArray[index] = '\0'; //charArray[index] = NULL;
	
	return charArray;
}
char* HinsyOOP::Hinput::inputAll(char* charArray)
{
	char input;
	int index = 0;
	while(1)
	{
		input = getch();  
		if(input == 13)
		{
			 break;	
		}	
		else if(input == 8)// key backspace
		{	
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else
		{
			printf("%c", input);
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	
	return charArray;
}
////////////////////////////////////////
char* HinsyOOP::Hinput::inputQty(char* charArray) // Hinput
{
	char input;
	int index = 0;
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else if(!(input >= '0' && input <= '9' ))
		{
			continue;
		}
		else
		{
			printf("%c", input);
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	return charArray;
}
char* HinsyOOP::Hinput::inputNumber(char* charArray) // Hinput
{
	char input;
	int index = 0;
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(index > 0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else if(!(input>='0' && input<='9' || input == '.' || input == '-')  )
		{
			continue;
		}
		else
		{
			printf("%c", input);
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	return charArray;
}
////////////////////////////////////////
char* HinsyOOP::HLVInput::inputLetter(char* charArray) // Hinput
{
	char input;
	int index = 0;
	
	while(1)
	{
		input = getch();  
		 
		if(input == 13 && index >= 2)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else if(!(input>='a' && input<='z' || input>='A' && input<='Z' || input == 32 ))
		{
			continue;
		}
		else
		{		
			printf("%c", input);
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	return charArray;
}
////////////////////////////////////////
char* HinsyOOP::Hinput::hidePassword(char* charArray) // Hinput
{
	char input;
	int index = 0;
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else if(!(input>= 9  ||  input== 32)  )// tap and space
		{
			continue;
		}
		else
		{
			printf("*");
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	return charArray;
}
////////////////////////////////////////
char* HinsyOOP::Hinput::input4Tel(char* charArray)
{
	char input;
	int index = 0;
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(index>0)
			{
				printf("\b \b");
				
				index--;
				charArray[index] = '\0';
			}
		}
		else if(!(input>='0' && input<='9' || input == 32 || input == '+' || input == '(' || input == ')' ) )
		{
			continue;
		}
		else
		{
			printf("%c", input);
			// add char array
			charArray[index] = input;
			//next position
			index++;
		}
	}
	// set to NULL
	charArray[index] = '\0';//charArray[index] = NULL;
	
	return charArray;
}
////////////////////////////////////////
//----------------------------------------------------------------------
// std::string 
//----------------------------------------------------------------------
string HinsyOOP::Hinput::inputAll(string&  std_string)
{
	char input;
	std_string = "";
	
	while(1)
	{
		input = getchar();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(std_string.length() > 0)
			{
				printf("\b \b");
				std_string.erase(std_string.length() -1);
			}
		}
		else
		{
			printf("%c", input);
			// add std::string
			std_string.push_back(input);
		}
	}
	
	return std_string;
}
////////////////////////////////////////
string HinsyOOP::Hinput::inputNumber(string&  std_string)
{
	char input;
	std_string = "";
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
	   else if(input == 8)// key backspace
		{
			if(std_string.length() > 0)
			{
				printf("\b \b");
				
				std_string.erase(std_string.length() -1);
			}
		}
		else if(!(input>='0' && input<='9' || input == '.' || input == '-')  )
		{
			continue;
		}
		else
		{
			printf("%c", input);
			// add std::string
			std_string.push_back(input);
		}
	}
	
	return std_string;
}
////////////////////////////////////////
string HinsyOOP::Hinput::inputLetter(string&  std_string)
{
	char input;
	std_string = "";
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(std_string.length() > 0)
			{
				printf("\b \b");
				std_string.erase(std_string.length() -1);
			}
		}
		else if(!(input>='a' && input<='z' || input>='A' && input<='Z' || input == 32 ))
		{
			continue;
		}
		else
		{
			printf("%c", input);
			// add std::string
			std_string.push_back(input);
		}
	}
	
	return std_string;
}
////////////////////////////////////////
string HinsyOOP::Hinput::hidePassword(string&  std_string)
{
	char input;
	std_string = "";
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
		else if(input == 8)// key backspace
		{
			if(std_string.length() > 0)
			{
				printf("\b \b");
				
				std_string.erase(std_string.length() -1);
			}
		}
		else if(!(input>= 9  ||  input== 32)  )// tap and space
		{
			continue;
		}
		else
		{
			printf("*");
			// add std::string
			std_string.push_back(input);
		}
	}
	
	return std_string;
}
////////////////////////////////////////
string HinsyOOP::Hinput::input4Tel(string& std_string)
{
	char input;
	std_string = "";
	
	while(1)
	{
		input = getch();   
		if(input == 13)
		{
			break;
		}
	   else if(input == 8)// key backspace
		{
			if(std_string.length() > 0)
			{
				printf("\b \b");
				
				std_string.erase(std_string.length() -1);
			}
		}
		else if(!(input>='0' && input<='9' || input == 32 || input == '+' || input == '(' || input == ')' ) )
		{
			continue;
		}
		else
		{
			printf("%c", input);
		   // add std::string
			std_string.push_back(input);
		}
	}
	
	return std_string;
}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
////////////////////////////////////////
void HinsyOOP::Hconsole::gotoxy(int x, int y)
{
	COORD coord = {(short)x, (short)y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
////////////////////////////////////////
void HinsyOOP::Hconsole::cls()
{
	system("cls");
}
////////////////////////////////////////
void HinsyOOP::Hconsole::setcolor(DWORD color_code)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_code|FOREGROUND_INTENSITY);		
}
////////////////////////////////////////
void HinsyOOP::Hconsole::delay(int milliseconds)
{
	long pause;
	clock_t now,then;

	pause = milliseconds*(CLOCKS_PER_SEC/1000);
	now = then = clock();
	while( (now-then) < pause ) now = clock();
}
////////////////////////////////////////
void HinsyOOP::Hconsole::setcursor(bool visible, DWORD size)
{
	if(size == 0)
	{
		size = 20;	// default cursor size Changing to numbers from 1 to 20, decreases cursor width
	}
	CONSOLE_CURSOR_INFO lpCursor;// = {size, visible};	
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &lpCursor);
}
////////////////////////////////////////
//**************************************************************************
//						Add New function By Hinsy Lasong
//**************************************************************************
//0.
void HinsyOOP::Hconsole::drawBoxDoubleLine(int x, int y, int w, int h, int color = 7)
{
	int i, j;
	Hconsole::setcolor(color);
	//Width
	for(i=0; i<w; i++)
	{
		//top
		gotoxy(x+i, y);printf("%c", 205);
		//bottom
		gotoxy(x+i, y+h+1);printf("%c", 205);
	}
	//Height
	for(j=0; j<h; j++)
	{
		//left
		gotoxy(x-1, y+j+1);printf("%c", 186);
		//right
		gotoxy(x+w, y+j+1);printf("%c", 186);
	}
	//top left
	gotoxy(x-1, y);printf("%c", 201);
	//top right
	gotoxy(x+w,y);printf("%c", 187);
	//bottom left
	gotoxy(x-1,y+h+1 );printf("%c", 200);
	//bottom right
	gotoxy(x+w, y+h+1);printf("%c", 188);
}
//1.
void HinsyOOP::Hconsole::drawBoxSingleLine(int x, int y, int w, int h, int color = 7)
{
	int i, j;
	Hconsole::setcolor(color);
	//Width
	for(i=0; i<w; i++)
	{
		//top
		gotoxy(x+i, y);printf("%c", 196);
		//bottom
		gotoxy(x+i, y+h+1);printf("%c", 196);
	}
	//Height
	for(j=0; j<h; j++)
	{
		//left
		gotoxy(x-1, y+j+1);printf("%c", 179);
		//right
		gotoxy(x+w, y+j+1);printf("%c", 179);
	}
	//top left
	gotoxy(x-1, y);printf("%c", 218);
	//top right
	gotoxy(x+w,y);printf("%c", 191);
	//bottom left
	gotoxy(x-1,y+h+1 );printf("%c", 192);
	//bottom right
	gotoxy(x+w, y+h+1);printf("%c", 217);
}
//2.
void HinsyOOP::Hconsole::drawBoxSingleLineWithBG(int x, int y, int w, int h, int color)
{
	int i, j, r, c;
	Hconsole::setcolor(color);
	//Width
	for(i=0; i<w; i++)
	{
		//top
		gotoxy(x+i, y);printf("%c", 196);
		//bottom
		gotoxy(x+i, y+h+1);printf("%c", 196);
	}
	//Height
	for(j=0; j<h; j++)
	{
		//left
		gotoxy(x-1, y+j+1);printf("%c", 179);
		//right
		gotoxy(x+w, y+j+1);printf("%c", 179);
	}
	//top left
	gotoxy(x-1, y);printf("%c", 218);
	//top right
	gotoxy(x+w,y);printf("%c", 191);
	//bottom left
	gotoxy(x-1,y+h+1 );printf("%c", 192);
	//bottom right
	gotoxy(x+w, y+h+1);printf("%c", 217);
	
	for(r=0; r<h; r++)
	{
		for(c=0; c<w; c++)
		{
			gotoxy(x+c, y+r+1);printf(" ");
		}
	}
	
}
//3.
void HinsyOOP::Hconsole::drawBoxDoubleLineWithBG(int x, int y, int w, int h, int color)
{
	int i, j, r, c;
	Hconsole::setcolor(color);
	//Width
	for(i=0; i<w; i++)
	{
		//top
		gotoxy(x+i, y);printf("%c", 205);
		//bottom
		gotoxy(x+i, y+h+1);printf("%c", 205);
	}
	//Height
	for(j=0; j<h; j++)
	{
		//left
		gotoxy(x-1, y+j+1);printf("%c", 186);
		//right
		gotoxy(x+w, y+j+1);printf("%c", 186);
	}
	//top left
	gotoxy(x-1, y);printf("%c", 201);
	//top right
	gotoxy(x+w,y);printf("%c", 187);
	//bottom left
	gotoxy(x-1,y+h+1 );printf("%c", 200);
	//bottom right
	gotoxy(x+w, y+h+1);printf("%c", 188);
	
	for(r=0; r<h; r++)
	{
		for(c=0; c<w; c++)
		{
			gotoxy(x+c, y+r+1);printf(" ");
		}
	}
	
}
//4.
void HinsyOOP::Hconsole::HLine(int x, int y, int w, int color = 7, int line = 196)//widht
{
	Hconsole::setcolor(color);
	for(int i = 0; i < w; i++)
	{
		gotoxy(x + i,y);cout << (char)line;
		
	}

	
}
//5.
void HinsyOOP::Hconsole::VLine(int x, int y, int h, int color = 7, int line = 179)//Height
{
	Hconsole::setcolor(color);
	for(int i = 0; i < h; i++)
	{
		gotoxy(x - 1,y + i + 1);cout << (char)line;
		
	}	
}
//6.
void HinsyOOP::Hconsole::clearBox(int x, int y, int w, int h, int color = 7)
{
	Hconsole::setcolor(color);
	for(int i = -1; i<=h; i++)
	{
		for(int j = -1; j<=w; j++)
		{
			gotoxy(x+j, y+i);cout<<" ";
		}
	}
}
//**************************************************************************
//						Add New function on Tue - 08-01-18
//**************************************************************************
//7.
string HinsyOOP::Hconsole::formatCurrency(const long double&  currency, const unsigned int& precision = 6)
{
	ostringstream stm ;
    stm << fixed << setprecision(precision) << currency;
    string money = stm.str();
    int i = money.find('.');
    if(i>0)
    {
    	i -=3;
    	while(i>0)
    	{
    		money.insert(i, ",");
    		i -=3;
		}
	}
	return money;
}
//8.
long double HinsyOOP::Hconsole::eraseFormatCurrency(const string&  currency)
{
	string money = currency;
    int i = money.find('.');
    if(i>0)
    {
    	i -=4;
    	while(i>0)
    	{
    		money.erase(i, 1);
    		i-=4;
		}
	}
	stringstream stm(money);
	long double tmp = 0;
	stm >> tmp;
	return tmp;
}

////////////////////////////////////////

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
	void HinsyOOP::Hinsy::setFont( UINT hFontSize, UINT fontWeight, const WCHAR* fontName = L"Consolas", bool bMaximumWindow = true)
	{
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_FONT_INFOEX cfi;
		//set
		cfi.cbSize = sizeof(CONSOLE_FONT_INFOEX);
		//GetCurrentConsoleFontEx(output, true, &cfi);
		cfi.nFont = 0;
		//cfi.dwFontSize.X = wFontSize;
		cfi.dwFontSize.Y = hFontSize;
		cfi.FontFamily = TMPF_TRUETYPE;
		cfi.FontWeight = fontWeight;
		wcscpy(cfi.FaceName, fontName);
			
		SetCurrentConsoleFontEx(output, bMaximumWindow, &cfi);
	}
	void HinsyOOP::Hinsy::setFullScreen(int height, int width = 211)
	{
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD coord = { (short)width, (short)height};
		
		ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
		SetConsoleScreenBufferSize(output, coord);
	}
	void HinsyOOP::Hinsy::setFullScreen()
	{
		// Set Full Screen
		system("mode con COLS=700");
	    ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	}
	void HinsyOOP::Hinsy::setFullScreenNoScroll()
	{
		HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	    CONSOLE_SCREEN_BUFFER_INFOEX csbi;
	    csbi.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);
	    GetConsoleScreenBufferInfoEx(hOut, &csbi);
	    csbi.dwSize.X = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	    csbi.dwSize.Y = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
	    csbi.dwMaximumWindowSize.X = csbi.dwSize.X;
	    csbi.dwMaximumWindowSize.Y = csbi.dwSize.Y;
	    SetConsoleScreenBufferInfoEx(hOut, &csbi);
	    HWND hwnd = GetConsoleWindow();
	    ShowWindow(hwnd, SW_MAXIMIZE);
	}
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//----------------------------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////
#endif/* end of Header File HinsyOOP.h */