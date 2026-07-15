#include<iostream>
using namespace std;

class A{
    public:
  
     void disp(){
        cout << "Hello" << endl;
    }
};

class B : public A{
    public:

      void disp(){
        cout << "Hi" << endl;
    }
};

class C :  virtual public A{
    public:

    void disp(){
        cout << "Good" << endl;
    }
};

class X : public B, public C{
    public:

    void disp(){
       cout << "Yes" << endl;
    }

};

int main(){

    A b;
    b.disp();

    C c;
    c.disp();
    
    X x;
    x.disp();

    return 0;
}