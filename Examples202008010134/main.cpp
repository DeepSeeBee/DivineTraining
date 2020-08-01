// This demonstrates some fundamental mechanisms of the c programming language.

#include <iostream>

void Example202008010140()
{
    // the code demonstrates the difference bettween int numbers and floating point numbers.
    // where int can only store numbers withiout digits, flaoting point data types can store numbers with digits.
    // we used two different data types that are called int and double in this example
    int i = 1;
    double d = 0.5;

    std::cout << "Example202008010140:" << std::endl;
    std::cout << "This demonstrates the difference between int and floating point numbers." << std::endl;
    std::cout << "This is a Int-Value: " << i << std::endl;
    std::cout << "This is a Dbl-Value: " << d << std::endl;
    std::cout << std::endl;
}

void Example202008010147()
{
    int    i  = 3;
    double d  = 0.5;
    double r1 = i * d;
    int    r2 = i * d;

    std::cout << "Example202008010147:" << std::endl;
    std::cout << "This demonstrates the problem that may occur when casting from double to int." << std::endl;
    std::cout << "This is result 1: " << r1 << std::endl;
    std::cout << "This is result 2: " << r2 << std::endl;
    std::cout << std::endl;
}

void Example202008010151()
{
    int    i1  = 127;
    char   c1  = i1;
    int    i2  = 256;
    char   c2  = i2;

    std::cout << "Example202008010151:" << std::endl;
    std::cout << "This demonstrates the problem that may occur when casting from int to char." << std::endl;
    std::cout << "This is result int  1: " << i1 << std::endl;
    std::cout << "This is result char 1: " << (int)c1 << std::endl;
    std::cout << "This is result int  2: " << i2 << std::endl;
    std::cout << "This is result char 2: " << (int)c2 << std::endl;
    std::cout << std::endl;
}

void Example202008010156()
{
    int  i = 0;
    int* a = &i; // we declare the variable as a pointer '*' and use the adress operator '&' to gain the adress of the variable.

    std::cout << "Example202008010151:" << std::endl;
    std::cout << "This demonstrates the adress of a variable." << std::endl;
    std::cout << "Adress of variable i is " << a << std::endl;
    std::cout << std::endl;
}

void Example202008010158()
{
    int i = 0;
    std::cout << "Example202008010158:" << std::endl;
    std::cout << "This demonstrates assignment of a variable." << std::endl;
    std::cout << "Value before assignment " << i << std::endl;
    i = 1;
    std::cout << "Value after  assignment " << i << std::endl;
    std::cout << std::endl;
}

void Example202008010200()
{
    int i = 0;
    int* p = &i;

    std::cout << "Example202008010200:" << std::endl;
    std::cout << "This demonstrates assignment of variable through a pointer." << std::endl;
    std::cout << "Value before assignment " << i << std::endl;
    *p = 1;
    std::cout << "Value after  assignment " << i << std::endl;
    std::cout << std::endl;
}

void Example202008010201()
{
    bool b = true;
    std::cout << "Example202008010201:" << std::endl;
    std::cout << "This demonstrates entering true-block of an if-condition." << std::endl;
    if(b)
    {
        std::cout << "True-Block entered because b = " << b << std::endl;
    }
    else
    {
        std::cout << "False-Block entered because b = " << b << std::endl;
    }
    std::cout << std::endl;
}


void Example202008010202()
{
    bool b = false;
    std::cout << "Example202008010202:" << std::endl;
    std::cout << "This demonstrates entering false-block of an if-condition." << std::endl;
    if(b)
    {
        std::cout << "True-Block entered because b = " << b << std::endl;
    }
    else
    {
        std::cout << "False-Block entered because b = " << b << std::endl;
    }
    std::cout << std::endl;
}

void Example202008010204()
{
    const int count = 5;
    int i[count];

    i[0] = 1;
    i[1] = 2;
    i[2] = 3;
    i[3] = 4;
    i[4] = 5;

    std::cout << "Example202008010202:" << std::endl;
    std::cout << "This demonstrates int array." << std::endl;
    std::cout << "i[0] = " << i[0] << std::endl;
    std::cout << "i[1] = " << i[1] << std::endl;
    std::cout << "i[2] = " << i[2] << std::endl;
    std::cout << "i[3] = " << i[3] << std::endl;
    std::cout << "i[4] = " << i[4] << std::endl;
    std::cout << std::endl;
}

