#include <iostream>
#include <cmath>
using namespace std;
class Data {
private:
    int nums[6];
public:
    void setNums(int n1, int n2, int n3, int n4, int n5, int n6) {
        nums[0] = n1;
        nums[1] = n2;
        nums[2] = n3;
        nums[3] = n4;
        nums[4] = n5;
        nums[5] = n6;
    }
    double getAverage() {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += nums[i];
        }
        return (double)sum / 6;
    }
    double getVariance() {
        double avg = getAverage();
        double sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += pow(nums[i] - avg, 2);
        }
        return sum / 6;
    }
};
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int n1, n2, n3, n4, n5, n6;
        cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
        Data data;
        data.setNums(n1, n2, n3, n4, n5, n6);
        double avg = data.getAverage();
        double var = data.getVariance();
        cout << avg << var;
    }
    return 0;
}
