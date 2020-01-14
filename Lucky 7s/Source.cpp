// Jon Barker
// This is my own work
// Lucky 7s

#include<iostream>
using namespace std;

void luckyOne(){
	int number = 0, step = 0, biggest = 0, smallest = 0;
	while (step < 5) {
		cout << "Please imput one number: ";
		cin >> number;
		step++;
		if (number > biggest) {
			biggest = number;
		}
		else if (number < smallest) {
			smallest = number;
		}
		else if (step == 5) {
			cout << "The largest number was " << biggest << endl;
			cout << "The smallest number was " << smallest << endl;
			break;
		}
	}
}
////////////////////////////////////////////////////////////////////////
void luckyTwo() {
	int answer = 3, numbre = 0, multiple = 0;
	while (multiple <= 50) {
		multiple++;
		numbre = multiple * 7;
		answer = numbre + answer;	
	}
	cout << "The sum is " << answer;
}
////////////////////////////////////////////////////////////////////////
/*void luckyTwo() {
	int number = 0, sum = 0;
	while (number <= 50) {
		number++;
		if ((number % 7) > 0) {
		}
		else {
			sum = number + sum;
		}
		if (number == 50) {
			break;
		}
	}	
	cout << "The sum is " << sum;
}*/

void luckyThree() {
	//Write a program that calculates and prints the first 10 terms of the factorial sequence.
	int step = 10, number, factor = 1;
	for (number = 1; number <= step; number++) {
		factor = factor * number;
		cout << "the factor of " << number << " is " << factor << endl;
	}
}
////////////////////////////////////////////////////////////////////////
void luckyFour() {
	//Write a program that reads in a string and determines whether it is a palindrome
	char string1[20];
	int length, letter, flag = 0;

	cout << "please enter a string ";
	cin >> string1;
	length = strlen(string1);

	for (letter = 0; letter < length; letter++) {
		if (string1[letter] != string1[length - letter - 1]) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		cout << "this string is not a palindrome.";
	}
	else {
		cout << "this string is a palindrome.";
	}
}
////////////////////////////////////////////////////////////////////////
void luckyFive() {
	int response, step = 1, test = 0, end = 0;
	cout << "Please enter a number.    ";
	cin >> response;
	test = (response / 2);
	while (step <= test) {
		step++;
		if (response % step == 0) {
			end = 1;
			break;
		}	
	}
	if (end == 0) {
		cout << "this number is prime";
	}
	else {
		cout << "this number is not prime";
	}
}
////////////////////////////////////////////////////////////////////////
void luckySix() {
	//Write a program that creates an array of integers using an initialization list 
	//and calculates and displays the average of the values.
}
////////////////////////////////////////////////////////////////////////
void luckySeven() {
	/*Write a program that gets a positive integer n from the user and creates an array of n. 
	The program should read strings from a file, fill the array with the first n strings, 
	and print the string with the most characters. You may assume that number of strings in 
	the file is greater than
	*/
}
////////////////////////////////////////////////////////////////////////
int main() {
	int lucky;
	cout << "which Lucky do you want to test ";
	cin >> lucky;
	if (lucky == 1) luckyOne();
	else if (lucky == 2) luckyTwo();
	else if (lucky == 3) luckyThree();
	else if (lucky == 4) luckyFour();
	else if (lucky == 5) luckyFive();
	else if (lucky == 6) luckySix();
	else if (lucky == 7) luckySeven();
	else return 0;
}
