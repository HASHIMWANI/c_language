/*
 * C Program to Find 2 Elements in the Array such that Difference between them is Largest
 */
 #include <stdio.h>
 
int maximum_difference(int array[], int arr_size)
{
    int max_diff = array[1] - array[0];
    int i, j;
    for (i = 0; i < arr_size; i++)
    {
        for (j = i + 1; j < arr_size; j++)
        {
            if (array[j] - array[i] > max_diff)
                max_diff = array[j] - array[i];
        }
    }
    return max_diff;
}
 
int main()
{
    int array[] = {10, 15, 90, 200, 110};
    printf("Maximum difference is %d",  maximum_difference(array, 5));
    getchar();
    return 0;
}
