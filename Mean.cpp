import std;
using namespace std;

int main() {

    double Numbers[10] {};

    //prompt user to enter the numbers
    print("Enter the first Number: ");
    double first {};
    cin >> Numbers;

    //prompt user to enter second the numbers
    // print("Enter the second Number: ");
    // double second {};
    // cin >> second;

    // //prompt user to enter third the numbers
    // print("Enter the third Number: ");
    // double third {};
    // cin >> third;

    // //prompt user to enter forth the numbers
    // print("Enter the forth Number: ");
    // double forth {};
    // cin >> forth;

    // //prompt user to enter fifth the numbers
    // print("Enter the fifth Number: ");
    // double fifth {};
    // cin >> fifth;

    // //prompt user to enter sixth the numbers
    // print("Enter the sixth Number: ");
    // double sixth {};
    // cin >> sixth;

    // //prompt user to enter seven the numbers
    // print("Enter the seven Number: ");
    // double seven {};
    // cin >> seven;

    // //prompt user to enter eight the numbers
    // print("Enter the eight Number: ");
    // double eight {};
    // cin >> eight;

    // //prompt user to enter nine the numbers
    // print("Enter the nine Number: ");
    // double nine {};
    // cin >> nine;

    // //prompt user to enter ten the numbers
    // print("Enter the ten Number: ");
    // double ten {};
    // cin >> ten;

    //Calculate
    // double mean = {(first + second + third + forth + fifth + sixth + seven + eight + nine + ten) / 2};
    for(int i=1; i <= 10; i++) {
        double mean = {(Numbers[i])/(i+1)};
println("{}", mean);
    };


    //Output
    return 0;
}