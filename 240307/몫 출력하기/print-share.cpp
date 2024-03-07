#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt = 0; 

    while(1){
        cin >> n;

        if (cnt == 3){
            break;
        }

        if (n % 2 == 0){
            cout << n/2 << endl;
            cnt++;
        }
    }
    return 0;
}