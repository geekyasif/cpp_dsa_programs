#include<iostream>

using namespace std;


int main(){

    int num = 100110101;
    int n = 3;

    int mask = 1 << n ;

    num = num | mask;

    cout << num << endl;


    return 0;
}