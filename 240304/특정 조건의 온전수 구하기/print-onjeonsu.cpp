#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0; cin >> n;

    for (int i = 1; i <= n; i++){
        if (i % 2 != 0 && i % 10 != 5 && i % 3 != 0 || i % 9 == 0){
            //cnt ++;
            cout << i << " ";
        }
        continue;
    }
    //cout << cnt;
    return 0;
}