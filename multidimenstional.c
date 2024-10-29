// C Program to create multidimensional array
#include <stdio.h>

int main()
{

	// creating 2d array
	int arr2d[2][2] = { 1, 2, 3, 4 };

	// creating 3d array
	int arr3d[2][2][2] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	printf("2D Array: ");
	// printing 2d array
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", arr2d[i][j]);
		}
	}

	printf("\n3D Array: ");
	// printing 3d array
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				printf("%d ", arr3d[i][j][k]);
			}
		}
	}

	return 0;
}
