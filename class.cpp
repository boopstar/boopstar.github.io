class base{
  public:
  int a,b;
  void get_data(){
    cout<<a<<b<<endl;
    cin>>a>>b;
  }
};

class child: public base{
  public:
  void sum(){
    cout<<a+b;
  }
};

class child1:public child{
  public:
  void sum(){
    cout<<a+b;
  }
};

class base1{
};

class base2{
};

class child3:public base1,public base2{
  public:
  void sum(){
    cout<<a+b;
  }
};
  
int main(){
  child obj;
  obj.get_data();
  obj.sum();
  return 0;
}
