#include<iostream>
using namespace std;
int main()
{
int i,j;
int  no,abc;
char last;
 cout<<"Enter The Value 30 For Perfect Christmas Tree:\n";
 cin>>no;
 cout<<"\n";
 do //Do-While Loop Start From Here
 { 
  cout<<"**********WE WISH YOU A***********";
  cout<<"\n\t MERRY CHRISTMAS\n";
  abc=no/4;
  for(i=1; i<=no/4; i++)
   {
   cout<<"\t\t  ";
   for(j=1; j<abc; j++)
    cout<<" ";
    abc--;
     for(j=1; j<=2*i-1; j++)
      cout<<"*";
       cout<<"\n";
 }

 abc=no/3;
 for(i=3; i<=no/3; i++)
  {
  cout<<"\t     ";
   for(j=1; j<abc; j++)
    cout<<" ";
    abc--;
     for(j=1; j<=2*i-1; j++)
      cout<<"*";
      cout<<"\n";
  }

 abc=no/2;
 for(i=4; i<=no/2; i++)
  {
  cout<<"\t";
   for(j=1; j<abc; j++)
    cout<<" ";
    abc--;
     for(j=1; j<=2*i-1; j++)
      cout<<"*";//Enter The AnyThing In Place Of ( * ) Like Any Key For Change Pattern
      cout<<"\n";
  }

 for(i=0;i<no/3;i++)
  {
  cout<<"\t\t      ";//Extra Space For Maintain Tree 
  cout<<"*****";//Enter The AnyThing In Place Of ( * ) Like Any Key For Change Pattern
  cout<<"\n";
  }
  
  cout<<"\t\t  *************";//Enter The AnyThing In Place Of ( * ) Like Any Key For Change Pattern
  cout<<"\nPress Y Or y Number For Again Print Tree N Or Other Key For Exit :";
  cin>>last;
 }while(last=='Y'||last=='y');

 return 0;
}
