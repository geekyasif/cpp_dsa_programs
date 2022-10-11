/*


*            *********
**           *********
***          *********
****&&&&&&&&&*********
***          *********
**           *********
*            *********


*/

#include<iostream>

using namespace std;


int main () {

    int n = 7;
    int k = 0;
    int mid = ( n + 1 ) / 2;


    for(int  i = 1; i <=  n; i++){

        i <= mid ? k++ : k--;

        for( int j = 1; j <= mid ; j++){

            if( j <= k){
                cout << "*";
            }else{
                cout << " ";
            }
        }

        for(int j = 1 ; j <= n+2; j++){
            if( i == mid ){
                cout << "&";
            }else{
                cout << " ";
            }
        }

        for(int i = 1; i <= n+2; i++){
            for(int j = 1 ; j <= n+2; j++){
                cout << "*";
        }
        }
        cout << endl;
    }

    return  0;
    
}