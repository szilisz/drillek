#include "std_lib_facilities.h"
int main()
{
    double x = 0, sum=0;
    double min = numeric_limits<double>::max();
    double max = numeric_limits<double>::lowest();

    const double m_per_inch=0.0254;
    const double m_per_feet=0.3048;
    const double m_per_cm=0.01;
    vector<double> v;
    char unit=' ';
    cout<<"Enter a number followed by a unit(i,c,f,m)"<<'\n';
   while(cin >> x)
   {
       cin>>unit;

       cout<<"x="<<x<<unit<<'\n';

    if(x<min)
        {min=x;
        cout<<"the smallest number so far is "<<x<<'\n';
        }
    if(x>max)
        {max=x;
        cout<<"the biggest number so far is "<<x<<'\n';
        }
    switch(unit){
            case 'i':
                cout<<x<<"in =" <<m_per_inch*x<<"m"<<'\n';
                sum=sum+m_per_inch*x;
                v.push_back(m_per_inch*x);

                break;

            case 'f':
                cout<<x<<"ft =" <<m_per_feet*x<<"m"<<'\n';
                sum=sum+m_per_feet*x;
                v.push_back(m_per_feet*x);
                break;

            case 'c':
                cout<<x<<" cm = " <<x*m_per_cm<<"m"<<'\n';
                sum=sum+x*m_per_cm;
                v.push_back(x*m_per_cm);
                break;

            case 'm':
                sum=sum+x;
                v.push_back(x);
                break;

            default:
            cout<<"I dont recognize this unit :( ";
    }

   }
   cout<<endl;
   cout<<"min="<<min<<endl;
   cout<<"max="<<max<<endl;
   cout<<"sum in m="<<sum<<endl;
for(int i=0;i<v.size();i++)
cout<<v[i]<<"m ";
   return 0;
}
