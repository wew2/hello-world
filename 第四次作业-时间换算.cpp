#include <iostream>
using namespace std;
class Time {
private:
    int hour;
    int minute;
public:
    Time(int time) {
        hour = time / 100;
        minute = time % 100;
    }
    void convert() {
        hour -= 8;
        if (hour < 0) {
            hour += 24;
        }
    }
    void display() {
        cout << hour * 100 + minute << endl;
    }
};
int main() {
    int time;
    cin >> time;
    Time t(time);
    t.convert();
    t.display();
    return 0;
}
