// Find the difference between the suma and product of a number

#include<iostream>

using namespace std;

int main(){

    int num = 234;
    int sum = 0, prod = 1;
    
    while(num > 0){
        int rem = num % 10;
        num = num / 10;
        sum = sum + rem;
        prod = prod * rem;
    }

    cout << "Sum is " << sum << endl;
    cout << "Prod is " << prod << endl;

    int diff = prod - sum;
    cout << "Difference is " << diff;

    return 0;
}