#include <iostream>
#include <vector>

using namespace std;

// void print_students(Student* s) will print the name of the students and all the courses he has taken
void print_student(Student* s)
{

}

// void print_course(Course* c) prints the name of the course and all students in the course
void print_course(Course* c)
{

}

// void enroll_students(Student* s, Course* c) will enroll the student into given course, updating both vectors
void enroll(Student* s, Course* c) 
{
    
}

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

int main() 
{

    return 0;
}