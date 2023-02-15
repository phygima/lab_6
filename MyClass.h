//
//  MyClass.h
//  Lab6_7
//
//  Created by Виктория Гладкова on 08.02.2023.
//

#ifndef MyClass_h
#define MyClass_h

#include <iostream>
#include <string>

using namespace std;

template <typename T1>
class MyClass {
public:
    void swap(T1&, T1&);
};
 
 
template <typename T1>
void MyClass<T1>::swap(T1 &left, T1 &right) {
    T1 temp;

    temp = left;
    left = right;
    right = temp;
}
 
template <>
class MyClass<char *> {
public:
    void swap(char *, char *);
};
 
void MyClass<char *>::swap(char * left, char * right) {
    MyClass<char> symbols_swapper;
    int len = strlen(left) + 1;
    for (int i = 0; i < len; i++) {
        symbols_swapper.swap(left[i], right[i]);
    }
 
}
 
 
template <typename T1, typename T2>
void test(const char* info, T1 ix, T1 iy, T2 dx, T2 dy) {
    cout << info << '\n';
    cout << "ix = " << ix << '\t';
    cout << "iy = " << iy << '\n';
    cout << "dx = " << dx << '\t';
    cout << "dy = " << dy << '\n';
    cout << '\n';
}


#endif /* MyClass_h */
