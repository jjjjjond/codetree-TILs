#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    if (n % 2 == 0){
        if (n == 2){
            cout << "28";
        }
        if (n > 7){
            cout << "31";
        }
        if (2 < n && n < 7){
            cout << "30";
        }
    }
    else {
        if (n < 8){
            cout << "31";
        }
        else {
            cout << "30";
        }
    }
    return 0;
}