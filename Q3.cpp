#include <iostream>
using namespace std;

//function protorypes
void TopRhombus(int, int);
void BottomRhombus(int, int);
void Rows(int, int);
void PrintRhombus(int);

int main() 
{
    //prompt the user for their input 
    int userInput;
    cout<<"Enter a number[1-9]: ";
    cin>>userInput;
    if (userInput > 0 && userInput <10) //make sure the user input is in bounds
    {
    //call the function to print the rhombus
    PrintRhombus(userInput);
    }
    else
    {
        cout << "Error: input not in bounds"<<endl; //error check the user input
    }
    return 0;
}


//recursive function that prints the correct amount of rows based on the userinput 
void Rows(int n, int maxRow) 
{
    if (n < maxRow) 
    {
        cout << n <<' ';
        Rows(n + 1, maxRow);
    }
    cout << n <<' ';
}

//recursive function that prints the top part of the rhombus
void TopRhombus(int n, int space = 0)
{
    if (n > 1)
    {
        TopRhombus(n - 1, space + 2);
    }
    cout << string(space, ' ');
    Rows(1, n);
    cout << endl;
}

//recursive function that prints the bottom part of the rhombus
void BottomRhombus(int n, int space)
{
    if (n >= 1)
    {
        cout << string(space, ' ');
        Rows(1, n);
        cout << endl;
        BottomRhombus(n - 1, space + 2);
    }
}

void PrintRhombus(int userInput)
{
    TopRhombus(userInput, 0);
    BottomRhombus(userInput - 1, 2);
}
