import std;
using namespace std;
// Write a program that solves the following equation and displays the value for x and y
int main() {
    //Declare all the Variables
    double a {3.4};
    double b {50.2};
    double c {2.1};
    double d {55};
    double e {44.5};
    double f {5.9};
    //Calculate the value of X and Y
    double x { ((e*d)-(b*f)) / ((a*d)-(b*c)) };
    double y { ((a*f)-(e*c)) / ((a*d)-(b*c)) };

    //Give the result
    println("The value for X is {} while the value for Y is {}", x, y);

    return 0;
}