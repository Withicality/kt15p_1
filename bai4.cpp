#include <bits/stdc++.h>

using namespace std;

int main() {
    int h,m,n;

    cout << "Nhap so phut: ";
    cin >> n;

    h = n/60;
    h = h - 24*(h/24);
    m = n%60;

    cout << h << " " << m << endl;
    return 0;
}
