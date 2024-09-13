import std;
using namespace std;
// Write a program that displays the area and perimeter of a circle that has a radius of 6.5 using the following formula:
// perimeter = 2 * radius * pi,  area = radius * radius * pi
int main() {
    //Declare the radius
    double radius {6.5};
    
    //Declare The PI
    const double PI {3.14159};

    // Calculate the perimeter of the circle
    double Perimeter { 2 * radius * PI};
    
    //Calculate the Area of the circle
    double Area {PI * pow(radius, 2)}; 

    //Give the Output
    println("The perimeter of the circle is {} while the Area is {}", Perimeter, Area);
    return 0;
}