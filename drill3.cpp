#include "std_lib_facilities.h"
int main()
{
    cout<<"Enter the name of the person you want to write!"<<'\n';
    string first_name;
    cin>>first_name;
    cout<<"Please enter your friends age! "<<'\n';
    int age;
    cin>>age;
    if(age<=0 || age>=110)
        simple_error("You're kidding! ");

    char friend_sex;
    string mutual_friend;
    cout<<"Please enter the mutual friends name!"<<'\n';
    cin>>mutual_friend;
    cout<<"Please enter the mutual friends gender (m or f)"<<'\n';
    cin>>friend_sex;


    cout<<"Dear, "<<first_name<<"!"<<'\n';
    cout<<endl;
    cout<<"How are you? I'm fine. I miss you. We haven't met since highschool ended. "<<'\n';
    cout<<"Have you seen "<<mutual_friend<<" lately?"<<'\n';
    if(friend_sex=='m')
        cout<<"Please ask him to call me! "<<'\n';
    if(friend_sex=='f')
        cout<<"Please ask her to call me! "<<'\n';
    cout<<"I hear you just had a birthday and you are "<<age<<" years old."<<'\n';
    if(age<12)
        cout<<"Next year you will be "<<age+1<<'\n';
    if(age==17)
        cout<<"Next year you will be able to vote!"<<'\n';
    if(age>70)
        cout<<"I hope you are enjoying retirement!"<<'\n';
        cout<<"Yours sincerely, "<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"Szili <3";


    keep_window_open();
    return 0;

}
