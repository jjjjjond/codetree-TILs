#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age_1, age_2;
    string s_1, s_2;
    cin >> age_1 >> s_1 >> age_2 >> s_2;

    if (age_1 >= 19 && age_2 >= 19){
        if (s_1 == "M" || s_2 == "M"){
            cout << "1";
        }
        else {
            cout << "0";
        }
    }
    else {
        cout << "0";
    }
    return 0;
}