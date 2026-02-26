#include <iostream>

using namespace std;

void print(int c,int n) {
    if (c > n) return;
    cout << c << endl;
    print(c+1 , n);
}

int main() {
    int n;
    cin >> n;
    print(1, n);
    return 0;
}