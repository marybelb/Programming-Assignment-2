#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
#include "pa2Functions.h"

//global variable
extern const int ENTRIES = 10;

using namespace std;

void initialize()
{
    //prints out assignment details
    cout<<"EC 327: Introduction to Software Engineering"<<endl;
    cout<<"Fall 2021"<<endl;
    cout<<"Programming Assignment 2"<<endl;
    cout<<"Value of Entries is: "<<ENTRIES<<endl; 
}

bool checkCode(char usercode)
{
    string codes="FfBbRrUuCcEeKkSsNnXxLlYyDdIiOoQq"; //define a string for all of the legal command codes
    if (codes.find(usercode) != string::npos) //error check if the user comman code is legal
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*void writeDataToFile(const char * userFile)
{
    ofstream myFile;
    myFile.open (*userFile);
}

void readDataFromFile(const char *)
{

}*/

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    return num * factorial(num-1); //recursive function
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2)); //recursive function
    }
}

double findSqrtValue(double value)
{
    return sqrt(value); //using cmath library
}

double naturalLog(double userinput)
{
    return log(userinput); //using cmath library
}

double areaCircle(double radius)
{
    return 3.14*pow(radius,2); //using cmath library
}

double areaSquare(double length)
{
    return length*length;
}

int findNextOddValue(int userVal)
{
    if (userVal % 2 == 0) //if the value is even add 1
    {
        return userVal + 1;
    }
    else 
    {
        return userVal + 2; //if the value is odd add 2 
    }
}

int findNextEvenValue(int userValue)
{
    if (userValue % 2 == 0) //if the value is even add 2
    {
        return userValue + 2;
    }
    else
    {
        return userValue + 1; //if the value is odd add 1
    }
}

double findNyanCatValue(double myNum)
{
    //using cmath library
    return pow((4*myNum),myNum)+myNum+10;
}

double doMath(double userin, char input)
{
    //returns the answer based on which character the user inputs
    if (input == 'S' || input == 's')
    {
        return sin(userin); //using cmath library
    }
    else if (input == 'N' || input == 'n')
    {
        return cos(userin); //using cmath library
    }
    else
    {
        return exp(userin); //using cmath library
    }
}

double lucky(double userarg)
{
    double seed = time(0) + userarg;  
    srand(seed);
    return rand();

}

