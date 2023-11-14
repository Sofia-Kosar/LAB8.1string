#include <iostream>
#include <string>
using namespace std;

int CountPairs(const string s) {
    int count = 0;
    for (size_t i = 0; i < s.length() - 1; ++i) {
        if ((s[i] == 'a' && s[i + 1] == 'a') ||
            (s[i] == 'b' && s[i + 1] == 'b') ||
            (s[i] == 'c' && s[i + 1] == 'c')) {
            count++;
        }
    }
    return count;
}

string ChangePairs(string& s) {
    size_t pos = 0;
    while ((pos = s.find("aa", pos)) != string::npos) {
        s.replace(pos, 2, "***");
        pos += 3;  // Move past the replaced part to avoid infinite loop
    }
    pos = 0;
    while ((pos = s.find("bb", pos)) != string::npos) {
        s.replace(pos, 2, "***");
        pos += 3;
    }
    pos = 0;
    while ((pos = s.find("cc", pos)) != string::npos) {
        s.replace(pos, 2, "***");
        pos += 3;
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << CountPairs(str) << " pairs of 'aa', 'bb', or 'cc'" << endl;

    string dest = ChangePairs(str);
    cout << "Modified string (param): " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
