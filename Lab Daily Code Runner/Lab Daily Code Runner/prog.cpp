//
//  prog.cpp
//  Daily Lab Code Runner
//
//  Created by ax on 10/17/16.
//  Copyright © 2016 COMP130. All rights reserved.
//

#define prog 2

#if(prog == 2)

#include <iostream>
using namespace std;

int main() {

	cout << "Selection Sort \n";

	const int ARRAY_SIZE = 7;
	int arr[ARRAY_SIZE] = { 8, 6, 2, 5, 3, 4, 9 };

	cout << "init array state: \n";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	cout << "Array Count Out and Size Down" << endl;

	for (int i = 0; i < ARRAY_SIZE; i++) {

		int j_smallest = arr[i];
		int j_smallest_idx = i;

		for (int j = i; j < ARRAY_SIZE; j++)
		{
			cout << arr[j] << " ";
			if (j_smallest > arr[j])
			{
				j_smallest = arr[j];
				j_smallest_idx = j;
				swap(arr[i], arr[j_smallest_idx]);
			}
		}

		cout << "j smallest found?: "  << j_smallest << "\n";
		cout << endl;
	}

	cout << "end array state: \n";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}

#elif(prog == 1)

#include <iostream>
#include <ctime>
using namespace std;

// SHUFFLE

int main() {

	// random seed
	srand(time(0));

	// need an integer array
	const int ARRAY_SIZE = 5;
	int my_array[ARRAY_SIZE] = { 9, 5, 2, 8, 1 };

	cout << "init array state: \n";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << my_array[i] << " ";
	}
	cout << endl;
	// do the shuffle
	for (int i = 0; i < ARRAY_SIZE; i++) {
		// pick random slot in array
		int j = rand() % (i + 1);

		int tmp = my_array[i];
		my_array[i] = my_array[j];
		my_array[j] = tmp;
	}

	cout << "end array state: \n";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << my_array[i] << " ";
	}
	cout << endl;
	return 0;
}

#endif