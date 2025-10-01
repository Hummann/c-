#include <iostream>
using namespace std;
int func(int num){
    int sum = 0;
    int a  =1;
    int pow = 1;
    // while(num>0){        // decimal to binary
                            //for binary to decimal from reverse order multiply by 2 in increasing power
    //     int i = num%2;
    //     num /=2;

    //     sum += i*a;
    //     a *=10;

    // }
    // cout  << main(20);
    while(num>0){
        int i = num%10;
        sum +=  pow * i;
        num /= 10;
        pow *= 2;
    }
    return sum;
}
int main(){
    cout << func(110);
    return 0;
}