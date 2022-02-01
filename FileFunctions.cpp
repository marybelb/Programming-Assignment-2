#include <iostream>
#include <fstream>
#include <ctime>
#include "FileFunctions.h"

using namespace std;

void WriteRandomData(int N, int M, const char *filename)
{
    //declare the variables
    int i;
    int randomNum;
    int max = M + 1;
    srand(time(NULL));
    ofstream outputfile;
    outputfile.open(filename); //open the file and write the random integers to it
    for(int i=0; i<N; i++)
    {
        randomNum = rand() % max + 0; //generate random integers from 0 to M
        outputfile<<randomNum<<endl;
    }
    outputfile.close();
}

void ReadData(const char *filename, int &size, int myArray[])
{
    size = 0;
    ifstream fin;
    fin.open(filename);
    while(!fin.eof()) //while the file is not at the end keep adding to the size
    {
    fin>>myArray[size++];
    }
    size--;
}
