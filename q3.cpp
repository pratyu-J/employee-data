#include<stdio.h>
#include<iostream>
using namespace std;
class employee
{
    string fname;
    string lname;
    int monthly;
    public:
    employee()
{
    fname="";
    lname="";
    monthly=0;
}

void setfname()
{
    cout<<"enter name\n";
    cin>>fname;
}
string getfname()
                 {
                   return fname;

                 }
void setlname()
{
    cout<<"\nenter last name\n";
    cin>>lname;
}
string getlanme()
{
    return lname;
}
void setmonth()
{
  cout<<"enter salary\n";
  cin>>monthly;

}
int getmonth()
{
    return monthly;
}

void dispYearly()
{
    cout<< monthly*12;
}
void raise()
{

    monthly=monthly+(0.1*monthly);
}
}emp1,emp2;

void compare(employee e1,employee e2)
{
    if(e1.getmonth()>e2.getmonth())
        cout<<e1.getmonth();
    else
        cout<<e2.getmonth();
}

int main()
{
    emp1.setfname();
    emp2.setfname();
    emp1.setlname();
    emp2.setlname();
    emp1.setmonth();
    emp2.setmonth();
    compare(emp1,emp2);
    raise();
    dispYearly();
    return 0;
}



