import std;
using namespace std;

int main() {
    //Prompt the user to enter the initial Velocity
    print("Enter the initial velocity in m/s: ");
    double Velocity0 {};
    cin >> Velocity0;

    //Prompt the user to enter the final Velocity
    print("Enter the final Velocity in m/s: ");
    double Velocity1 {};
    cin >> Velocity1;

    //Prompt the user to enter the time
    print("Enter time it took to go from Initial to Final Velocity: ");
    double Time {};
    cin >> Time;

    //Calculate the Acceleration
    double Acceleration { (Velocity1-Velocity0) / Time };

    //Output the result
    println("The Contant Acceleration of the object is {}", Acceleration);

    return 0;
}