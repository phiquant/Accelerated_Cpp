//
// Created by Ethan Shu on 4/26/23.
// Accelerated C++, book example from section 3.1
//

#include <iostream>
#include <string>
#include <iomanip>
#include <ios> //input output stream?

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::setprecision;
using std::streamsize;

int main(){
    string name;
    cout << "Please enter your name" << endl;
    cin >> name;

    double final;
    cout << "Please enter your final" << endl;
    cin >> final;

    double midterm;
    cout << "Please enter your midterm" << endl;
    cin >> midterm;

    double sum=0, ave_hw;
    int count = 0;
    double hw;

    cout << "Please enter all your homework grades, followed by EOF" << endl;
    while (cin>>hw){
        sum += hw;
        ++count;
    }
    ave_hw = sum/count;

    double overall;
    overall = 0.4*final + 0.2*midterm + 0.4*ave_hw;

    streamsize prec = cout.precision();
    cout << name << ", your overall grade is: " << setprecision(4) << overall << setprecision(prec) << endl;

    return 0;
}
