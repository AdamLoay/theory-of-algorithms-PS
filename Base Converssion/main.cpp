#include <iostream>

using namespace std;

void print(const int n) {
    if (n / 2 == 0) {
        cout << 1;
        return;
    }
    const int result = n / 2;
    const int remainder = n % (result * 2);
    print(result);
    cout << remainder;
}

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        print(n);
        cout << endl;
    }
    return 0;
}