// A simple C based program to find length of longest even length
// substring with same sum of digits in left and right 


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void findLength(string str)
{
	int n = str.length();
	int maxlen =0; // Initialize result
	string s1,s2,r1,r2;
   // r1="";
   // r2="";
	// Choose starting point of every substring
	for (int i=0; i<n; i++)
	{
		// Choose ending point of even length substring
		for (int j =i+1; j<n; j += 2)
		{
			int length = j-i+1;//Find length of current substr
                s1="";
                s2="";
			// Calculate left & right sums for current substr
			int leftsum = 0, rightsum =0;
			for (int k =0; k<length/2; k++)
			{
				leftsum += (str[i+k]-'0');
				rightsum += (str[i+k+length/2]-'0');
				s1=s1+str[i+k];
				s2=s2+str[i+k+length/2];
			}

			// Update result if needed
			if (leftsum == rightsum && maxlen < length){
					maxlen = length;
			        r1=s1;
			        r2=s2;
			}
		}
	}
    if(maxlen==0){
        cout<<"-1";
        exit(1);
    }
	cout<<"string is "<<r1<<r2<<endl;
	cout<<"length is "<<maxlen;
}

// Driver program to test above function
int main(void)
{
	string str;
    cin>>str;
	findLength(str);
	return 0;
}
