#include <iostream>
using namespace std;

string s;

int vowelsCount(int i) {
    if(i > s.size()) return 0;
    if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o'
        || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I'
        || s[i] == 'O' || s[i] == 'U' ) return 1 + vowelsCount(i + 1);
    return 0 + vowelsCount(i + 1);
}

int main() {
    getline(cin,s);
    cout << vowelsCount(0);
    return 0;
}