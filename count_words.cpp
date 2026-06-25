#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    stringstream ss(str);
    string word;
    int word_count = 0;
    
    while (ss >> word) {
        word_count++;
    }
    
    cout << "Number of words: " << word_count << endl;
    
    return 0;
}
