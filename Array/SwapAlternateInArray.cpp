#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
           // swap(arr[i],arr[i+1]);
           int temp=arr[i+1];
           arr[i+1]=arr[i];
           arr[i]=temp;
        }
    }
}

int main(){
    int even[8]={5,2,3,6,8,9,12,65};
    int odd[5]={67,54,98,34,18};

    swapAlternate(even,8);
    printArray(even,8);
    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);
    cout<<endl;
    return 0;
}