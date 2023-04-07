/*
More on Exceptions
You are making a digital menu, which takes a number as user input, and outputs the corresponding menu item.

However, the users can input anything, even numbers that are not present in the menu.

Handle wrong user input, by throwing an exception with code 404 and outputting "404 - not found", if it is out of the range of the given menu.
*/

#include <iostream>
using namespace std;

int main() {
    string menu[] = {"fruits", "chicken", "fish", "cake"};
    try {
        int x;
        cin >> x;
        //your code goes here
        if(x>=0 and x<4)
            cout<<menu[x];
        else
            throw 404;
    }
    catch(...) {
        //and here
        cout<<"404 - not found";
    }
}
