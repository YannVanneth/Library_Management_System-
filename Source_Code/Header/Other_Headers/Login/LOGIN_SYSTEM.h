#ifndef __LOGIN_SYSTEM__
#define __LOGIN_SYSTEM__

//////////////////// LIBRARYS ///////////////////////////////////////////////////

#include "../../ANT_Header/antheaderPlusPlus.h"
#include "../../ANT_Header/HinsyOOP_Modifiled.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../Design_Header/designproject.h"
#include "../../Design_Header/App_Design.h"
#include "../Member/optionmember.h"
#include "../Member/function.h"
#include "../Book/borrow_book.h"

#include <fstream>
#include <sys/stat.h>

using namespace std;
using namespace HinsyOOP;

///////////////////// PROPOTYPE UNCTION /////////////////////////////////////////////////
void TextLoadingBeforeLogin(int a,int b);
void BigTree(int a,int b);
void Cloud(int a,int b);
void Fences(int a,int b);
void Building(int a,int b);
void BoookAndMemerOption();
void TextforgotPassword(int a,int b);
bool Account_Login();
void TextWelcome(int a,int b);
void FillInformation(int a,int b);
void BoxSignUp();
void BoxFillPassword();
void TextShowInformation(int a,int b);
void BoxSignUpMenu();
void Text_Login(int a,int b); 
void Main_Interface_Menu();
void Imagebear(int a,int b);
void BoxOptionBookAndMember(int a,int b);

////////////////////////////////////////////////////////////////////////////////////////

extern fstream filebook;
extern fstream file;
extern string filemb;
//extern Member mb;
extern string BIN_Files;

//////////////////// USER INFOMATIONS ///////////////////////////////////////////////////

class User{
	
	private:
	  	char firstName[15];
	  	char lastName[15];
	  	char Role[15];
		char CityOrProvince[30];
		char District[30];
		char PhoneNumber[30];

	public:
		void setCityOrProvince(const char* CityOrProvince){
			 strcpy(this->CityOrProvince,CityOrProvince);
		}
		
		void setDistrict(const char* District){
			 strcpy(this->District,District);
		}
		
		void setPhoneNumber(const char* PhoneNumber){
			 strcpy(this->PhoneNumber,PhoneNumber);
		}
		
		void setFirstName(const char* FirstName){
	  		strcpy(this->firstName,FirstName);
		  }
		  
		void setLastName(const char* LastName){
			strcpy(this->lastName,LastName);
		}
		
		void setRole(const char* Role){
			strcpy(this->Role,Role);
		}
		
		const char* getFirstName() const{
			return this->firstName;
		}
		
		const char* getLastName() const{
			return this->lastName;
		}
		
		const char* getRole() const {
			return this->Role;
		}
		
		const char* getCityOrProvince() const{
			return this->CityOrProvince;
		}
		
		const char* getDistrict() const{
			return this->District;
		}
		
		const char* getPhoneNumber() const{
			return this->PhoneNumber;
		}
}; 

//////////////////////////////// ACCOUNTS ////////////////////////////////////////////////////////////////////////

class Account : public User{
	
	private:
		
	  	int Account_ID;
	  	char UserName[30];
	  	char Password[30];
	
	public:
		
	    // setter /////////////////////////////////////////////////
		
		void setAcc_ID(int Acc_ID){
	        Account_ID = Acc_ID;
		}
		
		void setAcc_Username(const char* username){
			strcpy(this->UserName,username);
		}
		
		void setAcc_Password(const char* password){
			strcpy(this->Password,password);
		}
		
		// getter ///////////////////////////////////////
		
		int getAcc_ID() const{
			return this->Account_ID;
		}	
		
		const char* getAcc_Username() const{
			return this->UserName;
		}
		
		const char* getAcc_Password() const{
			return this->Password;
		}		
};

//////////////////////////////// ANY VARIABLES ///////////////////////////////////////////////////////////////////////////////////////////////////

string BIN = "App_Data";
string Account_Folder = BIN + "//Account";
string Filename = Account_Folder + "//Account.bin";

fstream Account_Files,Temp;
Account account;

//////////////////////////////////////////////////////// FORGOT PASSWORD /////////////////////////////////////////////////////////////

