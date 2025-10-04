//Dhairya Thakkar
//24070123037
//A2
//constructor overloading

#include<iostream>
using namespace std;

class fetch{
    int num;
    public:
    fetch(){
        num=146;
        
    }
    fetch(int x){
        num=x;
    }
    fetch(fetch &b){
        num=(b.num)+1;
    }
    void disp(){
        cout<<num<<endl;
    }
};

int main(){
    fetch f1, f2(12), f3(f1);
    f1.disp();
    f2.disp();
    f3.disp();
return 0;
}


//output
//146   
//12
//147
