#include"std_lib_facilities.h"

int main()
try{
    int birth_year=2001;
    int date=2020;
    int age;
    int a, b, c, d;
    double x=1234567.89;
     age=date - birth_year;

    cout<<birth_year<<"\t"<<birth_year<<"\t Decimal"<<endl;
    cout<<birth_year<<"\t"<<hex<<birth_year<<"\t Hexadecimal"<<endl;
    cout<<dec<<birth_year<<"\t"<<oct<<birth_year<<"\t Octal"<<endl;
    

    cout<<dec<<"You are "<<age<<" old in decimal."<<endl;
    cout<<hex<<"You are "<<age<<" old in hexadecimal"<<endl;
    cout<<oct<<"You are "<<age<<" old in octal."<<endl;

    cout<<"Please give 4 number! \n";

    cin >> a >>oct >> b >> hex >> c >> d;
    cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\n' ;

    cout<<defaultfloat<<x<<"\t(defaultfloat)"<<endl;
    cout<<fixed<<x<<"\t(fixed)"<<endl;
    cout<<scientific<<x<<"\t(scientific)"<<endl;

    cout<<'|'<<setw(10)<<"Last name"<<'|'<<setw(20)<<"First name"<<'|'<<setw(20)<<"Phone number"<<'|'<<setw(25)<<"E-mail"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Nagy"<<'|'<<setw(20)<<"Villo"<<'|'<<setw(20)<<"1230120"<<'|'<<setw(25)<<"nagyvillo96@gmail.com"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Balogh"<<'|'<<setw(20)<<"Reka"<<'|'<<setw(20)<<"7382643"<<'|'<<setw(25)<<"balrek00@gmail.com"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Kiss"<<'|'<<setw(20)<<"David"<<'|'<<setw(20)<<"9876332"<<'|'<<setw(25)<<"david_kiss96@gmail.com"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Bradacs"<<'|'<<setw(20)<<"Krisztian"<<'|'<<setw(20)<<"1234441"<<'|'<<setw(25)<<"kriszkriszkrisz@gmail.com"<<'|'<<endl;
    cout<<'|'<<setw(10)<<"Korch"<<'|'<<setw(20)<<"Marta"<<'|'<<setw(20)<<"2367882"<<'|'<<setw(25)<<"martakorch@gmail.com"<<'|'<<endl;
}
catch(exception& e){
    cerr<<"Error: " <<e.what()<<endl;
    return 1;
}