#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    // Convert to lowercase for comparison
    string processed = "";
    for (char c : str) {
        if (isalnum(c)) {
            processed += tolower(c);
        }
    }
    
    string reversed = processed;
    reverse(reversed.begin(), reversed.end());
    
    if (processed == reversed) {
        cout << "The string is a PALINDROME." << endl;
    } else {
        cout << "The string is NOT a palindrome." << endl;
    }
    
    return 0;
}
