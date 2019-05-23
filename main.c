#include <stdio.h>


int func1()
{
	printf("this is %s !\n", __func__);
	return 0;
}

int main()
{
	func1();
	return 0;
}


