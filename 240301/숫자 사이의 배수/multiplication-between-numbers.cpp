#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, cnt = 0, sum_val = 0; 
    cin >> a >> b;

    for (int i = a; i <= b; i++){
        if (i % 5 == 0 || i % 7 == 0){
            sum_val += i;
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum_val << " " << (double) sum_val / cnt;
    return 0;
}