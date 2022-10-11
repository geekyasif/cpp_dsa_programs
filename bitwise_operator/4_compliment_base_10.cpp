#include<iostream>

using namespace std;




int DecimalToBinary(int n){

    int ans = 0, bit = 0;

    while( n != 0){
        bit = n & 1;
        ans = (ans * 10) + bit;
        n = n >> 1;
    }

    return ans;
}


int compliment(int bin){

    int ans = 0;

    while(bin != 0){

    }

    return ans;
}


int BinaryToDecimal(int comp){

    int ans = 0;


    return ans;

}


int main(){

    int n = 5, binary, comp, ans;

    binary =  DecimalToBinary(n);
    comp = compliment(binary);
    cout << BinaryToDecimal(comp);

    return 0;
}