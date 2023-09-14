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
void flip(int numbers[], int temp[], int length){
	int j = 0;
	for(int i = length - 1; i >=0; i--){
		temp[j] = numbers[i];
		j++;
	}
}

int main(){
	int numbers[] = {1, 2, 3, 4};
	int temp[sizeof(numbers) / sizeof(*numbers)];

	cout << "Sum: " << sum(numbers, (sizeof(numbers) / sizeof(*numbers))) << endl;
	cout << "Product: " << product(numbers, (sizeof(numbers) / sizeof(*numbers))) << endl;

	cout << "Flip: " << endl;
	flip(numbers, temp, (sizeof(numbers) / sizeof(*numbers)));
	for(int i = 0; i < (sizeof(numbers) / sizeof(*numbers)); i++){
		cout << temp[i] << " ";
	}
	cout << endl;

	return 0;
}



