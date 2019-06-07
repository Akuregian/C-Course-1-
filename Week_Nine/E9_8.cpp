#include <iostream>
#include <string>

/*
    Program will initialize a student with the Student class and
    adds x amount of quizes that will be averaged at the end.
*/

using namespace std;


// Student Class
class Student
{
    public:
        Student(string name);
        void add_quiz(int score);
        void get_name();
        string print_name();
        int get_total_score() const;
        double get_avg_score() const;

    private:
        string name;
        int total_score = 0;
        int number_of_quizzes = 0;
};

Student::Student(string name)
{
    name = "";
}
void Student::add_quiz(int score) 
{
    total_score += score;
    number_of_quizzes += 1;
}

int Student::get_total_score() const
{
    return total_score;
}

double Student::get_avg_score() const
{
    double avgScore = total_score / number_of_quizzes;
    return avgScore;
}

void Student::get_name()
{
    cout << "Student name: ";
    getline(cin, name);
}

string Student::print_name()
{
    return name;
}


int main()
{
    Student student1("Anthony");
    student1.get_name();

    int SENTINEL = -1;
    int quizScore;
    cout << "Enter the quiz score: ";
    cin >> quizScore;

    student1.add_quiz(quizScore);

    while(quizScore != SENTINEL)
    {
        cout << "Enter the next quiz score (-1 to exit): ";
        cin >> quizScore;
        if(quizScore == -1)
        {
            break;
        }
        student1.add_quiz(quizScore);
    }


    string name = student1.print_name();
    int score = student1.get_total_score();
    double avg = student1.get_avg_score();

    cout << endl << "The Student " << name << " has the following: " << endl;
    cout << "Cumulative Score is: " << score << endl;
    cout << "Average is: " << avg << endl;

    return 0;
}
