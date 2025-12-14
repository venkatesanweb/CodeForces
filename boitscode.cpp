#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    string result = "";
    int i = 0;
    
    while (i < s.length()) {
        if (i + 1 < s.length() && s[i] == '-' && s[i+1] == '.') {
            result += '1';
            i += 2;
        }
        else if (i + 1 < s.length() && s[i] == '-' && s[i+1] == '-') {
            result += '2';
            i += 2;
        }
        else if (s[i] == '.') {
            result += '0';
            i += 1;
        }
    }
    
    cout << result << endl;
    
    return 0;
}
