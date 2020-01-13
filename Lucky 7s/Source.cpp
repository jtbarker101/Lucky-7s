// Jon Barker
// This is my own work
// Lucky 7s

#include<iostream>
using namespace std;

void luckyOne(){
	int number = 0, step = 0, biggest = 0, smallest = 0;
	while (step < 5) {
		cout << "Please imput a number: ";
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

void luckyTwo() {
	int answer = 3, numbre = 0, multiple = 0;
	while (multiple <= 50) {
		multiple++;
		numbre = multiple * 7;
		answer = numbre+answer;	
	}
	cout << "The sum is " << answer;
}

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

}

//void luckyFour{}


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

int main() {
	int lucky;
	cout << "which Lucky do you want to test ";
	cin >> lucky;
	if (lucky == 1) {
		luckyOne();
	}
	/*else if (lucky == 2) {
		luckyTwo();
	}*/
	else if (lucky == 3) {
		luckyThree();
	}
	else if (lucky == 5) {
		luckyFive();
	}
}
