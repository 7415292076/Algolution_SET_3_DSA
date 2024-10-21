/*
10)Given an array of n positive integers. We are required to write a program to print the
minimum product of k integers of the given array.
Examples:
Input : 198 76 544 123 154 675
k = 2
Output : 9348
We get minimum product after multiplying
76 and 123.
Input : 11 8 5 7 5 100
k = 4
Output : 1400
*/

#include<iostream>
using namespace std;
int minimumProduct(int arr[], int n)
{
    int m=arr[1]*arr[2],index1=0,index2=0;
    for(int i=1; i<6; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(i==j)
            {
                break;
            }
            int sum=arr[i]*arr[j];
            if(sum<=m)
            {
             m=sum;
             index1=i;
             index2=j;
            }
        }
    }
    return arr[index1], arr[index2];
}

int main()
{
    int arr[]= {198,76,544,123,154,675} ;

    int n=6;
    minimumProduct(arr,n);
    cout <<     minimumProduct(arr,n)<< endl;
}
