// Jon Barker
// This is my own work
// Lucky 7s

#include<iostream>
using namespace std;

void luckyOne(){
	int number = 0;
	int step = 0;
	int biggest = 0;
	while (step < 5) {
		cout << "Please imput a number: ";
		cin >> number;
		step++;
		if (number > biggest) {
			biggest = number;
		}
		else if (step == 5) {
			cout << "The largest number was " << biggest;
			break;
		}
	}
}

/*void luckyTwo() {
	int answer = 3;
	int numbre = 0;
	int multiple = 0;
	while (multiple <= 50) {
		multiple++;
		numbre = multiple * 7;
		answer = numbre+answer;
		
	}
	cout << "The sum is " << answer;
}

void luckyTwo() {
	int number = 0;
	int sum = 0;
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

void luckyFour() {

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
		luckyFour();
	}
}
