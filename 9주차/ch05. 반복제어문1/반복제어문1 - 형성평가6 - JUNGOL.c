#include <iostream>
using namespace std;

int main() {
    int x = 50;
    cin >> x;

    if (x >= 80) {
        x += 10;
    }
    else {
        x -= 5;
    }

    x--;

    int A = 50;
    int B = 75;
    int C = 70;

    cout << A << " " << B << " " << C << '\n';

    return 0;
}
