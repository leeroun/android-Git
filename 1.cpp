#include <stdio.h>

void main(){
	for (int i = 1; i <= 100; i++){
		printf("%-5d", i);
		if (i % 10 == 0)
			printf("\n");
	}
}