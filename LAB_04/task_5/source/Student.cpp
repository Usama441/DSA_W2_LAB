#include "Student.h"

#include <vector>
#include <string>
#include <iostream>

using namespace std;


vector<Student> Student::students;

Student ::  Student(string name,string id,string dm){

    student_name = name;
    student_id = id;
    department = dm;
    
}

void Student :: add_student(){
    
    
    students.push_back(*this);
}

void Student :: display_students_info(){

    for (const auto& student : students) {
        cout << "Name: " << student.student_name 
             << ", ID: " << student.student_id 
             << ", Department: " << student.department << endl;
    }
}