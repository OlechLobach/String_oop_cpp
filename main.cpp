#include "String.h"


int main() {
    String myString("Hello, World!");

 
    cout << "Character at index 7: " << myString[7] << endl;

    
    char searchChar = 'W';
    int index = myString(searchChar);
    if (index != -1) {
        cout << "Found character '" << searchChar << "' at index: " << index << endl;
    }
    else {
        cout << "Character '" << searchChar << "' not found." << endl;
    }

  
    int length = static_cast<int>(myString);
    cout << "Length of the string: " << length << endl;

    return 0;
}