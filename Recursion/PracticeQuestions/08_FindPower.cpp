#include<bits/stdc++.h>
using namespace std;

int power(int n, int x){
    // base case
    if(x== 0) return 1;

    long long ans = n * power(n, x-1);
    return ans;
}

// optimized 

int power2(int n, int x){
    
    // bc

    if(x == 0) return 1;

    int half = power2(n, x/2);

    if(x % 2 == 0){
        return half * half;
    }
    else{
        return n*half*half;
    }
}
int main(){
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int x;
    cout << "Power : ";
    cin >> x;

    cout << power2(n,x) << endl;
    return 0;

}