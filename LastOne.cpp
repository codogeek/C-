/*

You are given an array. You have to print the last index of 1. If there is no 1 present in the array, print -1. Example: If the array is: {1,6,5,7,8,9,1,3,1,0}, print 8. For the array: {2,3,4,0,9}, print -1.

Input Format

The first line contains n(the number of elements). The next line contains the array's elements.

Constraints

1<=n<=10^5

Output Format

Print the index of the last 1 in the array.

Sample Input 0

5
1 2 1 3 4
Sample Output 0

2
Sample Input 1

3
2 7 8
Sample Output 1

-1

*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,i;
    int count=-1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {    
        cin>>k;
        arr[i]=k;
         if(arr[i]==1)
         {
             count=i;
         }
    }
    if(count==-1)
        cout<<"-1";
    else
        cout<<count;
    return 0;
}
