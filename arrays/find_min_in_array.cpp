#include <bits/stdc++.h>
using namespace std;



// this code find smallest numrical value in array .
int main()
{
 int nums[]={5,15,22,1,-15,24};
 int size=6;
 int smallest=INT_MAX;            //this line INT_MAX means +infinity
 for(int i=0;i<size;i++)
 {
    if(nums[i]<smallest)
    {
        smallest=nums[i];
    }
 }  
 cout<<"smallest =>"<<smallest<<endl;
 
     return 0;
}