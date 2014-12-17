#include <iostream>

using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int c = 0;
    int total = 0;
    
    while (b <= 4000000){
        c = a+b;
        if (b % 2 ==0)
            total += b;
        a = b;
        b = c;
    }
    cout << total;
    return 0;
}
