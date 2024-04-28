#ifndef ___BORROW_BOOK__
#define ___BORROW_BOOK__

// User define Header

#include "book_class.h"
#include "iofile_book.h"
#include "../Member/readvector.h"
#include "../Member/classproject.h"
#include "../../ANT_Header/HinsyOOP_Modifiled.h"
#include "../Graph/member_graph.h"
#include "../TimeAndDate/dateandtime.h"

// Build-in Header

#include <chrono>
#include <ctime>
#include <unordered_map>

using namespace HinsyOOP;

/////////////////////////////////// function propotype ///////////////////////////////////////////

void BoxInvoice();
void Snowman(int a,int b);
void TexMember_Borrow(int a,int b);
void Image_wall(int a,int b);
void Image_House(int a,int b);
void Style_Image(int a,int b);
void Boxforborrow(int a,int b);
void TextBorrowBook(int a,int b);
void Image_wallhouse(int a,int b);
void Image_Border(int a,int b);
void Text_NoMemberBorrow(int a,int b);
void BoxForReturn();
void invoiceid();

//////////////////////////////// declare variable protect it duplicate //////////////////////////

extern Book bookObject;
extern Member mb;
extern fstream filebook;
extern fstream file;
extern string filemb;
extern fstream fileborrow;
extern string BIN_Files;
extern string brr,reTurn,Book_Folder,filebk;

///////////////////////////////////////////////////////////////////////////////////////////////////

string Borrow_Folder = BIN_Files + "//Borrow";

string borr   = Borrow_Folder + "//BORROW.bin";

string reBook = Borrow_Folder + "//BookBackup.bin";

string reTurn = Book_Folder + "//QtyBackup.bin";

string tempBk = Book_Folder+ "//tempFileBook.bin";

string tempborrow = Borrow_Folder + "//tempBorr.bin";

/////////////////////////////////////////////////////////////////////////////////////////////////
DateAndTime dateAndtime;

class Borrow : public Book , public Member 
{
    
	private:
		
		char day_borrow[15];
		
		int numberday;
		
		int dateborrow;
		
		char re_BookQty[15];
		
    	
    public:
    	
    	int borrow_number; 
		
		int qty;
		
		int autoinvoice;
		
		int returnqty;
		
		tm Borrow_Date;
		
		tm Return_Date;
		
		tm DateCommit_to_Return;
		
		// setter 
		
		void _setPosition(const char* p)
		{
			
			strcpy(this->position , p);
		
		}
				
		virtual void SetNumberQTY(int qty)
		{
    		
    		this->qty = qty;
    		
		}
		
    	// Getter 
    	
    	int GetNumberDay()
		{
    		
    		return numberday;
    		
		}
    	
    	int GetNumberOfQTY() const
		{
    		
    		return qty;
		
		}
		
		const char* _GetPosition()
		{
			
			return this->position;
			
		}
	    
	    // Simple methods
	    
    	void Import_BorrowBook()
		{
    		int borrow_temp;
    		
    		foreColor(6); gotoxy(116,26); HinsyOOP::HLVInput::inputQty(this->day_borrow);
    		
    		numberday = std::stoi(this->day_borrow);
    		
		}
		
		void _ReturnQty()
		{
			
			foreColor(6);gotoxy(107,24); cout << "ENTER QUANTITY BOOK TO RETURN  : "; HinsyOOP::HLVInput::inputQty(re_BookQty);
			
			returnqty = std::stoi(re_BookQty);
			
			qty -= returnqty;
			
		}
		
		///////////////////// caculate //////////////////////////

		double GetPaymentStudent()
		{
			
			return this->qty * 0.5;
			
		}
		
