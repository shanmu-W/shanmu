#include<stdio.h>
int br(void);
int ic(void);
int main(void)
{
	br();
	printf("");
	ic();
	printf("\n");
	ic();
	printf( "\n" );
	br();
	printf("\n");
	return 0;
}
int br(void)
{
	printf("��");
}
int ic(void)
{
	printf("��\n");
}