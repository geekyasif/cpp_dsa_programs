#include<iostream>
#include<vector>

using namespace std;


int main(){

    int nums[9] = {4,3,2,7,8,2,3,1,1};
    vector<int> ans;
    int len = sizeof(nums)/sizeof(nums[0]);

    for(int i = 0; i < len; i++){

        for(int j = i + 1; j < len; j++){
            if( nums[i] == nums[j]){
                ans.push_back(nums[i]);
                break;
            }
        }

    }


    for(int i:ans){
        cout << i << " ";
    }

    return 0;
}