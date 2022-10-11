#include<iostream>

using namespace std;

int main(){

    int n;
    cout << "Enter a number : ";
    cin >> n;


    int row = (n/2)+1;
    int col = n;

    for(int i = 1; i <= row; i++){

        for(int j = 1; j <= 1; j++){
            cout << " ";
        }
        
        for(int j = 1; j <= col; j++){

            if(j >= ((n/2)+2)-i && j <= (n/2)+i){
                cout << "*";
            }else{
                cout << " ";
            }

        }

        cout << endl;
    }


     for(int i = 1; i <= n+2; i++){

                for(int j= 1; j <= 1; j++){
            cout << " ";
        }
        
        for(int j = 1; j <= n+2; j++){

            if(j == (n/2)+1){
                cout << "*";
            }else{
                cout << " ";
            }

        }

        cout << endl;
    }


      for(int i = 1; i <= n+2; i++){
        
        for(int j = 1; j <= n+2; j++){

            // if(j==i){
            //     cout << "*";
            // }else{
            //     cout << " ";
            // }
            cout << "@";

        }

        cout << endl;
    }



    return 0;
}