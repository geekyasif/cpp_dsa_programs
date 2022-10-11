#include<iostream>

using namespace std;

int main(){

    int arr[12] = {1,2,1,2,3,4,3,4,6,6,5,9};

    int i = 0;
    int ans = 0;
    while(i < 12){
        ans = arr[i] ^ ans;
        i++;
    }

    cout << ans << endl;



    return 0;
}