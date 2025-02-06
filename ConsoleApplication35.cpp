#include <iostream>

using namespace std;

string reverseString(const string& str) {
    string rev;
    for (int i = str.size() - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}

int main() {
    string input;
    getline(cin, input);
    cout << reverseString(input) << endl;
}
