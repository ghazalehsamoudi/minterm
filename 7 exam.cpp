#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int m=0,aval=0;
	for(int a=1000;a<=9999;a++){
		m=0;
		for(int n=1;n<=a;n++){
			if(a%n==0){
			   ++m;
			   //cout<<"m="<<m<<'\t';
		    }
		}
		//cout<<m<<'\t';
		    if(m==2){
		    //tedade adad aval
		    ++aval;
		    cout<<"a="<<a<<'\t';
		    //cout<<"aval="<<aval<<'\t';
		    }
	 }
	 cout<<endl;
	cout<<"tedade adad aval:"<<aval; 
}
