#include<bits/stdc++.h>
using namespace std;

void generatePermutation(string &s, int idx, vector<string>&res){

    // base case

    if(idx >= s.size()){    
        res.push_back(s);
        return;
    }

    for(int j = idx; j < s.size(); j++){
        swap(s[idx], s[j]);
        generatePermutation(s, idx+1, res);

        // backtrack
        swap(s[idx], s[j]);
    }

}

int main(){
    // generate all permutaiton of a string
    string s = "sunny";
    int n = s.size();
    vector<string>res;
    generatePermutation(s, 0, res);
    for(auto x: res){
        cout << x << endl;
    }
    return 0;
}