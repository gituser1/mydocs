#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	char name[255];

	printf("Enter your name: ");
	fgets(name, 255, stdin);
	printf("length = %d\n", strlen(name)); 
	name[strlen(name)-1] = '\0'; /* remove the newline at the end */
  printf("hi testbranch\n");
	printf("Hello %s!\n", name);
	return 0;
}//end of main program