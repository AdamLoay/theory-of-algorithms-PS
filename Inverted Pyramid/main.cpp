#include <iostream>

using namespace std;

int n;

void print(int row) {
    if (row > n) return;
    int spaces = n - row;
    int stars = 2 * row - 1;

    print(row + 1);

    for (int i = 0; i < spaces; i++) {
        cout << " ";
    }
    for (int i = 0; i < stars; i++) {
        cout << "*";
    }
    cout << endl;
}

int main() {
    cin >> n;
    print(1);
    return 0;
}