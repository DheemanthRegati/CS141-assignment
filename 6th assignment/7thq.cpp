#include <iostream>
#include<string>
using namespace std;
int main()
{
    string s1="hello",s2,s3,a;
    s2=s1;//copying string
    s3=s2;
    s2+=s1;
    int i=0,c=0,d=0,e=7;
    while(s2[i]!=NULL)//length of string
    {c++;
    i++;}
    for(int j=0;j<5;j++)//comparing string
    {
    if(s1[j]!=s3[j])
    {
                    cout<<"not same";
                    i=100;
                    break;
                    }        
    }
    if (i!=100){cout<<"same"<<endl;}
    while(s1[d]!='l')//checking letter in string
    {
                   d++;
                   }
    for(int j=0;j<(c-5);j++)/*strstr function. Replace 5 with other number*/  
    {
            i=j;
          for(int f=j,k=0;f<(j+5);f++){
                  
                  if(s2[f]!=s1[k]){e=1;
                                   break;}
                  k++;
                  }
          if(e!=1){break;}  
            }
    if(e==1){cout<<"not present"<<endl;}
    else{cout<<"string present at "<<(i+1)<<endl;}
    cout<<c<<endl;
    cout<<(d+1)<<endl;
    cout<<s2<<endl<<s1;
    
    cin>>a;
    return 0;
    }
