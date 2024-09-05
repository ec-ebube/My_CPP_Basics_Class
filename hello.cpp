import std; //Here we import some functionalities from the 
			//C++ starndard library
using namespace std;

int main() {
	
	//STEP 1: INPUTS
	//Prompt user to enter radius of cone
	print("Enter radius of cone: ");
	double radius {};    //Declare variable to store the input
	cin >> radius;    //Read input from keyboard and store in variable
	
	//prompt user to enter height of cone
	print("Enter height of cone: ");
	double height {};    //declare variable to store the input
	cin >> height;      //read input from keyboard and store in variale
	
	//Declare PI
	const double PI {3.14159};
	
	//STEP 2: PROCESSING
	//Calculate the volume of the cone
	double volume { (PI * radius * radius * height) / 3 };
	
	//STEP 3: Output
	//Display the volume
	println("The volume of the cone of radius {} and height is {}", radius, height, volume);
	return 0;
}