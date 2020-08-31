#include "worker.h"
#include<string>
#include<iostream>
#include<fstream>
#include<conio.h>
#include<math.h>
#include<vector>
//#include <stdio.h>
using namespace std;
bool k= false;
bool g =false;
bool p=false;
bool w=false ;
// h2ra mn l file , w b2ol lw lfile mwslsh ll end  -- kol ma tla2y line e3mly ++ , y3ny bt3d lstor w hlm awl str  f string // abdo done
int  abdo () 
{
	fstream file;
	file.open("Employee.txt",ios::in);
	string h ;
	int x=0;

  while (!file.eof())
	   {
	       getline (file ,h );
	         x++ ;
	
	    }
			return x;

}

worker::worker(void)
{
			id=" ";
			name=" ";
			age=" ";
			salary=0.0;
	
}

worker::worker(string id,string name,string age,double salary)
{
		this->id=id;
		this->name=name;
		this->age=age;
		this->salary=salary;
}

worker::~worker(void)
{
}


Grades::Grades()
{
	position=" ";
	taxrate=0.0;
	payrate=0.0;
}
Grades::Grades(string position, double taxrate,double payrate)
{
	this->position=position;
	this->payrate=payrate;
	this->payrate=payrate;
}
Employee::Employee()
{
	hours=0.0;
	grade;
}
Employee::Employee(float hours,Grades grade):worker(id,name,age,salary)
{
	this->hours=hours;
	this->grade=grade;
}
void Employee::Write_Data()
{
       fstream file;
       file.open("Employee.txt", ios::out | ios::app);
	   if(k==true)
	   {
		    file.close(); // lw 7sal un assigned position
			k=false;
	   }
	   else
	   {
       file<<id<<"|"<<name<<"|"<<age<<"|"<<salary<<"|"<<hours<<"|"<<grade.position<<"|"<<grade.taxrate<<"|"<<grade.payrate<<endl; 
	   file.close();
	   }
}
void Employee::Read_Data()
{
	// b3ml char arrr lkol attribute 3ashan ana b2ra w bkrtb mnn lfilw kda
	char a [25];
	char b [25];
	char c [25];
	char d [25];
	char e [25];
	char f [25];
	char g [25];
		
	char s [25];
	fstream file ;
	// l mra de oltlo ios in l2ny hktb
	file.open ("Employee.txt",ios::in);

	cout<<"id \t name \t      age \t salary \t hours \t position \t taxrate \t payrate \n ";
	int i=0 ;
	// -1 l2n l file by3ml create l str zyada ,  wb2olo tol mana mwsltsh l a5er l file 
	while (i<(abdo()-1))
	{
		i++;
		
	file.getline(a,25,'|');
	file.getline(b,25,'|');
	file.getline(c,25,'|');
	file.getline(d,25,'|');
	file.getline(e,25,'|');
	file.getline(f,25,'|');
	file.getline(g,25,'|');
	file.getline(s,25);  
	cout<<"("<<a <<")"<<" |"<<  "  "<<"("<<b <<  ")"<< " |"<< "    "<<"("<<c <<  ")"<<"  |"<<" \t "<<"("<<d <<  ")"<< "  |"<< "\t"<<"("<<e <<  ")"<< "  |"<< " \t "<<"("<<f <<  ")"<<"|"<<  " \t "<<"("<<g <<  ")"<< "|"<< " \t " <<"("<<s <<  ")"<< endl ;
}
}
void Employee ::Counter(int c)
{
	cout<<"The positions are avalivble is"<<endl;
cout<<"leader"<<endl;
cout<<"manager"<<endl;
cout<<"ceo"<<endl;
cout<<"member"<<endl;
char pos[25];

cout<<"enter the position of the avalible list"<<endl;	
cin.ignore();
cin.getline(pos , 25);
ifstream file;
	file.open("Employee.txt");
	int i =0;
	char id[25];
     char name[25];
	char age[25];
	char salary[25];
	char hours[25];
	char position[25];
	char taxrate[25];
	char payrate[25];
	bool k = false;
	int count = 0;

while(i<c)
{
i++;
               file.getline(id , 25 , '|');
		file.getline(name , 25 , '|');
		file.getline(age, 25 , '|');
		file.getline(salary , 25 , '|');
		file.getline(hours, 25 , '|');
		file.getline(position , 25 , '|');
		file.getline(taxrate , 25 , '|');
		file.getline(payrate , 25 );

if(pos[0] == 'l' && pos[1] == 'e'&& pos[2] =='a' && pos[3] == 'd' && pos[4] == 'e' &&pos[5] == 'r')
{
   int r = strcmp(position, pos);
   if(r == 0)
     {

          count++;
         cout<<id<<" "<<name<<" "<<position<<"  "<<age<<endl;
		 k = true;
       
      }

}


if(pos[0] == 'm' && pos[1] == 'e'&& pos[2] =='m' && pos[3] == 'b' && pos[4] == 'e' &&pos[5] == 'r')
{
   int r = strcmp(position, pos);
   if(r == 0)
     {
		 k = true;
          count++;
         cout<<id<<" "<<name<<" "<<position<<"  "<<age<<endl;
       
      }

}

if(pos[0] == 'm' && pos[1] == 'a'&& pos[2] =='n' && pos[3] == 'a' && pos[4] == 'g' &&pos[5] == 'e'&& pos[6] == 'r')
{
   int r = strcmp(position, pos);
   if(r == 0)
     {
		 k = true;
          count++;
         cout<<id<<" "<<name<<" "<<position<<"  "<<age<<endl;
       
      }


}
if(pos[0] == 'c' && pos[1] == 'e' && pos[2] == 'o')
{

      int r = strcmp(position, pos);
   if(r == 0)
     {
		 k = true;
          count++;
         cout<<id<<" "<<name<<" "<<position<<"  "<<age<<endl;
       
      }



}
}
if(count == 0)
{
	cout<<"sorry the position isn't exist"<<endl;
	

}

   cout<<"The count of Employees in this position is: "<<count<<endl;


}
void Employee::Search_Employee(int c)
{
	bool a=false ;
	bool b=false ;
	bool d =false ;
	char id[25];
	char name[25];
	char age[25];
	char salary[25];
	char hours[25];
	char position[25];
	char taxrate[25];
	char payrate[25];
	ifstream file;
	int i = 0;
	char input[25];
	file.open("Employee.txt");
	
	char choice;
		cout<<"if  you want to search by ID Enter 1"<<endl;
		cout<<"if you want to search by Name Enter 2"<<endl;
		cout<<"if you want to search by position Enter 3"<<endl;
		cin>>choice;
		if(choice == '1')
		{

			cout<<"Enter the ID of the Employee you want to search"<<endl;
			cin.ignore();
			cin.getline(input , 25);
			
			 while(i < c)
			 {
				 i++;
				 
		
		     file.getline(id,25,'|');
		     file.getline(name,25,'|');
		     file.getline(age,25,'|');
		     file.getline(salary,25,'|');
		     file.getline(hours,25,'|');
		     file.getline(position,25,'|');
		     file.getline(taxrate,25,'|');
		     file.getline(payrate,25);
		
		      int r =strcmp(id , input);
		      if(r==0)
		       {
				   a =true ;
			      cout<<id<<" "<<name<<" "<<salary<<endl;
		       }
			 }
			if  (a== false)
			{
			 cout << "not found " << endl;
			
			}
		}
	if(choice == '2')
	{

		cout<<"Enter the Name of the Employee you want to search"<<endl;
			cin.ignore();
			cin.getline(input , 25);

		
		while(i<c)
	{
					i++;
		
		     file.getline(id,25,'|');
		     file.getline(name,25,'|');
		     file.getline(age,25,'|');
		     file.getline(salary,25,'|');
		     file.getline(hours,25,'|');
		     file.getline(position,25,'|');
		     file.getline(taxrate,25,'|');
		     file.getline(payrate,25);
		
		      int r =strcmp(name , input);
		      if(r==0)
		       {
				   
			      cout<<id<<" "<<name<<" "<<salary<<" "<<position<<endl;
				  b=true ;
		        }
			 
	}
	 if (b==false)
			 {
			 cout << "not found " << endl;
			 }	 

	}

	if(choice == '3')
	{

		cout<<"Enter the position of the Employee you want to search"<<endl;
			cin.ignore();
			cin.getline(input , 25);


			while(i<c)
			{
		i++;
				 
		
		     file.getline(id,25,'|');
		     file.getline(name,25,'|');
		     file.getline(age,25,'|');
		     file.getline(salary,25,'|');
		     file.getline(hours,25,'|');
		     file.getline(position,25,'|');
		     file.getline(taxrate,25,'|');
		     file.getline(payrate,25);
		
			 int r =strcmp(position , input);
		      if(r==0)
		       {
			      cout<<id<<" "<<name<<" "<<salary<<" "<<position<<endl;
				  d=true ;
		        }
			}
			 if (d==false)
			 {
			 cout << "not found " << endl;
			 }


			 }
	}
