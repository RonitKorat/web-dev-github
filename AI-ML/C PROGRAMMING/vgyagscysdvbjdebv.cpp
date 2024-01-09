#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int a[n],b=0,d=0,c=0,e=0;
        for(int i=0;i<n;i++)
        {
                cin>>a[i];
                if(a[i]==1){b++;}
               else if(a[i]==2){c++;}
               else if(a[i]==3){d++;}
               else if(a[i]==4){e++;}
        }
        if(d>=b)
        {
                if(c%2==1)
               { cout<<e+d+c/2+1<<endl;}
               else{cout<<e+d+c/2<<endl;}
        }
        else if(d<b)
        {
                if((b+c)%4==0)
              {  cout<<d+e+(b+c)/4<<endl;}
              else{
                cout<<d+e+((b+c)/4)+1<<endl;
              }
        }
        
        
}