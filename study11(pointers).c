#include<stdio.h>
#include<stdlib.h>

int main()
{
	//declaring and using pointers
	int a = 20;
	int *p;
	p = &a;
	
	printf("The Address where a is found is: %x\n", &a);
	printf("The value of p(pointer) is: %x\n", p);
	printf("The value at Address p is: %d\n", *p);
	
	//similarly
	int i, arr[4] = {10, 2, 14, 70};
	int *p_arr[4];

	//in order to assign a pointer to every element of the array we use a for loop
	for(i = 0; i < 4; i++){
		p_arr[i] = &arr[i];
	} 
	
	//now to print the address and values we do same
	for(i = 0; i < 4; i++){
		printf("The value of p_arr[%d] is: %x\n", i, p_arr[i]);
		printf("The value at address p_arr[%d] is: %d\n", i, *p_arr[i]);
	}
	return 0;
}