void ForgotPassword(const char* username) {
	
    Account_Files.open(Filename,ios::in); // Open the file

    if (!Account_Files.is_open()) {
        
		Hconsole::setcolor(7); gotoxy(45,34); cout << "FAILED TO OPEN FILE!" << endl;
        
		return;
    }

    Account account;
    
    bool usernameFound = false,statusCorrect = false;

    while (Account_Files.read((char*)&account, sizeof(Account))) 
	{
        if (strcmp(account.getAcc_Username(), username) == 0) 
		{
        	
            usernameFound = true;
            
            break;
            
        }
    }

    Account_Files.close(); // Close the file

    if (!usernameFound) {
    	
    	Hconsole::setcursor(false,0);
    	
        Hconsole::setcolor(4); gotoxy(64,28); cout << "USERNAME ACCOUNT NOT FOUND";
        
        Hconsole::delay(1000);
        
        return;
    }

    if(usernameFound == true){
    
    	Hconsole::setcursor(false,0);
    	
        Hconsole::setcolor(2); gotoxy(64,28); cout << "USERNAME ACCOUNT BE FOUND!";
        
        Hconsole::delay(1000);	
        
        Hconsole::clearBox(0,0,200,40,7);
	}
    // Username found, proceed with password reset process

    
    	
	int attemptsLeft = 3;
		
    char lastName[15]; char firstName[15];
    
	reset:
    
	while (attemptsLeft > 0) {
    	
		TextforgotPassword(20,7);
						
		Hconsole::setcursor(1,1);

        Hconsole::setcolor(7); Hinsy::gotoxy(94,20); Hinsy::inputLetter(lastName);
        
        Hconsole::setcolor(7); Hinsy::gotoxy(94,25); Hinsy::inputLetter(firstName); 
        
        Account_Files.open(Filename,ios::in | ios::out);
        
        while(Account_Files.read((char*)&account,sizeof(Account))){

        if (strcmp(account.getLastName(), lastName) == 0 && strcmp(account.getFirstName(), firstName) == 0) {
	        	
	            statusCorrect = true;
	           
	            char newPassword[30];
	            
	            Hconsole::setcolor(7); Hconsole::gotoxy(94,30); Hinsy::inputAll(newPassword);
	            
				account.setAcc_Password(newPassword);
	            
	            Account_Files.seekp( (int)Account_Files.tellg() - sizeof(Account));
	            
	            Account_Files.write((char*)&account, sizeof(Account));
	            
	            Account_Files.close();
	
		  		setcursor(0,0);
		  						
		  		Hconsole::setcolor(2); gotoxy(60,34); cout << "PASSWORD RESET SUCCESSFULLY !!" << endl;
	            
		  		delay(2000);
		  					
		        cls();
		            		
		  		Main_Interface_Menu();	
        	
           }
			
        }
		
		
		Account_Files.close();
		
		
		if(!statusCorrect) 
		{
			
            attemptsLeft--;
            
            Hconsole::setcolor(7); gotoxy(45,34); cout << "WRONG INFORMATION. YOU HAVE " << attemptsLeft << "ATTEMPTS LEFT" << endl;
            
            
            setcursor(0,0);
							
			///////////////////////////////// MASSAGE TO USER /////////////////////////////
							
		    char press;
		                    
		    Hconsole::setcolor(7); gotoxy(45,34); cout << "WRONG INFORMATION. YOU CAN NOT RESET THE PASSWORD.";
		                    	
		    Hconsole::setcolor(7); gotoxy(45,36); cout << "YOU HAVE "<< attemptsLeft <<" TIMES TO FILL AGAIN.";
		                    	
		    Hconsole::setcolor(7); gotoxy(45,38); cout << "PRESS [ ENTER ] TO FILL AGAIN | [ ESC ] TO EXIT PROGRAM.";
								
								
			select:
									
			press = getch();
								
			if(press == 13){
									
			cls();
								
			goto reset;
								
			break;
									
			} 
			
			else if(press == 27)
			{
									
				cls();
										
				BoxOptionBookAndMember(25,10);
										
				delay(2000);
										
				cls();
										
				exit(0);
									
			    break;
									
			}
			
			else
			
			{
									
			   goto select;
								
			   break;
						}
							
				}
				
	} // end of read...
				
				if (attemptsLeft == 0) {
					
	                Hconsole::setcolor(7); gotoxy(45,34); cout << "YOU CANNOT RESET THE PASSWORD. PLEASE TRY AGAIN LATER." << endl;
	                
	                Hconsole::clearBox(0,0,150,40,7);
	                
	                Main_Interface_Menu();
//	                return;
	            
				}
				Account_Files.close();
    }

    
