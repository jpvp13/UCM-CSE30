void merge(long list[], long l, long m, long r)
{
    long i, j, k;
    long n1 = m - l + 1;
    long n2 = r - m;
    
    /* create temp arrays */
    long L[n1], R[n2];
    
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = list[l + i];
    for (j = 0; j < n2; j++)
        R[j] = list[m + 1+ j];
    
    /* Merge the temp arrays back into list[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            list[k] = L[i];
            i++;
        }
        else
        {
            list[k] = R[j];
            j++;
        }
        k++;
    }
    
    /* Copy the remaining elements of L[], if there
     are any */
    while (i < n1)
    {
        list[k] = L[i];
        i++;
        k++;
    }
    
    /* Copy the remaining elements of R[], if there
     are any */
    while (j < n2)
    {
        list[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
 sub-array of list to be sorted */

void merge_sort(long list[],long l, long r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        long m = l+(r-l)/2;
        
        // Sort first and second halves
        merge_sort(list, l, m);
        merge_sort(list, m+1, r);
        
        merge(list, l, m, r);
    }
}
