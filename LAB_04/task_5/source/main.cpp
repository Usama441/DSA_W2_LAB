#include <iostream>
#include <vector>
#include <string>
#include "Student.h"

using namespace std;


int main(){
     
     Student st("usama","F2021065250","Software Engineering");
     Student st2("Muaaz","S2023065107","Software Engineering");
     Student st3("ahmed","F2021065352","Software Engineering");
     Student st4("hashir","F2021065269","Software Engineering");
     Student st5("umer","F2022065100","Software Engineering");

     st.add_student();
     st2.add_student();
     st3.add_student();
     st4.add_student();
     
     st5.display_students_info();
}


/*
 Implement a simple student management system that allows adding and displaying student details.
    1. Create a Student.h header file to define a Student class with necessary attributes and methods.
    2. Implement the Student class in Student.cpp.
    3. Write a main.cpp to add students and display their details.
*/