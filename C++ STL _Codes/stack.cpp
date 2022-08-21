#include<iostream>
#include<stack>

using namespace std;//LIFO (last in first out)
int main(){
    stack<string>s;

    s.push("love");
    s.push("mahendra");
    s.push("kumar");

    cout<<"Top Element->"<<s.top()<<endl;
    s.pop();
    cout<<"Top Element->"<<s.top()<<endl;

    cout<<"Size of stack "<<s.size()<<endl;
    cout<<"Empty or not "<<s.empty()<<endl;


}