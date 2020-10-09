#include "std_lib_facilities.h"

int main(){
try {
	cout<<" 1. Success!\n";
	cout<<" 2. Success!\n";
	cout<<" 3. Success!\n";
	cout<<" 4. Success!"<<"\n";
	int res=7;
	vector<int> v(10);
	v[5]=res;
	cout<<" 5. Success!\n";

	vector<int> v1(10);
    v1[5]=7;
    if (v1[5]==7)
    cout<<" 6. Success!\n";

	if (5!=3)
    cout<<" 7. Success!\n";
    else cout<<"Fail!\n";

	bool c=false;
	if(!c)
    cout<<" 8. Success!\n";
    else cout<<"Fail!\n";

	string s="ape";
	bool c1="fool">s;
	if(c1)
    cout<<" 9. Success!\n";

	string s1="ape";
	if(s1!="fool")
    cout<<"10. Success!\n";

	string s2="ape";
	if (s2!="fool")
    cout<<"11. Success!\n";

	string s3="ape";
	if(s3!="fool")
    cout<<"12. Success!\n";

	vector<char> v2(5);
	for (int i=0; i<v2.size();++i);
	cout<<"13. Success!\n";

	vector<char> v3(5);
    for(int i=0; i<=v3.size();++i);
    cout<<"14. Success!\n";

	string s4="15. Success!\n";
	for (int i=0;i<6;++i);
	cout<<s4;

	if(true)
    cout<<"16. Success!\n";
    else cout<<"Fail!\n";

	int x=2000;
	int c2=x;
	if(c2==2000)
    cout<<"17. Success!\n";

	string k="18. Success!\n";
	for (int i=0;i<10;++i);
	cout<<k;

	vector<int> v4(5);
	for (int i=0;i<=v4.size();++i);
	cout<<"19. Success!\n";

	int i=0;
	int j=9;
	while(i<10)++i;
	if (j<=i)
    cout<<"20. Success!\n";

	int x1=2;
	double d=5/(x1-1);
	if(d==2*x1+1)
    cout<<"21. Success!\n";

	string s5="22. Success!\n";
	for(int i=0;i<=10;++i);
	cout<<s5;

	int i1=0;
	int j1=0;
	while(i1<10) ++i1;
	if(i1>j1)
    cout<<"23. Success!\n";

	int x2=4;
	double d1=5/(x2-3);
	if(d1=2*x2/1+1)
    cout<<"24. Success!\n";
	cout<<"25. Success!\n";
	keep_window_open();
	return 0;
}
catch(exception& e) {
	cerr<<"error: "<<e.what()<<'n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr<<"Oops:unknown exception!\n";
	keep_window_open();
	return 2;
}
}
