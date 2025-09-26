#include<iostream>
#include<string>
using namespace std;

class Read 
{
	int days , pages;
	public:
		Read ()
		{
			days = pages = 0;
		}
		
		void input()
		{
			cout<<"How many days have you read "<<endl;
			cin>>days;
			cout<<"How many pages have you read "<<endl;
			cin>>pages;
		}
		
		void operator += (Read r)
		{
			days = this->days + r.days;
			pages = this->pages + r.pages;
		}
		
		void show()
		{
			cout<<"You have read "<<pages<<" pages in "<<days<<" days "<<endl;
		}
};
int main()
{
	Read r1,r2;
	r1.input();
	r2.input();
	cout<<"Reading 1: "<<endl;
	r1.show();
	cout<<"Reading 2: "<<endl;
	r2.show();
	
	r2 += r1;
	cout<<"Total Reading: "<<endl;
	r2.show();
	
	
}