void Employee::Replace_Employee(int c)
{
	fstream temp;
	fstream file;
	file.open("Employee.txt",ios::in);
	temp.open("edit.txt",ios::out);
	
	
	char id[25];
	char name[25];
	char age[25];
	char salary[25];
	char hours[25];
	char position[25];
	char taxrate[25];
	char payrate[25];
	char edit[25];	
		
	
	
	cout<<"enter the id you want to Dispense with it and replace him"<<endl ;

	cin.ignore();
	cin.getline(edit , 25);
		
	 int i=0;
	 
	while(i<c-1)
	{
	
		i++ ;
		file.getline(id,25,'|');
		file.getline(name,25,'|');
		file.getline(age,25,'|');
		file.getline(salary,25,'|');
		file.getline(hours,25,'|');
		file.getline(position,25,'|');
		file.getline(taxrate,25,'|');
		file.getline(payrate,25);
		
		int r =strcmp(id , edit);
		if(r==0)
		{
			cout<< "Enter new value of record"<<endl;
			cout<<"Enter the ID of new employee"<<endl;
			cin.getline(id , 25);
			cout<<"Enter the Name of new employee"<<endl;
			cin.getline(name , 25);
			cout<<"Enter the Age of new employee"<<endl;
			cin.getline(age , 25);
			cout<<"Enter the Hours of new employee"<<endl;
			Employee empo ;
			cin>>empo.hours ;
			cout<<"Enter the position of new employee"<<endl;	
			cin>>empo.grade.position ;
			if (empo.grade.position == "ceo")
		{
			empo.grade.payrate = 500.0;
			empo.grade.taxrate = 0.1;
			empo.salary = empo.calculate_salary();
		}
		else if (empo.grade.position == "manager")
		{
			empo.grade.payrate = 300.0;
			empo.grade.taxrate = 0.075;
			empo.salary = empo.calculate_salary();
		}
		else if (empo.grade.position == "leader")
		{
			empo.grade.payrate = 200.0;
			empo.grade.taxrate = 0.05;
			empo.salary = empo.calculate_salary();

		}
		else if (empo.grade.position == "member")
		{
			empo.grade.payrate = 100.0;
			empo.grade.taxrate = 0.025;
			empo.salary = empo.calculate_salary();
		}
		else
		{
			cout << "un assigned position\n";

			g=true;
		}
		if (g==false )
		{
		temp<<id<<'|'<<name<<'|'<<age<<'|'<<empo.salary<<'|'<<empo.hours<<'|'<<empo.grade.position<<'|'<<empo.grade.taxrate<<'|'<<empo.grade.payrate<<endl;
		}
		}//lw b2a m4 mtsaween an2l 3ady
		else
		{
		temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;

		}
		if (w== true )
		{
		 break ;
		}
		
	}
	temp.close();
	file.close();
	if (g==false && w== false  )
	{
		file.open("Employee.txt",ios::out);
	   temp.open("edit.txt",ios::in);
	
	   int y=0;
	   while (y<c-1)
	   {
		  
		 temp.getline(id,25,'|');
		temp.getline(name,25,'|');
		temp.getline(age,25,'|');
		temp.getline(salary,25,'|');
		temp.getline(hours,25,'|');
		temp.getline(position,25,'|');
		temp.getline(taxrate,25,'|');
		temp.getline(payrate,25);
		
		
		file<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
		
	    y++ ;
	  
	   }
	temp.close();
	file.close();
	}
	g=false; 
	
}
istream & operator>>(istream & input, Employee & obj)
{
	     char id2[25];
		 bool y = false;
		 bool ee = false;
	   
		 while(y == false)
		 {
		 ee = false;
		
		cout<<"Enter your ID"<<endl;
		input>>obj.id;
		for (int i=0 ;i<obj.id.size();i++)
		{
		   id2[i]=obj.id[i] ;
		   if (i==(obj.id.size()-1))
		   {
		   id2[i+1]='\0';
		   }
		}
	fstream file;	
	file.open("Employee.txt");
	char id[25];
	char k[25];
	char l[25];
	char m[25];
	char n[25];
	char s[25];
	char x[25];
	char d[25];
	while(!file.eof())
	{
		file.getline(id,25,'|');
		file.getline(k,25,'|');
		file.getline(l,25,'|');
		file.getline(m,25,'|');	
		file.getline(n,25,'|');
		file.getline(s,25,'|');	
		file.getline(x,25,'|');
		file.getline(d,25);
		//compare 2 char array
		int r =strcmp(id2 , id);
		if(r==0)
		{
			
		    ee = true ; 
			break;
			
	 	}
		
	}
	if (ee==true)
	{
	  cout << "The ID EXISTS"<<endl;
	 continue;
	}
	
		cout<<"Enter your Name"<<endl;
		cin>>obj.name;
		cout<<"Enter your age"<<endl;
		cin>>obj.age;
		cout<<"Enter Hours"<<endl;
		cin>>obj.hours;
		cout<<"Enter Your Grade's position"<<endl;
		cin>>obj.grade.position;
		
		y=true ; 
		 
	
     
}    
		  
return input;
}
double Employee::calculate_salary()
{
	
		return ((hours*grade.payrate) - (hours*grade.payrate*grade.taxrate));
	
}
void Employee::Add_Employee()
{
	// tmp howa mogrd copy b5od feh l data
	    Employee tmp;
		tmp.id= id;
		tmp.name = name;
		tmp.age = age;
		tmp.hours = hours;
		tmp.grade.position=grade.position;
		if (tmp.grade.position == "ceo")
		{
			tmp.grade.payrate = 500.0;
			tmp.grade.taxrate = 0.1;
			tmp.salary = tmp.calculate_salary();
		}
		else if (tmp.grade.position == "manager")
		{
			tmp.grade.payrate = 300.0;
			tmp.grade.taxrate = 0.075;
			tmp.salary = tmp.calculate_salary();
		}
		else if (tmp.grade.position == "leader")
		{
			tmp.grade.payrate = 200.0;
			tmp.grade.taxrate = 0.05;
			tmp.salary = tmp.calculate_salary();

		}
		else if (tmp.grade.position == "member")
		{
			tmp.grade.payrate = 100.0;
			tmp.grade.taxrate = 0.025;
			tmp.salary = tmp.calculate_salary();
		}
		else
		{
			cout << "un assigned position\n";

			k=true;
		}
		
		
		tmp.Write_Data();
	   
}
void Employee::Delete_Employee(int c)
{
	fstream temp;
	fstream file;
	file.open("Employee.txt",ios::in);
	temp.open("edit.txt",ios::out);
	
	
	char id[25];
	char name[25];
	char age[25];
	char salary[25];
	char hours[25];
	char position[25];
	char taxrate[25];
	char payrate[25];
	char edit[25];	
	
	
	
	cout<<"enter the id you want to delete"<<endl;
	cin.ignore();

	// aana hna b2olha enty htgeby mn l file awl 25 str
	cin.getline(edit , 25);
		
	 int i=0;
	 
	while(i<c-1)
	{
	
		i++ ;
		file.getline(id,25,'|');
		file.getline(name,25,'|');
		file.getline(age,25,'|');
		file.getline(salary,25,'|');
		file.getline(hours,25,'|');
		file.getline(position,25,'|');
		file.getline(taxrate,25,'|');
		file.getline(payrate,25);
		
		// commpare bl zbt
		int r =strcmp(id , edit);
		// lw msh zy b3d ha yscape l copy ll file l asmo edit
		if(r==0)
		{
			continue;
		}
		
		// lw zy b3d hy3ml copy
		else
		{
		temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;

		}
		
	}
	    temp.close();
	    file.close();
		file.open("Employee.txt",ios::out);
	    temp.open("edit.txt",ios::in);
	
	   int y=0;

	   // hy5od mn l temp l feh l data mn8er ely ms7to w trg3o ll file
	   while (y<c-2)
	   {
		  
		 temp.getline(id,25,'|');
		temp.getline(name,25,'|');
		temp.getline(age,25,'|');
		temp.getline(salary,25,'|');
		temp.getline(hours,25,'|');
		temp.getline(position,25,'|');
		temp.getline(taxrate,25,'|');
		temp.getline(payrate,25);
		file<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
	    y++ ;
	  
	   }
	temp.close();
	file.close();
}

