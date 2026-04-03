#include<bits/stdc++.h>
using namespace std;

int digitCount(int n){
    if(n >= 0 && n <= 9) return 1;
    int sum = 1 + digitCount(n/10);
    return sum; 
}

int main(){
    int n = 1298345345;
    cout << digitCount(n);
    return 0;
}