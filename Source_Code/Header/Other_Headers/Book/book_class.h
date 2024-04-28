#ifndef BOOK_CLASS_H
#define BOOK_CLASS_H


// User Define Header

#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../ANT_Header/HinsyOOP_Modifiled.h"


//// Prototype Functions ///////////////////////////////////////////////////////////////////

void Image_Import(int a,int b);

///////////////////////////////////////////////////////////////////////////////////////////

using namespace std;
using namespace HinsyOOP;

class Book
{

	protected:

		int id;
		
		char author[30];
		
		char bookTitle[50];

		char type[20];
		
		int qty;
		

	public: 

		void setAuthorName(const char* authorName)
		{

			strcpy(this -> author, authorName);

		}
		
		void setTitle(const char* book)
		{
			
			strcpy(this -> bookTitle, book);
		}

		void Settype(const char* type)
		{

			strcpy(this -> type, type);

		}
		
		void setQty( int qty)
		{
			
			this -> qty = qty;
			
		}
		
		void setId(int id)
		{
			
			this -> id = id;
		}

		

	public:

		int get_BookQty()
		{
			
			return qty;
		}

		int Getbookid()
		{

			return this->id;

		}

		const char* getbookTitle()
		{

			return bookTitle;

		}
		
		const char* getAuthorName()
		{
			
			return author;
			
		}

		const char* GetTypeAttr()
		{

			return type;

		}

	public:		
		
		void Import()
		{
			
			int tempqty;
			char temp[10];
			
			Hinsy::clearBox(45,8,100,30,0);
			
			Image_Import(60,10);
			
			gotoxy(90,13); foreColor(7); cout <<"IMPORT QUANTITY   : "; 
			
			setcursor(1,1);
			gotoxy(90,14); foreColor(7); cout <<"==> : "; foreColor(4); 
			
			HinsyOOP::HLVInput::inputQty(temp);
			
			tempqty = stoi(temp);
			
			qty += tempqty;
		}
		
		void InputBook()
		{

			char strid[20];
			char strQty[10];
			
			foreColor(159);

			gotoxy(87,11);  cout << id;

			gotoxy(87,15);  Hinsy::inputLetter(author);

			gotoxy(87,19);  Hinsy::inputLetter(bookTitle);
			
			gotoxy(87, 23); HinsyOOP::HLVInput::inputQty(strQty); setQty(atoi(strQty));
			
			gotoxy(87,27);  Hinsy::inputLetter(type);
			
			foreColor(1);
		}


		void Output()
		{
			
			cout << left;
			
			foreColor(7);

			cout << setw(10) << this-> id;

			cout << setw(20) << this-> author;
			
			cout << setw(25) << this->bookTitle;
			
			if( qty == 0 )
			{
				
				foreColor(3);cout << setw(15) << "OUT OF STOCK";
			}
			
			else
			{
					
			
				cout << setw(15) << this-> qty;
			}
			foreColor(7);
			cout << setw(15) << this-> type;
			
		}

	static void header()
	{
		
		cout << left << setw(10) << "ID" << setw(20) << "AUTHOR" << setw(25) << "TITLE" << setw(15) << "QTY" << setw(15) << "TYPE";
		
	}
	
	void OutputSearch()
	{

			foreColor(7); gotoxy(95,18); cout << this-> id;

			foreColor(7); gotoxy(95,21); cout << this-> author;
			
			foreColor(7); gotoxy(95,24); cout << this-> bookTitle;
			
			if(qty == 0 )
			{
				
				foreColor(4); gotoxy(95,27); cout<<"OUT OF STOCK";
				
			}
			
			else
			{
				
				foreColor(7); gotoxy(95,27); cout<<this->qty;
				
			}
		
			foreColor(7); gotoxy(95,30);cout<<this->type;
	}

};


#endif