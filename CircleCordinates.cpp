import std;
using namespace std;

int main() {
	//Prompt user to enter the X-axis of circle 1
	print("Enter the X-axis of Circle 1: ");
	double X1 {};
	cin >> X1;
	
	//Prompt user to enter the Y-axis of circle 1
	print("Enter the Y of Circle 1: ");
	double Y1 {};
	cin >> Y1;
	
	//Prompt user to enter the radius of circle 1
	print("Enter the radius of the first circle: ");
	double r1 {};
	cin >> r1;
	
	//Prompt user to enter the X-axis of circle 2
	print("Enter the X-axis of Circle 2: ");
	double X2 {};
	cin >> X2;
	
	//Prompt user to enter the Y-axis of circle 2
	print("Enter the Y of Circle 2: ");
	double Y2 {};
	cin >> Y2;
	
	//Prompt user to enter the radius of circle 2
	print("Enter the radius of the second circle: ");
	double r2 {};
	cin >> r2;
	
	//Calculate the distance
	double distance {sqrt(pow((X2-X1), 2) + pow((Y2-Y1), 2))};
	
	//Calculate the if statement
	if (distance <= (r1 - r2)) {
		println("The Second circle is inside the first circle");
	}
	else if (distance <= (r1 + r2)) {
		println("The second circle is overlaping with the first one");
	}
	
	return 0;
}