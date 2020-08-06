// This shows an example of complex data types:
// We use the class keyword to define complex data types.

#include <iostream>

using namespace std;

// This is a complex data type for a Date
class CDate
{
    // A date has a year
    public: int Year;

    // A date has a month
    public: int Month;

    // A date has a day.
    public: int Day;

    // This is the "Constructor" a special method to create the object
    CDate()
    : // Initializer-List: init all with 0
        Year(0)
    ,   Month(0)
    ,   Day(0)
    {
    }

    // This method prints the object.
    public: void Print()
    {
        cout << "Date: " << this->Year << "-" << this->Month << "-" << this->Day << endl;
    }

};

// This is a complex data type for a Person
class CPerson
{

    // A person has a first name
    public: const char* FirstName;

    // A person has a last name
    public: const char* LastName;

    // A person has a birthday.
    public: CDate Birthday;

    // This is the "Constructor" a special method to create the object
    public: CPerson()
    : // Initializer-List: init all with 0
        FirstName(0)
    ,   LastName(0)
    {
    };

    public: void Print()
    {
        cout << "Person: " << endl;
        cout << "-FirstName: " << this->FirstName << endl;
        cout << "-LastName: " << this->LastName << endl;
        cout << "-Birthday: ";
        this->Birthday.Print();
        cout << endl;
    }

};

int main()
{
    cout << "This program demonstrates use of classes" << endl;

    // Here we create a instance of the class 'Person' and set it's member veriables:
    CPerson aCharly;
    aCharly.FirstName = "Charly";
    aCharly.LastName = "Beck";
    aCharly.Birthday.Year = 1875;
    aCharly.Birthday.Month = 8;
    aCharly.Birthday.Day = 5;

    // Here we create another instance of the class 'Person' and set it's member veriables:
    CPerson aDivine;
    aDivine.FirstName = "Divine";
    aDivine.LastName = "Ndaji";
    aDivine.Birthday.Year = 1911;
    aDivine.Birthday.Month = 5;
    aDivine.Birthday.Day = 2;

    // Now we print both person's data:
    aCharly.Print();
    aDivine.Print();

    return 0;
}

// Q01: What is the purpose of a class?
// A01:
// Q02: What is the difference between a class and a struct?
// A02:
// Q03: What is the purpose of a constructor?
// A03:
// Q04: What is the purpose of a initalizer list?
// A04:
// Q05: What is the purpose of the this-pointer?
// A05:
// Q06: What is the purpose of a method?
// A06:
// Q07: What means to instanciate an object of a class?
// A07:
// Q08: What means to instanciate an object of a class?
// A08:
// Q09: Draw a UML class diagram of our model used herein.
// A09:
// Q10: Draw a UML object diagram of our objects used herein.
// A10:










