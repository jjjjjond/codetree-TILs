#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    int cnt = 0;

    for (int i = 1; i < 11; i++){
        if (i % 2 == 1){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}