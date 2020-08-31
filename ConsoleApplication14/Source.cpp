#include<iostream>
#include<string>
#include<fstream> 
#include "worker.h"
#include<ostream>
#include<vector>
using namespace std;
int main()
{
	bool b=true ;
	char choice;
	char n;
	do
	{
	cout<<"Enter 'E' to use Employee's functions "<<"OR Enter 'T' to use Trainee's functions "<<endl;
	cin>> choice;
	if(choice=='E' ||choice=='e')
	{
	Employee emp;
	ifstream myFile("Employee.txt");
	bool z =myFile.fail() ;
    if(z)
	{
       ofstream o("Employee.txt");
    }
	emp.Read_Data();
	while (b)
	{
	cout <<"1 to ADD " << " 2 to Display " << " 3 to Edit "<<"4 to Delete " <<" 5 to Search "<<" 6 to Replace " <<" 7 to Count "<<" 8 to Exit "<< endl ;
	int a ;
	cin>>a ;
	  
	switch (a)
	{
	  case 1:
		  {
			     ifstream file;
	            file.open("Employee.txt", ios::app);
		        cin>>emp ;
            	emp.Add_Employee() ;
				emp.Read_Data();
				break ;
		  }
		  case 2:
		  {
			
			emp.Read_Data();
			 break;
		  }
		  case 3:
			  {
				  fstream file;
				  file.open("Employee.txt",ios::in);
				  string s ;
				  int c=0;
		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
				  emp.Edit_Employee(c);
				  emp.Read_Data();
				  break;
			  }
			   case 4:
			  {
				  fstream file;
				  file.open("Employee.txt",ios::in);
				  string s ;
				  int c=0;
		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
			emp.Delete_Employee(c);
				  emp.Read_Data();
				  break;
			  }
			 case 5:
		    {
				fstream file;
				  file.open("Employee.txt",ios::in);
				  string s ;
				  int c=0;

		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
				emp.Search_Employee(c);
				emp.Read_Data();
				
				break;
	         }
			 case 6:
				 {
					 fstream file;
				  file.open("Employee.txt",ios::in);
				  string s ;
				  int c=0;

		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
				emp.Replace_Employee(c);
				emp.Read_Data();
				
				break;
				 }
			 case 7:
				 {
					 
						 fstream file;
				  file.open("Employee.txt",ios::in);
				  string s ;
				  int c=0;

		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
				emp.Counter(c);
				
				
				break; 
			    }
			 case 8:
				 {
					 cout<<" ////// Exit ///////"<<endl;
					 b=false;
					 break;
					 
				 }
				 
}
   
}
   b=true;
 cout<<"If you want to continue press Y/y :: If You want press N/n"<<endl;
  cin>> n;
       
  
}
   
	else if(choice=='T'||choice=='t')
	{
	Trainee t;
	ifstream myFile("Trainee.txt");
	bool z =myFile.fail() ;
    if(z)
	{
        std::ofstream o("Trainee.txt");
    }
			t.Read_Data();
	while (b)
	{
	cout <<"1 to ADD " << " 2 to Display " << " 3 to Edit "<<"4 to Delete " <<" 5 to Search "<<" 6 to Replace " <<" 7 to Count "<<" 8 to Exit "<< endl ;
	int a ;
	cin>>a ;
	  
	switch (a)
	{
	  case 1:
		  {
			     ifstream file;
	            file.open("Trainee.txt", ios::app);
		        cin>>t ;
				t.Add_Trainee() ;
				t.Read_Data();
				break ;
		  }
		  case 2:
		  {
			
			t.Read_Data();
			 break;

		  }
		  case 3:
			  {
			 ifstream file;
			  file.open("Trainee.txt",ios::in);
			  string s ;
				  int c=0;
		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
			}
			t.Edit_Trainee(c);
			t.Read_Data();
			 break;
			  }
			   case 4:
			  {
				  ifstream file;
				  file.open("Trainee.txt",ios::in);
				  int c=0;
				  string s;
		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
			t.Delete_Trainee(c);
			t.Read_Data();
				  
				  break;
			  }
			 case 5:
		    {
				ifstream file;
				  file.open("Trainee.txt",ios::in);
				  string s ;
				  int c=0;

		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
			t.Search_Trainee(c);
				t.Read_Data();
				
				break;
	         }
			 case 6:
				 {
				ifstream file;
				  file.open("Trainee.txt",ios::in);
				  string s ;
				  int c=0;

		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
			t.Replace_Trainee(c);
			t.Read_Data();
			break;
			     }
			 case 7:
				 {
					 	 fstream file;
				  file.open("Trainee.txt",ios::in);
				  string s ;
				  int c=0;

		    while (!file.eof())
	        {
	          getline (file ,s );
	           c++ ;
	
	         }
				t.Counter(c);
				
				break;
					 
				 }

			 case 8:
				 {
					 cout<<" ////// Exit ///////"<<endl;
					 b=false;
					 break;
				 }
				 b=true;
}
}
  cout<<"If you want to continue press Y/y :: If You want press N/n"<<endl;
   cin>> n;
  
}
   
}while(n=='Y'|| n=='y');
}