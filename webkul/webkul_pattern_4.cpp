#include<iostream>

using namespace std;

int main()
{

  int n;
  cout << "Enter number ";
  cin>>n;

  int row= n;
  int col = (n/2)+1;
  int k = (n/2)+1;
  int mid = (n/2)+1;

  for(int i = 1; i <= row; i++){
      i <= mid ? k-- : k++;
    for(int j = 1; j <= col; j++){
        if(j>k){
          cout << "*";
        }else{
          cout << " ";
        }
    }
    cout << endl;

  }
  return 0;
}
