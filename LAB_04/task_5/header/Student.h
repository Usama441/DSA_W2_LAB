#ifndef STUDENT_H
#define STUDENT_H

#include <vector>
#include <string>

using namespace std;

class Student{

    private:

    string student_name;
    string student_id;
    string department;
   
 
    public:

    static vector<Student> students;
    
    Student(string name,string id,string dm);

    void add_student();
    void display_students_info();

};
/*
Student ::  Student(string name,string id,string dm){

    student_name = name;
    student_id = id;
    department = dm;
    
}

void Student :: add_student(){
    
    
    students.push_back(*this);
}

void Student :: display_students_info(){

     for (int i = 0 ; i < students.size() ; i++){
        cout << students[i]<<endl;
     }
}*/

#endif