//////////////////////////////////////////////////////////////// SIGNUP ACCOUNT ///////////////////////////////////////////////////
	 
void Signup_Account(){
	
	Account_Files.close();
	char username[30],password[30],firstName[15],lastName[15],position[15],City[30],District[30],PhoneNumber[15];
	struct stat bs;
	
	if(stat(Account_Folder.c_str(), &bs) != 0){
			
			mkdir(Account_Folder.c_str());
		}
	
	if(stat(BIN_Files.c_str(), &bs) != 0){
		   
		    mkdir(BIN_Files.c_str());
		
			if(stat(Account_Folder.c_str(), &bs) != 0){
			
			mkdir(Account_Folder.c_str());
		}
		
	}

	
	Hconsole::clearBox(0,0,150,40,7); Hconsole::setcolor(7);
	
	FillInformation(30,8);
	BoxSignUp();
	
	setcursor(1,1);
	
	gotoxy(42,22); HLVInput::inputLetter(firstName); 
	
	if(strcmp(firstName,"exit") == 0){
		strcpy(firstName,"");
		cls(); Main_Interface_Menu();
	}
	
	gotoxy(92,22); HLVInput::inputLetter(lastName); 
	
	if(strcmp(lastName,"exit") == 0){
		strcpy(lastName,"");
		cls(); Main_Interface_Menu();
	}
	
	gotoxy(42,26); HLVInput::inputLetter(position); 
	
	if(strcmp(position,"exit") == 0){
		strcpy(position,"");
		cls(); Main_Interface_Menu();
	}
	
	gotoxy(92,26); HLVInput::inputLetter(City); 
	
	if(strcmp(City,"exit") == 0){
		strcpy(City,"");
		cls(); Main_Interface_Menu();
	}
	
	gotoxy(42,30); HLVInput::inputLetter(District); 
	
	if(strcmp(District,"exit") == 0){
		strcpy(District,"");
		cls(); Main_Interface_Menu();
	}
	
	gotoxy(92,30); HLVInput::inputNumber(PhoneNumber); 
		
	cls();
			
			
	char VerifyPassword[30];
	EnterPass: cls();
	
	FillInformation(30,8);
	BoxFillPassword();
	
	setcursor(1,1);
	Account_Files.open(Filename,ios::in);
	bool status = false;	
	
	do{
		Hinsy::setcursor(1,1);
		Account_Files.open(Filename,ios::in);
		Hconsole::clearBox(0,22,150,5,7);
		BoxFillPassword();
		gotoxy(67,22); Hconsole::setcolor(7); HLVInput::inputLetter(username);
		
		if(strcmp(username,"exit") == 0){
			strcpy(username,"");
			cls(); Main_Interface_Menu();
		}
		
		Account_Files.clear();
		Account_Files.seekg(0,ios::beg);
		
		while(Account_Files.read((char*)&account,sizeof(Account))){
		
			if(strcmp(username,account.getAcc_Username()) == 0){
				Hinsy::setcursor(0,0);
				Hconsole::gotoxy(97,22); cout << "This username is "; Hconsole::setcolor(4); cout << "unavailable !!";
				Hinsy::delay(2000);
				status = true;
			}
		  
		    else status = false;
		  
		  }
		  
		  Account_Files.close();
		  
	}while(status != false);
	 
	gotoxy(67,26); Hconsole::setcolor(7); HLVInput::inputAll(password); 
	
	gotoxy(67,30); Hconsole::setcolor(7); HLVInput::inputAll(VerifyPassword); 
			
	if(strcmp(password,VerifyPassword) != 0){
		
		setcursor(0,0);
		
		gotoxy(45,33); Hconsole::setcolor(4); cout << " YOUR PASSWORD IS NOT MATCH ! PLEASE RE-ENTER AGAIN.";
		gotoxy(45,34); Hconsole::setcolor(7); cout << " PRESS [ ANY KEY ] TO INPUT AGAIN.";
		strcpy(username,""); strcpy(password,""); strcpy(VerifyPassword,""); 
		
		getch();
		
		goto EnterPass;
	}
			
	else{
		
		cls();	
		
		setcursor(0,0);
		
		TextShowInformation(20,5);
				
		gotoxy(58,20);  cout << firstName;
		gotoxy(98,20);  cout << lastName;
		gotoxy(58,24);  cout << position;
		gotoxy(98,24);  cout << City;
		gotoxy(58,28);  cout << District;
		gotoxy(98,28);  cout << PhoneNumber;
		gotoxy(58,32);  cout << username;
		gotoxy(98,32);  cout << password;	
	
		
		again:
			
		char press = getch();
		
		if(press == 13){
			
			Account_Files.open(Filename,ios::out | ios::app);
			account.setFirstName(firstName); account.setLastName(lastName); account.setRole(position);
			account.setAcc_Username(username); account.setAcc_Password(password); account.setCityOrProvince(City);
			account.setDistrict(District); account.setPhoneNumber(PhoneNumber);
			Account_Files.write((char*)&account,sizeof(Account));
			Account_Files.close();
			gotoxy(40,38); Hconsole::setcolor(2); cout << "SIGNUP SUCCESSFULLY.";
			
			delay(2000);
			    
			cls();
			
            Main_Interface_Menu();
		}
		
		else if(press == 27){
			
			    gotoxy(40,38); Hconsole::setcolor(4); cout << "SIGNUP UNSUCCESSFULLY.";
			    
			    delay(2000);
			    cls();
			    
			    Main_Interface_Menu();
			    
				}
		else{
			
		 	gotoxy(40,38); Hconsole::setcolor(4); cout << "WORNG COMMAND.";
		 	
		 	goto again;
		 	return;
		} 
					
	}
			
		Account_Files.close();	
   }

