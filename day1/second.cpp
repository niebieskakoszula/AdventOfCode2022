#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    unsigned int first = 0, second = 0, third = 0, current = 0;
    while (getline(cin, input)) {
        if (input.empty()) {
            if (first < current) {
                third = second;
                second = first;
                first = current;
            }
            else if(second < current) {
                third = second;
                second = current;
            }
            else if (third < current) {
                third = current;
            }
            current = 0;
        }
        else {
            current += stoi(input);
        }
    }
    cout << first + second + third << endl;
}
