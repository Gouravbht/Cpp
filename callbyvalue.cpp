//when formal arguments are ordinary variables, then the function is call bt value.

#include<iostream>
using namespace std;
int sum(int, int);
int main()
{
  int a=5, b=20;
  int s=sum(a,b);
  cout<<"sum is"<<s;
}
     int sum(int x, int y)
    {
        return (x+y);
    }
