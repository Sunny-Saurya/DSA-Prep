#include<bits/stdc++.h>
using namespace std;

void combinationSum(vector<int>&arr, int target, int idx, vector<int>&ans, vector<vector<int>>&res){

    // base case

    if(target == 0){
        res.push_back(ans);
        return;
    }

    if(target < 0 || idx < 0) return;

    if(arr[idx] <= target){
        ans.push_back(arr[idx]);
        combinationSum(arr, target - arr[idx], idx-1, ans, res);
        ans.pop_back();
    }
    combinationSum(arr, target, idx-1, ans, res);

}

int main(){
    vector<int>arr = {1,2,3,6,7};
    int target = 8;
    int n = arr.size()-1;
    vector<int>ans;
    vector<vector<int>>res;
    combinationSum(arr, target, n, ans, res);
    
    for(auto x : res){
        for(auto y: x){
            cout << "[ " << y << " ]";
        }
        cout << endl;
    }

    return 0;




}