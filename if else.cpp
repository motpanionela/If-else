#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
	int a,b,c,R;
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
	R=a+b-c;
	cout <<" a = "<<a<<" b = "<< b <<" c = "<< c<<" a+b-c="<<R<<endl ;
	if(R%2==0) {
		
	a=rand()%100;
	b=rand()%100;
	c=rand()%100;
		cout <<" a = "<<a<<" b = "<< b <<" c = "<< c<<" a+b-c="<<R<<endl ;	
	}
	else {
	a=rand()%100+(-1);
	b=rand()%100+(-1);
	c=rand()%100+(-1);
		cout <<" a = "<<a<<" b = "<< b <<" c = "<< c<<" a+b-c="<<R <<endl;	
	}
	if(a>100) {
		
	b=rand()%100+100;
	c=rand()%100+100;
			cout <<" b = "<< b <<" c = "<< c<<endl ;
	}
	if( b < 100) {
		a=rand()%100+100;
	cout <<" a = "<< a<<endl;
		
	}
	if( c < a) {
		c=rand()%100+50;
		cout <<" c = "<< c<<endl;
	}
a=rand()%100;
	b=rand()%100;
	c=rand()%100;
		cout <<" a = "<<a<<" b = "<< b <<" c = "<< c<<" a+b-c="<<R <<endl;	
	if(a%2==0){
		a++;
	}
	if(b%2!=0){
		b++;
	}
	if(c%2==0){
		c++;
	}
		cout <<" a = "<<a<<" b = "<< b <<" c = "<< c<<" a+b-c="<<R <<endl;	
	
	
	return 0;
}
