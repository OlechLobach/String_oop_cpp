#include "String.h"

String::String() : str(nullptr), len(0) {}

String::String(const char* cstr) : str(nullptr), len(0) {
    if (cstr) {
        len = strlen(cstr);
        str = new char[len + 1];
        strcpy_s(str, len + 1, cstr);
    }
}

String::String(const String& other) : str(nullptr), len(0) {
    len = other.len;
    str = new char[len + 1];
    strcpy_s(str, len + 1, other.str);
}

String& String::operator=(const String& other) {
    if (this != &other) {
        delete[] str;
        len = other.len;
        str = new char[len + 1];
        strcpy_s(str, len + 1, other.str);
    }
    return *this;
}

char& String::operator[](size_t index) {
    if (index < len) {
        return str[index];
    }
    throw out_of_range("Index out of bounds");
}

const char& String::operator[](size_t index) const {
    if (index < len) {
        return str[index];
    }
    throw out_of_range("Index out of bounds");
}

int String::operator()(char ch) const {
    for (size_t i = 0; i < len; ++i) {
        if (str[i] == ch) {
            return static_cast<int>(i);
        }
    }
    return -1;
}

String::operator int() const {
    return static_cast<int>(len);
}

size_t String::length() const {
    return len;
}

void String::clear() {
    delete[] str;
    str = nullptr;
    len = 0;
}

String::~String() {
    clear();
}