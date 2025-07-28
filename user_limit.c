#include <stdio.h>

int main(){
	int find;
	int i=0;
	printf("enter number to prints:");
	scanf("%d",&find);
	do{
		printf("%d\n",i);
		i++;
	}
	while(i<=find);

	return 0;
}
