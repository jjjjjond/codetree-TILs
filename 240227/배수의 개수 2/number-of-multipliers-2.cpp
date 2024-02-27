#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a = 1, b = 500;
    int cnt = 0;

    for (int i = a; i <= 10; i++){
        if (i % 2 == 1){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}