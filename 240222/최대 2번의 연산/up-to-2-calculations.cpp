#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a; cin >> a;
    int b; 
    if (a%2 == 0){
        //cout << a/2;
        b = a/2;
    }
    if (b%2 == 1){
        cout << (b + 1)/2;
    }
    if (a%2 == 1){
        cout << (a + 1)/2;
    }
    return 0;
}