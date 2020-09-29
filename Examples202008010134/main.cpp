// This demonstrates some fundamental mechanisms of the c programming language.
// Hello Divine!
// Change1 by Charly
// Change2 by Charly

#include <iostream>
#include <limits>

using namespace std;

void Example202008010140()
{
    // Passed:
    // 202008010141
    // 202008162312
    //
    // the code demonstrates the difference between int numbers and floating point numbers.
    // where int can only store numbers withiout digits, flaoting point data types can store numbers with digits.
    // we used two different data types that are called int and double in this example
    // More info:
    // - https://en.wikipedia.org/wiki/Integer_(computer_science)
    // - https://en.wikipedia.org/wiki/Floating-point_arithmetic

    int i = 1; //declare variable i of type int and assign init value
    double d = 0.5; //declare variable d of type double and assign init value

    std::cout << "Example202008010140:" << std::endl;
    std::cout << "This demonstrates the difference between int and floating point numbers." << std::endl;
    std::cout << "This is a Int-Value: " << i << std::endl;
    std::cout << "This is a Dbl-Value: " << d << std::endl;
    std::cout << std::endl;

    // Questions:
    // Q01: What is the purpose of a variable?
    // A01:
    // Q02: What is the purpose of the name of a variabe?
    // A02:
    // Q03: What is the purpose of the data type of a variable?
    // A03:
    // Q04: What is the purpose of a int data type?
    // A04:
    // Q05: What is the purpose of a double data type?
    // A05:
    // Q06: What is the name of the variable 'i' ?
    // A06:
    // Q07: What is the name of the data type 'int' ?
    // A07:
    // Q08: What is the technical term for "name" ?
    // A08:
    //
    // Sample-Answers:
    // A01: The purpose of a variable is to store a value.
    // A02: The purpose of the name of a variable is to distinguish between different variables.
    // A03: The purpose of the data type of a variable is to define, what kind of values can be stored in a variable.
    // A04: The purpose of the int data type is to store real numbers.
    // A05: The purpose of a double variable is to store floating point numbers.
    // A06: The name    of variable 'i' is 'i'.
    // A07: The name    of data type 'int' is 'int'.
    // A08: The technical term for "name" is "identifier".
}

void Example202008010147()
{
    // Passed: 202008011345

    int    i  = 3;
    double d  = 0.5;
    double r1 = i * d;
    int    r2 = i * d;

    std::cout << "Example202008010147:" << std::endl;
    std::cout << "This demonstrates the problem that may occur when casting from double to int." << std::endl;
    std::cout << "This is result 1: " << r1 << std::endl;
    std::cout << "This is result 2: " << r2 << std::endl;
    std::cout << std::endl;

    // Q01: What errors can arise from the demonstrated behaviour?
    // A01:
    // Q02: What is the purpose of a data type cast?
    // A02:
}

void Example202008010148()
{
    std::cout << "Example202008010148:" << std::endl;
    std::cout << "This demonstrates different cast styles." << std::endl;

    int i = 0;
    double d = 0;

    i = d;                    // This is a implicit cast.
    i = (int) d;              // This is a explicit 'old' c   style cast
    i = static_cast<int>(d);  // This is a explicit 'new' c++ style cast

    // Note:
    // In c++ there is also a reinterpret_cast and a dynamic_cast keyword.
    // The difference to the static_cast you will see later.

    // Q01: What does 'explicit' mean when talking about data type casts?
    // A01:
    // Q02: What does 'implicit' mean when talking about data type casts?
    // A02:
    // Q03: What is the advantage of explicit coding style?
    // A03:
    // Q04: What is the advantage of implicit coding style?
    // A04:

    // Sample-Answers:
    // A01: Explicit means that you       see code that obviously tells you, what is happening.
    // A02: Implicit means that you don't see code that obviosuly tells you, what is happening.
    // A03:
    //    - Explicit makes it more obvious what is happening so tht beginners are remembered of all things going on.
    //    - IF there are several possibilites different compilers could react differently when doing it implicit.
    //      When we tell the compiler explicitely what we want to achive,
    //      the danger of errors when porting to anoteher platform is less.
    // A04: Implicit coding makes the code smaller and (if you know what is going on) more easy to read.
    //
    // Note: Different behaviour of the microsoft c++ compiler and the arm stm32 gnu compiler is likely to happen
    //       when using implicit casts, especially on different int-types.
}

