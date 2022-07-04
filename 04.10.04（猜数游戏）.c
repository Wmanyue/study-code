#include <stdio.h>

int main()
{
	int i, a;
	printf("\n\t猜数游戏\n");
	printf("\n\t您有10次机会\n");
	printf("\n\t请猜测一个数吧(0~72)\n");

for (i=0;i<10;i++)
{
	scanf("%d",&a);
if(a>33)
{
	printf("猜大了\n");
	printf("再来一次\n");
	continue;
}
if(a<33)
{
	printf("猜小了\n");
	printf("再来一次\n");
	continue;
}
if(a==33)
	{
	printf("恭喜你猜对啦\n");
	i=12;
	}
}
	printf("答案就是33！\n");
	if(i=12)
	{
	printf("游戏结束！\n");
	}

return 0;	
}


