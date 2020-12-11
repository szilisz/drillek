#include "std_lib_facilities.h"

vector<int> gv{1,2,4,8,16,32,64,128,256,512};

void f(vector<int> v){
	vector<int> lv(10);
	lv=gv;
	for(int i : lv){
		cout<<i<<endl;
	}
	vector<int> lv2;
	lv2=v;
	for(int i : lv2){
		cout<<i<<endl;
	}
}

int main()
try{
	f(gv);
	vector<int> vv {1,2,6,24,120,720,5040,40320,362880,3628800};
	f(vv);

	return 0;

}catch(exception& e){
	cerr<<"Error: "<<e.what()<<endl;
	return 1;
}