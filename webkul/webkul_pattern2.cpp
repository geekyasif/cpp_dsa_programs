#include<iostream>

using namespace std;


int main() {

    int n = 5;


    for( int i = 1; i <= 6; i++){
        for( int j = 1; j <= 6; j++){
            if( j>= i && j <= 6-i){

                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }


    return 0;
}