#ifndef STRING_H
#define STRING_H
#include<iostream>
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;


class String {
public:
    
    String();
    String(const char* cstr);
    String(const String& other);

   
    String& operator=(const String& other);

    
    char& operator[](size_t index);
    const char& operator[](size_t index) const;

   
    int operator()(char ch) const;

   
    operator int() const;

    
    size_t length() const;

    
    void clear();

   
    ~String();

private:
    char* str;
    size_t len;
};

#endif 
