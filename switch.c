#include <stdio.h>

//find week using numbers

int main(){
	int find;
	
	printf("Enter the number to find the week names:");
	scanf("%d",&find);

	switch(find){
		case 1:
			printf("today sunday");
			break;
		case 2:
			 printf("today monday");
                        break;
		case 3:
			 printf("today tuesday");
                        break;
		case 4:
			 printf("today wednesday");
                        break;
		case 5:
			 printf("today thursday");
                        break;
		case 6:
			 printf("today friday");
                        break;
		case 7:
			 printf("today saturday");
                        break;

		}
return 0;
}
