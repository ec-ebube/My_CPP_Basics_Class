import std;
using namespace std;

int main() {
	//prompt the user to enter the Side A
	print("Enter side A: ");
	double A {};
	cin >> A;
	
	//prompt the user to enter the Side B
	print("Enter side B: ");
	double B {};
	cin >> B;
	
	//prompt the user to enter the Side C;
	print("Enter side C: ");
	double C {};
	cin >> C;
	
	//Calculate The value of S;
	double S { (A + B + C) / 2 };
	
	//Calculate the Area 
	double Area { sqrt( S *((S-A)*(S-B)*(S-C))) };
	
	//Output
	println("The area of the sclaene triangle is {}", Area );
	
	return 0;
}