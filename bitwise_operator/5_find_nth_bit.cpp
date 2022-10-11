#include<iostream>

using namespace std;

int main(){

    int num = 100110101;
    int n = 5;

    int mask = 1 << n;

    if(mask & num){
        cout << "1" << endl;
    }else{
        cout << "0" << endl;
    }



    return 0;
}