#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b ; 
    cin >> a >> b;
    
    for (int i = a; i <= b;){
        cout << i << " ";
        if (i % 2 == 0){
            
            i = i +3 ;
            
        }  
        else if (i % 2 == 1){
            
            i = i *2 ;
            
        }
    }
    
    return 0;
}