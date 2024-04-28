#ifndef  ___FUNCTION_H_
#define  ___FUNCTION_H_

// Build-in Header

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// User Define Header

#include "../../ANT_Header/antheaderplusplus.h"
#include "../../ANT_Header/antheaderInput.h"

using namespace std;

////////////////////////////

int input_intNumber(){
	
  again :
  string std_string = "";
  char input;
  
  while(1)
  {
    
    input = getch();   
    if(input == 13)
    {
      break;
    }
    else if(input == 10)
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
    else if(!(input>='0' && input<='9')  )
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
  
  // convert std_string to int
  if (std_string.empty()) {
      
      goto again;
//      return 0;
  }
  int result = stoi(std_string);
  
  return result;
}

//////////////////////////////////////
string inputLetter()
{
	again :
		
	string std_string = "";
	char input;
		
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
	if (std_string.empty()) {
      
      goto again;
//      return 0;
  	}
	string result = (std_string);
	return result;
}

float InputNumber(){
	
  again :
  string std_string = "";
  char input;
  
  while(1)
  {
    
    input = getch();   
    if(input == 13)
    {
      break;
    }
    else if(input == 10)
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
    else if(!(input>='0' && input<='9' ||  input == '.')  )
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
  
  // convert std_string to int
  if (std_string.empty()) {
      
      goto again;
//      return 0;
  }
  float result = stof(std_string);
  
  return result;
}

string inputStringOrNumber() {
  string userInput = "";
  char input;
  bool hasInput = false;  // Flag to track whether any input has been entered

  while (1) {
    input = getch();

    if (input == 13) {  // Enter key
      if (hasInput) {
        break;
      } else {
        continue;  // Skip the Enter key if no input has been entered
      }
    } else if (input == 8) {  // Backspace key
      if (!userInput.empty()) {
        cout << "\b \b";
        userInput.pop_back();
        hasInput = !userInput.empty();  // Update the flag based on remaining input
      }
    } else {
      cout << input;
      userInput.push_back(input);
      hasInput = true;  // Set the flag since user has entered something
    }
  }

  try {
    // Attempt to convert to a number
    float numberResult = stof(userInput);
    return userInput; // Return the original string if it's a valid number
  } catch (invalid_argument&) {
    // If conversion to number fails, treat it as a string
    return userInput;
  }
}
////////////////////////////
#endif