void Employee::Edit_Employee(int c)
{
	int a ;
	Employee e ;

	char id[25];
	char name[25];
	char age[25];
	char salary[25];
	char hours[25];
	char position[25];
	char taxrate[25];
	char payrate[25];
	char edit[25];	
	

	
	cout<<"enter the id you want to update"<<endl;
	cin.ignore();
	cin.getline(edit , 25);
	fstream file;
	fstream temp;
	 int i=0;
	 file.open("Employee.txt",ios::in);
	temp.open("edit.txt",ios::out);

	
//htn2l alfile b alt3dilat lltemp	
	while(i<c-1)
	{
	
		i++ ;
		file.getline(id,25,'|');
		file.getline(name,25,'|');
		file.getline(age,25,'|');
		file.getline(salary,25,'|');
		file.getline(hours,25,'|');
		file.getline(position,25,'|');
		file.getline(taxrate,25,'|');
		file.getline(payrate,25);
		
		int r =strcmp(id , edit);
if(r==0)
{
			cout << "enter 1 to edit  name|enter 2 to edit  age|enter 3 to edit  hours|enter 4 to edit  postion|"<< endl ;
			cin>> a ;

			switch (a)
			{
			case 1:
			{
			cout<<"Enter the Name"<<endl;
			cin.ignore();
			cin.getline(name , 25);
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
			break ;
			}
			case 2:
				{
					cout<<"Enter the Age"<<endl;
					cin.ignore();
					cin.getline(age , 25);
					temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
			break ;
				}
				
					
			case 3 :
				{

					 cout<<"Enter the Hours"<<endl;
					 cin.ignore();
					 cin>>e.hours ;
					
						 
					 if ( position[0]=='c' &&position[1]=='e' &&position[2]=='o')
		{
			e.grade.payrate = 500.0;
			e.grade.taxrate = 0.1;
			e.salary = e.calculate_salary();
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<e.salary<<'|'<<e.hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
		}
		else if (position[0]=='m' &&position[1]=='a' &&position[2]=='n'&&position[3]=='g' &&position[4]=='e' &&position[5]=='r')
		{
			e.grade.payrate = 300.0;
			e.grade.taxrate = 0.075;
			e.salary = e.calculate_salary();
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<e.salary<<'|'<<e.hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
		}
		else if (position[0]=='l' &&position[1]=='e' &&position[2]=='a'&&position[3]=='d' &&position[4]=='e' &&position[5]=='r')
		{
			e.grade.payrate = 200.0;
			e.grade.taxrate = 0.05;
			e.salary = e.calculate_salary();
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<e.salary<<'|'<<e.hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
		}
		else if (position[0]=='m' &&position[1]=='e' &&position[2]=='m'&&position[3]=='b' &&position[4]=='e' &&position[5]=='r')
		{
			e.grade.payrate = 100.0;
			e.grade.taxrate = 0.025;
			e.salary = e.calculate_salary();
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<e.salary<<'|'<<e.hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
		}
		else
		{
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
			cout << "un assigned position\n";

		
		}
					 
			
	 break ;
		}
			case 4:
				{
			      cout<<"Enter the position"<<endl;
				  cin.ignore();
				  cin >> e.grade.position ;
				   cout<<"Enter the hours"<<endl;
				  cin.ignore();
				  cin >> e.hours ;
				  
			if (e.grade.position == "ceo")
				{
				e.grade.payrate = 500.0;
				e.grade.taxrate = 0.1;
				e.salary = e.calculate_salary();
				temp<<id<<'|'<<name<<'|'<<age<<'|'<<e.salary<<'|'<<e.hours<<'|'<<e.grade.position<<'|'<<e.grade.taxrate<<'|'<<e.grade.payrate<<endl;

				}
			else if (e.grade.position == "manager")
			{
				e.grade.payrate = 300.0;
				e.grade.taxrate = 0.075;
				e.salary = e.calculate_salary();
			    temp<<id<<'|'<<name<<'|'<<age<<'|'<<e.salary<<'|'<<e.hours<<'|'<<e.grade.position<<'|'<<e.grade.taxrate<<'|'<<e.grade.payrate<<endl;
		
			}
			else if (e.grade.position == "leader")
			{
				e.grade.payrate = 200.0;
				e.grade.taxrate = 0.05;
				e.salary = e.calculate_salary();
				temp<<id<<'|'<<name<<'|'<<age<<'|'<<e.salary<<'|'<<e.hours<<'|'<<e.grade.position<<'|'<<e.grade.taxrate<<'|'<<e.grade.payrate<<endl;
			}
			else if (e.grade.position == "member")
			{
			  e.grade.payrate = 100.0;
			  e.grade.taxrate = 0.025;
			  e.salary = e.calculate_salary();
			  temp<<id<<'|'<<name<<'|'<<age<<'|'<<e.salary<<'|'<<e.hours<<'|'<<e.grade.position<<'|'<<e.grade.taxrate<<'|'<<e.grade.payrate<<endl;

			}
			else
			{
						
								
		     temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
		     cout << "un assigned position\n";
			}	
				break ;
			} 
			}	
}
else 
{
temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
continue;
}

	}//nhait n2l file f temp b alt3dil
	temp.close();
   file.close();
	
	//a5odhm b2a 
		file.open("Employee.txt",ios::out);
	   temp.open("edit.txt",ios::in);
	
	   int y=0;
	   while (y<c-1)
	   {
		  
		 temp.getline(id,25,'|');
		temp.getline(name,25,'|');
		temp.getline(age,25,'|');
		temp.getline(salary,25,'|');
		temp.getline(hours,25,'|');
		temp.getline(position,25,'|');
		temp.getline(taxrate,25,'|');
		temp.getline(payrate,25);
		file<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<hours<<'|'<<position<<'|'<<taxrate<<'|'<<payrate<<endl;
	    y++ ;	  	

}
	      
	temp.close();
	file.close();
}//end of function
Trainee::Trainee()
{
	faculty_name=" ";
	GPA=0.0;
	acdemic_year=0;
}
Trainee::Trainee(string faculty_name,float GPA,int acdemic_year):worker(id,name,age,salary)
{
	this->faculty_name=faculty_name;
	this->GPA=GPA;
	this->acdemic_year=acdemic_year;
}
istream & operator>>(istream & input, Trainee & obj)
{
	     char id2[25];
		 bool y = false;
		 bool ee = false;
	   
		 while(y == false)
		 {
		 ee = false;
		
		cout<<"Enter your ID"<<endl;
		input>>obj.id;
		for (int i=0 ;i<obj.id.size();i++)
		{
		   id2[i]=obj.id[i] ;
		   if (i==(obj.id.size()-1))
		   {
		   id2[i+1]='\0';
		   }
		}
	fstream file;	
	file.open("Trainee.txt");
	char id[25];
	char k[25];
	char l[25];
	char m[25];
	char n[25];
	char s[25];
	char x[25];
	while(!file.eof())
	{
		file.getline(id,25,'|');
		file.getline(k,25,'|');
		file.getline(l,25,'|');
		file.getline(m,25,'|');	
		file.getline(n,25,'|');
		file.getline(s,25,'|');	
		file.getline(x,25);
		int r =strcmp(id2 , id);
		if(r==0)
		{
		    ee = true ; 
			break;
	 	}
	}
	if (ee==true)
	{
	  cout << "The ID EXISTS"<<endl;
	 continue;
	}
	
		cout<<"Enter your Name"<<endl;
		cin>>obj.name;
		cout<<"Enter your age"<<endl;
		cin>>obj.age;
		cout<<"Enter your Faculty Name"<<endl;
		cin>>obj.faculty_name;
		cout<<"Enter Your GPA"<<endl;
		cin>>obj.GPA;
		cout<<"Enter Your  Acdemic year"<<endl;
		cin>>obj.acdemic_year;
		
		y=true ; 
}    	  
return input;
}
void Trainee::Write_Data()
{fstream file;
       file.open("Trainee.txt", ios::out | ios::app);
	   if(k==true)
	   {
		    file.close();
	   }
	   else
	   {
       file<<id<<"|"<<name<<"|"<<age<<"|"<<salary<<"|"<<faculty_name<<"|"<<GPA<<"|"<<acdemic_year<<endl; 
	   file.close();
	   }
}
void Trainee::Add_Trainee()
{
	    Trainee  tmp;
		tmp.id= id;
		tmp.name = name;
		tmp.age = age;
		tmp.salary=tmp.calculate_salary();
		tmp.faculty_name=faculty_name;
		tmp.GPA = GPA;
		if (tmp.GPA > 4 )
		{
			cout << "WRONG GPA\n";
			k=true;
		}
		else
		{
			k=false;
		}
		tmp.acdemic_year=acdemic_year;
		tmp.Write_Data();
}

	void Trainee::Counter(int c)
{

	ifstream file;
	file.open("Trainee.txt");
	int choice;
	cout<<"Enter 1 if you want to count by specific gpa"<<endl;
	cout<<"Enter 2 if you want to count by specific academic year"<<endl;
	cout<<"Enter 3 if you want to count all trainee in file"<<endl;
	cout<<"Enter 4 if you want to count all trainee in file"<<endl;
	cin.ignore();
	cin>>choice;
	
	int i = 0;
	int nadeen = false;


	
	   char id[25];
	   char name[25];
	   char age[25];
	   char salary[25];
	   char facultyname[25];
	   char gpa[25];
	   char academic[25];
	   char input[25];
	   
	int count = 0;
	

		if(choice == 1)

		{

			cout<<"Enter the gpa"<<endl;
			cin.ignore();

			cin.getline(input , 25);
			while(i<c-1)
			{
				i++;
				nadeen = false;
			file.getline(id , 25 , '|');
			file.getline(name , 25 , '|');
			file.getline(age , 25 , '|');
			file.getline(salary , 25 , '|');
			file.getline(facultyname , 25 , '|');
			file.getline(gpa , 25 , '|');
			file.getline(academic ,25);


			int r = strcmp(gpa , input);
			if(r == 0)
			{

				count++;

				nadeen = true;

			}
			else
			{

				nadeen = false;

			}
		


			


		}
			
		}
			if(choice == 2)
			{


		cout<<"Enter the academic year"<<endl;
			cin.ignore();

			cin.getline(input , 25);
			while(i<c-1){
				i++;
				nadeen = false;
			file.getline(id , 25 , '|');
			file.getline(name , 25 , '|');
			file.getline(age , 25 , '|');
			file.getline(salary , 25 , '|');
			file.getline(facultyname , 25 , '|');
			file.getline(gpa , 25 , '|');
			file.getline(academic ,25);


			int r = strcmp(academic , input);
			if(r == 0)
			{

				count++;

				nadeen = true;

			}
			else
			{

				nadeen = false;

			}
		



			}
			}//end of if 
			if(choice == 3)
			{


		      cout<<"Enter the age"<<endl;
			cin.ignore();

			cin.getline(input , 25);
			while(i<c-1)
			{
				i++;
				nadeen = false;
			file.getline(id , 25 , '|');
			file.getline(name , 25 , '|');
			file.getline(age , 25 , '|');
file.getline(salary , 25 , '|');
			file.getline(facultyname , 25 , '|');
			file.getline(gpa , 25 , '|');
			file.getline(academic ,25);


			int r = strcmp(age , input);
			if(r == 0)
			{

				count++;

				nadeen = true;

			}
			else
			{

				nadeen = false;

			}
		



			}
			}//end of if 

				if(choice == 4)
			{
				cout<<"all trainees in company are :"<<endl;

			while(i<c-1)
			{
				i++;
				nadeen = true;
			file.getline(id , 25 , '|');
			file.getline(name , 25 , '|');
			file.getline(age , 25 , '|');
			file.getline(salary , 25 , '|');
			file.getline(facultyname , 25 , '|');
			file.getline(gpa , 25 , '|');
			file.getline(academic ,25);


			count++;



			}
			}//end of if 


			if(count == 0)
			{

				cout<<"This is not Exist"<<endl;

			}




			cout<<"The count is :"<<count<<endl;

			

	



			

		
} 
        
