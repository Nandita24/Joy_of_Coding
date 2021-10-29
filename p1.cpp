#include <iostream>
using namespace std;

class Singleton
{
  static Singleton *instance;
  int data;

  Singleton(){
    data = 0;
  }

 public:
  static Singleton *getInstance(){
    if(!instance)
      instance = new Singleton;
    return instance;
  }

  int getData(){
    return instance->data;
  }

  void setData(int _data){
    this->data = _data;
  }
};

Singleton *Singleton::instance = 0;

int main(){
  Singleton *s = s->getInstance();
  int x; cin>>x;
  s->setData(x);
  cout << s->getData() << endl;
  Singleton *t = t->getInstance();
  cout << t->getData() << endl;
  return 0;
}

