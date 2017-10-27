#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s1="hello",s2,s3,a;
    s2=s1;
    s3=s2;
    s2+=s1;
    int i=0,c=0,d=0,e=7;
    while(s2[i]!=NULL)
    {c++;
    i++;}
    for(int j=0;j<5;j++)
    {
    if(s1[j]!=s3[j])
    {
                    cout<<"not same";
                    i=100;
                    break;
                    }        
    }
    if (i!=100){cout<<"same";}
    while(s1[d]!='l')
    {
                   d++;
                   }
    for(int j=0;j<(c-5);j++)
    {
            i=j;
          for(int f=j,k=0;f<(j+5);f++){
                  
                  if(s2[f]!=s1[k]){e=1;
                                   break;}
                  k++;
                  }
          if(e!=1){break;}  
            }
    if(e==1){cout<<"not present";}
    else{cout<<"string present at "<<(i+1);}
    cout<<c;
    cout<<(d+1);
    cout<<s2<<endl<<s1;
    
    cin>>a;
    return 0;
    }
