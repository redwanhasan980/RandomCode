
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    string s,ss;
    map<string,double>res;
    map<string,int>cred;
    int x=0;
 void calcres(double credit)
    {
          while(1)
    {   //cout<<"d"<<endl;
         cin>>s;
         if(s[0]=='x')
         break;
         if(x==0&&s[0]>='0'&&s[0]<='9')
          x=1;
         else if(x==1&&s[0]>='0'&&s[0]<='9')
          {
             ss=s;
             x=2;
          }
           else if(x==2&&s[0]>='0'&&s[0]<='9')
          {
          double dd = stod(s);
          if(dd>4.0)
          { 
             if(dd<40.0)
              dd=0.0;
              else if(dd>=40.0&&dd<45.0)
              dd=2.00;
              else if(dd>=45.0&&dd<50.0)
              dd=2.25;
              else if(dd>=50.0&&dd<55.0)
              dd=2.50;
              else if(dd>=55.0&&dd<60.0)
              dd=2.75;
              else if(dd>=60.0&&dd<65.0)
              dd=3.00;
              else if(dd>=65.0&&dd<70.0)
              dd=3.25;
              else if(dd>=70.0&&dd<75.0)
              dd=3.50;
              else if(dd>=75.0&&dd<80.0)
              dd=3.75;
              else
              dd=4.00;
          }
          //cout<<ss<<" "<<res[ss]<<" "<<credit<<" ";
          res[ss]+=(dd*credit);
          if(dd!=0.0)
          cred[ss]+=credit;
         // cout<<res[ss]<<endl;
         x=0;
          }
    }
    
    }
int main()
{
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
   
    //ISE 
    calcres(3.0);
    //DSA 
    calcres(3.0);
    //DSA LAB
    calcres(2.0);
    //PHY
    calcres(3.0);
    //MAT
     calcres(3.0);
    //STAT
    calcres(3.0);
    //SOC
    calcres(3.0);
    //GAME
     calcres(2.0);

    vector<pair<double,string>>rr;
    for (auto it : res)
    rr.push_back({it.second/cred[it.first],it.first});
     sort(rr.begin(),rr.end());
       for (auto it : rr)
  cout<<it.first<<" "<<it.second<<endl;
   
    
return 0;
}