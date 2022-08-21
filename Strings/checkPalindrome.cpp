#include<iostream>
using namespace std;

//to convert uppercase to lowercase
char toLowerCase(char ch){
    if(ch>='a'&& ch<='z')
        return ch;
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char a[],int l){
    int s=0;
    int e=l-1;

    while(s<=e){
        if(toLowerCase(a[s])!=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    } 
     return 1;
}
void reverse(char name[],int l){
    int start=0;
    int end=l-1;

    while(start<end){
        swap(name[start++],name[end--]);
    }
    cout<<"Your name is ";
    cout<<name<<endl;
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;

    int len=getLength(name);
    cout<<"Length: "<<len<<endl;
    reverse(name,len);

    cout<<"Check Palindrome or not: "<<checkPalindrome(name,len)<<endl;
    cout<<"CHARACTER is "<<toLowerCase('b')<<endl;
    cout<<"CHARACTER is "<<toLowerCase('D')<<endl;
    return 0;
    
}