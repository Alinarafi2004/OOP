#include<iostream>
#include<string>
using namespace std;
class Patient{
    private:
string Name;
int age;
string illness;
public:
Patient(){
    Name = "noName";
    age = 678;
    illness = "not mentioned";
}

Patient(string n,int a,string i){
    Name = n;
    age = a;
    illness = i;
}
void set_name(string n){
    Name=n;
}
void set_age(int a){
    age=a;
}
void set_illness(string i){
    illness=i;
}
string get_name(){
    return Name;
}
int get_age(){
    return age;
}
string get_illness(){
    return illness;
}
void print(){
cout<<"Name " << Name << endl;
cout<<"age " << age << endl;
cout<<"illness " << illness << endl;

}
~Patient(){
    cout<<"called destructor";
}
};
int main(){
Patient p1("ali",78,"sugar");
p1.print();
}