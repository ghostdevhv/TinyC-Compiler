
int prints(char *a);
int printi(int n);
int readi(int *eP);


void quicksort(int x[],int first,int last){
    int pivot,j,temp,i;

     if(first<last)
     {
        pivot=first;
        i=first;
        j=last;
		while(i<j)
		{
            while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
 
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

/* Function to merge the two haves arr[l..m] and arr[m+1..r] of array arr[] */
void merge(int arr[], int l, int m, int r)
{


    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[100], R[100];


    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
		{
			L[i] = arr[l + i];
		}
    for (j = 0; j < n2; j++)
		{
			R[j] = arr[m + 1+ j];
		}

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0;
    j = 0;
    k = l;

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
			arr[k] = L[i];
            i++;
        }
        else
        {
        	arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there are any */
    while (i < n1)
  	{
		arr[k] = L[i];
        i++;
        k++;
    }
    /* Copy the remaining elements of R[], if there are any */
    while (j < n2)
    {
		arr[k] = R[j];
        j++;
        k++;
    }

    return;
}

void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        printi(A[i]);
        prints("\n");
    }
    prints("\n");
    return;
}

void mergeSort(int arr[], int l, int r)
{
   if (l < r)
   {
   	int m = (l+r)/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);
      merge(arr, l, m, r);
   }
}


int main()
{
	prints("What method you want to use for sorting ? \n");
	prints("1. Bubble Sort\n");
	prints("2. Merge Sort\n");
	prints("3. Insertion Sort\n");
	prints("4. Quick Sort\n");
	int *eP;
	prints("\n Enter the index of the method which you want to use\n");
	int k = readi(&eP);

	if(k==1)
	{
		prints("\n********* BUBBLE SORT *********\n");
		int arr[50],i,j,temp;
		prints("Enter the number of elements (<50) of array\n");
		int n = readi(&eP);

		prints("Enter the elements of array\n");

		for(i = 0 ; i < n ; i++)
		{
			arr[i] = readi(&eP);
		}

		prints("\n Initial Array :  \n");
		printArray(arr, n);

		for(i=n-2;i>=0;i--)
		{
			for(j=0;j<=i;j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		prints("Sorted array is (Using Bubble Sort) \n");
	    printArray(arr, n);
		prints("\n");
		prints("Want to use other sorting method ? Enter 1 for yes else press 0\n");
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
		prints("\n********* MERGE SORT *********\n");
		int arr[50],i;
		prints("Enter the number of elements (<50) of array\n");
		int n = readi(&eP);

		prints("Enter the elements of array\n");

		for(i = 0 ; i < n ; i++)
		{
			arr[i] = readi(&eP);
		}

		prints("\n Initial Array :  \n");
		printArray(arr, n);

	   	mergeSort(arr, 0, n-1);
	 
	    prints("Sorted array is (Using Merge Sort) \n");
	    printArray(arr, n);
		prints("\n");
		prints("Want to use other sorting method ? Enter 1 for yes else press 0\n");
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
		prints("\n********* INSERTION SORT *********\n");
		int arr[50],i;
		prints("Enter the number of elements (<50) of array\n");
		int n = readi(&eP);

		prints("Enter the elements of array\n");

		for(i = 0 ; i < n ; i++)
		{
			arr[i] = readi(&eP);
		}

		prints("\n Initial Array :  \n");
		printArray(arr, n);
		insertionSort(arr,n);
		prints("Sorted array is (Using Insertion Sort) \n");
	    printArray(arr, n);
		prints("\n");
		prints("Want to use other sorting method ? Enter 1 for yes else press 0\n");
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

	else if(k==4)
	{
		prints("\n********* QUICK SORT *********\n");
		int arr[50],i;
		prints("Enter the number of elements (<50) of array\n");
		int n = readi(&eP);

		prints("Enter the elements of array\n");

		for(i = 0 ; i < n ; i++)
		{
			arr[i] = readi(&eP);
		}

		prints("\n Initial Array :  \n");
		printArray(arr, n);
		quicksort(arr,0,n-1);
		prints("Sorted array is (Using Quick Sort) \n");
	    printArray(arr, n);
		prints("\n");
		prints("Want to use other sorting method ? Enter 1 for yes else press 0\n");
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

	return 0;
}

