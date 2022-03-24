class A
{
public:
int num1;
};

class B: virtual public A
{
public:
int num2;
};

class C: virtual public A
{
public:
int num3;
};

class D: public B, public C
{
public:
void sum();
cout<<num1+num2+num3;
};

int main()
{
  D obj;
  obj.num1=10;
  obj.num2=20;
  obj.num3=30;
  obj.sum();
}
