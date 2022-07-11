#include<bits/stdc++.h>
using namespace std;

class A {
public:
	void display(){
		puts("Hello A");
	}
};

class B {
public:
	void display(){
		puts("Hello B");
	}
};

void display(int a){
	cout<<a<<endl;
}

void display(double a){
	cout<<a<<endl;
}

int main()
{
    
    A obja;
    B objb;

    obja.display();
    objb.display();

    display(10);
    display(15.50);
    
    return 0;
}
