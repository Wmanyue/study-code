#include <stdio.h>

int main()
{
	int i, a;
	printf("\n\t������Ϸ\n");
	printf("\n\t����10�λ���\n");
	printf("\n\t��²�һ������(0~72)\n");

for (i=0;i<10;i++)
{
	scanf("%d",&a);
if(a>33)
{
	printf("�´���\n");
	printf("����һ��\n");
	continue;
}
if(a<33)
{
	printf("��С��\n");
	printf("����һ��\n");
	continue;
}
if(a==33)
	{
	printf("��ϲ��¶���\n");
	i=12;
	}
}
	printf("�𰸾���33��\n");
	if(i=12)
	{
	printf("��Ϸ������\n");
	}

return 0;	
}


