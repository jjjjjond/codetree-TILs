#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a1, a2, a3; //증상
    int b1, b2, b3, cnt = 0;//b=체온
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    
    if (a1 == 'Y' && b1 >=37){
        cnt += 1;
    }
    if (a2 == 'Y' && b2 >= 37){
        cnt += 1;
    }
    if (a3 == 'Y' && b3 >= 37){
        cnt += 1;
    }

    if (cnt >= 2){
        cout << "E";
    }
    else {
        cout << "N";
    }

    return 0;
}