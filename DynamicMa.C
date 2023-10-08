#include<stdio.h>
#include<stdlib.h>
main()
{
	char *str;
	int size;
	printf("give size of string\n");
	scanf("%d",&size);
	str = (char *)malloc(size * sizeof(char));
	if(str==NULL)
	{
		printf("Unable to Allocate Memory\n");
		exit (1);
	}
	printf("Give amy string upto %d characters\n",size);
    scanf("%s",str);
	printf("Give string is : %s\n",str);
	printf("Give new size of string\n");
	scanf("%d",&size);
	str = (char*)realloc(str,size * sizeof(char));
	if(str==NULL)
	{
		printf("unable to get the memory");
		exit(1);
	}
	printf("Give any string upto %d characters \n",size);
	scanf("%s",str);
	printf("Given New String is: %s",str);
}
