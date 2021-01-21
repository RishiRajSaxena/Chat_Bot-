#include<iostream>
#include<string>

 using namespace std;   //std::

 int main()
 {
  char inp,y,n,Y,N;
  string name,gtk;
  int age,k;

    
  cout<<"\t\t*******WELCOME TO CHATBOT*******\n\n";
  cout<<"To Continue Type Y and to Exit Type N \n";
  cin>>inp;
  cout<<"-->";
  if(inp=='y'||inp=='Y')  //if y
  {
   cout<<"WELCOME USER \n";
  }
 
  else      //if N
  {
   cout<<"Have a GoodDay \n";
    return 0;  
  } 
   system("cls");    //clean Out the terminal

   if(gtk!="bi")
   {
     cout<<"HOW CAN I HELP YOU  \n";
       cin>>gtk;
     cout<<"What is your name?   \n";
       cin>>name;
     cout<<name<<" What is your age ? \n";
       cin>>age;

     cout<<"1.TO CALL OUR REPRESENTETIVE\n";
     cout<<"2.TO GET A SOLUTION \n";
     cout<<"3. Enter COMPLAINT for later processing \n";
     cout<<"***Enter Choice***\n";
     int flag;
     cin>>k;
     string arr[1],ar[20];
     switch(k)
     {
        case 1: {
                  cout<<"Give a miss-call on 77-14-1-7-14-00 and our Representative will call you in few moments   \n";
                  cout<<"thanks for contacting Us\n we are delighted to help you :) \n";
             
                   break;
                }    
       case 2:{
           cout<<"enter your complaint in brief \n";
           for(int ii=0;ii<50;ii++)
           {
            getline(cin,arr[ii]);   
           }
           cout<<endl<<endl;
       }
                            case 3:{
                                cout<<"enter 'a' for broken package \n";
                                cout<<"enter 'b' for wronge package \n";
                            cout<<"enter 'c' to replace package \n";
                            cout<<"enter 'd' for return package \n";
                                for(int l=0;l<1;l++)
           {
            getline(cin,arr[l]);   
           }
           cout<<endl<<endl;
                            }       
     
       default:{
                   cout<<"Rate your Satisfaction \n";
int c;
cin>>c;
       }
     }
   cout<<"Rate your Satisfaction \n";
   int cc;
   cin>>cc;
   }
 
  return 0;
 }
 