		double GetPaymentNotStudent()
		{
			
			return this->qty * 1.0;
			
		}	
		
		
		void OutputInvoice()
		{
		
			cout << fixed << setprecision(2);
			
			foreColor(7); gotoxy(54,7);  cout << Member::name << endl; 
			foreColor(7); gotoxy(54,9);  cout << getRandomNumber(0,9999) << endl;
			foreColor(7); gotoxy(40,12); cout << "MEMBER ID         :                               " << Member::id;
			foreColor(7); gotoxy(40,14); cout << "MEMBER POSITION   :                               " << this-> position;
			foreColor(7); gotoxy(40,16); cout << "BOOK   ID         :                               " << Book::id;
			foreColor(7); gotoxy(40,18); cout << "BOOK   TITLE      :                               " << this-> bookTitle;
			foreColor(7); gotoxy(40,20); cout << "BOOK   QTY        :                               " << this-> qty;
			foreColor(7); gotoxy(40,22); cout << "BORROWING PERIOD  :                               " << this-> numberday << " DAYS";
			
			foreColor(7); gotoxy(40,24); cout << "BORROW DATE       :                               " << this->Borrow_Date.tm_mday << "-" <<  this->Borrow_Date.tm_mon+1 << "-" << this->Borrow_Date.tm_year+1900;
			foreColor(7); gotoxy(40,26); cout << "RETURN DATE       :                               " << this->DateCommit_to_Return.tm_mday << "-" <<  this->DateCommit_to_Return.tm_mon+1 << "-" << this->DateCommit_to_Return.tm_year+1900;
			
			
			if(strcmp(_GetPosition(),"student") == 0 )
			{
								
				foreColor(7); gotoxy(40,28);cout<<"PAYMENT           :                               " << this->qty *0.5 << " $";
				
			}
			
			else if(_GetPosition() != "student")
			{
								
				foreColor(7); gotoxy(40,28);cout<<"PAYMENT           :                               " << this->qty * 1.00 << " $";
			
			}
		
		}
		
		void show_memberborrow()
		{
			
			cout << left << fixed << setprecision(2);
			
			cout << setw(10) << Member::Getmemberid();
			
			cout << setw(25) << Member::GetName();
			
			cout << setw(20) << this->position;
			
			cout << setw(10) << Book::id;
			
			cout << setw(25) << this->bookTitle;
			
			cout << setw(3) << this->numberday << setw(12) << " DAYS";
	
			if( qty == 0 )
			{ 
			
				cout<<setw(15)<<"RETURNED";
			
			}
			
			else
			{
				
				cout<<setw(15)<<this->qty;
			
			}
			
			if(strcmp(_GetPosition(),"student") == 0 )
			{
								
				cout<<setw(2)<<"$ "<<setw(13)<<this->qty *0.5;
				
			}
			
			else if(_GetPosition() != "student")
			{
								
				cout<<setw(2)<<"$ "<<setw(13)<<this->qty * 1.00 ;
				
			}
			
		}
		
		friend void Returned_Book();
		
		void Show_MemberReturnBook(float Fine)
		{

            Hinsy::cls();
            
            BoxInvoice();
                	
			cout << fixed << setprecision(2);
			
			foreColor(7); gotoxy(37,8);  cout << Borrow::Member::name; 
			
			foreColor(7); gotoxy(40,12); cout << "MEMBER ID                    :                               " << Member::id;
			
			foreColor(7); gotoxy(40,14); cout << "MEMBER POSITION              :                               " << Borrow::Member::position;
			
			foreColor(7); gotoxy(40,16); cout << "BOOK   ID                    :                               " << Book::id;
			
			foreColor(7); gotoxy(40,18); cout << "BOOK   TITLE                 :                               " << this->bookTitle;
			
			foreColor(7); gotoxy(40,20); cout << "BOOK   REMAINDING            :                               " << this->qty ;
			
			foreColor(7); gotoxy(40,22); cout << "FINE                         :                               " << Fine << " $";
			
			foreColor(7); gotoxy(40,24); cout << "DATE COMMIT TO RETURN        :                               " << this->DateCommit_to_Return.tm_mday << "-" <<  this->DateCommit_to_Return.tm_mon+1 << "-" << this->DateCommit_to_Return.tm_year+1900;
			
			foreColor(7); gotoxy(40,26); cout << "RETURN ON DATE               :                               " << dateAndtime.getCurrentDateForReturn().tm_mday << "-" <<  dateAndtime.getCurrentDateForReturn().tm_mon+1 << "-" << dateAndtime.getCurrentDateForReturn().tm_year+1900;
			
		
			foreColor(7); gotoxy(50,31); cout << "PRESS [ESC] FOR BACK | [ENTER] FOR RETURN MORE.";
		}
		
		static void Header_Display()
		{
			
			cout << left << fixed << setprecision(2); 
			
			cout << setw(10) << "MEMBER ID";
			
			cout << setw(25) << "MEMBER NAME";
			
			cout << setw(20) << "POSITION";
			
			cout << setw(10) << "BOOK ID";
			
			cout << setw(25) << "BOOK TITLE";
			
			cout << setw(15) << "PERIOD";
			
			cout << setw(15) << "QTY";
			
			cout << setw(15) << "PAYMENT";
	
		}
		
		static void HeaderInvoice()
		
