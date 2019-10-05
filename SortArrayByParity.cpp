/*
You are given an integer array of non-negative integers of length N.
You have to modify the array such that all the even elements of the array are before all the odd elements of the array in sorted order.
For example, Input: [3,1,2,4] Output: [2,4,1,3] The outputs [4,2,3,1], [2,4,3,1], and [4,2,1,3] would also be accepted.
main takes input from the users.
display is a utility function, feel free to use it for debugging purposes.
Input Format

First line takes input N, the length of the array. Second line takes input N space separated integers, the elements of the array.

Constraints

1 <= N <= 10000

Output Format

The resultant array.

Sample Input 

4
3 1 4 2
Sample Output 

2 4 1 3


*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,t,j;
    cin>>n;
    int a[n],f[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    int k=0;
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            f[k]=a[i];
            a[i]=-1;
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            f[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
        cout<<f[i]<<" ";
    return 0;
}
