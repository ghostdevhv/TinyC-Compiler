int prints(char *a);
int printi(int n);
int readi(int *eP);

int main()
{
  prints("Code for Display Fibonacci series upto n terms");
  prints("\n\n");
  int count, n, t1=0, t2=1, display=0,*ep;
  prints("Enter number of terms: ");
  n = readi(&ep);
  prints("Fibonacci Series: ");
  printi(t1);
  prints(" + ");
  printi(t2); 
  count=2;    
  while (count<n)  
  {
      display=t1+t2;
      t1=t2;
      t2=display;
      ++count;
      prints(" + ");
      printi(display);
      prints(" ");
  }
  prints("\nWant to compute fibonacci series again ? If yes then press 1 else press 0\n");
  int k = readi(&ep);
  if(k==1)
  {
    int s = main();
  }
  else if(k==0)
  {
    return 0;
  }
  prints("\n");
  return 0;
}