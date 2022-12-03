#include <iostream>
#include <set>

using namespace std;

int ConvertLetterToValue(char letter) {
    if (97 <= letter) {
        return letter - 96;
    }
    else {
        return letter - 38;
    }
}
int main()
{
    int result = 0;
    string inputOne, inputTwo, inputThree;
    while (cin >> inputOne >> inputTwo >> inputThree) {
        set<char> firstRucksack;
        set<char> doubles;
        for (auto x : inputOne) {
            firstRucksack.insert(x);
        }

        for (auto x : inputTwo) {
            if (firstRucksack.find(x) != firstRucksack.end()) {
                doubles.insert(x);
            }
        }
        for (auto x : inputThree) {
            if (doubles.find(x) != doubles.end()) {
                result += ConvertLetterToValue(x);
                break;
            }
        }
    }    
    cout << result << endl;
}
