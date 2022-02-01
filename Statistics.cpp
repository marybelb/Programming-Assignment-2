#include <iostream>
#include "Statistics.h"

double getMedian(const int myArray[], const int size)
{
    if(size % 2 ==0)
    {
        return (myArray[(size-1)/2]+myArray[size/2])/2.0; //formula for finding the median if the size is an even number
    }
    return myArray[size/2]; 
}

int getLargest(const int myArray[], const int size)
{
    int large=myArray[0];
    for(int i = 1; i<size; i++)
    {
        if (myArray[i]>large)
        large = myArray[i]; //assigns the largest number to the variable large
    }
    return large;
}
