#include <iostream>
using namespace std;

class Employee
{
public:
    string Name, Position;
    int Age;
    Employee (const string & Name ="", const string & Position = "",
              const int & Age = 0):Name (Name), Position (Position), Age (Age) {};

    friend ostream& operator << (ostream& o, const Employee& src)
    {
        o << "Name: " << src.Name << "\t"<<endl;
        o<<"Position: " << src.Position << endl;
        o << "Age: " << src.Age << endl<<endl<<endl;
        return o;
    };
};
