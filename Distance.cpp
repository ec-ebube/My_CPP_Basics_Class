import std;
using namespace std;
// Write a program that prompts the user to enter two points (x1, y1) and (x2, y2) and displays their distance. The formula for computing the distance is 2(x2- x1)2 + (y2- y1)2. Note you can use Math.pow(a, 0.5) to compute 2a
int main() {
    //Prompt the user to enter the Values of x1 and y1
    print("Enter the value of X1: ");
    double X1 {};
    cin >> X1;

    print("Enter the value of Y1: ");
    double Y1 {};
    cin >> Y1;

    //Prompt the user tto enter the value of x2 and y2
    print("Enter the value of X2: ");
    double X2 {};
    cin >> X2;

    print("Enter the value of Y2: ");
    double Y2 {};
    cin >> Y2;

    //Calculate the distance
    double Distance { sqrt(( (X2 - X1) * (X2 - X1)) + (Y2 - Y1) * (Y2 - Y1))  };

    //Give the Output
    println("The distance is given as {}", Distance);

    return 0;
}