#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i, sum_val = 1; cin >> n;

    for (i = 1; i < 100; i++){
        sum_val += i;
        if(sum_val > n){
            break;
        }
    }
    cout << i;
    return 0;
}