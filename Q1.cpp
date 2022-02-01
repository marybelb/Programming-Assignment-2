#include <iostream>
#include <stdlib.h>
#include "pa2Functions.h"

//global variable e
const int ENTRIES = 10;

using namespace std;

int main()
{
    initialize(); //prints the assignment details
    //declare variables
    char userInput;
    double first, last, delta;
    int single;
    int firstVal, secondVal;

    while(userInput != 'q' || userInput != 'Q') //keep looping while the user does not quit the program
    {
    cout<<"Please enter command code: "; //prompt the user for a command code
    cin>>userInput;
    //define strings for different parameter inputs
    string mystring3 = "rRuUcCkKsSnNxXlLyY";
    string mystring2 = "fFbB";
    string mystring1 = "oOiI";
    string mystring = "dDeE";

        if (userInput == 'q' || userInput == 'Q') //quit the program if user enters q or Q 
        {
            exit(0);
        }
        if(checkCode(userInput) != 1) //error checks to see if the users input is a legal command code
        {
            cout<<"Invalid command code"<<endl;
        }
        else if (mystring3.find(userInput) != string::npos)  
        {
            cout<<"Please enter command parameters: ";
            cin>>first>>last>>delta;
        }
        else if (mystring2.find(userInput) != string::npos)
        {
            cout<<"Please enter command parameters: ";
            cin>>single; 
        }
        else if (mystring1.find(userInput) != string::npos)
        {
            cout<<"Please enter command parameters: ";
        }
        else if (mystring.find(userInput) != string::npos)
        {
            cout<<"Please enter command parameters: ";
            cin>>firstVal>>secondVal;
        }
        else
        {
            continue;
        }
        
        switch(userInput) //switch statement for each command code entry 
        {
            case 'F':
            case 'f': 
                cout<<factorial(single)<<endl; 
                break;
            case 'B':
            case 'b': 
                cout<<fibonacci(single)<<endl;
                break;
            case 'R':
            case 'r':
            {
                double squareValue;
                int j = 0;
                if (delta<=0 || first>last) //check if delta is less than or equal to zero or if first is greater than last
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for(squareValue=first; squareValue<=last; squareValue=squareValue+delta)
                {
                if (j < ENTRIES) //print maximum 10 entries
                {
                    cout<<findSqrtValue(squareValue)<<" ";
                    j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'U':
            case 'u':
            {
                double length;
                int j = 0;
                if (delta<=0 || first>last) //check if delta is less than or equal to zero or if first is greater than last
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for(length=first; length<=last; length=length+delta)
                {
                if (j < ENTRIES) //print maximum 10 entries
                {
                cout<<areaSquare(length)<<" ";
                j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'C':
            case 'c':
            {
                double radius;
                int j = 0;
                if (delta<=0 || first>last) //check if delta is less than or equal to zero or if first is greater than last
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for(radius=first; radius<=last; radius=radius+delta)
                {
                if (j < ENTRIES) //print maximum 10 entries
                {
                cout<<areaCircle(radius)<<" ";
                j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'E':
            case 'e':
            {
                int eNum;
                int j = 0;
                if (firstVal>secondVal) //check if the first value is greater then the second
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for (eNum = firstVal; eNum < secondVal; eNum++)
                {
                if (j < ENTRIES && findNextEvenValue(eNum) < secondVal) //print maximum 10 entries with the last value being less than the secondVal
                {
                cout<<findNextEvenValue(eNum)<<" ";
                j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'K':
            case 'k':
            {
                double userarg;
                int j = 0;
                if (delta<=0 || first>last) //check if delta is less than or equal to zero or if first is greater than last
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for (userarg = first; userarg <= last; userarg=userarg+delta)
                {
                if (j < ENTRIES) //print maximum 10 entries
                {
                cout<<lucky(userarg)<<" ";
                j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'S':
            case 's':
            case 'N':
            case 'n':
            case 'X':
            case 'x':
            {
                double userChoice;
                int j = 0;
                if (delta<=0 || first>last) //check if delta is less than or equal to zero or if first is greater than last
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for (userChoice = first; userChoice <= last; userChoice=userChoice+delta)
                {
                if (j < ENTRIES) //print maximum 10 entries
                {
                cout<<doMath(userChoice, userInput)<<" ";
                j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'L':
            case 'l':
            {
                double userlog;
                int j = 0;
                if (delta<=0 || first>last) //check if delta is less than or equal to zero or if first is greater than last
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for (userlog = first; userlog <= last; userlog=userlog+delta)
                {
                if (j < ENTRIES) //print maximum 10 entries
                {
                cout<<naturalLog(userlog)<<" ";
                j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'Y':
            case 'y':
            {
                double userCat;
                int j = 0;
                if (delta<=0 || first>last) //check if delta is less than or equal to zero or if first is greater than last
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for(userCat = first; userCat <= last; userCat=userCat+delta)
                {
                if (j < ENTRIES) //print maximum 10 entries
                {
                cout<<findNyanCatValue(userCat)<<" ";
                j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'D':
            case 'd':
            {
                int oNum;
                int j = 0;
                if (firstVal>secondVal) //check if the first value is greater then the second
                {
                    cout<<"No computation needed"<<endl;
                }
                else
                {
                for (oNum = firstVal; oNum < secondVal; oNum++)
                {
                if (j < ENTRIES && findNextOddValue(oNum) < secondVal) //print maximum 10 entries with the last value being less than the secondVal
                {
                cout<<findNextOddValue(oNum)<<" ";
                j++;
                }
                }
                }
                cout<<endl;
                break;
            }
            case 'I':
            case 'i': break;
            case 'O':
            case 'o': break;
            case 'Q':
            case 'q': exit(0); //quit program if user enters q or Q
                      break;
        }
    }
    }

