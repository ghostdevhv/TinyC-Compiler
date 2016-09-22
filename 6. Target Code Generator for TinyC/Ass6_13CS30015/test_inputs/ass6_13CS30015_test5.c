int prints(char *a);
int printi(int n);
int readi(int *eP);
 
int maxSubArraySum(int a[], int size)
{
    int max_so_far = 0, max_ending_here = 0,i;
 
    for (i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_ending_here < 0)
            max_ending_here = 0;
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
    }
    return max_so_far;
}
 

int main()
{
    prints("Largest Sum Contiguous Subarray");
    prints("\n\n");
    int a[100],n,i,b;
    int *eP; 
    prints("Enter the number of elements\n");
    n = readi(&eP);
    prints("Enter the elements of the array\n");
    for(i=0;i<n;i++)
    {	
    	a[i] = readi(&eP);
    }

    int max_sum = maxSubArraySum(a, n);
    prints("Maximum contiguous sum is : ");
    printi(max_sum);
    prints("\n");
    return 0;
}