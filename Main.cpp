#include<iostream>
using namespace std;
class name{
    public:
    int a;

    friend void display(a){
        cout<<a;
    }
};

int main(){
    name n;
    n.a=10;
    display(n);
}