		{
			setcursor(0,0);
			
			foreColor(6); gotoxy(37,31); cout << "PLEASE MAKE PAYMENT TO : ";
			
			foreColor(3); gotoxy(37,32); cout << "ACCOUNT NAME : ";
			
			foreColor(7); gotoxy(37,33); cout << "OEUN DAVID";
			
			foreColor(3); gotoxy(66,32); cout << "ACCOUNT NUMBER : ";
			
			foreColor(7); gotoxy(66,33); cout << "003 721 791";
			
			foreColor(3); gotoxy(93,32); cout << "ADDRESS : ";
			
			foreColor(7); gotoxy(93,33); cout << "TUOL KOUK,PHNOM PENH";
			
			Hinsy::setcolor(7); Hinsy::gotoxy(37,36);  cout << "[TIPS] PRESS ESC KEY TO BACK | PRESS ENTER KEY TO BORROW MORE BOOK.";
			
		}
		bool isFileExist(const char* fileName){
			ifstream infile(fileName);
			return infile.good();
		}
		

};


Borrow borrow;
Borrow tpborrow;

fstream fileborrow;

fstream filereturn;

vector<Borrow> vcBookData;

vector<Borrow> vcMember;

vector<Book> vcBookTotal;

vector<Borrow>CheckBook;

void invoiceid(){
		
	fileborrow.open(borr, ios::in | ios::binary);
	
	int StartID=10000;
	
	while(fileborrow.read((char*)&borrow,sizeof(Borrow))){
		
		StartID=borrow.autoinvoice;
	}
	borrow.autoinvoice = StartID + 1;
	
	fileborrow.close();
}

bool isBarDuplicate(int idmember, int idbook) {

    fileborrow.open(borr, ios::in | ios::binary);

    if (!fileborrow.is_open()) {
        
        return false;
    }


    while (fileborrow.read(reinterpret_cast<char*>(&tpborrow), sizeof(Borrow))) {

        if (tpborrow.Getmemberid() == idmember && tpborrow.Getbookid() == idbook) {
        	
           
            fileborrow.close();
            return true;
        }
    }

    fileborrow.close();
    return false;
}


////////////////////////////////////// number of member borrow book ///////////////////////////////////

	void catchnomberborrow()
	{
			
		fileborrow.open(borr, ios::in | ios::binary);
		
		int StartID = 0;
		
		while(fileborrow.read((char*)&borrow,sizeof(Borrow)))
		{
			
			StartID=borrow.borrow_number;
		
		}
		
		borrow.borrow_number;(StartID +1);
		
		fileborrow.close();
		
	}


////////////////////////////////////////////// borrow book ////////////////////////////////////////



