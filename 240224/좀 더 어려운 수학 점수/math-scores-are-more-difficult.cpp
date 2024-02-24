#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int A_m, A_e; cin >> A_m >> A_e;
    int B_m, B_e; cin >> B_m >> B_e;

    if (A_m > B_m){
        cout << "A";
    }
    if (B_m > A_m){
        cout << "B";
    }

    if (A_m == B_m){
        if (A_e > B_e){
            cout << "A";
        }
        else {
            cout << "B";
        }
    }
    return 0;
}