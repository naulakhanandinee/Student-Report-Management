#include<iostream>
#include<conio.h> //used for console input,output

using namespace std;

int i=0; //global var

struct Student
{
	int id;
	float percentage, total;
	float marks1, marks2, marks3, marks4, marks5;
	string name,grade;
}s[25];  //create student object

void insert(){
	system("cls");
	cout<<"\n\n\t\t\t *INSERT RECORD *";
	cout<<"\n\n Enter Student Id : ";
	cin>>s[i].id;
	cout<<"\n\n Enter Student Name : ";
	cin>>s[i].name;
	cout<<"\nEnter The marks in Subject 1 out of 100 : ";
	cin>>s[i].marks1;
	cout<<"\nEnter The marks in Subject 2 out of 100 : ";
	cin>>s[i].marks2;
	cout<<"\nEnter The marks in Subject 3 out of 100 : ";
	cin>>s[i].marks3;
	cout<<"\nEnter The marks in Subject 4 out of 100 : ";
	cin>>s[i].marks4;
	cout<<"\nEnter The marks in Subject 5 out of 100 : ";
	cin>>s[i].marks5;
	s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3 + s[i].marks4 + s[i].marks5;
	s[i].percentage = (s[i].total/500) *100;
	if(s[i].percentage >=85)
	   s[i].grade = "A+";
	else if(s[i].percentage >=75)
	   s[i].grade= "A";
	else if(s[i].percentage >=65)
	   s[i].grade= "B+";
	else if(s[i].percentage >=55)
	   s[i].grade= "B";
	else if(s[i].percentage >=50)
	   s[i].grade= "C";
	else if(s[i].percentage >=45)
	   s[i].grade= "D";
	else if(s[i].percentage >=33)
	   s[i].grade= "E";
	else 
	   s[i].grade= "F";
	
	i++;
	cout<<"\n\n * Record inserted Successfully *";
}

void search()
{
	system("cls");
	cout<<"\n\n\t\t\t * SEARCH RECORD *";
	if(i==0)
	  cout<<"\n\n * No Record Found *";
	else
	{
		int id,found=0;
		cout<<"\n\n Enter Student Id: ";
		cin>>id;
		for(int a=0;a<i;a++)
		{
		   if(id==s[a].id)
		   {
		   		cout<<"\n\n Name : "<<s[a].name;
	            
	            cout<<"\n\n Marks : "<<s[a].total;
	            
	            cout<<"\n\n Percentage : "<<s[a].percentage;
	            
	            cout<<"\n\n Grade : "<<s[a].grade;
	            
	            found++;
			}	
		}
		if(found==0)
		  cout<<"\n\n * Student id not found *";
	}
}

void update()
{
  system("cls");
	cout<<"\n\n\t\t\t * UPDATE RECORD *";
	if(i==0)
	  cout<<"\n\n * No Record Found *";
	else
	{
		int id,found=0;
		cout<<"\n\n Enter Student Id: ";
		cin>>id;
		for(int a=0;a<i;a++)
		{
		   if(id==s[a].id)
		   {
		   	cout<<"\n\n Enter Student Name: ";
		   	cin>>s[a].name;
		    cout<<"\nEnter The marks in Subject 1 out of 100 : ";
	        cin>>s[a].marks1;
	        cout<<"\nEnter The marks in Subject 2 out of 100 : ";
	        cin>>s[a].marks2;
	        cout<<"\nEnter The marks in Subject 3 out of 100 : ";
	        cin>>s[a].marks3;
	        cout<<"\nEnter The marks in Subject 4 out of 100 : ";
	        cin>>s[a].marks4;
	        cout<<"\nEnter The marks in Subject 5 out of 100 : ";
	        cin>>s[a].marks5;
	        s[a].total = s[a].marks1 + s[a].marks2 + s[a].marks3 + s[a].marks4 + s[a].marks5;
	        s[a].percentage = (s[a].total/500) *100;
	        if(s[a].percentage >=85)
	        s[a].grade = "A+";
	        else if(s[a].percentage >=75)
	        s[a].grade= "A";
	        else if(s[a].percentage >=65)
	        s[a].grade= "B+";
	        else if(s[a].percentage >=55)
	        s[a].grade= "B";
	        else if(s[a].percentage >=50)
	        s[a].grade= "C";
	        else if(s[a].percentage >=45)
	        s[a].grade= "D";
	        else if(s[a].percentage >=33)
	        s[a].grade= "E";
	        else 
	        s[a].grade= "F";
	        cout<<"\n\n * Update Record Successfully *";
	        found++;

			   }	
		}
		if(found==0)
		  cout<<"\n\n * Student id not found *";
	}
}

void del() 
{
  system("cls");
	cout<<"\n\n\t\t\t * DELETE RECORD *";
	if(i==0)
	  cout<<"\n\n * No Record Found *";
	else
	{
		int id,found=0;
		cout<<"\n\n Enter Student Id: ";
		cin>>id;
		for(int a=0;a<i;a++)
		{
		    if(id == s[a].id)
		    {
		        for(int m=a;m<i-1;m++)
		        {
		           s[m].id = s[m+1].id;
		           s[m].name = s[m+1].name;
		           s[m].total = s[m+1].total;
		           s[m].percentage = s[m+1].percentage;
		           s[m].grade = s[m+1].grade;
		          
		        }
		        cout<<"\n\n * Record deleted Successfully *";
		        found++;
		        i--;
		        break;
		    }
		}
		if(found == 0)
		  cout<<"\n\n * Student Id Not Found *";
	}	
}

void show()
{
   system("cls");
	cout<<"\n\n\t\t\t * SHOW ALL RECORD *";
	if(i==0)
	  cout<<"\n\n * No Record Found *";
	else
	{
	    for(int a=0;a<i;a++)
	    {
	        cout<<"\n\n Student Id: "<<s[a].id;
	        cout<<"\n\n Name: "<<s[a].name;
	        cout<<"\n\n Total Marks: "<<s[a].total;
	        cout<<"\n\n Percentage: "<<s[a].percentage<<"%";
	        cout<<"\n\n Grade: "<<s[a].grade;
	        cout<<"\n\n * ";
	    }
	}
}

main()
{
	p: //label
	system("cls"); //clear previous screen
	int choice;
  //creating menu
	cout<<"\n\n\t\t\t * STUDENT MANAGEMENT SYSTEM *";
	cout<<"\n\n 1. Insert Record";
	cout<<"\n\n 2. Search Record";
	cout<<"\n\n 3. Update Record";
	cout<<"\n\n 4. Delete Record";
	cout<<"\n\n 5. Show Record";
	cout<<"\n\n 6. Exit";
	cout<<"\n\n ENTER YOUR CHOICE -> ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			insert();
			break;
		case 2:
		    search();
			break;
		case 3:
		    update();
			break;
		case 4:
		    del();
			break;
		case 5:
		    show();
			break;
		case 6:
			exit(0); 
		default:
			cout<<"\n\n * Invalid Choice *";
	}
	getch(); //get command
	goto p; 
}
