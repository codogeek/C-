/*

Given an input 'n', you'll get first n natural numbers( i.e, from 1 to n) with one missing number. You've to find the missing number.

Input Format

First line contains an integer N.
Second line contains N space-separated integers.

Constraints

image

Output Format

A single line which has the missing integer.

Sample Input 0

10
1 6 4 9 2 3 10 8 7
Sample Output 0

5
Explanation 0

All the integers from 1 to 10 are present except 5.

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,k,ans,j;
    cin>>n;
    int arr[n];
    for(j=0;j<n;j++)
    {
        cin>>k;
        arr[j]=k;
    }
    int x1=arr[0];
    int x2=1;
    for(i=1;i<n-1;i++)
    {
        x1=x1^arr[i];
    }
    for(j=2;j<=n;j++)
    {
        x2=x2^j;
    }
    ans=x1^x2;
    cout<<ans;
    return 0;
}

