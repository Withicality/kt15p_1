#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;
    cout << "Nhap so hoc sinh tuong ung cho moi lop: ";
    cin >> a >> b >> c;

    int ta = a/2 + a%2;
    int tb = b/2 + b%2;
    int tc = c/2 + c%2;

    cout << "So ban can mua: " << ta+tb+tc << endl;

    return 0;
}
