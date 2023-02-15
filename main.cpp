#define _CRT_SECURE_NO_DEPRECATE
#include "MyClass.h"


using namespace std;



int main()
{
    int ix = 100, iy = 200;
    char S1[255] = " Hello ";
    char S2[255] = " World! ";
 
    MyClass<int> int_object;
    MyClass<char*> str_object;
 
    test("before:", ix, iy, S1, S2);
 
 
    int_object.swap(ix, iy);
    str_object.swap(S1, S2);      
 
    test("after:", ix, iy, S1, S2);
 

}
