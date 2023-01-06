//최대공약수 계산문제 : 유클리드 호제법 사용

#include <iostream>

using namespace std;

int uclid(int x, int y){
    int r = x % y;
    if(r != 0){ return uclid(y, r); }
    else{ return y; }
    
}

int main(void) {
    int a, b;
    
    cin >> a >> b;
    
    cout << uclid(a, b) << endl;
    return 0;
}
