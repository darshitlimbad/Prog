#include<iostream.h>
#include<conio.h>

class A{
	public:
	int a;
	int* b;
	A(int x) : a(x){
		b=&a;
	}

	void put() {
		cout << a << *b << endl;
	}
};

void main() {
	clrscr();
	A a1(10),*p;
	p=&a1;
	cout << "a1.a = " << a1.a << endl;
	cout << "p->a = " << p->a << endl;
}