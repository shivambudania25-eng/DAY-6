#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str;
    int vowel_count = 0;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel_count++;
        }
    }
    
    cout << "Number of vowels: " << vowel_count << endl;
    
    return 0;
}
