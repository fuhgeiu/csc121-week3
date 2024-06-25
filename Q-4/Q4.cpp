#include <iostream>
#include <string>
#include <array>

using namespace std;


int main () {

    string name;

//  func

    cout << "enter name :";
// get username
    getline (cin,name);

    cout << endl << endl;

    int l = name.length();
    char my_array[l];

// store into array
    for (int i = 0; i < l; i++) {

        my_array[i] = tolower(name[i]);
    }
// display vowels

    cout << "vowels are:\n";

    for (int i = 0; i < l; i++) {

        if (my_array[i] == 'a') cout << " a" << endl;
        if (my_array[i] == 'i') cout << " i" << endl;
        if (my_array[i] == 'u') cout << " u" << endl;
        if (my_array[i] == 'e') cout << " e" << endl;
        if (my_array[i] == 'o') cout << " o" << endl;
    }

// print backwards
    cout << "name backwards is:";
    for (int i = (l-1); i >= 0; i--) {

        cout << my_array[i];
    }

    return 0;
}