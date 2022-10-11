#include<iostream>
#include<cmath>


using namespace std;

int main(){

    int n = 111, bits, ans = 0, i = 0;

    while( n != 0 ){
        bits = n % 10;
        ans = ans + (bits * pow(2,i));
        n =  n / 10;
        i++;
    }

    cout << ans;
    return 0;
}