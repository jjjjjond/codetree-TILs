#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    while(1){
        cin >> n;
        if (n < 25){
            cout << "Higher" << endl;
        }
        if (n > 25){
            cout << "Lower" << endl;
        }
        if (n == 25){
            cout << "Good" << endl;
            break;
        }
    }
    return 0;
}