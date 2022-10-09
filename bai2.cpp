#include <bits/stdc++.h>

using namespace std;

int main() {
    int b,c;
    float a, s;

    cout << "Nhap lan luot hai canh goc vuong: ";
    cin >> b >> c;

    s = b*c/2;
    a = sqrt(b*b + c*c);

    cout << "Dien tich tam giac: " << s << endl;
    cout << "Do dai canh huyen: " << a << endl;

    return 0;
}
