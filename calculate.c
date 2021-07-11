#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
	if (argc == 2) {
		int num = (int) strtoull(argv[1], &argv[1], 10);
        if (num == 100) {
            printf("Sangat Baik");
        } else if (num >= 80) {
            printf("Baik");
        } else if (num > 50) {
            printf("Lumayan");
        } else if (num >= 25) {
            printf("Buruk");
        } else if (num >= 0) {
            printf("Sangat Buruk");
        }
    } else {
        printf("\n\
                \r      Example usage: ./calculate 5 \n\
                \r             output: Lumayan\n\
                \r");
    }
}