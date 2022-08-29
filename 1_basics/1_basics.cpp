/* 
Notes:

defining strucutre, size of structure, declaring a structure, accessing members


*/
#include <stdio.h> // C
#include<iostream> // C++
#include <stdlib.h>
using namespace std;

// definition
struct Rectangle{
    int length;
    int breadth;
};

int main()
{

    int *p;

// allocation of heap memory
    // C language
    p=(int *)malloc(5*sizeof(int)); // allocation of heap memory
    free(p); // free it, 

    // C++ langugage
    p=new int [5];

    p[0]=10; p[1]=15;p[2]=14;p[3]=21;p[4]=31;

    for(int i=0;i<5;i++)
    {
        cout << p[i]<< endl;
    }

    

    // delete [] p; // C++ to free memory
    free(p); // C to free

}