#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double eyes; cin >> eyes;
    if (eyes >= 1.0){
        cout << "High";
    }
    else if (eyes < 0.5){
        cout << "Low";
    }
    else {
        cout << "Middle";
    }
    return 0;
}