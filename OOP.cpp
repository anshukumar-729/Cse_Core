#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee
{
   virtual void someAbstractFunction() = 0; // pure virtual funtion which mean the class which
   // is using this function must have contain its implementation
};

class Employeee : AbstractEmployee
{
private: // by defalult member is private // only accessible by own member functions
   int PrVar;

public: // all can access even outside the class
   int Pubvar;
   string Name;
   void setPrVar(int prvar)
   { // setter
      if (1)
      {
         ProVar = prvar;
      }
   }

   int getPrVar()
   { // getter
      if (1)
      {
         return PrVar;
      }
   }

   virtual void setName(string name)
   { // virtual for cheching wether the child class containing this function
      Name = name;
   }

   Employeee(string name)
   { // constructor for base class employee
      Name = name;
   }

   void someAbstractFunction()
   {
      if (1)
      {
         cout << "some type of abstract function implemented here which is hidden for user"
              << "\n";
      }
   }

protected: // only child and own member function can acess
   int ProVar;
};

class Teacher : Employeee
{ // child class of employee
public:
   string Work;
   Teacher(string name, string work)
       : Employeee(name) // we can destrbute some var to base class in constructor
   {
      Work = work;
   }
   void setSomeThing()
   {
      ProVar = 2; // we can use ProVar var here
      // we cannot access PrVar here
   }
   void setName(string name)
   {
      Name = name;
   }
};

// friend class and friend function
class c1{
   private :
   int a;
   public:
   int b;
   friend class c1_friend; // can be written in private part
   friend void c1_friend::init(c1 obj); // friend function
};
class c1_friend{
   public:
      void init(c1 obj1){
         obj1.a=5; // accessing private members using friend class or function
      }
};

int main()
{

   Employeee e1 = Employeee("anshu");

   Teacher t1 = Teacher("anshu", "study");

   return 0;
}
