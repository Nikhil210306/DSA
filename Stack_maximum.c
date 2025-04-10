#include <stdio.h>
int findMax(int arr[], int n) 
{
    if (n == 1)
    return arr[0]; 
    int max = findMax(arr, n - 1); 
    return (arr[n - 1] > max) ? arr[n - 1] : max; 
}
int main() 
{
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    printf("Maximum element is: %d\n", findMax(arr, n));
    return 0;
}