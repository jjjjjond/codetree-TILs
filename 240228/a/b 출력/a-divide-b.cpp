#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, d; cin >> a >> b;
    c = 0; d = 0;
    cout << a/b << ".";
    for (int i = 1; i <= 20; i++){
        c = (a * 10) / b;
        d += double (c) / 10;
        a = (a * 10) % b;
        cout << c;
    }
    return 0;
}