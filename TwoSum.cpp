/*

You are given an array A of N elements, and a target sum K.
Your task is to find the whether a pair exists in the given array whose sum is equal to the target.
Print "YES" if such a pair exists, and "NO" otherwise.

Input Format

The first line consists of two integers N, denoting the size of array A and K. The next line consists of N space separated integers denoting the elements of the array A.

Constraints

image

Output Format

Print the required answer on a single line.

Sample Input 0

5 9
1 2 3 4 5
Sample Output 0

YES
Explanation 0

Here, A[3] + A[4] = 9. So, the answer is YES.

*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int n,i,k,m,j;
        int flag=0;
        int sum=0;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>m;
            arr[i]=m;
        }
        for(i=0;i<n;)
        {
            for(j=i+1;j<n;)
            {   
                sum=arr[i]+arr[j];
                if(sum==k)
                {
                    flag=1;
                    break;
                }
                else
                {
                    flag=0; 
                    j++;
                }
            }
            i++;
            if(flag==1)
            {
                cout<<"YES";
                break;
            }
            if((flag==0)&&(i>=n))
            {
                cout<<"NO";
            }    
        }
        
    return 0;
}

