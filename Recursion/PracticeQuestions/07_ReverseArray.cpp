#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int>&arr, int idx){
    if(idx == -1) return;
    cout << arr[idx] << " ";
    reverse(arr, idx-1);
}

int main(){
    vector<int>arr = {1,2,3,4,5,6};
    reverse(arr, arr.size()-1);
    return 0;
}