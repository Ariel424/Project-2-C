#include <iostream>
#include <math.h>
#include<cmath>
#include<iomanip>

using namespace std;
void Dev_By_Sum_Digits()
/*
First Take: Write a program that prints all the natural numbers from 2 to 1000 that are divided by the sum of their digits.
For example, the number 24 is divisible by 6, and the number 135 is divisible by 9.
*/
{
	int sum; // A variable to calculate a sum
	int num; // Variable to receive a number
	for (int i = 2; i <= 1000; i++)
	{

		for (sum = 0, num = i; num != 0;)
		{
			sum += num % 10;
			num = num / 10;
		}
		while (i % sum == 0)
		{
			cout << i << endl;
			break;
		}

	}

}

void Print_Peramid()
/*
Second Task: Write a program that accepts as input a whole number and prints a pyramid of the digits up to that number.
*/
{
	int num = 0; // Setting a variable to receive
	cout << "Please enter number for peramid desine:"; // Output sentence for reception
	cin >> num; // variable for absorption  
	for (int i = 1; i <= num; i++)
	{

		for (int j = 1; j <= (num - i); j++)
		{
			cout << " ";
		}
		for (int k = 1; k <= i; k++)
		{
			cout << k << " ";
		}

		cout << endl;
	}

}

void Two_Numbers_Devider()
/*
Third Take: Write the program that accepts two natural numbers and returns their greatest common divisor.
For example: for input 18 and 27, output: 9.
*/
{

	int num1 = 0, num2 = 0; // Variable A and B for the purpose of placement 
	int max = 0, min = 0; // Variables C and D for replacement
	cout << "Please Put 2 Numbers:"; // Output sentence for reception
	cin >> num1; // First variable absorption 
	cin >> num2; // Receiving a second variable

	if (num1 > num2)
	{
		max = num1; // Substitution of variables for the purpose of calculation
		min = num2; // Substitution of variables for the purpose of calculation
 
	}
	else
	{
		min = num1; // Substitution of variables for the purpose of calculation
		max = num2; // Substitution of variables for the purpose of calculation
 
	}
	for (int i = min; i > 0; i--)
	{
		if ((max % i == 0) && (min % i == 0))
		{
			cout << i;
			return;
		}

	}
}

double Calc_Factorial(int num) // Defining a function to define a Taylor series
{
	double ans = 1;  

	for (int i = 1; i <= num; i++)
	{
		ans = ans * i;
	}

	return ans;
}

void Print_Taylor_Series()
/*
Fourth task: In this exercise you are asked to write a program that calculates e x for certain n and x that will be received from the user.
The output displayed by the program will be in the format in which the series is displayed above, where each expression will be displayed as a fraction)
and not as a result obtained from the very operation of the division (and at the end the amount of the series
*/
{

	int n, x; // Reception of two variables
	double e = 1; // Equal to A0

	cout << "Enter parameters to Taylor Seris sum calc:\n" // Output setting for reception 
		<< "e^x = 1 + X + (x^2)/(2!) + (x^3)/(3!) + ... + (x^n)/(n1)  \n";
	cout << "n = \n"; // Setting variable n - output for reception
	cin >> n; // input definition 
	cout << "X = \n";// input definition
	cin >> x; // Setting an output for receiving variable x
	while (n < 1)
	{
		cout << "invloid input\n";
		cout << "enter n agen:\n";
		cout << "n = \n";
		cin >> n;
	}
	while (x < 1)
	{
		cout << "invloid input\n";
		cout << "enter e agen:\n";
		cout << "x = \n";
		cin >> x;
	}


	/*  //

	if (n=1)
	{
	cout << "e^" << x << " = 1 = " << e << endl;
	return;
	}
	if (n = 2)
	{
		cout << "e^" << x << " = 1 + " << x << " = " << e << endl;
		return;
	}
	*/

	e = e + x; // Equal to A1

	cout << "e^" << x << " = 1 + " << x;

	for (int i = 2; i < n; i++)
	{
		cout << " + " << pow(x, i) << "/" << Calc_Factorial(i); // Using the function I defined above
		e = e + (pow(x, i)) / (Calc_Factorial(i));
	}

	cout << " = " << e << endl;

	return;

}


void main()
{

	//Opening messages
	cout << "Matala_02 by Ariel Topaz\n\n";
	cout << "Choose opertion from the menu below\n\n";

	int opCod = 0;
	do
	{
		//menu
		cout << endl
			<< "Menu:\n"
			<< "0. for  exit\n"
			<< "1. for print numbers that are divided by sum of digits\n"
			<< "2. for print pyramid\n"
			<< "3. for GCD\n"
			<< "4. for Tylor series\n"
			<< "Enter your choice:\n";
		cin >> opCod; // Using functions to define the four exercises for convenience and using the menu
		switch (opCod)
		{
		case 1:
			Dev_By_Sum_Digits();
			break;

		case 2:
			Print_Peramid();
			break;

		case 3:
			Two_Numbers_Devider();
			break;

		case 4:
			Print_Taylor_Series();
			break;
		case 0:
			cout << "Exiting The Progtam, have a nice day." << endl << endl << endl << endl;//exit messeg
			break;

		default:
			cout << "Invloid opertion cod" << endl << endl;//eror messeg for invalid input
		}
	} while (opCod != 0);

	return;

}