//////////////////////////////////////////////////////////////// LOGIN ACCOUNT ///////////////////////////////////////////////////

bool Account_Login() {	 

    char username[30], password[30];
    bool status = false;
    
    int i=4; char press;
	Account_Files.close();
	Hconsole::clearBox(0,0,150,40,7); Hconsole::setcolor(7);
	
    Account_Files.open(Filename, ios::in);	
    
    if(Account_Files.good()){
    	
    	Account_Files.seekg(0, ios::end);
        streampos fileSize = file.tellg();
        Account_Files.seekg(0, ios::beg); 
        
        if(fileSize == 0){
	        Cloud(5,2); Cloud(20,0); Cloud(120,2); Cloud(137,0); BigTree(2,18);  Text_Login(35,5);  Imagebear(110,21);   Hconsole::setcursor(false,0);        
			gotoxy(50,28); Hconsole::setcolor(4); cout << "NO ACCOUNT DATA.";
		    delay(2000); 
		    Hconsole::clearBox(0,0,150,40,7); Hconsole::setcolor(7);
		    Main_Interface_Menu();
		}
	        Account_Files.clear();
	        Account_Files.seekg(0, ios::beg); 
	    
		do {
	    	
	        cls();	
		    
	        Cloud(5,2); Cloud(20,0); Cloud(120,2); Cloud(137,0); BigTree(2,18);  Text_Login(35,5);  Imagebear(110,21);  // design
	        setcursor(true,0);
	        gotoxy(67,21); Hconsole::setcolor(7); HLVInput::inputLetter(username);
	        gotoxy(67,25); Hconsole::setcolor(7); HLVInput::hidePassword(password);
	        i--;
	        Account_Files.clear();
	        Account_Files.seekg(0, ios::beg); 
	        
	        bool My_Username = false;
	        bool My_Password = false;
	        
	        if(i == 0){
	        	
	        	setcursor(0,0);
	        	
	        	Hconsole::setcolor(7); gotoxy(50,30);cout<<"PRESS [ ESC ] TO BACK | PRESS [ ENTER ] TO FORGOT PASSWORD.";
	        	
				a:
	        		
	        	press=getch();	
	        	
	        	if(press == 27)
				{
						cls();
						
						Main_Interface_Menu();
					
					}
					
	        	if(press == 13)
				{
	        		again:
	        			
	        		Account_Files.close();
	        		
	        		char usernameforget[30]; cls();
	        		
					Cloud(5,2); Cloud(20,0); Cloud(120,2); Cloud(137,0); BigTree(2,18);  Text_Login(35,5);  Imagebear(110,21); 
					
	        		clearBox(50,30,50,1,7);
	        		
	        		Hconsole::setcolor(7); gotoxy(50,30); cout << "[TIPS] ENTER USERNAME THAT YOU WANT TO RECOVERY"; setcursor(true,1);
	        		
					gotoxy(67,21); Hconsole::setcolor(7); HLVInput::inputLetter(usernameforget);
					
	        		ForgotPassword(usernameforget);
	        		
	        		Hinsy::setcursor(false,0);
	        		
	        		Hconsole::clearBox(40,30,60,1,7); 
	        		
	        		Hconsole::setcolor(7); Hconsole::gotoxy(50,36); cout << "[TIPS] PRESS [ ESC ] KEY TO BACK | PRESS [ ENTER ] KEY TO SEARCH AGAIN.";
			
					press = getch();
					
					if(press == 27)
					{
						
						cls();
						Main_Interface_Menu();
					
					}
					
					else if(press == 13)
					{
						
						 Hconsole::clearBox(0,0,200,40,7);
						 
						 goto  again;
					}
			        		
						break;
			        		
						} 
						
				else if (press == 27)
				{
					
					delay(2000);
					
					cls();
					
					exit(0);
					
					break;
				}
				
				else
				{
					
					goto a;
				}
	    	
		    	
		    	
			}
	
	        while(Account_Files.read((char*)&account, sizeof(Account))) 
			{
	        	
	            if (strcmp(username, account.getAcc_Username()) == 0) 
				{
	            	
	                My_Username = true;
	                
	                if (strcmp(password, account.getAcc_Password()) == 0) 
					{
	                	
	                    My_Password = true;
	                    
	                    status = true;
	                    
	                    break;
	                    
	                }
	            }
	        }
	        
	        //for output forgot password
	        
	
	        if (!My_Username && My_Password) {
	        	
	        	
	        	setcursor(0,0);
	        	
	            Hconsole::setcolor(4); gotoxy(65,28); cout << "INCORRECT USERNAME !! "; 
				Hconsole::setcolor(7); gotoxy(65,30); cout << "YOU HAVE : "; Hconsole::setcolor(14); cout << i ; Hconsole::setcolor(7); cout << " TIMES TO LOGIN. ";
				Hconsole::setcolor(6); gotoxy(50,36); cout << "[TIPS] PRESS [ ESC ] KEY TO BACK | PRESS [ ENTER KEY ] TO LOGIN AGAIN.";
				
				press = getch();
				Hinsy::setcursor(false,0);
				
				if(press == 27){
						
					cls();
					Main_Interface_Menu();
					
				}
				
				else if(press == 13){
					continue;
				}
				
				else{
					clearBox(50,28,50,4,7);
					Hconsole::setcolor(4); gotoxy(65,28); cout << "INVAID KEY !!";
					Hconsole::setcolor(6); gotoxy(65,30); cout << "[TIPS] PLEASE ENTER KEY AGAIN.";
				    Hinsy::delay(2000);
				}
					
	        } else if (!My_Password && My_Username) {
	        	
	        	setcursor(0,0);
	            Hconsole::setcolor(4); gotoxy(65,28); cout << "INCORRECT PASSWORD !! "; 
				Hconsole::setcolor(7); gotoxy(65,30); cout << "YOU HAVE : "; Hconsole::setcolor(14); cout << i ; Hconsole::setcolor(7); cout << " TIMES TO LOGIN. ";
				Hconsole::setcolor(6); gotoxy(50,36); cout << "[TIPS] PRESS [ ESC ] KEY TO BACK | PRESS [ ENTER KEY ] TO LOGIN AGAIN.";
				
				press = getch();
				
				if(press == 27){
						
					cls();
					Main_Interface_Menu();
					
				}
				
				else if(press == 13){
					continue;
				}
				
				else{
					clearBox(50,28,50,4,7);
					Hconsole::setcolor(4); gotoxy(65,28); cout << "INVAID KEY !!";
					Hconsole::setcolor(6); gotoxy(65,30); cout << "[TIPS] PLEASE ENTER KEY AGAIN.";
					Hconsole::delay(2000);
				}
	            
	        } else if(!My_Password && !My_Username){
	        	
	        	
				Hinsy::setcursor(false,0);
	        	
				Hconsole::setcolor(4); gotoxy(65,28); cout << "INCORRECT USERNAME AND PASSWORD !! "; 
				Hconsole::setcolor(7); gotoxy(65,30); cout << "YOU HAVE : "; Hconsole::setcolor(14); cout << i ; Hconsole::setcolor(7); cout << " TIMES TO LOGIN. ";
				Hconsole::setcolor(6); gotoxy(50,36); cout << "[TIPS] PRESS [ ESC ] KEY TO BACK | PRESS [ ENTER KEY ] TO LOGIN AGAIN.";
				
				press = getch();
				
				if(press == 27){
						
					cls();
					Main_Interface_Menu();
					
				}
				
				else if(press == 13){
					continue;
				}
				
				else{
					Hinsy::setcursor(false,0);
					clearBox(50,28,50,4,7);
					Hconsole::setcolor(4); gotoxy(65,28); cout << "INVAID KEY !!";
					Hconsole::setcolor(6); gotoxy(65,30); cout << "[TIPS] PLEASE ENTER KEY AGAIN.";
					Hconsole::delay(2000);
				}
	        	
			} else{
				
				setcursor(0,0);
				
	            gotoxy(65,28); Hconsole::setcolor(2); cout << "LOGIN SUCCESSFULLY."; 
	            delay(2000); 
	            cls(); 
	            Hconsole::setcolor(7);
	            Account_Files.close();
	            
	            TextWelcome(25,5);
	            cls();
	            
	            Hinsy::setcursor(false,0);
	            
	            BoookAndMemerOption();
	        }
	        
	    }while (!status);

	}
	
	else {
		
		Text_Login(35,5); Hconsole::setcursor(false,0);
	            
		gotoxy(50,28); Hconsole::setcolor(4); cout << "NO ACCOUNT DATA.";
	    delay(2000); 
	    Hconsole::clearBox(0,0,150,40,7); Hconsole::setcolor(7);
	    Main_Interface_Menu();
		 
	}
	
	
    Account_Files.close();
    return status;  
}

