#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;
    for (int i = n; i <= 100; i++){
        if (i >= 90){
            cout << 'A' << " ";
        }
        if (i >= 80 && i < 90){
            cout << 'B' << " ";
        }
        if (i >= 70 && i < 80){
            cout << 'C' << " ";
        }
        if (i >= 60 && i < 70){
            cout << 'D' << " ";
        }
        if (i < 60){
            cout << 'F' << " ";
        }
    }
    return 0;
}