void Trainee::Search_Trainee(int c)
{
	bool a=false ;
	bool b=false ;
	bool d =false ;
	char id[25];
	char name[25];
	char age[25];
	char salary[25];
	char faculty_name[25];
	char GPA[25];
	char acdemic_year[25];
	ifstream file;
	int i = 0;
	char input[25];
	file.open("Trainee.txt");
	char choice;


		cout<<"if  you want to search by ID Enter 1"<<endl;
		cout<<"if you want to search by Name Enter 2"<<endl;
		cout<<"if you want to search by Faculty Name Enter 3"<<endl;
		cin>>choice;
		if(choice == '1')
		{

			cout<<"Enter the ID of the Trainee you want to search"<<endl;
			cin.ignore();
			cin.getline(input , 25);
			 while(i < c)
			 {
				 i++;
		     file.getline(id,25,'|');
		     file.getline(name,25,'|');
		     file.getline(age,25,'|');
		     file.getline(salary,25,'|');
			 file.getline(faculty_name,25,'|');
			 file.getline(GPA,25,'|');
			 file.getline(acdemic_year,25);
		
		      int r =strcmp(id , input);
		      if(r==0)
		       {
				   a =true ;
				   cout<<id<<" "<<name<<" "<<salary<<faculty_name<<" "<<GPA<<" "<<acdemic_year<<endl;
		       }
			 }
			if  (a== false)
			{
			 cout << "not found " << endl;
			}
		}
	if(choice == '2')
	{

		    cout<<"Enter the Name of the Trainee you want to search"<<endl;
			cin.ignore();
			cin.getline(input , 25);

		
		while(i<c)
	{
					i++;
		
		     file.getline(id,25,'|');
		     file.getline(name,25,'|');
		     file.getline(age,25,'|');
		     file.getline(salary,25,'|');
			 file.getline(faculty_name,25,'|');
			 file.getline(GPA,25,'|');
			 file.getline(acdemic_year,25);
		
		      int r =strcmp(name , input);
		      if(r==0)
		       {
				   
				   cout<<id<<" "<<name<<" "<<salary<<" "<<faculty_name<<" "<<GPA<<" "<<acdemic_year<<endl;
				  b=true ;
		        }
			 
	}
	 if (b==false)
			 {
			 cout << "not found " << endl;
			 }	 

	}

	if(choice == '3')
	{

		cout<<"Enter the position of the Employee you want to search"<<endl;
			cin.ignore();
			cin.getline(input , 25);


			while(i<c)
			{
		i++;
				 
		    file.getline(id,25,'|');
		     file.getline(name,25,'|');
		     file.getline(age,25,'|');
		     file.getline(salary,25,'|');
			 file.getline(faculty_name,25,'|');
			 file.getline(GPA,25,'|');
			 file.getline(acdemic_year,25);

			 int r =strcmp(faculty_name , input);
		      if(r==0)
		       {
			     cout<<id<<" "<<name<<" "<<salary<<" "<<faculty_name<<" "<<GPA<<" "<<acdemic_year<<endl;
				  d=true ;
		        }
			}
			 if (d==false)
			 {
			 cout << "not found " << endl;
			 }
			 }
}
void Trainee::Delete_Trainee(int c)
{
	fstream temp;
	fstream file;
	file.open("Trainee.txt",ios::in);
	temp.open("edit.txt",ios::out);
	
	char id[25];
	char name[25];
	char age[25];
	char salary[25];
	char faculty_name[25];
	char GPA[25];
	char acdemic_year[25];
	char edit[25];	
	
	
	
	cout<<"enter the id you want to delete"<<endl;
	cin.ignore();
	cin.getline(edit , 25);
		
	 int i=0;
	 
	while(i<c-1)
	{
	
		i++ ;
		     file.getline(id,25,'|');
		     file.getline(name,25,'|');
		     file.getline(age,25,'|');
		     file.getline(salary,25,'|');
			 file.getline(faculty_name,25,'|');
			 file.getline(GPA,25,'|');
			 file.getline(acdemic_year,25);
		
		int r =strcmp(id , edit);
		if(r==0)
		{
			continue;
		}
		else
		{
		temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;

		}
		
	}
	    temp.close();
	    file.close();
		file.open("Trainee.txt",ios::out);
	    temp.open("edit.txt",ios::in);
	
	   int y=0;
	   while (y<c-2)
	   {
		  
		   temp.getline(id,25,'|');
		   temp.getline(name,25,'|');
		   temp.getline(age,25,'|');
		   temp.getline(salary,25,'|');
		   temp.getline(faculty_name,25,'|');
		   temp.getline(GPA,25,'|');
		   temp.getline(acdemic_year,25);
		file<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
	    y++ ;
	  
	   }
	temp.close();
	file.close();
}
double Trainee::calculate_salary()
{
	salary=500;
	return 500;
}
void Trainee::Edit_Trainee(int c)
{
	int a ;
	Trainee e ;
	fstream temp;
	fstream file;
	file.open("Trainee.txt",ios::in);
	temp.open("edit.txt",ios::out);
	
	
	char id[25];
	char name[25];
	char age[25];
	char salary[25];
	char faculty_name[25];
	char GPA[25];
	char acdemic_year[25];
	char edit[25];	
	
	
	
	cout<<"enter the id you want to update"<<endl;
	cin.ignore();
	cin.getline(edit , 25);
		
		
	 int i=0;
	 
	while(i<c-1)
	{
	
		i++ ;
		file.getline(id,25,'|');
		file.getline(name,25,'|');
		file.getline(age,25,'|');
		file.getline(salary,25,'|');
	    file.getline(faculty_name,25,'|');
		file.getline(GPA,25,'|');
		file.getline(acdemic_year,25);
		
		int r =strcmp(id , edit);
		if(r==0)
		{
			cout << "enter 1 to edit  name*****enter 2 to edit  age******enter 3 to edit  faculty name******enter 4 to edit  GPA******"<< endl ;
			cin>> a ;

			switch (a)
			{
			case 1:
			{
			cout<<"Enter the Name"<<endl;
			cin.ignore();
			cin.getline(name , 25);
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
			break ;
			}
			case 2:
				{
					cout<<"Enter the Age"<<endl;
					cin.ignore();
					cin.getline(age , 25);
					temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
			break ;
				}
				
					
			case 3 :
				{

					 cout<<"Enter the faculty name"<<endl;
					 cin.ignore();
					 cin.getline(faculty_name,25);
						 
					temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
					break;
				}
			case 4:
				
				{
			      cout<<"Enter the GPA"<<endl;
				  cin.ignore();
				  cin >> e.GPA;
				  if (e.GPA>4)
		{
			cout << "WRONG GPA\n";
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
		}
		else
		{
		
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<e.GPA<<'|'<<acdemic_year<<endl;
			
		 }
		    break ;
		}
		}
		}
		else
		{
			temp<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
		}
	}
		
	
	temp.close();
	file.close();
		file.open("Trainee.txt",ios::out);
	   temp.open("edit.txt",ios::in);
	
	   int y=0;
	   while (y<c-1)
	   {
		  
	    temp.getline(id,25,'|');
		temp.getline(name,25,'|');
		temp.getline(age,25,'|');
		temp.getline(salary,25,'|');
	    temp.getline(faculty_name,25,'|');
		temp.getline(GPA,25,'|');
		temp.getline(acdemic_year,25);
		file<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
	    y++ ;
	   
	   }
	temp.close();
	file.close();

   }
