#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {

    string str;
    int n;
    int result = 1;
    
    cin >> str >> n;
    
    int start = 0;
    int end = str.length()-1;
    
    for(int i=0; i<ceil(str.length()/2.0); i++){
        if(str[start] != str[end]){
            if(n <= 0){
                result = 0;
                break;
            }
            
            start++;
            n--; 
            
        }
        else{
            end--;
            start++; 
        }
    }

    cout << (result == 1 ? "True" : "False") << endl;
    return 0;
}
