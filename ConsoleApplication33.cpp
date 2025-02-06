#include <iostream>
#include <cctype>

using namespace std;

bool isPalindrome(const string& str) {
    string cleanStr;
    for (char c : str) {
        if (isalnum(c)) cleanStr += tolower(c);
    }
    int left = 0, right = cleanStr.size() - 1;
    while (left < right) {
        if (cleanStr[left++] != cleanStr[right--]) return false;
    }
    return true;
}

int main() {
    string input;
    getline(cin, input);
    cout << (isPalindrome(input) ? "YES" : "NO") << endl;
}
