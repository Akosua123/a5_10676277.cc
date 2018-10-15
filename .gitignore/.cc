#include <iostream>
# include <fstream>
#include <string>
using namespace std;

 struct student
		  {
 	string ID;
 	string name;
 	int age;
 	string gender;
 	int score;
 	char grade;
 	int sum ;
 	float average;
 	};
 	int main()
 	{
	 
 	student st[5];
 	
 	 for(int i=0; i<=5; i++)
	  {
 	 cout<<" name  "<< "gender " << " ID   "<< "  age  "<< " score" <<endl;
 	 cin >>  st[i].name; 
	cin>>  st[i].ID ;
	 cin >>  st[i].age ;
	cin >>  st[i].score;
	cin >> st[i].score;	 
	
int score;
int grade;
       switch(st[i].score/10)
      {
         case 10 :
		   grade='A';
            break;

         case 9 : 
		  grade='A';
            break;

         case 8 :  
		 grade='A';
            break;

         case 7 : 
		  grade='B';
            break;

         case 6 :  
		 grade='C';
            break;

         case 5 : 
		  grade='D';
            break;

         default :
		  grade='F';
      }

       cout<<"\n Your Grade is = "<<st[i].grade<<endl;
       
       int sum= 0;
	   average = sum/5; 

       return 0;
    }