void Library_Text(int a, int b){
 
 
 Hconsole::gotoxy(a,b);     Hconsole::setcolor(5);  cout << R"(          _   _ _______   _      _____ ____  _____            _______     __ )";
 Hconsole::gotoxy(a,b+1);   Hconsole::setcolor(5);  cout << R"(    /\   | \ | |__   __| | |    |_   _|  _ \|  __ \     /\   |  __ \ \   / / )";
 Hconsole::gotoxy(a,b+2);   Hconsole::setcolor(3);  cout << R"(   /  \  |  \| |  | |    | |      | | | |_) | |__) |   /  \  | |__) \ \_/ /  )";
 Hconsole::gotoxy(a,b+3);   Hconsole::setcolor(3);  cout << R"(  / /\ \ | . ` |  | |    | |      | | |  _ <|  _  /   / /\ \ |  _  / \   /   )";
 Hconsole::gotoxy(a,b+4);   Hconsole::setcolor(6);  cout << R"( / ____ \| |\  |  | |    | |____ _| |_| |_) | | \ \  / ____ \| | \ \  | |    )";
 Hconsole::gotoxy(a,b+5);   Hconsole::setcolor(6);  cout << R"(/_/    \_\_| \_|  |_|    |______|_____|____/|_|  \_\/_/    \_\_|  \_\ |_|    )";
                                                                             

}

