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

ostream& print_arrey(ostream& os,int* a, int n){
	for(int i=0;i<n;i++){
		os<<a[i]<<endl;
	}
	return os;
}

ostream& print_vector(ostream& os, vec& v){
	for(int i=0;i<v.size();i++){
		os<<v.get(i)<<endl;
	}
	return os;
}
void copy(vec& v1, vec& v2){
	int temp;
	for(int i=0;i<v1.size();i++){
		temp=v1.get(i);
		v2.set(i,temp);
	}
}

int main()
try{
	int x=7;
	int* p1;
	p1=&x;
	cout<<p1<<" "<<*p1<<endl;
	int* p2 = new int[7]{1,2,4,8,16,32,64};
    cout<<"value of p2: "<<p2<<endl;
    cout<<"second value:"<<&p2[1]<<endl;

    print_arrey(cout,p2,7);

    int* p3 = p2;
    p2=p1;
    p2=p3;
    cout<<"value of p1: "<<p1<<endl;
    print_arrey(cout,p1,7);
    cout<<"value of p2: "<<p2<<endl;
    print_arrey(cout,p2,7);

	delete[] p2;

	int y[10]{1,2,4,8,16,32,64,128,256,512};
	p1 = y;
	int z[10];
	p2 = z;
	p1 = p2;
	
	vec v1(10);
	int q=1;
	for(int i=0;i<v1.size();i++){
		v1.set(i,q);
		q=q*2;
	}
	cout<<"v1: "<<endl;
	print_vector(cout,v1);
	vec v2(10);
	copy(v1,v2);
	
	cout<<"v2: "<<endl;
	print_vector(cout,v2);



	return 0;
}catch(exception& e){
	cerr<<"Error: "<<e.what()<<endl;
}