#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int random() {                                     //????:1~3
	return (rand() % 3 + 1);                       //??
}

int main() {
	srand(time(NULL));                             //????????
	int num[10] = { 0 };                           //??????????
	int PIN_number = 12345;                        //?????PIN_number = 12345
	int new_pin = 0;                               //???
	int response = 0;                              //??????

	for (int i = 0; i < 10; i++) {
		num[i] = random();                              //10????????
	}
	cout << endl << "PIN : ";
	for (int i = 0; i < 10; i++) {                      //??0~9???????
		cout << i << " ";
	}
	cout << endl << "NUM : ";
	for (int i = 0; i < 10; i++) {                      //??????
		cout << num[i] << " ";
	}
	cout << endl;
	int count = 0;
	while (PIN_number > 0) {                                 //?????
		new_pin += num[PIN_number % 10] * pow(10, count);
		PIN_number /= 10;
		count++;
	}
	cout << "Enter your New PIN number =>";
	cin >> response;                                         //?????
	if (response == new_pin) {                               //??????currect
		cout << "Your enter currect!" << endl;
	}
	else {                                                   //???wrong
		cout << "Enter wrong!" << endl;
	}
	return 0;
}