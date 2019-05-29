#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

using namespace std;

class Person
{
    public:
        Person(string name);
        void befriends(Person p);
        void unfriend(Person p);
        string get_friend_names() const;
        void find_name(string nameToFind);

    private:
        string name;
        string friends;
};

Person::Person(string personsName)
{
    name = personsName;
    friends = "";
}

void Person::find_name(string nameToFind)
{
    std::size_t found = friends.find(nameToFind);
    if(friends.find(nameToFind) != string::npos)
    {
        friends = friends.substr(0, found) + friends.substr(found + nameToFind.length());
    }
}

void Person::befriends(Person p)
{
    friends += " " + p.name;
}

void Person::unfriend(Person p)
{
    string nameFind = p.name;
    find_name(nameFind);
}

string Person::get_friend_names() const
{
    return friends;
}



int main()
{
    
    Person Anthony("Anthony");
    Person John("John");
    Person Phillip("Phillip");
    Person Tucker("Tucker");

    // Anthony's Friends
    Anthony.befriends(John);
    Anthony.befriends(Tucker);
    Anthony.befriends(Phillip);

    // Johns Friends
    John.befriends(Phillip);
    John.befriends(Anthony);
    John.befriends(Tucker);


    //Phillips Friends
    Phillip.befriends(Anthony);
    Phillip.befriends(John);
    Phillip.befriends(Tucker);

    //Tuckers Friends
    Tucker.befriends(John);
    Tucker.befriends(Anthony);
    Tucker.befriends(Phillip);

    cout << "Would you like to View The Current Friendships?(y/n)";
    char view;
    cin >> view;

    if (view == 'y')
    {
        // Current Friendships   
        cout << endl <<"-> Anthonys Friends: " << setw(10) << Anthony.get_friend_names() << endl;
        cout << "-> Johns Friends: " <<  setw(10) << John.get_friend_names() << endl;
        cout << "-> Phillips Friends: " << setw(10) << Phillip.get_friend_names() << endl;
        cout << "-> Tuckers Friends: " << setw(10) << Tucker.get_friend_names() << endl << endl;
    }

    // Befriendings
    Anthony.unfriend(Tucker);
    Anthony.unfriend(Phillip);

    John.unfriend(Tucker);

    Phillip.unfriend(Anthony);
    Phillip.unfriend(John);

    Tucker.unfriend(John);

    cout << "After the unfriendings, the current friendships are: " << endl;
    cout << endl <<"-> Anthonys Friends: "  << Anthony.get_friend_names() << endl;
    cout << "-> Johns Friends: " << John.get_friend_names() << endl;
    cout << "-> Phillips Friends: " << Phillip.get_friend_names() << endl;
    cout << "-> Tuckers Friends: "  << Tucker.get_friend_names() << endl;

    return 0;
}