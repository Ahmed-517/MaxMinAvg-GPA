#include <iostream>
#include <cmath>

using namespace std;

// The Main Function
int main() {

	string line = "\t\t--------------------";
	string tabs = "\n\t\t";

	cout << line << tabs << "GPA of N of students\n" << line << endl;

	cout << "\t\tEnter Number Of Students: ";

	/*
		Define
		Reference Variables
	*/
	int max = 0;
	int min = 4;

	// Get Number of Students
	int numOfSt;
	cin >> numOfSt;
	if (numOfSt <= 0) {
		cout << tabs << "\aPlease Enter A Valid Student Number\n" << endl;
		main();
	}

	float sum = 0, x;
	int totalNum = numOfSt;

	cout << "\n\t\tGPA Of " << numOfSt << " Students" << endl;

	for (int i = 1; i <= numOfSt; i++) {
		cout << "\t\tStudent Number " << i << ": ";
		cin >> x;
		
		if (x <= 4 && x >= 0) {
			sum += x;
			if (x > max)
				max = x;
			if (x < min)
				min = x;
		}
		else {
			cout << tabs << "\a [* GPA is from 0 to 4]\n" << endl;;
			i--;
		}
	}

	// Results
	cout << tabs << "*************************************";
	cout << tabs << "*      Max GPA for " << numOfSt << " Students is " << max;
	cout << tabs << "*  Average GPA for " << numOfSt << " Students is " << sum / numOfSt;
	cout << tabs << "*      Min GPA for " << numOfSt << " Students is " << min;
	cout << tabs << "*************************************";


	cout << "\n\t\tEnter Y if you want to run the code again\n\t\tAny Thing Else To Exit" << endl;
	char press;
	cout << "\t\t\t--> ";
	cin >> press;
	switch (press){
	case 'y' :
		cout << "Start Code Again...........\n\n";
		main();
		break;

	case 'Y' :
		cout << "Start Code Again...........\n\n";
		main();
		break;
	default :
		cout << "Exiting Code......." << endl;
		cout << "Name: Ahmed Gamal Goda";
	}
}