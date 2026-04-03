#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& nums, vector<int>& ans, vector<vector<int>>& res, vector<bool>& visited){
    
    // base case
    if(ans.size() == nums.size()){
        res.push_back(ans);
        return;
    }

    for(int i = 0; i < nums.size(); i++){
        
        if(visited[i]) continue; // already used

        // choose
        ans.push_back(nums[i]);
        visited[i] = true;

        // explore
        solve(nums, ans, res, visited);

        // backtrack
        ans.pop_back();
        visited[i] = false;
    }
}

int main(){
    vector<int> nums = {1,2,3};

    vector<vector<int>> res;
    vector<int> ans;
    vector<bool> visited(nums.size(), false);

    solve(nums, ans, res, visited);

    // print result
    for(auto x : res){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }

    return 0;
}