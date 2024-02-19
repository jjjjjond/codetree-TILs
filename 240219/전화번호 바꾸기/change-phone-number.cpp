#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a[4];
    int xxxx, yyyy; 
    int temp;
    cin >> a >> xxxx >> yyyy;
    temp = xxxx; xxxx = yyyy; yyyy = temp;
    cout << a << xxxx << yyyy;
    return 0;
}