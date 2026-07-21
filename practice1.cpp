#include<iostream>
using namespace std;

class Animal{
   public:
     
   void sound(){
    cout << "Animal makes sound: " << endl;
   }
};

class Dog : public Animal{
    public:

    void sound(){
        cout << "Dogs barks: " << endl;
    }
};

class Cat : public Animal{
    public:

    void sound(){
        cout << "Cats meows: " << endl;
    }
};

class Cow : public Animal{
    public:

    void sound(){
        cout << "Cows moos: " << endl;
    }
};

int main(){
    Dog d;
    d.sound();

    Cat c;
    c.sound();

    Cow c1;
    c1.sound();

    Animal A;
    A.sound();
    
    return 0;

}
