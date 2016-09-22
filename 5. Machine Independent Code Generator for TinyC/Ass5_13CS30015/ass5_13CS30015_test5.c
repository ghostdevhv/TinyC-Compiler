// Arrays and Pointer

void Cycle(int *a,int *b,int *c);
int main()
{
	int i,n;
	int a,b,c;
	double arr[100];
	int k;
	for(i=0;i<n;i++)
	{
		k = arr[i];
	}

	for(i=1;i<n;i++)
	{
		if(arr[0]<arr[i])
			arr[0]=arr[i];
	}

	a=20,b=10,c=21;
	Cycle(&a,&b,&c);

	return 0;
}

void Cycle(int *a,int *b,int *c){
    int temp;
    temp=*b;
    *b=*a;
    *a=*c;
    *c=temp;
}