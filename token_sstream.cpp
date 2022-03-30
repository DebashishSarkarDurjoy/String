#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main(void) {
    string input;
    getline(cin, input);

    stringstream ss(input);

    string token;
    vector<string> tokens;
    while (getline(ss, token, ' ')) {
        tokens.push_back(token);
    }

    for (string word: tokens) {
        cout << word << endl;
    }

    return 0;
}
