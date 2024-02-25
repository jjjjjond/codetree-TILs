#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i; cin >> n;
    for (i = n; i < n*6; i+=n){
        cout << i << " ";
    }
    return 0;
}