#include<stdio.h>

int main(int argc, const char *argv[])
{
	int a[20];

	int* p=(int*) a;
   
	printf("%p\n",p);

    
	printf("%p\n",++p);
	return 0;
}








