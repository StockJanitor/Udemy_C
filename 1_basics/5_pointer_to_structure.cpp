
#include <stdio.h>  // C
#include <iostream> // C++
#include <stdlib.h>
using namespace std;

// definition
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    Rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.breadth << endl;

    struct Rectangle *p = &r;
    cout << p->breadth << endl
         << p->length << endl;

    // same result to modify structure
    r.length = 15;
    (*p).length = 20;
    p->length = 25;

    // C type initialize
    struct Rectangle *b;
    b = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    b->breadth = 15;
    b->length = 7;
    delete[] b;

    // C ++ type initialize
    struct Rectangle *a;
    a = new Rectangle;
    cout << sizeof(a);
    free(a);
}