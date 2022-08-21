#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;
    if(src==dest) { //base condtion
    cout<<"I reached the Home"<<endl;
    return;
    }
    src++;  //processing
    return reachHome(src,dest); // recurency relation
}

int main(){
    int src=1, dest=10;
    
    cout<<endl;
    reachHome(src,dest);
    return 0;

}