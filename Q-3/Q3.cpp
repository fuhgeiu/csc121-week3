/*
program that does cmath and trig fucntions
alex carnes 6/6
*/

#include <iostream>
#include <unistd.h>

using namespace std;

void dis_S (bool w,int s) {

    int delay;

    while (w) {
        for (int i = 0; i < 60; i++) {

            if (i <= 10) { delay = 900000; }
            else delay = 100000;

            usleep(delay);
            cout << "       :" << i << endl;
        }
        s = 1;
    }
}

void dis_M (bool w,int s) {

    int delay;

    while (w) {
        for (int i = 0; i < 60; i++) {

            if (i <= 10) { delay = 900000; }
            else delay = 100000;

            usleep(delay);
            cout << "    :" << i << endl;
        }
    }
}


void dis (bool w) {

    int s = 0;

    dis_S(w,s);

    if (s = 1) {

    dis_M(w,s); }


}










int main () {

    bool w = 1;

    dis (w);




//  to funtionize

//


    return 0;
}