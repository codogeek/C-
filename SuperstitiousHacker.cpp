/*

Hacker is very superstitious. An array A, with N elements, is deemed LUCKY by Hacker if the count of the minimum element is odd, and UNLUCKY if it is even. Help Hacker determine whether the given array is lucky or unlucky.

Input Format

First line consists of a single integer T denoting the number of test cases.
First line of each test case consists of a single integer N denoting the size of array A.
Second line of each test case consists of N space separated integers denoting the array A.

Constraints

image

Output Format

For each test case, print "Lucky" (without quotes) if frequency of minimum element is odd, otherwise print "Unlucky"(without quotes). Print a new line after each test case.

Sample Input 0

2
5
8 8 9 5 9
5
3 3 3 5 3
Sample Output 0

Lucky
Unlucky
Explanation 0

TC 1:
Minimum element: 5
Frequence: 1 (Odd) implies LUCKY array

TC 2:
Minimum element: 3
Frequency: 4 (Even) implies UNLUCKY array

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n,i,k,mini,count;
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
        count=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]==mini)
                count++;
        }
        if(count%2==0)
            cout<<"Unlucky"<<endl;
        else
            cout<<"Lucky"<<endl;
    t--;
    }
    return 0;
}

