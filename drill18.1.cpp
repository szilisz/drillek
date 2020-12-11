# include "std_lib_facilities.h"

int ga[10]{1,2,4,8,16,32,64,128,256,512};

void f(int x[], int n){
	int la[10];
	for(int i=0;i<n;i++){
		la[i]=x[i];
		cout<<la[i]<<endl;
	}
	int* p = new int[n];
	for(int i=0;i<n;i++){
		p[i]=la[i];
		cout<<p[i]<<endl;
	}
	delete[] p;
}

int main()
try{
	f(ga,10);
	int aa[10]{1,2,6,24,120,720,5040,40320,362880,3628800};
	f(aa,10);

	return 0;
}catch(exception& e){
	cerr<<"Error: "<<e.what()<<endl;
	return 1;
}