#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0, sum_val = 0;

    for (int i = 1; i <= 10; i++){
        cin >> n;
        if (n >= 0 && n <= 200){
            sum_val += n;
            cnt++ ;
        }
    }
    cout << fixed;
    cout.precision(1);
    cout << sum_val << " " << (double)sum_val / cnt;
    return 0;
}