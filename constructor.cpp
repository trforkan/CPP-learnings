#include<bits/stdc++.h>
using namespace std;

class A {
	int value;
public:
	A(int x){ // parameterized constructor
		value=x;
	}

	A(A & obj_a){ // copy constructor
		value=obj_a.value;
	}

	void display(){
		cout<<value<<endl;
	}
};

int main()
{
    A obj_a(10);  

    A obj2(obj_a);// constructor value assign

    obj2.display();
    return 0;
}
