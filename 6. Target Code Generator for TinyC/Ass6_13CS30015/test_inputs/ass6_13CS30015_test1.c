int prints(char *a);
int printi(int n);
int readi(int *eP);

int find(int arr[], int n)
{
	prints("hill");
    int sum = 0,i,j;
    int maxsize = -1, startindex;
 
    for (i = 0; i < n-1; i++)
    {
    	if(arr[i]==0)
    	{
    		sum = -1;
    	}
    	else
    	{
    		sum = 1;
    	}

        for ( j = i+1; j < n; j++)
        {
        	if(arr[j]==0)
        	{
        		sum = sum + -1;
        	}
        	else
        	{
        		sum = sum +1;
        	}
 
            if(sum == 0 && maxsize < j-i+1)
            {
                maxsize = j - i + 1;
                startindex = i;
            }
        }
    }
    if ( maxsize == -1 )
    {
		prints("No such subarray\n");
	}
    else
    {
    	prints("Index ");	
        printi(startindex);
        prints(" to Index ");
        printi(startindex+maxsize-1);
    }
 
    return maxsize;
   
}

int binary_search(int A[], int l, int r, int key)
{
    while( l <= r )
    {
        int m = l + (r-l)/2;

        if( A[m] == key )
        {
            return m;
        }
 	   	else if( A[m] < key ) 
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    return -1;
}

int LIS( int arr[], int n )
{
   int dp[50], i, j, max = 0;
 
   for ( i = 0; i < n; i++ )
   {
      dp[i] = 1;
   }
    
   for ( i = 1; i < n; i++ )
   {
      for ( j = 0; j < i; j++ )
      {
      	if ( arr[i] > arr[j] && dp[i] < dp[j] + 1)
      	{
            dp[i] = dp[j] + 1;
      	}
      }
         
   }
     
   for ( i = 0; i < n; i++ )
   {
      if ( max < dp[i] )
      {
         max = dp[i];
      }
   }

   return max;
}
 
int main()
{
	prints("What you want to compute ? \n");
	prints("1. Longest Increasing Subsequence in an Array\n");
	prints("2. Find an element is present or not in an Array using Binary Search\n");
	prints("3. Largest subarray with equal number of 0s and 1s\n");
	prints("4. End the program\n");
	int *eP;
	prints("\n Enter the index of the function which you want to compute\n");
	int k = readi(&eP);

	if(k==1)
	{
		prints("********* Longest Increasing Subsequence in an Array *********\n\n");

		int A[100];
		int n,i;
		int *eP,*eRR;
		prints("Enter the number of elements (<90)\n");
		n = readi(&eP);
		prints("Enter the elements of an array\n");
		for(i=0;i<n;i++)
		{
			
			A[i] = readi(&eRR);
		}
		prints("Length of Longest Increasing Subsequence is : ");
		int ans = LIS(A,n);
		printi(ans);
		prints("\n");
		prints("Want to compute other than LIS ? Enter 1 for yes else press 0\n");
		int l = readi(&eP);
		if(l==1)
		{
			int d = main();
		} 
		else
		{
			return 0;
		}


	}
	else if(k==2)
	{
		prints("********* Search an element using Binary Search *********\n\n");
		int A[100],i;
		int *eP;
		prints("Enter the size of the array <90\n");
		int n = readi(&eP);
		prints("Enter the elements of the array\n");
		for(i=0;i<n;i++)
		{
			A[i] = readi(&eP);
		}
		prints("Enter the element to be searched\n");
		int search = readi(&eP);
		int loc = binary_search(A,0,n-1,search);

		if(loc!=-1)
		{
			prints("Element ");
			printi(search);
			prints(" found at index number ");
			printi(loc);
			prints("\n");
		}
		else
		{
			prints("Element not found :( \n");
		}
		prints("Want to compute other than Binary Search ? Enter 1 for yes else press 0\n");
		int l = readi(&eP);
		if(l==1)
		{
			int d = main();
		} 
		else
		{
			return 0;
		}
	}
	else if(k==3)
	{
		prints("********* Largest Subarray with equal number of 0s and 1s *********\n\n");
		int A[100],i;
		int *eP;
		prints("Enter the size of the array <90\n");
		int n = readi(&eP);
		prints("Enter the elements of the array\n");
		for(i=0;i<n;i++)
		{
			A[i] = readi(&eP);
		}
		int lol = find(A,n);
		// prints("Want to compute other function ? Enter 1 for yes else press 0\n");
		// int l = readi(&eP);
		// if(l==1)
		// {
		// 	int d = main();
		// } 
		// else
		// {
		// 	return 0;
		// }
	}
	else
	{
		return 0;
	}
	return 0;
}

