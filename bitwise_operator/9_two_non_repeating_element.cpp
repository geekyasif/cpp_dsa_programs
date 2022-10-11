#include<iostream>

using namespace std;

int main(){

    int arr[8] = {5,4,1,4,3,5,1,2};
    int odd[10];
    int even[10];

    int i = 0;
    int 
    ans = 0, temp = 0;

    while(i < 12){

        ans = arr[i] ^ ans;

        if(arr[i] & 1){

            odd[i] = arr[i];

        }else{

            even[i] = arr[i];

        }

        i++;
    }

    temp = ans;


    cout << ans << endl;

    int j = 0;
    while(j < 10){
        temp = temp ^ odd[j];
        j++;
    }

    int a = temp;
    int b = ans ^ temp;

    cout << a << " " << ans << endl;

    



    return 0;
}