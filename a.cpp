#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

int main()
{
   	//getting local time
    time_t t = time(NULL);
    tm *timePtr = localtime(&t); //stores the local time of the computer.
   	
    int sec = (timePtr->tm_sec);
    int min = (timePtr->tm_min);
    int hours = (timePtr->tm_hour);
    string timestr;

   	//convert time to 12 hrs format

    if (hours > 12)
    {
        hours = hours % 12;
        timestr = "PM";
    }
    else
    {
        timestr = "AM";
    }

    while (true) 
    {
        system("cls");
        
       	//we will get output from here
        cout << "digital Clock Local time";
        
        cout << "      |" << hours << " : " << min << " : " << sec << " " << timestr << " |" << endl;
       
       	//increment sec min and hours	
        sec++;
        if (sec > 59)
        {
            sec = 0;
            min++;
        }

        if (min > 59)
        {
            min = 0;
            hours++;
        }

        if (hours > 12)
        {
            hours = 1;
        }

        Sleep(1000);
    }
}