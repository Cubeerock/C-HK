#include<iostream>
using namespace std;

void input(int& hour, int& minute) {                  //??
	cout << "Enter your time =>(hour,minute)";
	cin >> hour >> minute;                            //????(?? ??)
}

void conversion(int& hour, int& minute, char& time) { //??
	if (hour >= 12) {                                 //??????12
		hour -= 12;                                   //???12
		time = 'P';                                   //??time???P
	}
	else if (hour < 12) {                             //??12
		time = 'A';                                   //??time???A
	}
}

void output(int hour, int minute, char time) {        //??
	cout << "your time is " << hour << ":" << minute << time << endl;
}

int main() {
	int hour, minute;                    //??????????
	char time;                           //??????????
	char again = 'Y';                    //??????
	while (again == 'Y') {               //??????Y??
		input(hour, minute);             //????
		conversion(hour, minute, time);
		output(hour, minute, time);
		cout << "again? =>(Y or N)";
		cin >> again;                    //?????
	}
	return 0;
}