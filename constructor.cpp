#include<bits/stdc++.h>
using namespace std;

class A {
	int value;
public:
	A(int x){
		value=x;
	}
	void display(){
		cout<<value<<endl;
	}
};

int main()
{
    A obj_a(10);  // constructor value assign

    obj_a.display();
    return 0;
}
