#include <iostream>
#include <map>
#include <utility>

using namespace std;

//Rock A / X
//Paper B / Y
//Scissors C / Z

map<pair<char, char>, int> battleResult = {
    {{'A', 'X'}, 3},
    {{'B', 'X'}, 0},
    {{'C', 'X'}, 6},
    {{'A', 'Y'}, 6},
    {{'B', 'Y'}, 3},
    {{'C', 'Y'}, 0},
    {{'A', 'Z'}, 0},
    {{'B', 'Z'}, 6},
    {{'C', 'Z'}, 3}
};

map<char, int> moveValue = {
    {'X', 1},
    {'Y', 2},
    {'Z', 3}
};

int main()
{
    int result = 0;
    char enemyInput, ownInput;
    while (cin >> enemyInput >> ownInput) {
        result += battleResult[make_pair(enemyInput, ownInput)];
        result += moveValue[ownInput];
    }
    cout << result << endl;
}
