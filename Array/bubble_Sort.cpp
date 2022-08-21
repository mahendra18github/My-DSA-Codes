#include<iostream>
#include<vector>
using namespace std;
void printSortedArray(vector<int>&arr,int n){
      for (int i = 0; i < n; i++)
        cout<<arr[i]<<endl;
}
void bubbleSort(vector<int>&arr,int n){
   for(int i=1;i<n;i++){
       
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
            }
             
        }
    }
}
int main(){
    int n;
    cin>>n;
      vector<int>arr;
 
    for (int i = 0; i < n; i++)
        arr.push_back(i);

    bubbleSort(arr,n);
    printSortedArray(arr,n);
}
