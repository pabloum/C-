#include <iostream>
#include <string>

using namespace std;

class Simple {

private:
  int nonConst;
  const int isConst;

public:
  Simple(int, int);
  ~Simple();

  void printMembers () {
    std::cout << "Non-const member function was called" << '\n';
    std::cout << nonConst << " " << isConst << '\n';
  }

  void printMembersConst () const {
    std::cout << "Const memeber function was called" << '\n';
    std::cout << nonConst << " " << isConst << '\n';
  }

};

class CellPhone {
private:
  int model;
  string brand;
  string color;

public:
  CellPhone(){}
  CellPhone (int, string, string);
  CellPhone (CellPhone&);
  virtual ~CellPhone ();

  void setModel(int);
  void setBrand(string);
  void setColor(string);

  int getModel();
  string getBrand();
  string getColor();

};
CellPhone::CellPhone (int model, string brand, string color): model(model), brand(brand), color(color) {
}
CellPhone::CellPhone (CellPhone& phone): model(phone.model), brand(phone.brand), color(phone.color) {

}
CellPhone::~CellPhone(){
  std::cout << "Destructor called" << '\n';
}

void CellPhone::setModel(int model){
  this->model = model;
}
void CellPhone::setBrand(string brand){
  this->brand = brand;
}
void CellPhone::setColor(string color){
  this->model = model;
}

int CellPhone::getModel(){
  return model;
}
string CellPhone::getBrand(){
  return brand;
}
string CellPhone::getColor(){
  return color;
}


class CellPhoneVendor {
private:
  CellPhone list[3];

public:
  CellPhoneVendor (CellPhone, CellPhone, CellPhone);
  CellPhoneVendor (CellPhoneVendor&);
  virtual ~CellPhoneVendor ();

  void addCellPhone();
  void removeCellPhone();
  void setPrice();
  int  getPrice();
  void addToStock();
  int  checkStock();
  bool sell();
  void getBrands();
  void getModels();
  void getColors();

};

CellPhoneVendor::CellPhoneVendor (CellPhone a, CellPhone b, CellPhone c){
  list[0] = a;
  list[1] = b;
  list[2] = c;
}
CellPhoneVendor::CellPhoneVendor (CellPhoneVendor& a) : list(a.list){

}
CellPhoneVendor::~CellPhoneVendor (){
  std::cout << "CellPhoneVendor destructor called" << '\n';
}

void CellPhoneVendor::addCellPhone(){

}
void CellPhoneVendor::removeCellPhone(){

}
void CellPhoneVendor::setPrice(){

}
int  CellPhoneVendor::getPrice(){

}
void CellPhoneVendor::addToStock(){

}
int  CellPhoneVendor::checkStock(){

}
bool CellPhoneVendor::sell(){

}
void CellPhoneVendor::getBrands(){

}
void CellPhoneVendor::getModels(){

}
void CellPhoneVendor::getColors(){

}

int main(int argc, char const *argv[]) {

  CellPhone first  (1990, "Mazda",   "Red");
  CellPhone second (1997, "Renault", "Green");
  CellPhone third  (2011, "Hyundai", "Gray");

  CellPhoneVendor list (first,second, third);
  CellPhoneVendor list2 = list;
  return 0;
}








/* Simple obj(1, 2);
const Simple cObj(5, 4);

obj.printMembers();
// obj.printMembersConst();
// cObj.printMembers();
cObj.printMembersConst();

return 0; */

// Exercise number 1
Simple::Simple(int a, int b) :
  nonConst(a), isConst(b){
  std::cout << "Constructor was called. We just created the int " << nonConst << '\n';
}

// Exercise number 2
Simple::~Simple(){
  std::cout << "Destructor was called. We just deleted the int " << nonConst << '\n';
}
