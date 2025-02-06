#include <iostream>
#include <cctype>

using namespace std;

int countLettersAndDigits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isalnum(c)) count++;
    }
    return count;
}

int main() {
    string input;
    getline(cin, input);
    cout << countLettersAndDigits(input) << endl;
}
