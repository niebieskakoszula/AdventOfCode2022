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
    int result = 0, i;
    string input;
    while (cin >> input) {
        set<char> existing_itemps;
        set<char> doubles;
        for (i = 0; i < input.length() / 2; i++) {
            existing_itemps.insert(input[i]);
        }

        for (; i < input.length(); i++) {
            if (existing_itemps.find(input[i]) != existing_itemps.end()) {
                doubles.insert(input[i]);
            }
        }
        for (auto x : doubles) {
            result += ConvertLetterToValue(x);
        }
    }    
    cout << result << endl;
}
