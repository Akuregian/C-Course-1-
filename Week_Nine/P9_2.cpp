#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
#include <iomanip>

using namespace std;

/*
Void removesSpaces Function will Remove white spaces from a string
@param string* str will be the string inputed
*/
string removesSpaces(string &str)
{
    int size = str.length();
    for(int j = 0; j<=size; j++)
    {
        for(int i = 0; i <=j; i++)
        {
            if(str[i] == ' ' && str[i+1] == ' ')
            {
                str.erase(str.begin() + i);
            }
            else if(str[0]== ' ')
            {
                str.erase(str.begin());
            }
            else if(str[i] == '\0' && str[i-1]== ' ')
            {
                str.erase(str.end() - 1);
            }
        }
    }
    return str;
}

/*
Class Person will create friendships and also unfriend friendships
void befriends will add new friendships
void unfriend will delete existing friendships
@string get_friend_names() const will grab the current friendships
void find_name will find the name in the string of friendships
*/
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
        friends = removesSpaces(friends);
        cout << "Friends: " << friends << endl;
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
        cout << endl <<"-> Anthonys Friends: " << Anthony.get_friend_names() << endl;
        cout << "-> Johns Friends: " << John.get_friend_names() << endl;
        cout << "-> Phillips Friends: "  << Phillip.get_friend_names() << endl;
        cout << "-> Tuckers Friends: " << Tucker.get_friend_names() << endl << endl;
    }

    // Befriendings
    Anthony.unfriend(Tucker);
    Anthony.unfriend(Phillip);

    John.unfriend(Tucker);

    Phillip.unfriend(Anthony);
    Phillip.unfriend(John);

    Tucker.unfriend(John);

    cout << "After the unfriendings, the current friendships are: " << endl;
    cout << endl << "-> Anthonys Friends: "  <<Anthony.get_friend_names() << endl;
    cout << "-> Johns Friends: " << John.get_friend_names() << endl;
    cout << "-> Phillips Friends: " << Phillip.get_friend_names() << endl;
    cout << "-> Tuckers Friends: "  << Tucker.get_friend_names() << endl;

    return 0;
}