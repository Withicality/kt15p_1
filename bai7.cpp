#include <iostream>

using namespace std;

int main() {
    int a,b,sum = 0;
    cout << "Nhap hai so a va b: ";
    cin >> a >> b;

    if (a % 2 == 0) {
        a++;
    }

    for (int i = a; i<=b; i+=2) {
        sum+=i;
    }

    cout << "Tong cac so trong doan [a;b]: " << sum << endl;
    return 0;
}
