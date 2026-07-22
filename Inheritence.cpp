#include<iostream>
using namespace std;

class A{
public:
    void Pub_A(){
        cout << "Public A" << endl;
    }

protected:
    void Pro_A(){
        cout << "Protected A" << endl;
    }    

public:
    void Pri_A(){
        cout << "Private A" << endl;
    }
};

class B : public A{
public:
    void Pub_B(){
        cout << "Public" << endl;
    }    

protected: 
    void Pub_B(){
        cout << "Protected" << endl;
    }    

private:
    void Pub_B(){
        cout << "Private" << endl;
    }    
};

void main(){

    B obj;
    obj.Pub_A();
}