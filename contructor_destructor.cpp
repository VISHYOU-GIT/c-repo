#include <iostream>
#include <string>
using namespace std;

class Person {
  private:
  string name;
  int age;
  
  public:
  Person(string n, int a): name(n),age(a){
    cout<<"Constructor Called for " << name << endl;
};

void displayInfo(){
  cout << "Name: " << name << ", Age: " << age << endl;
}

~Person(){
  cout << "Destructor called for " << name << endl;
}
};
int main() 
{
   Person person1("Alice", 25);
   Person person2("Bob", 35);
   
   person1.displayInfo();
   person2.displayInfo();
    return 0;
}
