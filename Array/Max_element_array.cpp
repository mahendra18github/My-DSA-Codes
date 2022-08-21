#include<iostream>
using namespace std;

int Max_element(int arr[],int n){   //n=size
     int max=INT_MIN;

     for(int i=0;i<n;i++){
        if(arr[i]>max){
              max=arr[i];
        }
      

        // max=max(arr[i],max);
     }

     return max;
}
int main(){
    int size;
    cin>>size;

    int arr[100];

    //taking input from user
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Largest element is: "<<Max_element(arr,size)<<endl;
    return 0;
}