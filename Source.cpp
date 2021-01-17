#include <iostream>

using namespace std;

int main() {

	cout << "\t\t--------------------\n\t\tGPA of N of students\n\t\t--------------------" << endl;
	cout << "\t\tEnter Number Of Students: ";
	int numOfSt;
	int max = 0;
	double min = 9999999999999999999;
	cin >> numOfSt;
	int sum = 0, x;
		cout << "\n\t\tGPA Of " << numOfSt << " Students" << endl;
	for (int i = 1; i <= numOfSt; i++) {
		cout << "\t\tStudent Number " << i << ": ";
		cin >> x;
		sum += x;

		if (x > max) {
			max = x;
		}
		if (x < min) {
			min = x;
		}
	}
	cout << "\n\t\t***********************";
	cout << "\n\t\t*      Max GPA is " << max;
	cout << "\n\t\t*  Average GPA is " << sum / numOfSt;
	cout << "\n\t\t*     Min GPA is " << min;
	cout << "\n\t\t***********************";

	cout << "\n\t\tEnter Y if you want to run the code again\n\t\tAny Thing Else To Exit" << endl;
	char press;
	cout << "\t\t\t-->";
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
		cout << "Exiting Code.......";
	}
}