#include<bits/stdc++.h>
using namespace std;
 // time complexity = 2^n
 // space complexity = o(n)
int fibbonacci(int n){
    if(n==1) return 1;
    if(n==2) return 1;
    int partialAns1=fibbonacci(n-1);
    int partialAns2=fibbonacci(n-2);
    return partialAns1+partialAns2;
}
int main(){
    int n;
    cin>>n;
    cout<<fibbonacci(n);
    return 0;
}