#include <bits/stdc++.h>
using namespace std;
class temp{
        int a;
        int b;
    public:
        int solve(int input){
            a= input;
            b= a/2;
            return b;
        }
};
int main()
{
   int n;
   cout << "Enter a int number :";
   cin>>n;
   temp half;
   cout << half.solve(n) << endl;
 
     return 0;
}