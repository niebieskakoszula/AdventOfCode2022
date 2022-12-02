    #include <iostream>
    #include <string>
     
    using namespace std;
     
    int main()
    {
        string input;
        unsigned int valueMax = 0, current = 0;
        while (getline(cin, input)) {
            if (input.empty()) {
                valueMax = max(valueMax, current);
                current = 0;
            }
            else {
                current += stoi(input);
            }
        }
        cout << valueMax << endl;
    }
