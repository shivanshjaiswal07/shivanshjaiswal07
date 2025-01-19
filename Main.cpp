#include <iostream>
#include<stdexcept>
using namespace std;

int main() {
    int a,b,s;
    cout<<"Enter a";
    cin>>a;

    cout<<"Enter b";
    cin>>b;

    try{
        if(b==0){
            throw b;
            cout<<"This portion will be never be excetued";
        }
     s=a/b;
     cout<<s;
    }

    catch(int x){
        cout<<"last step";

    }

    return 0;
}
