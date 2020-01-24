// Jon Barker
// This is my own work
// Lucky 7s

#include<iostream>
#include <fstream>
using namespace std;

void luckyOne(){
	int number = 0, step = 0, biggest = 0, smallest = 1000;
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
	cout << "The sum is " << answer << endl;
}
////////////////////////////////////////////////////////////////////////
void luckyThree() {
	//Write a program that calculates and prints the first 10 terms of the factorial sequence.
	int step = 10, number, factor = 1;
	for (number = 1; number <= step; number++) {
		factor = factor * number;
		cout << "The factor of " << number << " is " << factor << endl;
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
		cout << "this string is not a palindrome." << endl;
	}
	else {
		cout << "this string is a palindrome." << endl;
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
		cout << "this number is prime" << endl;
	}
	else {
		cout << "this number is not prime" << endl;
	}
}
////////////////////////////////////////////////////////////////////////
void luckySix() {
	//Write a program that creates an array of integers using an initialization list 
	//and calculates and displays the average of the values.
	int list[] = { 7,38,98,4,-6,3,1};
	int total = 0, i = 0;
	int items = (sizeof(list) / sizeof(int));
	while (i < items) {
		total = list[i] + total;
		i++;
	}
	double average = total / 6.0;
	cout << "The total is: " << total << endl;
	cout << "The average is: " << average << endl;
	
}
////////////////////////////////////////////////////////////////////////
void luckySeven() {
	/*Write a program that gets a positive integer n from the user and creates an array of n. 
	The program should read strings from a file, fill the array with the first n strings, 
	and print the string with the most characters. You may assume that number of strings in 
	the file is greater than*/
	
	int n;
	ifstream fin("input.in"); //always validate that you actually have a file
	if (!fin) {
		cerr << "file not found . . . . . ";
		exit(2);
	}
	cout << "Please select a number of words you want: ";
	cin >> n;

	//creates an array while program is running
	string* strArr = new string[n];

	string words = " ";
	int i = 0;
	while (i < n) {
		fin >> strArr[i];
		i++;
	}
	//print the content of the loop
	for (int i = 0; i < n; i++)
	{
		if ((strArr[i].size()) > (words.size())) {
			words = strArr[i];
			
		}
		cout << strArr[i] << " ";
	}
	cout << endl << "the largest word was " << words << endl;
}
////////////////////////////////////////////////////////////////////////
int main() {
	int lucky;
	string enter;
	cout << "which Lucky do you want to test ";
	cin >> lucky;
	if (lucky == 1) luckyOne();
	else if (lucky == 2) luckyTwo();
	else if (lucky == 3) luckyThree();
	else if (lucky == 4) luckyFour();
	else if (lucky == 5) luckyFive();
	else if (lucky == 6) luckySix();
	else if (lucky == 7) luckySeven();
	else if (lucky == 8) {
		cout << "THIS IS LUCKY ONE: HIGHS AND LOWS " << endl;
		luckyOne();
		cout << "--------------------------------------------"<< endl;
		cout << "THIS IS LUCKY TWO: SUM OF FIRST 50 " << endl;
		luckyTwo();
		cin >> enter;
		cout << "--------------------------------------------" << endl;
		cout << "THIS IS LUCKY THREE: FACTORIALS " << endl;
		luckyThree();
		cin >> enter;
		cout << "--------------------------------------------" << endl;
		cout << "THIS IS LUCKY FOUR: PALINDROME " << endl;
		luckyFour();
		luckyFour();
		cin >> enter;
		cout << "--------------------------------------------" << endl;
		cout << "THIS IS LUCKY FIVE: PRIMES" << endl;
		luckyFive();
		luckyFive();
		cin >> enter;
		cout << "--------------------------------------------" << endl;
		cout << "THIS IS LUCKY SIX: AVERAGE LIST " << endl;
		luckySix();
		cin >> enter;
		cout << "--------------------------------------------" << endl;
		cout << "THIS IS LUCKY SEVEN: STRINGS AND WORDS " << endl;
		luckySeven();
		cout << "--------------------------------------------" << endl;
	}
	else return 0;
}
