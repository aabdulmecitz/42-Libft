#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x = 5;
	int y = 10;


	int *ptr;
	int **ptr2;

	ptr = &x;
	ptr2 = &ptr;

    *ptr = 1000;
    *ptr2 = &y;
    *ptr = 5000;

    printf("x : %d y:  %d ", x, y);
}
    // char *a = strdup("alp");

    // a++;
    // a++;
    // printf("%s\n", a);
    // a--;
    // a--;
    // printf("%s\n", a);