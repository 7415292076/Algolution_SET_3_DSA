/*
Given an array A of size N where, 1<= N <= 10^5. The task is to find the OR of all possible
sub-arrays of A and then the OR of all these results.
Examples:
Input : 1 4 6
Output : 7
All possible subarrays are
{1}, {1, 4}, {4, 6} and {1, 4, 6}
ORs of these subarrays are 1, 5, 6
and 7. OR of these ORs is 7.
Input : 10 100 1000
Output : 1006
(Note: This question can also be asked in this way: after finding ORs of subarrays just return all
distinct values of ORs)
_____________________
*/
#include <iostream>
using namespace std;

int main()
{
    int temp=0,count=0;
    int a[]= {10,100,1000};
    int max=a[0];
    int s= (sizeof(a)/sizeof(a[0]));
    for(int i=0; i<s; i++)
    {
        for(int j=i+1; j<s; j++)
        {
            temp=(a[i]|a[j]);
            if(temp>max)
            {
                max=temp;
                
            }
        }
        count=count|a[i];
        
    }
       
            if(count>max)
            {
                max=count;
            }
            cout<<max;
}