void Borrow_Book()
{
	
	bool Ischeck=false,checkbook=false,checkid=false;
	
	char borrow_id [20], bookBorrow_id[20],borrow_qty[15];
	
	int borrowqty = 0;
	
	struct stat bs;
    
//    filebook.close(); file.close(); fileborrow.close();
    
	if(stat(BIN_Files.c_str(), &bs) != 0)
	{
			
		mkdir(BIN_Files.c_str());
		
		if(stat(Borrow_Folder.c_str(), &bs) != 0)
		{
			
		mkdir(Borrow_Folder.c_str());
		
	   }
	}
	
	
	if(stat(Borrow_Folder.c_str(), &bs) != 0)
	{
			
		mkdir(Borrow_Folder.c_str());
		
		
    }
    cls();
		
	Snowman(5,2); Boxforborrow(65,10); TextBorrowBook(40,2); Style_Image(120,10);
		
	setcursor(1,1);
		
	foreColor(6); gotoxy(99,11); Hinsy::inputNumber(borrow_id);
	foreColor(6); gotoxy(99,16); Hinsy::inputNumber(bookBorrow_id);
    
    Borrow tmborrow;
    ifstream tempborrowfile(borr,ios::binary);
    
    if(tmborrow.isFileExist(borr.c_str())){
    	
    	if(!isBarDuplicate(stoi(borrow_id),stoi(bookBorrow_id))){
    				
		}
		
		else{
			
			setcursor(0,0);
			foreColor(4); gotoxy(60,33); cout << "SORRY,THIS MEMBER CAN NOT BORROW THIS BOOK ID AGAIN.";
			foreColor(7); gotoxy(60,35); cout << "PRESS [ESC] FOR BACK | [ENTER] FOR BORROW MORE.";
			return;
		}
    	
	}
	else{
		
		
	}
    
    tempborrowfile.close();

	// File Opening 
	
	file.open(filemb,ios::in | ios::app | ios::binary);
	
	filebook.open(filebk, ios::in | ios::out | ios::binary);
	
	fileborrow.open(borr, ios::out | ios::app| ios::binary);
	

	
	if (!file.is_open() || !filebook.is_open() || !fileborrow.is_open()) {
        
		setcursor(0,0); cls();	
		
		foreColor(4);gotoxy(42,37); cout << "FAILD TO OPEN FILE.";
		
		foreColor(7);gotoxy(42,38);cout<<"PRESS [ ESC ] TO CHOOSE OPTION AGAIN.";
		
        return;
    }
		
		/////////////////////////// CHECK MEMBER ID ////////////////////////////

		while(file.eof() != true)
		{
			
			while(file.read((char*)&mb,sizeof(Member)))
			{
				
				if(stoi(borrow_id) == mb.Getmemberid())
				{

					
					Ischeck = true;
					
					///////////////////////////// CHECK BOOK ID ////////////////////
					
					while(filebook.eof() != true)
					{
						
						while(filebook.read((char*)&bookObject, sizeof(Book)))
						{
							
							if(std::stoi(bookBorrow_id) == bookObject.Getbookid())
							{
								
								checkbook = true;
		
							}
							
							if(std::stoi(bookBorrow_id) == bookObject.Getbookid() && checkid == false && checkbook == true && Ischeck == true){

								foreColor(6); gotoxy(99,21); HinsyOOP::HLVInput::inputNumberWithSize(borrow_qty,1);
								
								borrowqty = (std::stoi(borrow_qty));
								
								if(borrowqty <= 0)
								{
									Hinsy::setcursor(0,0);
									Hinsy::setcolor(7); Hinsy::gotoxy(70,33); cout << "[TIPS] PLEASE ENTER "; Hinsy::setcolor(6); cout << "SPECIFIC NUMBER.";
									
									continue;
									
								} 
								
								
								bool checkstock = false;
								
                                int currentQty = bookObject.get_BookQty();
									
								if(currentQty >= borrowqty)
								{
										
									checkstock = true;
									
							    }
							    
							    if(checkstock == true){
								
									borrow.Import_BorrowBook();
									
									if(borrow.GetNumberDay() <= 0 || borrow.GetNumberDay() > 365){
			
			                          Hinsy::setcursor(0,0);
			                          Hinsy::setcolor(7); Hinsy::gotoxy(70,33); cout << "[TIPS] USERS CAN BORROW BOOKS FOR A MAXIMUM OF 365 DAYS"; Hinsy::setcolor(6); cout << "SPECIFIC NUMBER.";
			                          
									  continue;
			 
		                            }
									/////// set value from super class of member and book to derive class of Borrow ///////////////
									
									borrow.SetId(mb.Getmemberid());
									
									borrow.SetName(mb.GetName());
									
									borrow._setPosition(mb.GetPosition());
									
									borrow.setAuthorName(bookObject.getAuthorName());
									
									borrow.setId(bookObject.Getbookid());
									
									borrow.setTitle(bookObject.getbookTitle());
									
								    borrow.Borrow_Date = dateAndtime.getCurrentDate();
									
									borrow.DateCommit_to_Return = dateAndtime.DaysCommite_to_Return(dateAndtime.getCurrentDate(),borrow.GetNumberDay());
									
									////// copy value to class borrow ///////////
									
									borrow._GetPosition();
									
									borrow.GetPosition();
									
									borrow.Getmemberid();
									
									borrow.GetName();
									
									borrow.getAuthorName();
									
									borrow.Getbookid();

									///////// caculate book in stock ////////////////
		
									
									bookObject.setQty(currentQty -= borrowqty);
									
									borrow.SetNumberQTY(borrowqty);
									
									int lastbytes = filebook.tellg();
									
									filebook.seekp(lastbytes - sizeof(Book));
									
									Hconsole::clearBox(0,0,150,40,7); BoxInvoice();
									
									Borrow::HeaderInvoice();
									
									borrow.OutputInvoice();
									
									filebook.write((char*)&bookObject, sizeof(Book));
									
									fileborrow.write((char*)&borrow, sizeof(Borrow));
									
									// The File Closing 
									
									filebook.close(); file.close(); fileborrow.close();
									
								}
									
								//}
								
								if(checkstock == false)
								{
									
									setcursor(0,0);
									
									foreColor(4); gotoxy(70,33); cout << "INSUFFICINT STOCK. " ;
									
									foreColor(7); gotoxy(70,35); cout << "PRESS [ESC] FOR BACK | [ENTER] FOR BORROW MORE.";
	
								//	return;
								    continue;
									
								}
								
								
								break;
								
							}
						}
					}
					
					break;
					
				}
			}
		}
		
		if(checkbook == false)
		{
			
			setcursor(0,0);
			
			foreColor(4); gotoxy(80,33); cout << "SORRY, THIS BOOK ID WAS NOT FOUND!.";
			
			foreColor(7); gotoxy(80,35); cout << "[TIPS] PRESS [ESC] FOR BACK | PRESS [ENTER] TO INPUT AGAIN.";
				
		}
		
		if(Ischeck == false)
		{	
		
			setcursor(0,0);	

			foreColor(4); gotoxy(80,33); cout << "SORRY, THIS MEMBER ID WAS NOT FOUND!.";
			
			foreColor(7); gotoxy(80,35); cout << "[TIPS] PRESS [ESC] FOR BACK | PRESS [ENTER] TO INPUT AGAIN.";		
			
		}
	

    // The File Closing
    
	file.close(); filebook.close(); fileborrow.close();
	
}

