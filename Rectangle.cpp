import std;
using namespace std;
//Write a program that displays the area and perimeter of a rectangle with a width of 5.3 and height of 8.6 using the following formula
// area = width * height and  perimeter = 2 * (width + height)

int main() {
    //Declare the Width
    double Width {5.3};

    //Declare the height
    double Height {8.6};

    //Calculate the Area
    double Area {Width * Height};

    //Calculate the Perimeter
    double Perimeter {2 * (Width + Height)};

    //Give the Output
    println("The Area of the Rectangle is {} while the Perimeter is {}", Area, Perimeter);


    return 0;
}