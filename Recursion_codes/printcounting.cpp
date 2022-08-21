#include <bits/stdc++.h>
using namespace std;
void print(int n){
    if(n==0) return;  // base condition
     print(n-1);  // recurence relation
    cout<<n<<endl;
   
}

int main()
{

int n;
cin>>n;
cout<<endl;
print(n);
    return 0;
}