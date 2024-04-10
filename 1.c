//1번 문제
/*int first, second;
while (1)
{
	int n, t;
	first = 0;
	second = 0;
	printf("Enter 5 integers>> ");
	
	
	for (int i = 1; i <= 5; i++)
	{
		scanf_s("%d", &n);
		
		if (n == 0&&i==1)
		{
			return 0;
		}
		
		if (n > first)
		{
			t = first;
			first = n;
			second = t;
		}
		else if (n > second && n < first)
		{
			second = n;
		}
	}
	printf("first=%d, second=%d\n", first, second);

}*/
//추가문제(유사문)
int n, first, second,t,a;
float sum, ave;

while (1)
{
	first = 0, second = 0, sum = 0,a=0;
	printf("Enter integers>> ");
	while (1)
	{
		scanf_s("%d", &n);
		if (a == 0 && n < 0)
		{
			return 0;
		}
		if (n < 0)
		{
			break;
		}
		sum = sum + n;
		if (n > first)
		{
			t = first;
			first = n;
			second = t;
		}
		else if (n > second && n < first)
		{
			second = n;
		}
		a++;
		
	}
	ave = sum / a;
	printf("First=%d, second=%d, average=%.2f\n",first, second, ave);
}
