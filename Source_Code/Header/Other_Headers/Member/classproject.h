#ifndef   ____CLASSPROJECT__H__
#define   ____CLASSPROJECT__H__

// Build-in Header

#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
#include<iomanip>
#include <cctype>

// User Define Header
#include "../../ANT_Header/HinsyOOP_Modifiled.h"
#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderinput.h"
#include "../../Design_Header/designproject.h"
#include "function.h"

///////////////////////////////////// PROPOTYPE FUNCTION ///////////////////////

void BoxinputMember();

////////////////////////////////////////



class Member{
	
	protected:
		
		int id;
		char name[25],gender[15],dob[25],position[25],location[25],phone[20];
		
	public:
		
		void SetId(int id){
			this->id=id;
		}
		
		void SetName(const char* n){
			strcpy(this->name,n);
		}
		void SetGender(const char* gender){
			strcpy(this->gender,gender);
		}
		void SetDob(const char* dob){
			strcpy(this->dob,dob);
		}
		void Setposition(const char* position){
			strcpy(this->position,position);
		}
		void SetLocation(const char* location){
			strcpy(this->location,location);
		}
		
	public:
		
		int Getmemberid(){
			return id;
		}
		const char* GetName(){
			return name;
		}
		const char* GetGender(){
			return gender;
		}
		const char* GetDOB(){
			return dob;
		}
		const char* GetPosition(){
			return position;
		}
		const char* GetLocation(){
			return location;
		}
		const char* GetPhone(){
			return phone;
		}
		
	public:
		static void Header(){
			
			foreColor(7);
			cout<<left;
			cout<<setw(15)<<"ID";
			cout<<setw(25)<<"NAME";
			cout<<setw(15)<<"GENDER";
			cout<<setw(25)<<"DATE OF BIRTH";
			cout<<setw(20)<<"POSITION";
			cout<<setw(20)<<"LOCATION";
			cout<<setw(20)<<"PHONE NUMBER";
		}
		
	public:
		
		void toLower(char str[]) {
			
		    int length = std::strlen(str); // Get the length of the string
		
		    // Iterate through each character in the string
		    for (int i = 0; i < length; ++i) {
		        str[i] = std::tolower(str[i]); // Convert character to lowercase
		    }
		    
		}
	
		
		
		void Input(){
			
			string strid,strdate;
			
			BoxinputMember();
			foreColor(6);
			gotoxy(30,15);cout<<"ENTER  MEMBER ID                     : ";
			gotoxy(30,18);cout<<"ENTER  MEMBER NAME                   : ";
			gotoxy(30,21);cout<<"ENTER  MEMBER GENDER                 : ";
			gotoxy(30,24);cout<<"ENTER  MEMBER DATE OF BIRTH          : ";
			gotoxy(30,27);cout<<"ENTER  MEMBER POSITION               : ";
			gotoxy(30,30);cout<<"ENTER  MEMBER LOCATION               : ";
			gotoxy(30,33);cout<<"ENTER  MEMBER PHONE NUMBER           : ";
			
			
			
//			foreColor(0); gotoxy(82,24); cout<<"DD/MM/YYYY";
			setcursor(1,1);
			
			foreColor(7); gotoxy(82,15); cout<<id;
			foreColor(7); gotoxy(82,18);HinsyOOP::HLVInput::inputLetter(name);
			foreColor(7); gotoxy(82,21);HinsyOOP::HLVInput::inputLetter(gender);
//			foreColor(0); gotoxy(82,24); cout<<"               ";
			foreColor(0); gotoxy(82,24); cout<<"DD/MM/YYYY";
			foreColor(7); gotoxy(82,24);HinsyOOP::HLVInput::inputDate(dob);
			foreColor(7); gotoxy(82,27);HinsyOOP::HLVInput::inputLetter(position);
			foreColor(7); gotoxy(82,30);HinsyOOP::HLVInput::inputLetter(location);
			foreColor(7); gotoxy(82,33);HinsyOOP::HLVInput::input4Tel(phone);
			
			toLower(position);
			
			setcursor(0,0);
			foreColor(6);
			gotoxy(50,37);cout<<"PRESS [ESC] TO BACK MENU | PRESS [ENTER] TO INPUT AGAIN.";
		}
		
		static void TextUpdate(){
			
			setcursor(0,0);
			
			foreColor(6);
			gotoxy(14,15);cout<<"ENTER MEMBER ID                : ";
			gotoxy(14,18);cout<<"ENTER NEW MEMBER NAME          : ";
			gotoxy(14,21);cout<<"ENTER NEW MEMBER GENDER        : ";
			gotoxy(14,24);cout<<"ENTER NEW MEMBER DATE OF BIRTH : ";
			gotoxy(14,27);cout<<"ENTER NEW MEMBER POSITION      : ";
			gotoxy(14,30);cout<<"ENTER NEW MEMBER LOCATION      : ";
			gotoxy(14,33);cout<<"ENTER NEW MEMBER PHONE NUMBER  : ";
			foreColor(0); gotoxy(47,24); cout<<"DD/MM/YYYY";
		}
		
		void UpdateMember(){
			
			string strdate;
	
			setcursor(1,1);
			
			foreColor(7); gotoxy(47,15); cout<<id;
			foreColor(7); gotoxy(47,18); HinsyOOP::HLVInput::inputLetter(name);
			foreColor(7); gotoxy(47,21); HinsyOOP::HLVInput::inputLetter(gender);
			foreColor(0); gotoxy(47,24); cout<<"DD/MM/YYYY";
//			foreColor(0); gotoxy(47,24); cout<<"               ";
			foreColor(7); gotoxy(47,24); HinsyOOP::HLVInput::inputDate(dob);
			foreColor(7); gotoxy(47,27); HinsyOOP::HLVInput::inputLetter(position);
			foreColor(7); gotoxy(47,30); HinsyOOP::HLVInput::inputLetter(location);
			foreColor(7); gotoxy(47,33); HinsyOOP::HLVInput::input4Tel(phone);
			
			toLower(position);
		}
		
		void Output(){
			
			
			
			foreColor(6);
			cout<<left;
			cout<<setw(15)<<id;
			cout<<setw(25)<<name;
			cout<<setw(15)<<gender;
			cout<<setw(25)<<dob;
			cout<<setw(20)<<position;
			cout<<setw(20)<<location;
			cout<<setw(20)<<phone;
		}
		
		////////////////////////////////
		//add menthod to class
		///////////////////////////////
		
		static void HeaderSearch(int a,int b){
			
			foreColor(3);
			gotoxy(a,b);   cout<<"MEMBER ID            : ";
			gotoxy(a,b+3); cout<<"MEMBER NAME          : ";
			gotoxy(a,b+6); cout<<"MEMBER GENDER        : ";
			gotoxy(a,b+9); cout<<"MEMBER DATE OF BIRTH : ";
			gotoxy(a,b+12);cout<<"MEMBER POSITION      : ";
			gotoxy(a,b+15);cout<<"MEMBER LOCATION      : ";
			gotoxy(a,b+18);cout<<"MEMBER PHONE         : ";
			
		}
		
		void OutputSearch(){
			
			foreColor(7);
			gotoxy(110,13); cout<<id;
			gotoxy(110,16); cout<<name;
			gotoxy(110,19); cout<<gender;
			gotoxy(110,22); cout<<dob;
			gotoxy(110,25); cout<<position;
			gotoxy(110,28); cout<<location;
			gotoxy(110,31); cout<<phone;
		}
};


/////////////////////////////////////
#endif