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

int main()
{
    
    A obja;
    B objb;

    obja.display();
    objb.display();
    return 0;
}