void Example202008010208()
{
    const int count = 3;
    int i[count];

    i[0] = 1;
    i[1] = 2;
    i[3] = 3;

    std::cout << "Example202008010208:" << std::endl;
    std::cout << "This demonstrates for-loop." << std::endl;
    for(int idx=0; idx < count; ++idx)
    {
        std::cout << "i[" << idx << "] = " << i[idx] << std::endl;
    }
    std::cout << std::endl;
}


void Example202008010209()
{
    const int count = 1;
    int i[count];
    int dummy = 0;

    i[0] = 1;
    i[1] = 2; // This is bad! because index >= count.

    std::cout << "Example202008010205:" << std::endl;
    std::cout << "This demonstrates access violation of array." << std::endl;
    std::cout << "i[0]  = " << i[0] << std::endl;
    std::cout << "dummy = " << dummy << std::endl;
    std::cout << std::endl;
}


void Example202008010211()
{
    const int count = 3;
    int i[count];
    int idx = 0;

    i[0] = 1;
    i[1] = 2;
    i[3] = 3;

    std::cout << "Example202008010211:" << std::endl;
    std::cout << "This demonstrates while-loop." << std::endl;
    while(idx < count)
    {
        std::cout << "i[" << idx << "] = " << i[idx] << std::endl;
        ++idx;
    }
    std::cout << std::endl;
}

void Example202008010212()
{
    const int count = 3;
    int i[count];
    int idx = 0;

    i[0] = 1;
    i[1] = 2;
    i[3] = 3;

    std::cout << "Example202008010212:" << std::endl;
    std::cout << "This demonstrates if-condition to break while-loop." << std::endl;
    while(true)
    {
        std::cout << "i[" << idx << "] = " << i[idx] << std::endl;
        ++idx;
        if(idx >= count)
        {
            break; // This exits the while loop continuing at [1].
        }
    }
    // [1]: Code will continue here after break is reached.
    std::cout << std::endl;
}

void Example202008010223()
{
    char c = 65; // Each number represents a character. Ascii code 65 represents character 'A'

    std::cout << "Example202008010212:" << std::endl;
    std::cout << "This demonstrates ascii-character code 65." << std::endl;
    std::cout << "Ascii character #65 represents character '" << c << "'" << std::endl;
    std::cout << std::endl;
}

void Example202008010224()
{
    std::cout << "Example202008010224:" << std::endl;
    std::cout << "This demonstrates dumping a ascii-character table." << std::endl;
    for(char c = 33; c < 123; ++c)
    {
        std::cout << "Ascii character #" << (int)c << " represents '" << c << "'" << std::endl;
    }
    std::cout << std::endl;
}

void Example202008010227()
{
    char string[6];
    string[0] = 'h';
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = 'o';
    string[5] = 0; // The last character must be 0 so the proram knows, where the string ends.

    std::cout << "Example202008010227:" << std::endl;
    std::cout << "This demonstrates using an char array as a string: " << string << std::endl;
    std::cout << std::endl;
}

void Example202008010228()
{
    const char* string = "hello";
    std::cout << "Example202008010228:" << std::endl;
    std::cout << "This demonstrates using an char pointer as a string: " << string << std::endl;
    std::cout << std::endl;

    // Drawback: you can not change the string. Following line results in a compiler error
    //string[0] = 'b':
}

void Example202008010235()
{
    char string[6];
    string[0] = 'h';
    string[1] = 'e';
    string[2] = 'l';
    string[3] = 'l';
    string[4] = 'o';
    string[5] = 0; // The last character must be 0 so the proram knows, where the string ends.

    char* pString = string;
    std::cout << "Example202008010235:" << std::endl;
    std::cout << "This demonstrates getting the pointer to a char array: " << pString << std::endl;
    std::cout << std::endl;
}

int main()
{
    Example202008010140();
    Example202008010147();
    Example202008010151();
    Example202008010156();
    Example202008010158();
    Example202008010200();
    Example202008010201();
    Example202008010202();
    Example202008010204();
    Example202008010208();
    Example202008010209();
    Example202008010211();
    Example202008010212();
    Example202008010223();
    Example202008010224();
    Example202008010227();
    Example202008010228();

    return 0;
}
