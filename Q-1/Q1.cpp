/*
program that does cmath and trig fucntions
alex carnes 6/6
*/

#include <iostream>

using namespace std;

int main() {

    int a,b,r,s;

    cout << "enter starting number:  "; cin >> s;
    cout << "enter range:  "; cin >> r;

    if (s < r) {b = r; a = s;}
    else (a = r); (b = s);

    for ( int i = a; i <= b; i++) {

        if (i == 4 || i == 13) {}
        else cout << i << endl;
    }


    return 0;
}