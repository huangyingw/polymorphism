#include <stdio.h>
#include <iostream>
using namespace std;
class Vehicle {
  public:
    virtual void run() const = 0;
    virtual ~Vehicle(){cout<<"desconstructed in base"<<endl;};
    //~Vehicle(){cout<<"desconstructed in base"<<endl;};
};
class Car: public Vehicle {
  public:
    virtual void run() const
    {
      std::cout << "run a car\n";
    }
    ~Car(){cout<<"desconstructed in Car"<<endl;};
};
class Airplane: public Vehicle {
  public:
    virtual void run() const
    {
      std::cout << "run a airplane\n";
    }
    ~Airplane(){cout<<"desconstructed in Airplane"<<endl;};
};
void run_vehicle(const Vehicle* vehicle) {
  vehicle->run();// ����vehicle�ľ������͵��ö�Ӧ��run()
}
int main () {
  Car car;
  Airplane airplane;
  run_vehicle(&car);         // ����Car::run()
  run_vehicle(&airplane);    // ����Airplane::run()
  Vehicle *vehicle=new Car;
  delete vehicle;
  return 0;
}
