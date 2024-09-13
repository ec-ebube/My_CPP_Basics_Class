import std;
using namespace std;

int main() {
    //Prompt the user to enter the lenght of the side of the hexagon
    print("Enter the side of the hexagon: ");
    double s {};
    cin >> s;

    //Calclate the volue of the Hexagon
    double Area { ((3 * sqrt(3))/2) * pow(s, 2) };

    //Give the Output
    println("The Area of Hexagon of side {} is {}", s, Area);

    return 0;
}
