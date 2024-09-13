//A computer program that dispaly the length of the hypotenuse of a right angle triangle
import std;

using namespace std;

int main() {
	//prompt user to enter the lenght of adjacent
	print("Enter the lenght of the adjacent: ");
	double adjacent {};
	cin >> adjacent;
	
	//prompt user to enter lenght opposite
	print("Enter the lenght of Opposite: ");
	double opposite {};
	cin >> opposite;
	
	//calculate the hypothenuse lenght
	double hypothenuse { sqrt( pow(opposite, 2) + pow(adjacent, 2) ) };
	
	//display the hypothenuse
	println("Adjacent: {}, Opposite: {}, Hypothenuse: {}", adjacent, opposite, hypothenuse);
	return 0;	
}