import std;
using namespace std;
// Write a program that reads in investment amount, annual interest rate, and number of years and displays the future investment value
int main() {
    //Prompt user to enter the inputs
    print("Enter the value of the investment amount: ");
    double InvestmentAmount {};
    cin >> InvestmentAmount;

    print("Enter the value of the monthly interest rate: ");
    double MonthlyInterestRate {};
    cin >> MonthlyInterestRate;

    print("Enter the number of years: ");
    double NofYears {};
    cin >> NofYears;

    //The calculation
    double futureInvestmentValue { InvestmentAmount * (1 + MonthlyInterestRate) + NofYears*12};

    //The output
    println("The future Investment Value is {}", futureInvestmentValue);

    return 0;
}