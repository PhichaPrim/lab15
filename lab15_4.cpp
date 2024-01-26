#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int R[4]={a,b,c,d};
	int N=sizeof(R)/sizeof(R[0]);
	for(int i=0; i<N ; i++ ){
		int j=rand()%4;
		swap(R[i],R[j]);
	}
	a=R[0];
	b=R[1];
	c=R[2];
	d=R[3];
}
