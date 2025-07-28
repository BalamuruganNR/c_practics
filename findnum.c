#include <stdio.h>

//get user input find the number is positive or negative 

int main(){
	
	int find;

	printf("Enter the number to find its positive or negative:");

	scanf("%d",&find);

	//using if-else to find
	
	if(find>0){
		printf("The number %d is positive:\n",find);
	}
	else{
		printf("The number %d is negative:\n",find);
	}


	return 0;
}
