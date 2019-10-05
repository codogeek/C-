/*

You are given a sorted array of integers of length N.
You have to return an array of the squares of each number, also in sorted non-decreasing order.
For example, Input: [-4,-1,0,3,10] Output: [0,1,9,16,100]
main takes input from the users.
display is a utility function, feel free to use it for debugging purposes.
Input Format

First line takes input N, the length of the array. Second line takes input N space separated integers, the elements of the array.

Constraints

1 <= N <= 10000

Output Format

The resultant array.

Sample Input 

5
-4 -1 0 3 10

Sample Output 

0 1 9 16 100




*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void selectionSort(int arr1[], int n) {
   int i1, j1, min, temp1;
   for (i1 = 0; i1 < n - 1; i1++) {
      min = i1;
      for (j1 = i1 + 1; j1 < n; j1++)
         if (arr1[j1] < arr1[min])
            min = j1;
      temp1 = arr1[i1];
      arr1[i1] = arr1[min];
      arr1[min] = temp1;
   }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,k,temp,a;
    cin>>n;
    int arr[n];
    int newarr[n];
    for(i=0;i<n;i++)
    {
        cin>>k;
        arr[i]=k;
    }
    // simply find the squares of the array
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        newarr[i]=temp*temp;
    }
    selectionSort(newarr, n);
    for(i=0;i<n;i++)
    {
        a=newarr[i];
        cout<<a<<" ";
    }
    //now we need to sort the new array
    
    
    return 0;
}

