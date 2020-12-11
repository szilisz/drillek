#include "std_lib_facilities.h"

class vec {
		int sz;
		int* elem;
	public:
		vec(int s):sz{s},elem{new int[s]}{
			for(int i=0;i<s;i++)elem[i]=0;
		}

		int size() const {return sz;}

		int get(int n) const {return elem[n];}
		void set(int n, int v) {elem[n]=v;}
		~vec(){delete[] elem;}

};




ostream& print_array10(ostream& os,int* a){
	for(int i=0;i<10;i++){
		os<<a[i]<<endl;
	}
	return os;
}
ostream& print_arrey(ostream& os,int* a, int n){
	for(int i=0;i<n;i++){
		os<<a[i]<<endl;
	}
	return os;
}
ostream& print_vector(ostream& os, vec& v){
	for(int i=0; i<v.size();i++){
		os<<v.get(i)<<endl;
	}
	return os;
}

int main()
try{
	int* x=new int[10];
	print_array10(cout,x);
	delete[] x;

	int* y=new int[10]{100,101,102,103,104,105,106,107,108,109};
	print_array10(cout,y);
	delete[] y;

	int* z=new int[11]{100,101,102,103,104,105,106,107,108,109,110};
	print_arrey(cout,z,11);
	delete[] z;

	int* a=new int[20]{100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,};
	print_arrey(cout,a,20);
	delete[] a;
	cout<<"Vector"<<endl;
	vec v(10);
	int num=100;
	for(int i=0;i<v.size();i++){
		v.set(i,num);
		num++;
	}
	print_vector(cout,v);

    vec ve(11);
    num=100;
    for(int i=0; i<ve.size(); i++){
        ve.set(i,num);
        num++;
    }
    print_vector(cout, ve);

 
    vec vect(20);
    num=100;
    for(int i=0; i<vect.size(); i++){
        vect.set(i,num);
        num++;
    }
    print_vector(cout,vect);

	return 0;

}catch (exception& e) {
    cerr << "Error: " << e.what() << '\n';
    return 1;
}