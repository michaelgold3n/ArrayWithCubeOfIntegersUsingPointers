#include <iostream>
#include <cmath>
using namespace std;

int* makingthearray(int size) //function that creates an array and also creates a pointer that is assigned to the array. The function calls for an integer from the main function called size
{
	int* array = new int[size];

	return array;
}

int main()
{
	int value = 0; //creates a variable called value with datatype integer
	
	cout << "How many numbers do you want to enter? "; //asks user for the size they want the array to be
	cin >> value; //input a number for value
	int* array = makingthearray(value); //assigns a pointer to the array from the makingthearray function by using the value variable and the number stored from the user


	for (int i = 0; i < value; i++) //for loop to input each value of the dynamic array
	{
		cout << "Enter an integer number: ";
		cin >> array[i];
	}

	cout << "Here are the cube of the values you entered:\n"; //outputs the cubed values that were just inputted by the user
	for (int i = 0; i < value; i++)
	{
		cout << pow(array[i],3) << endl;
	}
	
	delete[] array; //clears the dynamically allocated memory
	return 0;
}

