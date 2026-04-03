#include<bits/stdc++.h>
using namespace std;

int power(int n, int x){
    // base case
    if(x== 0) return 1;
    long long ans = n * power(n, x-1);
    return ans;
}

int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int x;
    cout << "Power : ";
    cin >> x;

    cout << power(n,x) << endl;
    return 0;

}