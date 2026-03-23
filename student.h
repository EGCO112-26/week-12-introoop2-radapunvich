#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class student {
private:
  string name;
  int age;

public:
    
  void set_name(string n = "Yme");
  void print_name();
  void set_age(int x);
  int get_age();   
  void display();  
};


int student::get_age() {
    return age;
}

void student::set_age(int x) {
  if (x > 80) { 
        age = 80;
    } 
    else if (x < 5) {
        age = 5;     
    } 
    else {            
        age = x;
    }

}

void student::set_name(string n) { 
  name = n; 
}

void student::print_name() {
  cout << "Name: " << name << endl;
}

void student::display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

#endif