void Trainee::Replace_Trainee(int c)
{

	fstream temp;
	fstream file;
	file.open("Trainee.txt",ios::in);
	temp.open("edit.txt",ios::out);
	
	
	char id[25];
	char name[25];
	char age[25];
	char salary[25];
	char faculty_name[25];
	char GPA[25];
	char acdemic_year[25];

	char edit[25];	
	
	
	
	cout<<"enter the id you want to Dispense with it and replace him"<<endl ;

	cin.ignore();
	cin.getline(edit , 25);
		
	 int i=0;
	 
	while(i<c-1)
	{
	
		i++ ;
		file.getline(id,25,'|');
		file.getline(name,25,'|');
		file.getline(age,25,'|');
		file.getline(salary,25,'|');
		file.getline(faculty_name,25,'|');
		file.getline(GPA,25,'|');
		file.getline(acdemic_year,25);
		
		int r =strcmp(id , edit);
		if(r==0)
		{
			cout<< "Enter new value of record"<<endl;
			cout<<"Enter the ID of new employee"<<endl;
			cin.getline(id , 25);
			cout<<"Enter the Name of new employee"<<endl;
			cin.getline(name , 25);
			cout<<"Enter the Age of new employee"<<endl;
			cin.getline(age , 25);
			cout<<"Enter the faculty name of new employee"<<endl;
			cin.getline(faculty_name , 25);
				cout<<"Enter the Acdemic year of new employee"<<endl;
			cin.getline(acdemic_year, 25);
			cout<<"Enter the GPA of new employee"<<endl;	
			Trainee t;
			cin>>t.GPA ;
			
			if (t.GPA > 4)
		{
			cout << "WRONG GPA\n";
		
			p=true ;
		}
		else
		{
		
			temp<<id<<'|'<<name<<'|'<<age<<'|'<< salary<<'|'<<faculty_name<<'|'<<t.GPA<<'|'<<acdemic_year<<endl;
		
		 }
			break;
		
	   }
			else
		{
			temp<<id<<'|'<<name<<'|'<<age<<'|'<< salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
		}
		
	}
	
	temp.close();
	file.close();
	if (p==false )
	{
		file.open("Trainee.txt",ios::out);
	   temp.open("edit.txt",ios::in);
	
	   int y=0;
	   while (y<c-1)
	   {
		  
		 temp.getline(id,25,'|');
		temp.getline(name,25,'|');
		temp.getline(age,25,'|');
		temp.getline(salary,25,'|');
		temp.getline(faculty_name,25,'|');
		temp.getline(GPA,25,'|');
		temp.getline(acdemic_year,25);
		
		
		file<<id<<'|'<<name<<'|'<<age<<'|'<<salary<<'|'<<faculty_name<<'|'<<GPA<<'|'<<acdemic_year<<endl;
		
	    y++ ;
	  
	   }
	temp.close();
	file.close();
	}
}

void Trainee::Read_Data()
{
 
	char a [25];
	char b [25];
	char c [25];
	char d [25];
	char e [25];
	char f [25];
	char s [25];
	fstream file ;
	file.open ("Trainee.txt",ios::in);
	cout<<"id \t name \t age \t salary \tFaculty name\t GPA\tAcdemic year \n ";
	bool h=false;
	while (!file.eof())
	{
		
	file.getline(a,25,'|');
	file.getline(b,25,'|');
	file.getline(c,25,'|');
	file.getline(d,25,'|');
	file.getline(e,25,'|');
	file.getline(f,25,'|');
	file.getline(s,25);
	cout<<"\n" <<a<<"\t"  <<b<<"\t " <<c<< "\t "  <<d<< "\t           "  << e<<"\t         "  <<f<< "\t   " <<s<<endl ;
	}
}
