#include<bits/stdc++.h>
using namespace std;

long long pow(int x,int n){
    if(n==0) return 1;
    int partialAns = pow(x,n-1);
    return x*partialAns;

}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<pow(x,n);
    return 0;
}