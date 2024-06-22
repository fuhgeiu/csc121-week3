/*
program that does cmath and trig fucntions
alex carnes 6/6
*/

#include <iostream>
#include <unistd.h>
#include <window.h>

using namespace std;


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











//  loop for seconds

//      seconds displayed in small delay
//      seconds displayed in small delay but with less precision when clock is turnign minutes
//      seconds displayed in small delay but with even less pecision when clock is turning hours


//  loop for minutes

//      minutes displayed in small delay
//      minutes displayed in small delay but with less precision clock us turning hours
//      minutes displayed in small delay but with even less precision clock is turning hours


//  loop for hours

//      hours displayed in small delay,
//      stop when hitting 24 hours


//  to funtionize

//


    return 0;
}