void View_MemberBorrow()
{
	
	fileborrow.open(borr, ios::in | ios::binary);
	
	
	if(fileborrow.fail())
	{
	
		foreColor(6); gotoxy(70, 30); cout << "NO RECORD MEMBER BORROW BOOK YET.";
		
		int i=2;
		
	    char a[40] = "<<< PRESS [ESC] TO BACK MENU >>>";
	    
		setcursor(0,0);
	    
		while(!_kbhit())
	    {
	      
		  for(int j=0;j<40;j++)
	      {
	        
			gotoxy(70+j,32);foreColor(i);cout<<a[j];
	        
			delay(25);
	      
		  }
	      
		  i++;
	    
		  if (cin.rdbuf()->in_avail() ==27  ) 
		  {
	            // Clear the input buffer
	            cin.ignore(cin.rdbuf()->in_avail());
	      
		  }
	      
		  if(i==5)
	      {
	      
		        i=1;
	      
		  }
	      
	      foreColor(7); gotoxy(70,32); cout << "<<< PRESS [ESC] TO BACK MENU >>>";
	    
		}
		
		return;
		
		fileborrow.close();
		
	}
	
	else if(fileborrow.good())
	{
	
		// Check if the file is empty
		
	    fileborrow.seekg(0, std::ios::end);
	    
	    std::streampos fileSize = fileborrow.tellg();
	    
	    fileborrow.seekg(0, std::ios::beg);
	
	    if (fileSize == 0) 
		{
	        // File is empty
	        Hconsole::clearBox(0,0,150,40,7);
	        
	       	Image_sadDeleUn(55,9); Text_NoMemberBorrow(30,23);
	       	
	       	foreColor(4); gotoxy(30,30); cout << "PRESS [ESC] FOR BACK.";
	       	
	        fileborrow.close();
	        
	        return;
	    
		}
		
		else
		{
	    	
			int i = 0;
			
			Hconsole::clearBox(0,0,150,40,7);
			
			while(fileborrow.eof() != true)
			{
				
				TexMember_Borrow(0,1);
				
				drawBoxSingleLine(3,9,144,1,1);
			    
				foreColor(7); gotoxy(10,10); Borrow::Header_Display();	
				
				while (fileborrow.read((char*)&borrow, sizeof(Borrow))) {
					    		
					i+=3;
					
					drawBoxSingleLine(3,9+i,144,1,3);	        
				    
					foreColor(6); gotoxy(10,10+i); borrow.show_memberborrow();
						       
				}
				
					drawBoxSingleLine(50,12+i,50,1,3);
								
					foreColor(7); gotoxy(60,13+i); cout << "PRESS [ESC] TO BACK MENU.";
							
					drawBoxSingleLine(2,8,146,6+i,7);
		
			}
		}
	}
	
	fileborrow.close();
	
}


