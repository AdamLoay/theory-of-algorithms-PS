#include <iostream>

using namespace std;

void print(int n) {
    if (n < 10) {
        cout << n;
        return;
    }
    print(n / 10);
    cout << " " << (n % 10);
}

int main() {
    int t, n;
    cin>>t;
    for(int i=0;i<t;i++) {
        cin>>n;
        print(n);
        cout<<endl;
    }
    return 0;
}