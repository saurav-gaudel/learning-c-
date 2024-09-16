#include<iostream>
using namespace std;
class employee{
protected:
char name[20],company_name[20];
public:
void getdata()
{
cout<<"enter the name and company name of employee"<<endl;
cin>>name>>company_name;
}
};
class manager : public employee
{
    protected:
    int working_hour;
public:
void getmanager()
{
    cout<<"Enter the working hour of manager:"<<endl;
    cin>>working_hour;
}
void showdata(){
    cout<<"The details of manager is:"<<endl;
    cout<<name<<company_name<<working_hour<<endl;
}
};
class teacher:public employee{
    protected:
    char subject[20];
    public:
    void getteacher(){
        cout<<"enter the teacher's subject:"<<endl;
        cin>>subject;
    }

void showdata(){
cout<<"The details of teacher is:"<<endl;
cout<<name<<company_name<<subject<<endl;
}
};
class secretary:public employee{
protected:
float experience;
public:
void getsecretary(){
    cout<<"Enter experience of secretary:"<<endl;
    cin>>experience;
}
void showdata(){
    cout<<"the details of secretary are:"<<endl;
    cout<<name<<company_name<<experience<<endl;
}
};
int main(){
manager m;
teacher t;
secretary s;
cout<<"For manager"<<endl;
m.getdata();
m.getmanager();
m.showdata();
cout<<"for teacher"<<endl;
t.getdata();
t.getteacher();
t.showdata();
cout<<"for secreatary"<<endl;
s.getdata();
s.getsecretary();
s.showdata();




}