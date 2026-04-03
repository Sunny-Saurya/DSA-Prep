#include<bits/stdc++.h>
using namespace std;

void solve(int n, int &sum){
    if(n < 0){
        return;
    }
    sum += n;
    solve(n-1, sum);
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int sum = 0;
    solve(n, sum);
    cout << sum << " ";
}