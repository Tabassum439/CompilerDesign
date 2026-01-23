#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    int i = 0;
    int n = s.length();

    while (i < n && s[i] == 'b') {
        i++;
    }

    if (i < n && s[i] == 'a') {
        i++;
    } else {
        cout << "Invalid string" << endl;
        return 0;
    }

    while (i < n) {
        if (s[i] == 'a') {
            i++;
        }
        else if (s[i] == 'b') {
            i++;
            if (i < n && s[i] == 'a') {
                i++;
                if (i < n && (s[i] == 'a' || s[i] == 'b')) {
                    i++;
                }
            } else {
                cout << "Invalid string" << endl;
                return 0;
            }
        }
        else {
            cout << "Invalid string" << endl;
            return 0;
        }
    }

    cout << "Valid string" << endl;
    return 0;
}
