#include<iostream>
#include<string>
#include<fstream> 
#include "worker.h"
#include<ostream>
#include<vector>
using namespace std;
void read()
{
 
	//id name age salary tax rate payrate
	char a [25];
	char b [25];
	char c [25];
	char d [25];
	char e [25];
	char f [25];
	char g [25];
	char s [25];
	fstream file ;
	file.open ("Employee.txt",ios::in);
	cout<<"id \t name \t age \t salary \t taxrate \t payrate \t position \n ";
	while (!file.eof())
	{
	file.getline(a,25,'|');
	file.getline(b,25,'|');
	file.getline(c,25,'|');
	file.getline(d,25,'|');
	file.getline(e,25,'|');
	file.getline(f,25,'|');
	file.getline(g,25,'|');
	file.getline(s,25);
	cout<<"\n" <<a<< "       " <<b<< "   " <<c<< "      " <<d<< "            " <<e<< "                 " <<f<< "         " <<g << "      " << s<<endl ;
	}

}	
int main()
{
	bool b=true ;
	
	while (b)
	{
	cout <<"1 to add " << " 2 to display  " << "3 to replace "<<"4 to delete " <<"5 to Search "<<"6 to edit"<< endl ;
	int a ;
	cin>>a ;
	
	  Employee emp;

	  
	switch (a)
	{
	  case 1:
		  {
			     ifstream file;
	            file.open("Employee.txt", ios::app);
		        cin>>emp ;
            	emp.Add_Employee() ;
				break ;
		  }
		  case 2:
		  {
		       read();
				break ;

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
				emp.Edit_by_ID(c);
				
					
					 break;
					 				 }
}
}
}


