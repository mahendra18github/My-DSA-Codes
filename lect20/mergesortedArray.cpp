#include<iostream>
#include<vector>
using namespace std;

//merge function
void merge(int nums1[],int m,int nums2[],int n,int nums3[]){
    int i=0,j=0;
    int k=0;
    while(i<m && j<n){
        if(nums1[i]< nums2[j]){
            nums3[k]=nums1[i];
            k++;
            i++;
        }
        else{
            nums3[k]=nums2[j];
            k++;
            j++;
        }
    }
    //copy first array k element to
    while(i<m){
      nums3[k]=nums1[i];
            k++;
            i++;   
    }

      //copy second array k element to
    while(j<n){
      nums3[k]=nums2[j];
            k++;
            j++;   
    }
}

void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={0};

    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
    return 0;
}