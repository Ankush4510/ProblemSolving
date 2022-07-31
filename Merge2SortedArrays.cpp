
/* Simple Programe Merge Two Sorted Arrays */
#include <iostream>
using namespace std;
/* Simple Programe Merge Two Sorted Arrays */

void merge(int arr1[],int n,int arr2[],int m,int arr3[])
{
    // initializing indices for arr1[],arr2[],arr3[] respectively
    int i = 0; // index for arr1[]
    int j = 0; // index for arr2[]
    int k = 0; // index for arr3[]


    while(i < n && j < m) // condition to check index is not greater than size
    {
        if(arr1[i] < arr2[j]) // comparing arr1[] with arr2[]
        {
            arr3[k++] = arr1[i++]; // adding the least compared value into the arr3[]
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < n) // if any element is present in the arr1[]
    {
        arr3[k++] = arr1[i++]; 
    }
    while(j < m) // if any element is present in the arr2[]
    {
        arr3[k++] = arr2[j++];
    }
    
}

void printArray(int arr3[],int s) // print function
{
    for(int i = 0; i < s; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr1[5] = {5,6,7,8,9}; // sorted arr1[]
    int arr2[4] = {1,2,3,4};   // sorted arr2[]
    int arr3[9] = {0};         // new merged arr3[]

    merge(arr1,5,arr2,4,arr3);
    printArray(arr3,9);


    return 0;
}
