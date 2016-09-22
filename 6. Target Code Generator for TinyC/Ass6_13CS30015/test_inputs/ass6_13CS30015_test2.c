int prints(char *a);
int printi(int n);
int readi(int *eP);

int fact(int n)
{
   if(n==1)
       return 1;
   else
       return(n*fact(n-1));
}


int main()
{

  int num,f,*ep;
  int prod,a,b;
  prints("Enter a number for finding a factorial: ");
  num = readi(&ep); 
  f=fact(num);
  //prod = mult(a,b);
  prints("Factorial of ");
  printi(num);
  prints(" is: ");
  printi(f);
  prints("\nWant to find a factorial for another number? If yes then press 1 else press 0\n");
  int k = readi(&ep);
  if(k==1)
  {
    int s = main();
  }
  else if(k==0)
  {
    return 0;
  }
  return 0;

}