void Returned_Book() 
{
    // Open files
    ifstream fileborrow(borr, ios::binary);
    
	ofstream tempFileBorrow(tempborrow, ios::binary); // Temporary file to update borrow records

    ifstream filebook(filebk, ios::binary);
    
    ofstream tempFileBook(tempBk, ios::binary); // Temporary file to update book records
    
    char memberid[20],bookid[20],re_qty[20];
    
    Hconsole::clearBox(0,0,150,40,7);
    
	BoxForReturn();
    
    if (!fileborrow || !filebook) 
	{
		
	   foreColor(6); gotoxy(63, 30); cout << "NO RECORD MEMBER BORROW BOOK YET.";
		
		int i=2;
		
	    char a[40] = "<<< PRESS [ESC] TO BACK MENU >>>";
	    
		setcursor(0,0);
	    
		while(!_kbhit())
	    {
	      
		  for(int j=0;j<40;j++)
	      {
	        
			gotoxy(63+j,32);foreColor(i);cout<<a[j];
	        
			delay(25);
	      
		  }
	      
		  i++;
	    
		  if (cin.rdbuf()->in_avail() ==27  ) 
		  {
	            // Clear the input buffer
	            cin.ignore(cin.rdbuf()->in_avail());
	      
		  }
	      
		  if(i==5)
	      {
	      
		        i=1;
	      
		  }
	      
	      foreColor(7); gotoxy(63,32); cout << "<<< PRESS [ESC] TO BACK MENU >>>";
	}
        
		return;
    
	}
    
	// Get member ID, book ID, and quantity from user input
    
	char memberreturnid[20], bookreturnid[20];
    
	int returned;
	
	setcursor(1,1);
	
    foreColor(7); gotoxy(28,10); cout << "ENTER MEMBER ID TO RETURN BOOK  : ";
    
    foreColor(7); gotoxy(42,14); HinsyOOP::HLVInput::inputNumber(memberreturnid);
    
    foreColor(7); gotoxy(98,10);cout << "ENTER BOOK ID TO RETURN : ";
    
    foreColor(7); gotoxy(107,14);HinsyOOP::HLVInput::inputNumber(bookreturnid);
    
    foreColor(7); gotoxy(57,20);cout << "ENTER QUANTITY OF BOOK TO RETURN : ";
    
    foreColor(7); gotoxy(72,24);HinsyOOP::HLVInput::inputQty(re_qty);
    
	returned = stoi(re_qty);
	
    // Validate user input and search for matching record in borrow file
    
    Borrow tempBorrow;
    
    bool found = false;
    
    static int TheDay;
    
	while (fileborrow.read(reinterpret_cast<char*>(&tempBorrow), sizeof(Borrow))) 
	{
        if (std::stoi(memberreturnid) == tempBorrow.Getmemberid() && std::stoi(bookreturnid) == tempBorrow.Getbookid()) 
		{
			
            found = true;
            
            if( tempBorrow.GetNumberOfQTY() >= returned)
			{
            	
            	tempBorrow.SetNumberQTY(tempBorrow.GetNumberOfQTY() - returned);
            	
			}
			
			else
			{
	
				setcursor(0,0);
    	
		        VLine(75,25,6,7,219);
		        
				VLine(76,25,6,7,219); delay(150);
				
				foreColor(6); gotoxy(55,37); cout << "ATTEMPTING"; Hinsy::setcolor(7); cout << " TO RETURN MORE BOOKS THAN BORROWED! ";
				
				HLine(70,31,5,7,219); delay(150);
	
				drawBoxDoubleLineWithBG(40,30,30,1,3); delay(150);
				
				foreColor(4); gotoxy(41,31); cout << "BOOK RETURNED UNSUCESS!."; delay(150);
				
				HLine(76,31,5,7,219);delay(150);
				
				drawBoxDoubleLineWithBG(80,30,50,1,3);delay(150);
				
				foreColor(7); gotoxy(82,31); cout << "PRESS [ESC] FOR BACK | [ENTER] FOR RETURN MORE."; delay(150);
				
				return;
				
			}
		
        }

        tempFileBorrow.write(reinterpret_cast<char*>(&tempBorrow), sizeof(Borrow)); // Write to temporary borrow file

    }
	
    if (!found) 
	{
    	
    	setcursor(0,0);
    	
        VLine(75,25,6,7,219);
        
		VLine(76,25,6,7,219);delay(150);
		
		VLine(75,31,5,7,219);
		
		VLine(76,31,5,7,219);delay(150);
		
		drawBoxDoubleLineWithBG(40,35,80,1,4);delay(150);
		
		foreColor(7); gotoxy(41,36);cout << "BOOK NOT FOUND IN BORROW RECORDS FOR MEMBER ID: " << memberreturnid << " AND BOOK ID: " << bookreturnid;delay(150);
		
		drawBoxDoubleLineWithBG(82,30,50,1,4);delay(150);
		
		HLine(76,31,5,7,219);delay(150);
		
		foreColor(7); gotoxy(83,31); cout << "PRESS [ESC] FOR BACK | [ENTER] FOR RETURN MORE.";delay(150);
		
        return;
        
    }

    // Update quantity of returned book in borrow file
  
    while (fileborrow.read((char*)&tempBorrow, sizeof(Borrow))) 
	{
    	
    	if(std::stoi(memberreturnid) == tempBorrow.Getmemberid())
		{

	        if (std::stoi(bookreturnid) == tempBorrow.Getbookid()) 
			{
	        	
	            tempBorrow.SetNumberQTY(tempBorrow.GetNumberOfQTY() - returned);
	            
		        // tempBorrow.Return_Date = dateAndtime.getCurrentDate();     
			    
			    // for Demo for late return Add 10 days on current Date
			    
			    tempBorrow.Return_Date = dateAndtime.getCurrentDateForReturn();
			    
				TheDay = dateAndtime.daysBetweenDates(tempBorrow.DateCommit_to_Return,tempBorrow.Return_Date);
	            
	            tempFileBorrow.write((char*)&tempBorrow, sizeof(Borrow));
	            
	            found = true;
	        }
	        
	        if(std::stoi(bookreturnid) != tempBorrow.Getbookid())
			{
	        	
	        tempFileBorrow.write((char*)&tempBorrow, sizeof(Borrow));
	        
			}
		} 
    }
    
    // Update quantity of returned book in book file
    
    Book tempBook;
    
    found = false;

    while (filebook.read(reinterpret_cast<char*>(&tempBook), sizeof(Book))) 
	{
    	
        if (std::stoi(bookreturnid) == tempBook.Getbookid()) 
		{
        	
            tempBook.setQty(tempBook.get_BookQty() + returned);
             
			
			found = true;
			
        }
        	
        tempFileBook.write(reinterpret_cast<char*>(&tempBook), sizeof(Book));  
    }

    if (!found) 
	{
    	
    	setcursor(0,0);
    	
        VLine(75,25,6,7,219);
        
		VLine(76,25,6,7,219); delay(150);
		
		HLine(70,31,5,7,219); delay(150);
		
		drawBoxDoubleLineWithBG(20,30,50,1,4); delay(150);
		
		foreColor(4); gotoxy(21,31); cout << "BOOK NOT FOUND"; Hinsy::setcolor(7); cout << " IN BOOK RECODS FOR ID : " << bookreturnid; delay(150);
		
		drawBoxDoubleLineWithBG(82,30,50,1,4); delay(150);
		
		HLine(76,31,5,7,219); delay(150);
		
		foreColor(7); gotoxy(83,31); cout << "PRESS [ESC] FOR BACK | [ENTER] FOR RETURN MORE."; delay(150);
        
        return;
        
    }
	
	setcursor(0,0);
	
    VLine(75,25,6,7,219);
    
	VLine(76,25,6,7,219); delay(150);
	
	HLine(70,31,5,7,219); delay(150);
	
	drawBoxDoubleLineWithBG(20,30,50,1,4); delay(150);
	
	foreColor(2); gotoxy(21,31); cout << "BOOK RETURNED SUCESSFULLY."; delay(150);
	
	drawBoxDoubleLineWithBG(82,30,50,1,4);delay(150);
	
	HLine(76,31,5,7,219);delay(150);
	
	foreColor(7); gotoxy(83,31); cout << "PRESS [ESC] FOR BACK | [ENTER] FOR RETURN MORE."; delay(150);
	
    // BOOK RETURN LATE FINE 

//    if(TheDay <= 3 && TheDay >= 0){
//    	
//    	tempBorrow.Show_MemberReturnBook(0.33*TheDay);
//
//	}
//	
//	else if(TheDay >= 3 && TheDay <= 6){
//		
//		tempBorrow.Show_MemberReturnBook(0.33*TheDay);
//
//	}
//	
//	else if(TheDay >= 6 && TheDay <= 9){
//		
//		tempBorrow.Show_MemberReturnBook(0.33*TheDay);
//
//	}
//	else if(TheDay >= 10 && TheDay <= 12){
//		
//		tempBorrow.Show_MemberReturnBook(0.33*TheDay);
//
//	}
//	else if(TheDay >= 10){
//		
//		tempBorrow.Show_MemberReturnBook(0.33*TheDay);
//
//	}else if(TheDay < 0){
//		
//		tempBorrow.Show_MemberReturnBook(0);
//	}
	
    // Close and remove original files
	
    tempFileBook.close(); filebook.close(); fileborrow.close(); tempFileBorrow.close();
    
    remove(borr.c_str()); remove(filebk.c_str());

    // Rename temporary files to original file names
    
	rename(tempborrow.c_str(), borr.c_str()); rename(tempBk.c_str(), filebk.c_str());
}

