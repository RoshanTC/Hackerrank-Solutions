/*Write a Person class with an instance variable, , and a constructor that takes an integer,intial age, as a parameter.
The constructor must assign initial age to age after confirming the argument passed as initial age is not negative;
if a negative argument is passed as initial age, the constructor should set age to 0 and print Age is not valid,
setting age to 0.. In addition, you must write the following instance methods:

yearPasses() should increase the age instance variable by 1.
amIOld() should perform the following conditional actions:
If age<13, print You are young..
If  age>=13 and age<18, print You are a teenager..
Otherwise, print You are old..*/
using namespace std;
#include <iostream>

class Person
{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
};
Person::Person(int initialAge)
{
   if(initialAge>=0) age = initialAge;
   else 
   { 
     cout<<"Age is not valid, setting age to 0."<<endl; 
     age=0;
   }
}
void Person::amIOld()
{
   if(age<13) cout << "You are young." << endl;
   else if(age>=13 && age<18) 
           cout<<"You are a teenager."<<endl;
   else cout << "You are old."<<endl;
}
void Person::yearPasses()
{
   age++;
}
int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
