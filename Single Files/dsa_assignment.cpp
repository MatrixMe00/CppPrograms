#include <iostream>

using namespace std;

//creating function prototypes
void areaOfCircle();
void factorial();
char backToMain();

int main(){
	int option;
	char toMain;
		
	do{
		cout << "Welcome to MatrixMe's Assignment\n"
			 << "--------------------------------\n\n";
			 	
		cout << "Please select an option to continue\n"
			 << "1. Find the Area of a Circle\n"
			 << "2. Find the factorial of a number\n"
			 << "3. Exit Program\n\n"
			 << "Option: ";
		cin >> option;
		
		switch(option){
			case 1:{
				areaOfCircle();
				break;
			}
			case 2:{
				factorial();
				break;
			}
			default:{
				cout << "\nProgram terminated by user";
				exit(1);
				break;
			}
		}
		
		toMain = backToMain();
	}while(toMain == 'Y' || toMain == 'y');
	
	return 0;
}

void areaOfCircle(){
	const float pi = 3.14;
	float radius, area;
	
	cout << "\nRadius of circle: ";
	cin >> radius;
	
	area = pi * radius * radius;
	
	cout << "The area of your circle is " << area << "cm sqaured";
}

void factorial(){
	int counter = 1, value, answer = 1;
	
	cout << "\nWhich number would you like to find its factorial\n"
		 << "Number: ";
	cin >> value;
	
	do{
		answer *= counter++;
	}while(counter <= value);
	
	cout << "The factorial of " << value << " is " << answer;
}

char backToMain(){
	char option;
	
	cout << "\n\nWould you like to go back to the main menu?\n"
		 << "Yes[Y] \t No[N]"
		 << "\nOption: ";
	cin >> option;
	
	if(option == 'Y' || option == 'y'){
		system("CLS");
	}else{
		cout << "\nProgram terminated by user";
		exit(1);
	}
	
	return option;
}
