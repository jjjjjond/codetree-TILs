#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cm, kg;
    cin >> cm >> kg;
    int BMI = (kg/(double(cm)/100*double(cm)/100));
    if (BMI > 25){
        cout << BMI << endl << "Obesity";
    }
    else {
        cout << BMI;
    }
    return 0;
}