void main_Interface(int a, int b){
 
 Hinsy::setFont(14,600,L"Consolas",true);
 Library_Text(a-5,b);
 
 // cloud
 Hinsy::setcolor(7);
 Cloud(a-30,b-3); Cloud(a-14,b-4);
 Cloud(a+80,b-3); Cloud(a+97,b-4);
 // Fences
 
 Fences(a-40,b+26); Fences(a-12,b+26); Fences(a+49,b+26); Fences(a+69,b+26);
 
 // Building 
 
 Building(a-24,b+12);

 // Under Line 
 
 Hconsole::HLine(a,b+8,60,3,219);
 
 // Login Button 
 Hconsole::drawBoxDoubleLineWithBG(a+54,b+15,34,1,153);
 Hconsole::gotoxy(a+68,b+16); Hconsole::setcolor(159); cout << "LOGIN ";
 
 // Create Account Button
 
 Hconsole::drawBoxDoubleLineWithBG(a+54,b+20,34,1,153);
 Hconsole::gotoxy(a+64,b+21); Hconsole::setcolor(159); cout << "CREATE ACCOUNT";

 // TIPS TEXT 
 
 Hconsole::gotoxy(a-22,b+23); Hconsole::setcolor(7); cout << "[TIPS] USE ARROW KEYS TO SELETE THE BUTTON"; 
 
 // Box Frame 
 
// Hconsole::drawBoxSingleLine(a-25,b-3,115,33,0);
 
 // Border Content 
 
// Hconsole::drawBoxSingleLine(a-34,b-4,135,35,6);
 
}



