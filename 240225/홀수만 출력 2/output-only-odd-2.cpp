#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, i; cin >> a >> b;
    for (i = a; i >= b; i -= 2){
        cout << i << " ";
    }
    return 0;
}