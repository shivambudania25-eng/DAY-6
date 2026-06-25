#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "Uppercase: ";
    for (char c : str) {
        cout << (char)toupper(c);
    }
    cout << endl;
    
    cout << "Lowercase: ";
    for (char c : str) {
        cout << (char)tolower(c);
    }
    cout << endl;
    
    return 0;
}
