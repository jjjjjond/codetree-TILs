#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    cin >> n;

    for (int i = 1; i <= n; i++){
        //cin >> n;

        if (i % 2 == 0 && i % 10 != 0){ //교실청소
            cnt1++;
            if (i % 2 == 0 && i % 3 == 0 && i % 12 == 0){
                cnt1--;
            }
        }
        if (i % 3 == 0){ //복도청소
            cnt2++;
            if (i % 2 == 0 && i % 3 == 0 && i % 12 == 0){
                cnt2--;
            }
        }
        if (i % 12 == 0){ //화장실청소
            cnt3++;
        }
    }
    cout << cnt1 << " " << cnt2 << " " << cnt3;
    return 0;
}