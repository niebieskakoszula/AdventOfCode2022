#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input;
    vector<string> boxes_input;
    while (getline(cin, input) && input[1] != '1') {
        if (boxes_input.empty()) {
            boxes_input = vector<string>((input.length() + 1) / 4);
        }

        for (int i = 1, j = 0; i < input.length() - 1; i += 4, j++) {
            if (input[i] != ' ') {
                boxes_input[j] += input[i];
            }
        }
    }

    vector<stack<char>> boxes(boxes_input.size());
    for (int i = 0; i < boxes_input.size(); i++) {
        for(int j = boxes_input[i].length(); j >= 0; j--){
        	boxes[i].push(boxes_input[i][j]);
		}
    }
    
    scanf("\n");

    int amount, from, to;
    while(scanf("move %i from %i to %i\n", &amount, &from, &to) != EOF){
    	from--;
    	to--;
    	
    	for(int i = 0; i < amount; i++){
    		boxes[to].push(boxes[from].top());
    		boxes[from].pop();
		}
	}
	
	for(auto box : boxes){
		cout << box.top();
	}cout << endl;
}