bool sortBorrowByQTY(const Borrow& a, const Borrow& b)
{
	
	return a.GetNumberOfQTY() > b.GetNumberOfQTY();
	
}

void borrowBookData() 
{
	
    fileborrow.open(borr, ios::in | ios::binary);
    
    if(fileborrow.fail())
	{
		
		setcursor(0,0);
		
		foreColor(6); gotoxy(20,21); cout << "SORRY, NO BORROW RECORD!";
		
		return;
		
	}
	
    Borrow tempBorrow;

    while (fileborrow.read(reinterpret_cast<char*>(&tempBorrow), sizeof(Borrow))) 
	{
		
        vcBookData.push_back(tempBorrow);
        
    }
    
    sort(vcBookData.begin(), vcBookData.end(), sortBorrowByQTY); 

	// biggest borrow book number
	
	int borrowQty = vcBookData[0].GetNumberOfQTY();
	int bookID = vcBookData[0].Getbookid();
	
	int borrowQty1 = vcBookData[1].GetNumberOfQTY();
	int bookID1 = vcBookData[1].Getbookid();
	
	int borrowQty2 = vcBookData[2].GetNumberOfQTY();
	int bookID2 = vcBookData[2].Getbookid();
	
	int borrowQty3 = vcBookData[3].GetNumberOfQTY();
	int bookID3 = vcBookData[3].Getbookid();
	
	
	int borrowQty4 = vcBookData[4].GetNumberOfQTY();
	int bookID4 = vcBookData[4].Getbookid();
	
	
	//book in total
	
	filebook.open(filebk, ios::in | ios::out | ios::binary);
	
	Book tempBook;
	
	while (filebook.read(reinterpret_cast<char*>(&tempBook), sizeof(Book))) 
	{
        vcBookTotal.push_back(tempBook);
    }
    
    int bookTotal[5] = {0};
    	
    
    for(int i = 0; i < vcBookTotal.size(); i++)
	{
    	if(vcBookData[i].Getbookid() == vcBookTotal[i].Getbookid())
		{
    		
    		bookTotal[i] = vcBookTotal[i].get_BookQty();
    		
		}
	}
	
	int a = bookTotal[1];
	                                       
	// bookTotal[2], borrowQty2, bookID2, bookTotal[3], borrowQty3, bookID3, bookTotal[4], borrowQty4, bookID4
	
    fileborrow.close(); filebook.close();
}


