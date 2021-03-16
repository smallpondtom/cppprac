#include<iostream>
#include<string>

using namespace std;


int main() {
    string fname;
    char lname[10];
    string dialog;

    cout << "Enter your first name -> ";
    cin >> fname;
    cout << "Enter your last name -> ";
    cin >> lname;
    
    dialog = "Hello, " + fname + " " + lname + "!";
    cout << dialog;
}
