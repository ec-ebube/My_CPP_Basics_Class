import std;
using namespace std;
// Write a program that prompts the user to enter three points, (x1, y1), (x2, y2), and (x3, y3), of a triangle then displays its area.
int main() {
    //Prompt user to enter the lenght of all sides
    print("Enter the lenght of side A: ");
    double a {};
    cin >> a;

    print("Enter the length of side b: ");
    double b {};
    cin >> b;

    print("Enter the length of side c: ");
    double c {};
    cin >> c;

    //Calculate the area
    double s {(a+b+c)/2};
    double Area {sqrt(s * (s-a)*(s-b)*(s-c))};

    //The Output
    println("The Area is {}", Area);


    return 0;
}