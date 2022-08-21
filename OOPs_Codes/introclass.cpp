#include<iostream>
using namespace std;

class student{   //class student created
  public: 
    int marks;
    string name;
    int roll_no;
};
int main(){

    student s1; //class object created
    s1.marks=50;
    s1.name="mahendra";
    s1.roll_no=24;
    cout<<"Size: "<<sizeof(s1)<<endl;

    cout<<"Marks :"<<s1.marks<<endl;
    cout<<"Name :"<<s1.name<<endl;
    cout<<"Roll_no :"<<s1.roll_no<<endl;
    return 0;
}