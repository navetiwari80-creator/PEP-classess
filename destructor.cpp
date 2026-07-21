// #include<iostream>
// #include<string>
// using namespace std;

// class ABC{
// public:
//     ABC(){
//         cout << "Constructor: " << endl;
//     }

//     ~ABC(){
//         cout << "Destructor: " << endl;
//     }
// };

// int main(){
//     if(true){
//         ABC obj;
//     }

//     cout << "End of main Fun: " << endl;

//     return 0;
// }



#include<iostream>
#include<string>
using namespace std;

class ABC{
public:
    ABC(){
        cout << "Constructor: " << endl;
    }

    ~ABC(){
        cout << "Destructor: " << endl;
    }
};

int main(){
    if(true){
       static ABC obj;
        ABC obj1;
    }

    cout << "End of main Fun: " << endl;

    return 0;
}