void Example202008010151()
{
    // Current: 202008011500
    // MoreInfo:
    // - https://www.youtube.com/watch?v=LpuPe81bc2w

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


void Example202008010152()
{
    std::cout << "Example202008010152:" << std::endl;
    std::cout << "This demonstrates the sizes and ranges of different integer types." << std::endl;

    std::cout << "sizeof(char)      = " << sizeof(char) << " byte(s) = " << sizeof(char) * 8 << " bit(s)" << std::endl;
    std::cout << "sizeof(int)       = " << sizeof(int)  << " byte(s) = " << sizeof(int)  * 8 << " bit(s)" << std::endl;
    std::cout << "sizeof(long)      = " << sizeof(long) << " byte(s) = " << sizeof(long) * 8 << " bit(s)" << std::endl;

    std::cout << "sizeof(int8_t)    = " << sizeof(int8_t)  * 8 << " bit(s)" << std::endl;
    std::cout << "sizeof(int16_t)   = " << sizeof(int16_t) * 8 << " bit(s)" << std::endl;
    std::cout << "sizeof(int32_t)   = " << sizeof(int32_t) * 8 << " bit(s)" << std::endl;
    std::cout << "sizeof(int64_t)   = " << sizeof(int64_t) * 8 << " bit(s)" << std::endl;

    std::cout << "int8_t  .min      = "  << numeric_limits<int8_t   >::min() << std::endl;
    std::cout << "int8_t  .max      =  " << numeric_limits<int8_t   >::max() << std::endl;
    std::cout << "uint8_t .min      =  " << numeric_limits<uint8_t  >::min() << std::endl;
    std::cout << "uint8_t .max      =  " << numeric_limits<uint8_t  >::max() << std::endl;
    std::cout << "int16_t .min      = "  << numeric_limits<int16_t  >::min() << std::endl;
    std::cout << "int16_t .max      =  " << numeric_limits<int16_t  >::max() << std::endl;
    std::cout << "uint16_t.min      =  " << numeric_limits<uint16_t >::min() << std::endl;
    std::cout << "uint16_t.max      =  " << numeric_limits<uint16_t >::max() << std::endl;
    std::cout << "int32_t .min      = "  << numeric_limits<int32_t  >::min() << std::endl;
    std::cout << "int32_t .max      =  " << numeric_limits<int32_t  >::max() << std::endl;
    std::cout << "uint32_t .min     =  " << numeric_limits<uint32_t >::min() << std::endl;
    std::cout << "uint32_t .max     =  " << numeric_limits<uint32_t >::max() << std::endl;
    std::cout << "int64_t .min      = "  << numeric_limits<int64_t  >::min() << std::endl;
    std::cout << "int64_t .max      =  " << numeric_limits<int64_t  >::max() << std::endl;
    std::cout << "uint64_t .min     =  " << numeric_limits<uint64_t >::min() << std::endl;
    std::cout << "uint64_t .max     =  " << numeric_limits<uint64_t >::max() << std::endl;

    // Questions:
    // Q01: How many bits has 1 byte?
    // A01:
    // Q02: How many bits has an int32?
    // A02:
    // Q03: How many bytes has one int32?
    // A03:
    // Q04: How many bits has the smallest datatype on common personal computer architecture?
    // A04:

    // SampleAnswers:
    // A01: One Byte has 8 bits.
    // A02: One int32 has 32 bits.
    // A03: One int32 has 4 bytes.
    // A04: The smalles data type on popular platforms is 8 bits long.
    //
    // Note: There are also platforms that may work with 4 bits for example.

}

void Example202008010156()
{
    // More info:
    // - https://en.wikipedia.org/wiki/Pointer_(computer_programming)

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
    std::cout << "Value before assignment: " << i << std::endl;
    i = 1;
    std::cout << "Value after  assignment: " << i << std::endl;
    std::cout << std::endl;
}

void Example202008010200()
{
    int i = 0;
    int* p = &i;

    std::cout << "Example202008010200:" << std::endl;
    std::cout << "This demonstrates assignment of variable through a pointer." << std::endl;
    std::cout << "Value before assignment through pointer: " << i << std::endl;
    *p = 1;
    std::cout << "Value after  assignment through pointer: " << i << std::endl;
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
    int i[count]; // This is an array. It stores 5 int numbers.

    i[0] = 1; // We can set the first item in the array like this. And for the other items it goes like:
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
    string[5] = 0; // The last character must be 0 so the program knows, where the string ends.

    char* pString = string;
    std::cout << "Example202008010235:" << std::endl;
    std::cout << "This demonstrates getting the pointer to a char array: " << pString << std::endl;
    std::cout << std::endl;
}

void Example202008021924()
{
    // More info:
    // - https://en.wikipedia.org/wiki/Modulo_operation
    // - https://en.wikipedia.org/wiki/Bitwise_operations_in_C#Left_shift_%3C%3C
    // - https://en.wikipedia.org/wiki/Bitwise_operations_in_C#Bitwise_AND_&
    // - https://en.wikipedia.org/wiki/Logical_conjunction#Applications_in_computer_engineering

    // In binary system every binary digit has a potential value.
    // This potential value is determined by calculating 2^BitIdx.
    // BitIdx is 0 based meaning we start from 0 in opposite of starting counting with 1.
    // To convert a binary number to decimal, the potential values of all 1-bits are added.
    // The potential values of digits with binary value 0 are ignored.
    //
    // BitIdx:                        |  3    |  2 |   1 |  0   |
    // PotentialValue-Pow-Calculation | 2^3   |2^2 | 2^1 | n/a  |
    // PotentialValue-Calculation     | 2*2*2 |2*2 | 2   |  1   |
    // PotentialValue                 |  8    | 4  | 2   |  1   |
    // ExampleBinary Number           |  1    | 0  | 1   |  0   |
    // ExamplePotential (Recognized)  |  8    | 0  | 1   |  0   |
    // Decimal Represantation of Bin(1010) = 8 + 0 + 2 + 0 = dec(10)
    //
    // More binary digits work the same way by extending the table on the left side with more digits following the pattern.
    //
    // Question 1: What is the decimal value for bin(1010 1010)
    // Answer   1: 128+32+8+2=170

    int nr = 129;

    std::cout << "Example202008021924:" << std::endl;
    std::cout << "This demonstrates printing the binary representation of a integer number: " << std::endl;
    std::cout << "dec(" << nr << ") = bin(";

    for(int pos = 0; pos < 32; ++pos)
    {
        // 1. We make a space after each byte (8 bits)
        if((pos % 8) == 0
        &&  pos > 0)
            std::cout << " ";

        int bit = 31 - pos;

        // 2. We print "0" or "1".
        int val = (nr >> bit) & 1;

        if(val == 0)
            std::cout << "0";
        else
            std::cout << "1";
    }

    std::cout << ")" << std::endl;
}

int main()
{
    Example202008010140();
    Example202008010147();
    Example202008010148();
    Example202008010151();
    Example202008010152();
   /* Example202008010156();
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
    Example202008021924();
*/

    return 0;
}
