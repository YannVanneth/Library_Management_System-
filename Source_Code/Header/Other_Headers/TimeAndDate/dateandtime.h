#ifndef __TIME_N__
#define __TIME_N__

// Header Files

#include <iostream>
#include <ctime>
#include <chrono>
#include "../../ANT_Header/HinsyOOP_Modifiled.h"

using namespace std;
//using namespace HinsyOOP;

class DateAndTime{
	
	private:
		
		time_t now = time(0);
		tm date = *localtime(&now);
	
	public:
    
    
	int getCurrentSecond(){
	
		return date.tm_sec;
	
	}
	
	int getCurrentMinute(){
		
		return date.tm_min;
	}
	
	int getCurrentHour(){
		
		return date.tm_hour;
	}
	
	int getCurrentYear(){
		
		return date.tm_year; 
		
	}
	
	int getCurrentDay(){
		
		time_t now = time(0); 
		
		tm date = *localtime(&now);
		
		return date.tm_mday; 
		
	}
	
	
	int getCurrentMonth(){
		
		return date.tm_mon;
		
	}

    struct tm getCurrentDate(){
		 
		tm TheDate = {getCurrentSecond(),getCurrentMinute(),getCurrentHour(),
		getCurrentDay(),getCurrentMonth(),getCurrentYear()};
		
		return TheDate;
    	
	}
//    For Demo or sumulation 
	
    struct tm getCurrentDateForReturn(){
		 
		tm TheDate = {getCurrentSecond(),getCurrentMinute(),getCurrentHour(),
		getCurrentDay()+10,getCurrentMonth(),getCurrentYear()};  
		
		return TheDate;
    	
	}
	
	int daysBetweenDates(const tm& start_date, const tm& end_date) {
	    
	    chrono::system_clock::time_point start = chrono::system_clock::from_time_t(mktime(const_cast<tm*>(&start_date)));
	    chrono::system_clock::time_point end = chrono::system_clock::from_time_t(mktime(const_cast<tm*>(&end_date)));
	
	    auto duration = chrono::duration_cast<chrono::duration<int, ratio<86400>>>(end - start);
	
	    int days = duration.count();
	
	    return days;
	}
	
	tm DaysCommite_to_Return(const tm& date, int days) {

	    chrono::system_clock::time_point time_point = chrono::system_clock::from_time_t(mktime(const_cast<tm*>(&date)));

	    chrono::system_clock::time_point result_time_point = time_point + chrono::hours(days * 24);
	
	    time_t result_time = chrono::system_clock::to_time_t(result_time_point);
	    tm result_date = *localtime(&result_time);
	
	    return result_date;
	}

	void printCalendar(int year, int month) {
		    // Get the first day of the month
		    tm timeinfo = {};
		    timeinfo.tm_year = year - 1900;
		    timeinfo.tm_mon = month;
		    timeinfo.tm_mday = 1;
		    mktime(&timeinfo);
		
		    // Get the day of the week for the first day
		    int first_day_of_week = timeinfo.tm_wday;
		
		    // Get the number of days in the month
		    timeinfo.tm_mday = 0;
		    mktime(&timeinfo);
		    int num_days_in_month = timeinfo.tm_mday;
		
		    // Print the calendar header
		    cout << "Sun Mon Tue Wed Thu Fri Sat" << endl;
		
		    // Print leading spaces if necessary
		    for (int i = 0; i < first_day_of_week - 1; i++) {
		        cout << "    ";
		    }
		
		    // Print the days of the month
		    for (int day = 1; day <= num_days_in_month; ++day) {
		        cout << setw(3) << day << " ";
		
		        // Move to the next line if it's a Saturday
		        if ((first_day_of_week + day -1) % 7 == 0) {
		            cout << endl;
		        }
		    }
		
		}

	bool isLeapYear(int year) 
	{
		
	    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	    
	}
	
	bool isValidDate(int day, int month, int year) 
	{
	
	    int current_year = this->getCurrentYear() + 1900;
	    int current_month = this->getCurrentMonth() + 1;
	    int current_day = this->getCurrentDay();
	
	    if (year < 1970 || year > current_year + 10) 
		{
			
	        return false;
	        
	    }
	
	    if (year >= current_year) 
		{
	        if (month > current_month) 
			{
				
	            return false;
	            
	        }
	        
	        if (month == current_month && day > current_day) 
			{
				
	            return false;
	            
	        }
	    }
	
	    if (month < 1 || month > 12 || day < 1) 
		{
			
	        return false;
	        
	    }
	
	    int days_in_month[] = {31, 28 + isLeapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	    
	    if (day > days_in_month[month - 1]) 
		{
			
	        return false;
	        
	    }
	
	    return true;
	}

	
};

int getRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}
#endif