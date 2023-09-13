#include <iostream>
using namespace std;


int sum(int numbers[], int length){ //adds all the integers in an array
	int temp = 0;
	for(int i = 0; i < length; i++){
		temp = temp + numbers[i];
	}
	return temp;
}

int product(int numbers[], int length) { //multiplies all the ints in an array
	int temp = 1;
	for(int i = 0; i < length; i++){
		temp = temp*numbers[i];
	}

	return temp;
}


int main(){
	int numbers[] = {1, 2, 3, 4};

	cout << "Sum: " << sum(numbers, (sizeof(numbers) / sizeof(*numbers))) << endl;
	cout << "Product: " << product(numbers, (sizeof(numbers) / sizeof(*numbers))) << endl;
	return 0;
}
