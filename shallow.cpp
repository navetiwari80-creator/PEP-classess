// #include<iostream>
// #include<iostream>
// using namespace std;

// class Student{
// public:

//     string name;
//     int age;

//     Student(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     void getinfo(){
//         cout << "Name : " << name << endl;
//         cout << "Age : " << age << endl;
//     }
// };

// int main(){
//     Student s1("Rahul Kumar", 22);
//     Student s2(s1);
//     s2.getinfo();

//     return 0;
// }


#include<iostream>
#include<string>
using namespace std;

class Student{
    public:

    string name;
    int* ageptr;
    
    Student(string name, int age){
        this->name = name;
        ageptr = new int;
        *ageptr = age;
    }

    Student(Student &obj){
    this->name = obj.name;
    ageptr = new int;
    *ageptr = *(obj.ageptr);
}

    void getinfo(){
        cout << "Name : " << name << endl;
        cout << "Age : " << *ageptr << endl;
    }

};

int main(){
    Student s1("Naveen Tiwari", 22);
    Student s2(s1);

    s1.getinfo();
    *(s2.ageptr) = 21;
    s1.getinfo();

    s2.name = "Pandey Ji ";
    s2.getinfo();
    return 0;
}