void Main_Interface_Menu(){
	 
	char press; int x = 1, y = 1; 
	int a = 40, b = 5;
	
	main_Interface(a,b);
	 
	do{
		 if(!kbhit){
		 Hinsy::clearBox(a-24,b+12,50,8,7);
         TextLoadingBeforeLogin(a-24,b+12);
		 }
		 
		 Hconsole::setcursor(false,0);
		 // Login Button 
		 Hconsole::drawBoxDoubleLineWithBG(a+54,b+15,34,1,136);
		 Hconsole::gotoxy(a+68,b+16); Hconsole::setcolor(143); cout << "LOGIN ";
		 
		 // Create Account Button
		 
		 Hconsole::drawBoxDoubleLineWithBG(a+54,b+20,34,1,136);
		 Hconsole::gotoxy(a+64,b+21); Hconsole::setcolor(143); cout << "CREATE ACCOUNT";	
	 
	   if(x == 1 && y == 1){
	   	  Hconsole::clearBox(a+90,b+21,8,1,7);
		  Hconsole::drawBoxDoubleLineWithBG(a+54,b+15,34,1,153);
          Hconsole::gotoxy(a+68,b+16);  Hconsole::setcolor(159); cout << "LOGIN";
          Hconsole::setcolor(7); Hconsole::gotoxy(a+90,b+16); cout << "<=="; 
	      
	   }  
	   
	   	if(x == 1 && y == 2){
	   	 Hconsole::clearBox(a+90,b+16,8,1,7);
		 Hconsole::drawBoxDoubleLineWithBG(a+54,b+20,34,1,153);
		 Hconsole::gotoxy(a+64,b+21); Hconsole::setcolor(159); cout << "CREATE ACCOUNT";
		 Hconsole::setcolor(7); Hconsole::gotoxy(a+90,b+21); cout << "<=="; 
			      
	   } 
	   	
	 press = getch();
	 
	 switch(press){
	 	 
	    case 75:{ //left
			
			x--;
				
			if (x < 1 && y == 1){
				
				x = 1;
				y = 2;
				
			}else if (x < 1 && y == 2){
				
				x = 1;
				y = 1;
		    }
				
			break;
		}
		
		case 77:{ // right
			
			x++;
				
			if( x > 1 && y == 1){
				
				x = 1;
				y = 2;
				
			}else if( x > 1 && y == 2){
				
				x = 1;
				y = 1;
				
			}
				break;
			}
		
		case 72:{ // up
			
			y--;
				
			if(y < 1){
				
				y = 2;
				
			}
				break;
		}
		
		case 80:{ //down
				
			y++;
				
			if( y > 2){
				
				y = 1;
				
			}
				break;
		}
		
		
		} // end switch
	 	 
	 }while(press != 13);
	 
	 
	   if(x == 1 && y == 1){
	   	 
	   	 cls();
		 Account_Login();
	      
	   }  
	   
	   	if(x == 1 && y == 2){
	   	  cls();
	   	  Signup_Account();
	   	  
	    } 
	   
   }

#endif
