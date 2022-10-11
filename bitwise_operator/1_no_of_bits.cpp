#include<iostream>

using namespace std;


int main(){

    int n = 0111111111100111101;
    int count = 0;

    while( n != 0 ){

        if(n&1 == 1){
            count++;
          
        }

          n = n >> 1;

        //   cout << n << endl;
    }

    cout << count;

    return 0;
}