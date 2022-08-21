#include<iostream>
#include<queue>

using namespace std;
int main(){
    //max heap
    priority_queue<int>maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int> >mini;

//max
    maxi.push(1);
    maxi.push(3);
    maxi.push(7);
    maxi.push(4);
    maxi.push(9);
    cout<<"size-> "<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;
    
//min
    mini.push(1);
    mini.push(3);
    mini.push(7);
    mini.push(4);
    mini.push(9);
    cout<<"size-> "<<mini.size()<<endl;
    int m=mini.size();
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    } cout<<endl;

    cout<<"Empty hai kya "<<mini.empty()<<endl;

}