#include<bits/stdc++.h>
using namespace std;

class A{
private:
	int weight;
public:
	A(int x=0){
		weight=x;
	}

	void display(){
		cout<<"weight = "<<weight<<endl;
	}

    A operator+(A w){
        A temp;
        temp.weight = weight + w.weight;
        return temp;
    }

};

int main()
{
    int a=10,b=20,c;
    c=a+b;

    cout<<"Total = "<<c<<endl;

    A obj1(100);
    A obj2(90);
    A obj3;

    obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}
