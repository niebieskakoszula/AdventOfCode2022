#include <iostream>
#include <map>
#include <utility>

using namespace std;

map<pair<char, char>, int> moveValue = {
    {{'A', 'X'}, 3},
    {{'B', 'X'}, 1},
    {{'C', 'X'}, 2},
    {{'A', 'Y'}, 1},
    {{'B', 'Y'}, 2},
    {{'C', 'Y'}, 3},
    {{'A', 'Z'}, 2},
    {{'B', 'Z'}, 3},
    {{'C', 'Z'}, 1}
};

map<char, int> battleResult = {
    {'X', 0},
    {'Y', 3},
    {'Z', 6}
};

int main()
{
    int result = 0;
    char enemyInput, ownInput;
    while (cin >> enemyInput >> ownInput) {
        result += moveValue[make_pair(enemyInput, ownInput)];
        result += battleResult[ownInput];
    }
    cout << result << endl;
}
