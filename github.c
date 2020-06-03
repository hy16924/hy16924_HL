/*#include <stdio.h>
int main(){
	printf("hello world");
	return 0;
}*/

#include <stdio.h>
int main(){
	int x, y, z;
	printf("Enter 1(+) or 2(-) or 3(/): ");
	scanf("%d", &z);
	printf("Enter number: ");
	scanf("%d %d", &x, &y);
	if(z == 1){
	    printf("%d + %d = %d", x, y, x+y);
	}
	else if(z == 2){
	    printf("%d - %d = %d", x, y, x-y);
	}
	else if(z == 3){
	    printf("%f / %f = %f", (float)x, (float)y, (float)x/y);
	}
	return 0;
}
	