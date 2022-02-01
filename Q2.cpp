#include <iostream>
#include <time.h>
#include <fstream>
#include "FileFunctions.h"
#include "Statistics.h"

using namespace std;

//function prototype
int * DoubleAndReverse (int* list, int size);

int main()
{

    //declare variables
    int myArray[1000];
    int arraysize;
    const char *filename = "data.txt";

    //call functions
    WriteRandomData(10, 10, filename);
    ReadData(filename, arraysize, myArray);
    double median = getMedian(myArray, arraysize);
    int largest = getLargest(myArray, arraysize);
    int* double_reverse = DoubleAndReverse(myArray, arraysize);

    //print out answers
    cout<<"Writing file: "<<filename<<endl;
    cout<<"Reading file: "<<filename<<endl;
    cout<<"Array size: "<<arraysize<<endl;
    cout<<"Doubled and reversed is [";
    for(int i = 0; i<(2*arraysize-1);i++)
    {
        cout<<double_reverse[i]<<" ";
    }
        cout<<double_reverse[2*arraysize-1]<<"]"<<endl; //double the array and print it
    cout<<"Median is: "<<median<<endl; //finish printing the rest of the output
    cout<<"Largest is: "<<largest<<endl;
    return 0;
}

int * DoubleAndReverse (int* list,int size)
{
    int* modifiedList = new int[2*size]; //create a new array with double the size of the original array
    for(int i = 0; i<size; i++)
    {
        modifiedList[i]=list[i];
        modifiedList[2*size-i-1]=list[i];
    }
    return modifiedList;

}
