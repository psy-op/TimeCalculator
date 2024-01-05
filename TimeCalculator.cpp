#include<iostream>
using namespace std;

// Time class with variables for hours and minutes
class Time {
private:
    int hour;
    int minute;

public:
    // Function to set the time
    void setTime(int h, int m) {
        hour = h;
        minute = m;
    }

    // Function to display the time
    void showtime() {
        cout << hour << ":" << minute << ":00" << "\n";
    }

    // Function to add the time and return the result
    Time sum(Time Time2) {
        Time t4;
        t4.minute = minute + Time2.minute;
        t4.hour = hour + Time2.hour + (t4.minute / 60);

        t4.minute = t4.minute % 60;
        t4.hour = t4.hour % 60;
        return t4;
    }
};

// Main function that creates 3 objects, sets the time for the first 2,
// adds the first 2, and displays the results
int main() {
    Time t1, t2, t3;

    t1.setTime(3, 25);
    cout << "Time 1: ";
    t1.showtime();

    t2.setTime(6, 10);
    cout << "Time 2: ";
    t2.showtime();

    t3 = t1.sum(t2);
    cout << "Sum of Time 1 and Time 2: ";
    t3.showtime();

    return 0;
}
