#include<iostream>
using namespace std;
class abhay
{
	public:
		char name[10];
		int qid;
	public:
		void getdata()
		{
			cout<<"enter the name \n";
			cin>>name;
			cout<<"enter the qid \n";
			cin>>qid;
			
		}
		void showdata()
		{
			cout<<name<<"\n";
			cout<<qid<<"\n";
			
		}
	
};
 class sandip:public abhay
 {
 	private:
 		char Sname[10];
 		int Qid;
 	public:
 		void EnterData(){
		 
 		cout<<"enter the student name\n";
 		cin>>Sname;
 		cout<<"enter the Qid of studet\n";
 		cin>>Qid;
 	}
 	void Showdetails()
 	{
 		cout<<Sname<<"\n";
 		cout<<Qid<<"\n";
	 }
 };
class mayank:public abhay
{
	private:
		char Fname[10];
		int Phone;
	public:
		void EnterInfo()
		{
			cout<<"enter father name\n";
			cin>>Fname;
			cout<<"Enter the phone number\n";
			cin>>Phone;
			
		}
		void ShowInfo()
		{
			cout<<Fname<<"\n";
			cout<<Phone<<"\n";
			
		}
};
 
  int main()
  {
  	sandip a1;
  	
  	a1.getdata();
  	
  	a1.EnterData();
  	a1.EnterInfo();
  	a1.showdata();
  	a1.Showdetails();
  	a1.ShowInfo();
  }
 
