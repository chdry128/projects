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
  int main()
  {
  	sandip a1;
  	
  	a1.getdata();
  	
  	a1.EnterData();
  	a1.showdata();
  	a1.Showdetails();
  }
 
