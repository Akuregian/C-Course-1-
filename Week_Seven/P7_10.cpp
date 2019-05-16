#include <iostream>
#include <vector>
#include <string>

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
    cout << "Student " << s << endl;
}

// void print_course(Course* c) prints the name of the course and all students in the course
void print_course(Course* c)
{
    cout << "Courses: " << c << endl;
}

// void enroll_students(Student* s, Course* c) will enroll the student into given course, updating both vectors
void enroll(Student* s, Course* c) 
{
    
}

int main() 
{
    Student* students;
    Course* courses;

    //define several students
    string student1 = "Albert";
    string student2 = "Micheal";
    string student3 = "Anthony";
    string student4 = "John";  

    //define several classes
    string class1 = "Calculus 3";
    string class2 = "Physics 201";
    string class3 = "CIS 201";
    string class4 = "Math 101";

    cout << "Checkout Point1" << endl;
    enroll(students, courses);

    cout << "Checkpoint2" << endl;
    //enroll them into class
    // enroll();
    // enroll();
    // enroll();
    // enroll();
    //print_student(student);
    //print_course(course);



    return 0;
}