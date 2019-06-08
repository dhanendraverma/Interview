/******************************************************************************************

Given a string  A, consisting of only lowercase english characters. Complete the function
which returns a string, containing each letter in the string snd it's occurance in the
same order as they are in the given string. No letter should be reapeted in the 
retunrned string.

Example:
Input - aawwatoytwoqrlr
Output - a3w3t2o2y1q1r2l1

******************************************************************************************/


#include <bits/stdc++.h>

using namespace std;

string countoccurance(string A)
{
    string ans = "";
    int count[26] = {};
    for(int i=0;i<A.length();i++)
        count[A[i]-'a']++;
    
    for(int i=0;i<A.length();i++)
    {
        if(count[A[i]-'a']>0)
        {
            ans += A[i];
            ans += to_string(count[A[i]-'a']);
            count[A[i]-'a'] = 0;
            
        }
    }
    
    return ans;
}



int main()
{
    string A;
    cin>>A;
    cout<<countoccurance(A);

    return 0;
}
