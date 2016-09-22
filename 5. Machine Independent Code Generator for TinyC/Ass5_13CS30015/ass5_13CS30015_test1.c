int prints(char *a);
int printi(int n);
int readi(int *eP);

int add(int a, int b)
{
	return a+b;
}
int main()
{
	prints("Enter two numbers\n");
	int *ep;
	int a,b,c;
	a = readi(&ep);
	b = readi(&ep);
	c = add(a,b);
	printi(c);
	prints("\n");
	return 0;
}
