//You are given a string s. Your task is to modify and print the given strings in such a way that the adjacent characters in the string don't repeat themselves more than twice.
#include <bits/stdc++.h>
using namespace std;

string modify_string(string s) {
    char curr_char = s[0];
    int count = 1;
    string modified_string = ""; 
    for (int i = 1; i < s.length(); i++) {
        if (s[i] == curr_char) {
            count++;
            if (count > 2) {
                continue;
            }
        } else {
            curr_char = s[i];
            count = 1;
        }
        modified_string += s[i]; 
    }
    return modified_string;
}

int main() {
    string s;
    getline(cin, s);
    cout << modify_string(s) << endl;
    return 0;
}
