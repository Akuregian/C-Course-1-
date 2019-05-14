#include <iostream>
#include <vector>

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
    
}

// void print_course(Course* c) prints the name of the course and all students in the course
void print_course(Course* c)
{

}

// void enroll_students(Student* s, Course* c) will enroll the student into given course, updating both vectors
void enroll(Student* s, Course* c) 
{
    
}



int main() 
{
    string students[] = {   "Anthony Kuregian",
                            "John Jones",
                            "Mary Poppins",
                            "Mike Smith"    };

    string classes[] = {    "Physics 101",
                            "CIS 201",
                            "Calculus 1", 
                            "Electronics 102" };

    Student *student;
    Course *course;

    enroll(student, course);



    return 0;
}