#include<iostream>
class item
{
	int number;
	float cost;
	public:
		void getdata(int a,float b);
		void putdata()
		{
			std::cout<<"Number"<<number<<"\n";
			std::cout<<"Cost"<<cost<<"\n";
			
		}
		
};
void item::getdata(int a , float b)
{
	number = a;
	cost = b;
	
}
int main()
{
	item x;
	cout<<"\n object x"<<"\n";
	x.getdata(100,200.9);
	x.putdata();
	item y;
	cout<<"\n object y"<<"\n";
	y.getdata(500,300.9);
	y.putdata();
	return 0;
}

