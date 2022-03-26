#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string text = "We are learning about STL strings. STL string class is quite powerful.";

    string word;
    getline(cin, word, '\n');

    int index = text.find(word);
    if (index == -1) {
        cout << "word not found" << endl;
    }
    else {
        cout << "index: " << index << endl;
    }

    return 0;
}
