#include<stdio.h>

void swap(int x, int y);

void swap(int x, int y)
{
	int temp;

	printf("In swap,����ǰ��x=%d,y=%d\n", x, y);

	temp = x;
	x = y;
	y = temp;

	printf("In swap,������:x=%d,y=%d\n", x, y);
}

int main()
{
	int x = 3, int y = 5;

	printf("In main,����ǰ��x=%d,y=%d", x, y);
    swap(x, y);
    printf("In main,������:x=%d,y=%d\n", x, y);//main�е�x,y�����ụ��Ŷ

	return 0;
}