/*
You are given a number x and an array of n elements. Your task is to print space separated elements which are present at an index which is divisble by x.

Input Format

The first line of input contains n and x. The next line contains the array elements.

Constraints

1<=n<=10^5

Output Format

Print the required elements separated with a space.

Sample Input 0

10 2
1 2 3 1 2 3 4 5 3 4
Sample Output 0

1 3 2 4 3
Sample Input 1

5 3
1 2 3 4 5
Sample Output 1

1 4

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,x,i,k;
        cin>>n>>x;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>k;
        arr[i]=k;
    }
    for(i=0;i<n;i++)
    {
        if(i%x==0)
            cout<<arr[i]<<" ";
    }
    return 0;
}


