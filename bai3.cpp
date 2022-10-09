#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cout << "Nhap lan luot so qua va so nguoi: ";
    cin >> n >> k;

    int d = k % n;
    int a = (k-d)/n;

    cout << "Results: " << a << " " << d << endl;
    return 0;
}
