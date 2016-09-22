
void useDoublePointer(int n)
{
  int *l = &n;
  int **lol = &l;
}

int main()
{
  double a[2][2], b[2][2], c[2][2];
  int i,j;
  int max1=0,min1=0;

  for(i=0;i<2;++i)
  {      
    for(j=0;j<2;++j)
    {
      if(i+j>max1)
      {
        max1 = i+j;

      }
    }
  }

  int l = max1;

  for(i=0;i<2;++i)
  {
    for(j=0;j<2;++j)
    {
      if(i+j<min1)
      {
        min1 = i+j;
      }
    }
  }

  int m = min1;

  for(i=0;i<2;++i)
  {
    for(j=0;j<2;++j)
    {
      int n = l+ min1;  
    }

  }
  useDoublePointer(n);
  return 0;
  
}
