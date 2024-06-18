/*
program that does cmath and trig fucntions
alex carnes 6/6
*/

#include <iostream>

using namespace std;

void get_S (int [],double&);
void dis_S (int [],double T);


int main() {

    int my_array[5];
    double T;

//get scores and calculate
    get_S (my_array,T);

//  display both
    dis_S(my_array,T);

    return 0;
}

void get_S (int my_array[],double &T) {

    cout << "enter 5 score\n\n";

    for (int i = 0; i <= 4; i++) {
        cin >> my_array[i];
//        calculate total
        T = T + my_array[i];
    }
}

void dis_S (int my_array[], double T) {

    cout << "the total is: " << T << endl;
    cout << "the average is: " << T/5 << endl;

    cout << "entered 5 scores are:\n";
    for (int i = 0; i < 5; i++) cout << my_array[i] << endl;
}