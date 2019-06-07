#include <iostream>
#include <vector>
#include <string>

/*
    Program has Student Struct and Course Struct which both are Vector members
    of eachother. They Both can be called and stored students information such as
    courses enrolled and all students enrolled into a specified class
*/


using namespace std;

// structures
struct Course;
struct Student 
{
    string name;
    vector<Course*> courses;
};

struct Course 
{
    string name;
    vector<Student*> students;
};

// void print_students(Student* s) will print the name of the students and all the courses he has taken
void print_student(Student* s)
{
    cout << "Student " << s->name << endl;

    for(int i = 0; i < s->courses.size(); i++)
    {
        cout << s->courses[i]->name << endl;
    }
    cout << endl;
}

// void print_course(Course* c) prints the name of the course and all students in the course
void print_course(Course* c)
{
    cout << "Courses: " << c->name << endl;
}

// void enroll_students(Student* s, Course* c) will enroll the student into given course, updating both vectors
void enroll(Student* s, Course* c)
{
    s->courses.push_back(c);
    c->students.push_back(s);
} 

int main() 
{
    Student student[3];

    student[0].name = "Anthony";
    student[1].name = "Johnny";
    student[2].name = "Marky Mark";

    Course course[3];

    course[0].name = "CIS 201";
    course[1].name = "Physics 201";
    course[2].name = "Calculus";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            enroll(&student[i], &course[j]);
        }
    }
    for (int i = 0; i < 3; i++)
        print_student(&student[i]);
    for(int i = 0; i < 3; i++)
        print_course(&course[i]);

    return 0;
}