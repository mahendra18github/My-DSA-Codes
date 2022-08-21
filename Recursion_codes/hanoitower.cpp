#include<bits/stdc++.h>
using namespace std;

void hanoiTower(int num, char from_rod, char to_rod, char aux_rod){
 if(num==0) {
    return;
 }
hanoiTower(num-1,from_rod,aux_rod,to_rod);
cout<<"Move disk "<<num<< " from rod "<<from_rod<<" to rod "<<to_rod<<endl;
hanoiTower(num-1,aux_rod,to_rod,from_rod);
}
int main(){
    int num; //NUMBER OF DISKS
    cin>>num;
    hanoiTower(num,'A','C','B'); // A , B AND C ARE NAMES OF RODS
    return 0;
}