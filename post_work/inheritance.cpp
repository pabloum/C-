#include <iostream>
using namespace std;

class Weapon
{
    public:
      virtual void features()
         { cout << "Loading weapon features.\n"; }  
};

class Bomb : public Weapon
{
    public:
       void features()
         { cout << "Loading bomb features.\n"; }
};

class Gun : public Weapon
{
    public:
       void features()
         { cout << "Loading gun features.\n"; }
};

class Loader
{
   public:
     void loadFeatures(Weapon *weapon)
     {
        weapon->features();
     }
};

int main()
{
    Loader *l = new Loader;
    Weapon *weapon;

    Weapon w;
    Bomb b;
    Gun g;

    weapon = &w;
    l->loadFeatures(weapon);

    weapon = &b;
    l->loadFeatures(weapon);

    weapon = &g;
    l->loadFeatures(weapon);

    return 0;
}
