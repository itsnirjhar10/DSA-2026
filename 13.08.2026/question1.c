#include <stdio.h>
#include <stdlib.h>

void input_matrix(int M[2][2], const char *name) {
	printf("Enter elements of matrix %s (2x2):\n", name);
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) {
			if (scanf("%d", &M[i][j]) != 1) {
				fprintf(stderr, "Invalid input for matrix %s.\n", name);
				exit(1);
			}
		}
	}
}

int main(void) {
	int A[2][2], B[2][2], C[2][2];

	input_matrix(A, "A");
	input_matrix(B, "B");

	for (int i = 0; i < 2; ++i)
		for (int j = 0; j < 2; ++j)
			C[i][j] = A[i][j] + B[i][j];

	printf("\nMatrix A:\n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) printf("%d ", A[i][j]);
		printf("\n");
	}

	printf("\nMatrix B:\n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) printf("%d ", B[i][j]);
		printf("\n");
	}

	printf("\nMatrix C = A + B:\n");
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 2; ++j) printf("%d ", C[i][j]);
		printf("\n");
	}

	return 0;
}

