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
    vector <string> students;
    
    public:

    Student(string name,string id,string dm);

    void add_student();
    void display_students();

};

#endif