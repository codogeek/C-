/*

Given an array A of N integers, find the maximum sum subarray. Print the sum obtained.

Input Format

First line contains an integer N.
Second line contains N space separated integers.

Constraints

image

Output Format

A single integer representing the maximum sum obtainable.

Sample Input 0

5
1 5 -1 0 10
Sample Output 0

15
Explanation 0

Maximum possible sum is 15.
The entire array is also a subarray.


*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,k;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>k;
        arr[i]=k;
    }
    int maxsum=0;
    int maxsofar=0;
    for(i=0;i<n;i++)
    {
        maxsofar+=arr[i];
        if(maxsofar<0)
        {
            maxsofar=0;
        }
        if(maxsofar>maxsum)
        {
            maxsum=maxsofar;
        }
    }
    cout<<maxsum;
    return 0;
}

