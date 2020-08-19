// This demonstrates the design pattern "Compositum"

#include <iostream>
#include <list>

using namespace std;

// This is a abstract base class for a two-dimensional shape.
class CShape2d
{
    // It can calculate it's area.
    public: virtual double CalculateArea() = 0;

};

class CRect
:
    public CShape2d // A rect is a 2d shape
{
    // A rect has a width
    private: double Width;

    // A rect has a height
    private: double Height;

    // Constructor passing the members of the object:
    public: CRect(double aWidth, double aHeight)
    :
        Width(aWidth)
    ,   Height(aHeight)
    {
    };

    // Special way to calculate area for rect:
    public: virtual double CalculateArea()
    {
        return this->Width * this->Height;
    }

};

class CCircle
:
    public CShape2d // A circle is a 2d shape
{
    private: double Radius;

    // Constructor passing the members of the object:
    public: CCircle(double aRadius) : Radius(aRadius){};

    // Special way to calculate area for circle:
    public: virtual double CalculateArea()
    {
        double aPi = 3.1415926535897932384626433832795;
        return aPi * this->Radius * this->Radius;
    }

};

// A composite shape is a shape consisting of several shapes.
// This design pattern reflects the self-similarity always observed in nature.
// This is why the compositum is a very favorite 'design pattern'
// A design pattern is some sort of an idea which sums up a certain number of classes,
// the names of the classes and it's relation
// A design pattern may consist of maybe 1 to 7 classes but rarely more.
// see https://en.wikipedia.org/wiki/Software_design_pattern
// see https://en.wikipedia.org/wiki/Composite_pattern
// Here we define a special class for composite shape and apply the design pattern.
class CCompositeShape
:
    public CShape2d // A compositumshape is a 2d shape
{
    private: typedef std::list<CShape2d*> CShapes;

    // A Composite Shape has a set of shapes.
    private: CShapes Shapes;

    // Method to add a shape to the composite shape
    public: void Add(CShape2d* aShapePtr)
    {
        this->Shapes.push_back(aShapePtr);
    }

    // Calculates the total area
    // Here: The composite shape appears from the outside as one shape
    //       internally we treat the handling for the sub shapes.
    public: virtual double CalculateArea()
    {
        // declare a variable for the total area of all shapes inside the composite shape
        double aArea = 0;

        // process all subshapes of the composite shape
        // by using a iterator object used to make a for loop over all the subshapes in the shape.
        // => iterate over all subshapes
        for(CShapes::iterator it = this->Shapes.begin(); // get begin of lists
            it != this->Shapes.end();                    // loop until end of list is reached
            ++it                                         // increment iterator  to point to next item in the list
            )
        {
            // get the subshape from the iterator
            CShape2d* aShapePtr = *it;

            // sum up the total area
            aArea = aArea + aShapePtr->CalculateArea();
        }

        // return the total area
        return aArea;
    }
};

int main()
{
    cout << "This demonstrates the design pattern Compositum" << endl;

    CRect aRect(5, 4);
    CCircle aCircle(3);
    CCompositeShape aCompositeShape;
    aCompositeShape.Add(&aRect);
    aCompositeShape.Add(&aCircle);
    double aArea = aCompositeShape.CalculateArea();
    cout << "Total area of composite shape: " << aArea << endl;
}

// Q01: What is a design pattern?
// A01:
// Q02: What is the compositum design pattern?
// A02:
// Q03: What is a iterator?
// A03:
// Q04: What is a typedef?
// A04:
// Q05: What is a c++ template?
// A05:
// Q05: Try to find other examples for compositums in the real world.
// A05:

