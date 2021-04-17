#include <iostream>
#include <stack>
using namespace std;

int main() {
    string rawText;
    getline(cin, rawText);

    stack<char> text;
    for (int i = 0; i < rawText.size(); i++) {
        if (rawText[i] == '.') {
            break;
        }
        text.push(rawText[i]);
    }

    while (text.size()) {
        cout << text.top();
        text.pop();
    }
    cout << endl;

    return 0;
}