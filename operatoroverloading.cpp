#include <iostream>
using namespace std;

class Time {
private:
    int hour, minute, second;

public:
    Time(int h = 0, int m = 0, int s = 0) {
        hour = h;
        minute = m;
        second = s;
    }

    // Operator Overloading
    Time operator+(Time t) {
        Time temp;

        temp.second = second + t.second;
        temp.minute = minute + t.minute;
        temp.hour = hour + t.hour;

        // Convert Seconds
        if (temp.second >= 60) {
            temp.minute += temp.second / 60;
            temp.second = temp.second % 60;
        }

        // Convert Minutes
        if (temp.minute >= 60) {
            temp.hour += temp.minute / 60;
            temp.minute = temp.minute % 60;
        }

        return temp;
    }

    void display() {
        cout << hour << ":" << minute << ":" << second << endl;
    }
};

int main() {

    Time t1(10, 20, 30);
    Time t2(5, 50, 40);

    Time t3;

    t3 = t1 + t2;

    cout << "Time 1 = ";
    t1.display();

    cout << "Time 2 = ";
    t2.display();

    cout << "Addition = ";
    t3.display();

    return 0;
}