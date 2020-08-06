// This shows an example of complex data types:
// We use the struct keyword to define complex data types.

#include <iostream>

using namespace std;

// This is a complex data type for a Date
struct SDate
{
    // The DataType consists of these 'fields':

    // A date has a year
    int Year;

    // A date has a month
    int Month;

    // A date has a day.
    int Day;
};

// This is a complex data type for a Person
struct SPerson
{
    // A person has a first name
    const char* FirstName;

    // A person has a last name
    const char* LastName;

    // A person has a birthday.
    SDate Birthday;
};

void SDate_Print(SDate& aDate)
{
    cout << "Date: " << aDate.Year << "-" << aDate.Month << "-" << aDate.Day << endl;
}

void SPerson_Print(SPerson& aPerson)
{
    cout << "Person: " << endl;
    cout << "-FirstName: " << aPerson.FirstName << endl;
    cout << "-LastName: " << aPerson.LastName << endl;
    cout << "-Birthday: ";
    SDate_Print(aPerson.Birthday);
    cout << endl;
}

int main()
{
    cout << "This program represents use of structs" << endl;

    // here we craete a local variable of struct person for Charly:
    SPerson aCharly;
    aCharly.FirstName = "Charly";
    aCharly.LastName = "Beck";
    aCharly.Birthday.Year = 1875;
    aCharly.Birthday.Month = 8;
    aCharly.Birthday.Day = 5;

    // here we craete a local variable of struct person for Divine:
    SPerson aDivine;
    aDivine.FirstName = "Divine";
    aDivine.LastName = "Ndaji";
    aDivine.Birthday.Year = 1911;
    aDivine.Birthday.Month = 5;
    aDivine.Birthday.Day = 2;

    // Now we print both person's data:
    SPerson_Print(aCharly);
    SPerson_Print(aDivine);

    return 0;
}

// Q01: What is the purpose of a struct?
// A01:
// Q02: What is the purpose of a struct's field?
// A02:
// Q02: What is the difference between a local variable and a field?
// A02:



