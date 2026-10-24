#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    long int enrollment;
    float a, b, c, sum, average;
    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your Enrollment Number: ";
    cin >> enrollment;

    cout << "Enter Subject A Marks: ";
    cin >> a;

    cout << "Enter Subject B Marks: ";
    cin >> b;

    cout << "Enter Subject C Marks: ";
    cin >> c;

    if((a>100 || a < 0) || (b>100 || b < 0) || (c>100 || c<0)){
        cout << "Invalid range of marks!\nEnter valid marks range from 0 to 100.";
    }

    sum = a+b+c;
    average = sum/3;

    cout <<"\n----------Student Report----------\n";
    cout<<"Student name: \t" << name <<"\n";
    cout<<"Enrollment number: \t" << enrollment <<"\n";
    cout<<"Subject A Marks: \t" << a <<"\n";
    cout<<"Subject B Marks: \t" << b <<"\n";
    cout<<"Subject C Marks: \t" << c <<"\n";
    cout<<"Grand Totol out of 300: \t" << sum <<"\n";
    cout<<"Average: \t" << average <<"\n";
}
