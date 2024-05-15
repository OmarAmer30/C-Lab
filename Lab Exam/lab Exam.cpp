
#include <iostream>
using namespace std;
int main(){

	int gender ,count=0;
	char ch;


	for (int i = 0; i < 20; i++) {
		cout << "Enter the gender of patient no. " << i + 1 << "\n(0 For Males ,1 For Females)\n";
		cin >> gender;
			if (gender != 0 && gender != 1) {
				cout << "Error\n";
				break;
				}
				
		cout << "Are the patient was have COVID-19 in the last 3 weeks ? (Y for Yes ,N for No)\n";
		cin >> ch;
			if (ch != 'Y' && ch != 'N' && ch != 'y' && ch != 'n') {
				cout << "Error\n";
				break;
				}

		if (gender == 1 && (ch == 'Y' || ch == 'y'))
				count++;
	}

	cout << "The no. of Females have COVID-19 : " << count << endl;

	return 0;
}