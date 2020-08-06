// This program demonstrates the use of abstract classes and inheritance.

#include <iostream>

using namespace std;

// This is a abstract base class.
class Animal
{

    // This is a abstract method.
    // It's there but it contains no code.
    // This is the reason why no object of this class can be created.
    // => Because the program would not know what to do if the Talk-Method is called.
    public: virtual void Talk() = 0;

};

class Dog
:
    public Animal // A dog is a animal
{
    // Here we define the abstract method.
    // A dog has a special way to talk...
    public: virtual void Talk()
    {
        cout << "Dog talks: wouf..." << endl;
    };
};

class Cat
:
    public Animal // A cat is a animal
{
    // Here we define the abstract method.
    // A cat has a special way to talk...
    public: virtual void Talk()
    {
        cout << "Cat talks: meow..." << endl;
    };
};

int main()
{
    cout << "This program demonstrates the use of abstract classes and inheritance." << endl;

    Cat aCat;
    aCat.Talk();

    Dog aDog;
    aDog.Talk();

    return 0;
}

// Q01: What is the purpose of a base class
// A01:
// Q02: What is the purpose of abstract base class?
// A02:
// Q03: What's the difference between a normal method and a abstract method?
// A03:
// Q04: Why is it not possible to create objects of an abstract class?
// A04:
// Q05: Draw a UML class diagram of our model used herein!
// A05:
// Q06: Is it possible to cast a Cat to an Animal? Why is this?
// A06:
// Q07: Is it possible to cast a an Animal to an Cat? Why is this?
// A07:
// Q08: What is the difference between an "is a" relation and a "has a" relation?
// A08:



