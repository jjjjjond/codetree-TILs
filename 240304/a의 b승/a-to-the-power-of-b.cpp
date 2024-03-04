#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, prod = 1; cin >> a >> b;

    if (a <= b){
        for (int i = a; i <= b+1; i++){
            prod *= a;
        }
        cout << prod;
    }
    

    if (a > b){
        for (int i = b; i <= a+1; i++){
            prod *= a;
        }
        cout << prod;
    }
    
    return 0;
}