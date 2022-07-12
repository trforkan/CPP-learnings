#include<bits/stdc++.h>
using namespace std;

class A {
public:
	int val=100;

	void display(){
		cout<<"I'm in class A and the value is "<<val<<endl;
	}
};

class B: public A {
public:
	void displayB(){
		cout<<"I'm in class B and the value is "<<val<<endl;
	}
};

int main()
{
    B obj;
    obj.display();
    return 0;
}
