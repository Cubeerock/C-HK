#include<iostream>
using namespace std;
const int MAX_SIZE = 200;                                     //??SIZE

void inputarray(int grade[], int& length) {                   //????
	int input;                                                //????????
	cin >> input;                                             //??
	while (input >= 0 && input <= 5 && length < MAX_SIZE) {   //????0~5??????????200
		grade[length] = input;                                //?????
		length++;                                             //??++
		cin >> input;                                         //??
	}
}

int grade_count(int grade[], int length, int target) {         //???????????
	int count = 0;                                            //????count???
	for (int i = 0; i < length; i++) {                        //?0??length
		if (grade[i] == target) {                             //?????
			count++;                                          //count++
		}
	}
	return count;                                             //??count
}

int main() {
	int grade[MAX_SIZE];                                      //??????
	int length = 0;                                           //???0
	int count = 0;                                            //???0
	cout << "Enter your grades =>";
	inputarray(grade, length);                                //????
	for (int i = 0; i <= 5; i++) {                            //????0??5
		count = grade_count(grade, length, i);                 //????
		cout << count << " grade(s) of " << i << endl;        //??
	}
	return 0;
}