void borrowMemberData() 
{
    fileborrow.open(borr, ios::in | ios::binary);
    
	Borrow tempMember;
    
	vector<int> memberCount(10, 0);
	
    unordered_map<int, int> countMap;
    
    int count = 0; 
    
    if(fileborrow.fail())
	{
		
	   setcursor(0,0);
		
	   foreColor(6); gotoxy(60, 34); cout << "NO RECORD MEMBER BORROW BOOK YET.";
		
		int i=2;
		
	    char a[40] = "<<< PRESS [ESC] TO BACK MENU >>>";
	    
		setcursor(0,0);
	    
		while(!_kbhit())
	    {
	      
		  for(int j=0;j<40;j++)
	      {
	        
			gotoxy(95+j,34);foreColor(i);cout<<a[j];
	        
			delay(25);
	      
		  }
	      
		  i++;
	    
		  if (cin.rdbuf()->in_avail() == 27  ) 
		  {
	            // Clear the input buffer
	            cin.ignore(cin.rdbuf()->in_avail());
	      
		  }
	      
		  if(i==5)
	      {
	      
		        i=1;
	      
		  }
	      
	      foreColor(7); gotoxy(95,34); cout << "<<< PRESS [ESC] TO BACK MENU >>>";
	      
	}
		
       return;
		
	}
    
    Hinsy::cls();
    
    while (fileborrow.read(reinterpret_cast<char*>(&tempMember), sizeof(Borrow))) 
	{
		
        vcMember.push_back(tempMember);
        
    }

	for ( auto& obj : vcMember) 
	{
	    countMap[obj.Getmemberid()]++;
	        
	}
	
	for (const auto& pair : countMap) 
	{
		
	    memberCount[count] = pair.first;
	    
	    memberCount[count + 1] = pair.second; 
	    
	    count += 2;
	    
	}
    
    fileborrow.close();

    member_graph(vcMember.size(),memberCount[0],memberCount[1], memberCount[2], memberCount[3], memberCount[4], memberCount[5], memberCount[6], memberCount[7], memberCount[8], memberCount[9]);

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif