/*
program that does cmath and trig fucntions
alex carnes 6/6
*/

#include <iostream>

using namespace std;

int main() {

    int r,s;
    bool c = 1;

    while (c) {

        cout << "enter starting number:  ";
        cin >> s;
        cout << "enter range:  ";
        cin >> r;

        if (s < r) {

            for (int i = s; i <= r; i++)
                if (i == 4 || i == 13) {}
                else cout << i << endl;
        }

        if (r < s) {

            for (int i = r; i <= s; i++)
                if (i == 4 || i == 23) {}
                else cout << i << endl;
        }

    }

    return 0;
}