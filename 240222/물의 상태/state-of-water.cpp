#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int w_c; cin >> w_c;
    if (w_c < 0) {
        cout << "ice";
    }
    else if (0 <= w_c < 100) {
        cout << "water";
    }
    else {
        cout << "vapor";
    }
    return 0;
}