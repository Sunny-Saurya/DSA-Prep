#include<bits/stdc++.h>
using namespace std;

bool palindrome(string str, int start, int end){
    if(start >= end) return true;
    
    if(str[start] != str[end]){
        return false;
    }
    return palindrome(str, start+1, end-1);
}

int main(){

    string str = "mummasodifum";
    int i = 0, j = str.size()-1;

    if(palindrome(str,i,j)){
        cout << "True ! Its palindrome String." << endl;
    }
    else{
        cout << "Its Not a palindrome String." << endl;
    }
}