#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int A_m_s, A_e_s; cin >> A_m_s >> A_e_s;
    int B_m_s, B_e_s; cin >> B_m_s >> B_e_s;

    if (A_m_s > B_m_s && A_e_s > B_e_s){
        cout << "1";
    }
    else {
        cout << "0";
    }
    return 0;
}