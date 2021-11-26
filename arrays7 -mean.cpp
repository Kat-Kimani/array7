//Compute the Mean of elements in array

#include<iostream>
using namespace std;
int main() {

	int nums[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int sum = 0;
	for (int i = 0; i < 10; i++) {

		sum = sum + nums [i];
	}
	cout << "The Mean of Array Elements is:  " << sum/10 << endl;

	return 0;
}
