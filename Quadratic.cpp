import std;
using namespace std;

int main() {
	//prompt user to enter coefficient A
	print("Enter Coefficient A: ");
	double A {};
	cin >> A;
	
	//prompt user to enter coefficient B
	print("Enter Coefficient B: ");
	double B {};
	cin >> B;
	
	//prompt user to enter coefficient C
	print("Enter Coefficient C: ");
	double C {};
	cin >> C;
	
	//Calculate the discriminant 
	double discriminant { (B*B) - (4*A*C) };
	
	//Check for the value of discriminant and dispaly rootss
	if (discriminant > 0) {
		double r1 { ((-B) + sqrt(discriminant)) / (2*A)};
		double r2 { ((-B) - sqrt(discriminant)) / (2*A)};
		println("The roots of the equation are {} and {}", r1, r2);
	}
	else if ( discriminant == 0 ) {
		double r1 {((-B) + sqrt(discriminant)) / (2*A)};
		println("The root of the equation are {}", r1);
	}
	else if (discriminant < 0) {
		println("The equation has no roots");
	}

return 0;
}