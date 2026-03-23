#include <iostream>
#include <string>
#include "student.h"

using namespace std;

#define N 3

int main(int argc, char* argv[]) {
    student s1, s2;
    

    student a[N];
    int i;

    // 4. Change input from cin to argv
    if (argc < (N * 2 + 1)) {
        cout << "Error: Not enough arguments." << endl;
        return 1;
    }

   
    for(i = 0; i < N; i++) {
        a[i].set_name(argv[i * 2 + 1]); 
        a[i].set_age(stoi(argv[i * 2 + 2])); 
    }

    // 3. Find what the age of the youngest person is
    int min_age = a[0].get_age();
    for(i = 1; i < N; i++) {
        if(a[i].get_age() < min_age) {
            min_age = a[i].get_age();
        }
    }

    cout << "Youngest student" << endl;
    for(i = 0; i < N; i++) {
        if(a[i].get_age() == min_age) {
            a[i].display(); 
        }
    }

    return 0;
}
  


