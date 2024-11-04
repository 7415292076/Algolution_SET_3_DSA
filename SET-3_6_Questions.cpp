
#include <iostream>
#include <string>
using namespace std;
/*
06) Cyclic Palindrome. 
Description: 
A string is said to be palindrome, if it reads the same from both the ends. Given a string S, you are allowed to perform cyclic shifts. More formally, you can pick any one character from any end (head or tail) and you can append that character at the other end. For example, if the string is "abc", then if we do a shift using the character at head position then the string becomes "bca". Similarly, if we do the shift using the character at the tail then the input string becomes "cab". Your task is to find out the minimum number of shifts needed to make the given string, a palindrome. In case, we can't convert the string to palindrome then print -1 
Input Format: 
First line starts with T i.e. number of test cases, and then T lines will follow each containing a string "S". 
Output Format: 
Print the minimum number of cyclic shifts for each string if it can be made a palindrome, else -1. 
Sample Input: 
4 
abbb 
aaabb 
aabb 
abc 
Sample Output: 
-1 
1 
1 
-1 
*/

  int n=0,count;
  int isCyclicPalindrome(string s) {
    int len = s.length();
    for(int i=0 ; i<len ; i++)
    {
         for(int j=i ; j<len ; j++)
         {
             if(s[i]==s[j]) 
             {
                 n++;
             }
         }
          count=n;
             if(count%2==0)
            {
              return 1;   
            }
            else {
                return -1;
            }
     
    }
   return 0;
   }
int main() {
    string s;
    int c=0;
    do{
        cout << "Enter a string: ";
    cin >> s;
       isCyclicPalindrome(s);
    if (isCyclicPalindrome(s)) {
        cout <<isCyclicPalindrome(s)<< endl;
    } else {
        cout << s << " is not a cyclic palindrome." << endl;
    }
    cout<<"press 1 to continue ";
    cin>>c;
    
    }while(c==1);
    

    return 0;
}
