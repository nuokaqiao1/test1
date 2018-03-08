#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Base1
{
	public:
		Base1(){}
		Base1(int b1);

	private:
		int m_b1;
};
class Base2 
{
	public:
		Base2(){}
		Base2(int b2);
	private:
		int m_b2;
};
class Derived : public Base1,public Base2
{
	public:
		Derived(){}
		Derived(int b1,int b2,int d);
	private:
		int m_d;
};
Base1::Base1(int b1):m_b1(b1)
{
	cout << "constructor1" << endl;
}
Base2::Base2(int b1):m_b2(b1)
{
	cout << "constructor2" << endl;
}
Derived::Derived(int b1,int b2,int d):Base1(b1),Base2(b2),m_d(b1)
{
	cout << "Derived" << endl;
}
int main()
{
	Derived derived(1,2,3);
	return 0;
}

