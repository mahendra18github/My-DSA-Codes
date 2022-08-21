#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        //print space
         int space = 1;
        while(space<i){
            cout<<" ";
            space++;
    
        }
        int j=1;
        while(j<=n-i+1){
            //print stars
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
return 0;
}
   
    