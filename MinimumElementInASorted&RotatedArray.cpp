/*

A sorted array A[ ] with distinct elements is rotated at some unknown point, the task is to find the minimum element in it.

Input Format

The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines. The first line of each test case consists of an integer N, where N is the size of array. The second line of each test case contains N space separated integers denoting array elements.

Constraints

1 = T = 200 1 = N = 500 1 = A[i] = 1000

Output Format

Corresponding to each test case, in a new line, print the minimum element in the array.

Sample Input 0

2
5
4 5 1 2 3
6
10 20 30 40 50 5 7
Sample Output 0

1
5

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,i,k,mini;
    cin>>t;
    while(t!=0)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>k;
            arr[i]=k;
        }
        mini=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]<mini)
                mini=arr[i];
        }
        cout<<mini<<endl;
        t--;
    }
    return 0;
}

