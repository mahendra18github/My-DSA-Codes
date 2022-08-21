#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        //print triangle 1
        //part1: numbers from 1 to n-i+1
    int j=1;
    while(j<=n-i+1){
        cout<<j<<" ";
        j++;
    }

        //print triangle 2 (stars)
        //part2: Stars (i-1)*2 times

        j=1;
        while(j<=(i-1)*2){
            cout<<"* ";
            j++;
        }

        //print triangle 3
        //part3: numbers from n-i+1 to 1

        j=n-i+1;
        while(j>=1){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}