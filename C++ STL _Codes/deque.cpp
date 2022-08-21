#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int>d;  //initialized deque d

d.push_back(3);   //push_back() fn
d.push_front(5);   //push_front() fn
d.push_back(1);

// for(int i:d){
//     cout<<i<<" ";
// }
// d.pop_back();  //pop_back() fn
// cout<<endl;
// for(int i:d){
//     cout<<i<<" ";
// }
// d.pop_front();  //pop_front() fn
// cout<<endl;
// for(int i:d){
//     cout<<i<<" ";
// }
cout<<endl;
cout<<"Print first index element->"<<d.at(0)<<endl;

cout<<"front "<<d.front()<<endl;
cout<<"back "<<d.back()<<endl;

cout<<"Empty or not "<<d.empty()<<endl;

cout<<"Before erase "<<d.size()<<endl;
d.erase(d.begin(),d.begin()+1);   //erase fun to erase elements only size gets zero
cout<<"After erase "<<d.size()<<endl;
cout<<"maximum size of d "<<d.max_size()<<endl;  //max size does not get erased
}