#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; cin >> n;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "*" ;
        }
        cout << " ";
    }
    cout << endl;

    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            cout << "*";
        }
        cout << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n-2; i++){
        for (int j = 0; j < n-2; j++){
            cout << "*";
        }
        cout << " ";
    }
    cout << endl;

    for (int i = 0; i < n-3; i++){
        for (int j = 0; j < n-3; j++){
            cout << "*";
        }
        cout << " ";
    }
    cout << endl;
    return 0;
}