#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Letter {
private:
    char letter;
    int weight;
public:
    Letter(char l, int w) {
        letter = l;
        weight = w;
    }
    char getLetter() {
        return letter;
    }
    int getWeight() {
        return weight;
    }
};
class String {
private:
    vector<Letter> letters;
public:
    String(string s) {
        for (int i = 0; i < s.length(); i++) {
            char l = s[i];
            int w = 0;
            for (int j = 0; j < letters.size(); j++) {
                if (letters[j].getLetter() == l) {
                    w = letters[j].getWeight();
                    letters.erase(letters.begin() + j);
                    break;
                }
            }
            letters.push_back(Letter(l, w + 1));
        }
    }
    ~String() {
        letters.clear();
    }
    int getWeightSum() {
        int sum = 0;
        for (int i = 0; i < letters.size(); i++) {
            sum += letters[i].getWeight() * (26 - (letters[i].getLetter() - 'a'));
        }
        return sum;
    }
};
int main() {
    string s;
    cin >>s;
    String str(s);
    cout << str.getWeightSum() << endl;
    return 0;
} 
