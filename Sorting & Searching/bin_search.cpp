2q      q2wwq1z``#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int s=0;  //start
    int e=size-1;  //end
    int m=s+(e-s)/2;   //"m" is a mid element

    while(s<=e){
        if(arr[m]==key){
              return m;
        }

        //to go right
        if(arr[m]<key){
            s=m+1;
        }
        else
        {  //to go left
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int a[5]={3,4,7,9,15};  //array elements should be in increasing or decrasing order.
    int ans=binarySearch(a,5,15);
    cout<<ans<<endl;

    return 0;

}