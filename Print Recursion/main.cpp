#include <iostream>


void print(int n) {
    if (n == 0) return;
    std::cout << "I love Recursion\n";
    print(n-1);
}

int main() {
    int n;
    std::cin >> n;
    print(n);
    return 0;
}