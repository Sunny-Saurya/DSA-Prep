// 1 2 3 4 5 6 7.....n

#include<bits/stdc++.h>
using namespace std;

// 1 to n
void solve1toN(int i, int n){
    if(i > n) return;
    cout << i << " ";
    solve1toN(i+1, n);
}

// n t0 1
void solveNto1(int n, int i){
    if(i <= 0) return;
    cout << i << " ";
    solveNto1(n, i-1);
}
int main(){
    int n;
    cout << "Enter N : ";
    cin >> n;

    // solve1toN(1, n);
    solveNto1(1, n);
}