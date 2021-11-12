#include <iostream>
#include <string>
#include <cstdlib>
#include "stack1.hpp"

using namespace std; 

int main() {

    try {
        Stack<int>      intStack;       // stack of ints
        Stack<string> stringStack;      // stack of strings 

        intStack.push(7);
        cout << intStack.top() << endl;

        // manipulate string stack 
        stringStack.push("Hello");
        cout << stringStack.top() << endl; 
        stringStack.pop();
        stringStack.pop();
    } catch (exception const & ex) {
        cerr << "Exception:" << ex.what() << endl;
        return EXIT_FAILURE; 
    }
    return 0;
}
