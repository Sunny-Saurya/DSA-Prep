// Factorial of N

#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n == 1) return 1;
    int f = 1;

    f *= n * fact(n-1);
    return f; 
}

int main(){
    int n;
    cout << "Enter N : ";
    cin >> n;

    cout << fact(n) << " ";
    cout << endl;
}