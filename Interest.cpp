import std;
using namespace std;
// Write a program that reads the balance and the annual percentage interest rate and displays the interest for the next month. 
int main() {
    //Prompt the user to Enter the balance and the Interest rate
    print("Enter the balance: ");
    double Balance {};
    cin >> Balance;

    print("What is the Interest Rate in percentage: ");
    double InterestRate {};
    cin >> InterestRate;

    //Calculate the Interest
    double Interest { Balance * (InterestRate/1200)};

    //The Output
    println("The interest on {} is {} ", Balance, Interest);

    return 0;
}