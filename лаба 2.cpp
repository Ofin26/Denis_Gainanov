#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int N=10,y=0,x=0,x0=0,y0=0,n=0,b=0,c=0;
	int X[N];
	int Y[N];
	for (int i=0;i<=N;i++){
	cin>>X[i];
	}
	for (int i=0;i<=N;i++){
		cin>>Y[i];
	}
	for (int i=0;i<N;i++){
		x0=(X[i]-X[i+1]);
		y0=(Y[i]-Y[i+1]);
		n=sqrt((x0*x0)+(y0*y0));
		if (n>b){
			b=n;
			c=i;
		}
		else{
			c=0;
		}
	}
	cout<<X[c]<<Y[c];
	return 0;
	
	
}