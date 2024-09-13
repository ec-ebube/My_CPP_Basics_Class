
import std; //Here we import some functionalities from the 
			//C++ starndard library
using namespace std;
	//Write a computer program that displays the volume of a cone
	//Formular of cone is 1/3(pi*radius*raduis*Heigth)

int main() {
	//prompt user to enter raduis of Cone
	print("Enter raduis of Cone: ");
	double radius {}; //Create a variable to store the user input
	cin >> radius; //Read the input from keyboard and store in variable
	
	//prompt user to enter height of the cone
	print("Enter height of cone: ");
	double height {};
	cin >> height;
	
	//declare the value of PI
	const double PI {3.14159};
	
	//calculate the volume of cone
	double volume { (PI * radius * radius * height) / 3 };

	
	//display  volume
	println("The volume of cone of radius {} and height {} is {}", radius, height, volume);
	return 0;
}