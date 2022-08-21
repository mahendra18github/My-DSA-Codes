#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;  //vector v

    vector<int>a(5,1);  //vector a
    cout<<"print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int>vec1(a);   //vector vec1
    cout<<"print vec1"<<endl;
    for(int i:vec1){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Capacity->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;

     v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;

     v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;

    cout<<"Size->"<<v.size()<<endl;
    cout<<"Element at 2nd Index "<<v.at(2)<<endl;

    cout<<"front "<<v.front()<<endl;
    cout<<"back "<<v.back()<<endl;

    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    v.pop_back();

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;


}