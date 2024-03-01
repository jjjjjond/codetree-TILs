#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, sum_val = 0; cin >> a >> b;

    if (a > b){
        for (int i = b; i <= a; i++){
            if(i % 5 == 0){
                sum_val += i;
            }
        }
    }
    if (b > a){
        for (int i = a; i <= b; i++){
            if(i % 5 == 0){
                sum_val += i;
            }
        }
    }
    cout << sum_val ;
    return 0;
}