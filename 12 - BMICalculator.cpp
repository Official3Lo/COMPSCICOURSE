//Missing the loop statement

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{

	cout <<"[  ]==========================[  ]\n"
		<< " ||                            ||\n"
		<< " || Body Mass Index Calculator ||\n" 
		<< " ||          Program           ||\n"
		<< "[  ]==========================[  ]\n\n" << endl;

	//data variable
	double h, w, bmi;

	//data input
	cout 
	<< "Chama: Welcome user. Enter your height:\n " << endl;
	cin >> h;
	h = h * 0.0254; //ft->m  5'11 ft -> so input 180.34cm 
	cout << "Please enter your body weight." << endl;
	cin >> w;
	w = w * 0.45359237; //lb->kg so input 205

	//data calculations
	bmi = w/h;
	cout << bmi << endl;

	//output finalization
	cout.setf(ios::fixed);
	cout.precision(1);
	cout << "Your BMI is: " << bmi << endl;
	if (bmi <= 18.5) {
		cout << "Chama: You are underweight.\n"
			<<"Chama: Make sure to have higher calorie intake!" << endl;
	}
	if (bmi > 18.5 && bmi <=25.0) {
		cout << "Chama: You are okay weight.\n"
			<< "Chama: You good little bud." << endl;
	}
	if (bmi > 25.0 && bmi <30.0) {
		cout << "Chama: You are overweight.\n"
			<< "Chama: Make sure to have less calorie intake than before!" << endl;
	}
	if (bmi >= 30.0) {
		cout << "Chama: You are obese.\n"
			<< "Chama: Make sure to eat less in general!" << endl;
	}

	cout << "\n========================\nSIT© Programming Inc.\n========================" << endl;
	return 0;
}
