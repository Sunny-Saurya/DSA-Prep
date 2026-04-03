#include<bits/stdc++.h>
using namespace std;

void subsequence(vector<int>&arr, int idx, vector<int>&ans, vector<vector<int>>&res){
    int n = arr.size();
    if(idx == n){
        res.push_back(ans);
        return;
    }

    // take
    ans.push_back(arr[idx]);
    subsequence(arr, idx+1, ans, res);

    // not take
    ans.pop_back();
    subsequence(arr, idx+1, ans, res);
}


int main(){
    vector<int>arr = {1,2,3};
    int n = arr.size();
    vector<int>ans;
    vector<vector<int>>res;
    subsequence(arr,0, ans, res);

    // printing res
    for(auto x: res){
        for(auto y: x){
            cout << '[' << y << ']';
        }
        cout<<endl;
    }

    return 0;
}