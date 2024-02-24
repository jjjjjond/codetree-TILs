#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c; cin >> a >> b >> c;

    if (a > b && a < c){
        //if (b > c || c > b){
            cout << a;
        //}
    }

    if (b > a && b < c){
        //if (a > c || c > a){
            cout << b;
        //}
    }

    if (c > a && c < b){
        //if (a > b || b > c){
            cout << c;
        //}
    }
    return 0;
}