/* 
Notes:

defining strucutre, size of structure, declaring a structure, accessing members


*/
#include<iostream>
using namespace std;


struct Rectangle{
    int length;
    int breadth;
}

int main(){
    struct Rectangle r; //declaration

    struct Rectangle r={10,5}; // declaration and initialization


    cout << sizeof(r);
}