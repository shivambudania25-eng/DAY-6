#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string str1, str2;
    
    cout << "Enter first string: ";
    getline(cin, str1);
    
    cout << "Enter second string: ";
    getline(cin, str2);
    
    // Remove spaces and convert to lowercase
    string s1 = "", s2 = "";
    for (char c : str1) {
        if (c != ' ') {
            s1 += tolower(c);
        }
    }
    
    for (char c : str2) {
        if (c != ' ') {
            s2 += tolower(c);
        }
    }
    
    // Check if lengths are equal
    if (s1.length() != s2.length()) {
        cout << "NOT an anagram." << endl;
        return 0;
    }
    
    // Sort both strings and compare
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if (s1 == s2) {
        cout << "The strings are ANAGRAMS." << endl;
    } else {
        cout << "The strings are NOT anagrams." << endl;
    }
    
    return 0;
}
