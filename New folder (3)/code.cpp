#include <iostream>
using namespace std;

void f(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    f(5);
    return 0;
}