/*
1) In designing a game, we decide we want to have monsters, because everyone likes fighting monsters. Declare a struct that represents your monster. The monster should have a type that can be one of the following: an ogre, a dragon, an orc, a giant spider, or a slime. If you’re using C++11, use an enum class for this. If you’re using an older compiler, use an enumeration for this.

Each individual monster should also have a name (use a std::string), as well as an amount of health that represents how much damage they can take before they die. Write a function named printMonster() that prints out all of the struct’s members. Instantiate an ogre and a slime, initialize them using an initializer list, and pass them to printMonster().

Your program should produce the following output:

This Ogre is named Torg and has 145 health.
This Slime is named Blurp and has 23 health.
*/
#include <iostream>
#include <string>

using namespace std;

enum class MonsterType {
  /* con el class tengo que poner MonsterType:: cada vez que vaya a hacer referencia a algo de esto. Sin el class basta con usar alguno de los tipos definidos. */
  OGRE,
  DRAGON,
  ORC,
  GIANT_SPIDER,
  SLIME,
};

struct Monster {
  MonsterType type;
  string name;
  int health;
};

string getMonsterType (Monster monster){
  if (monster.type == MonsterType::OGRE) {
    return "Ogre";
  } else if (monster.type == MonsterType::DRAGON) {
    /*Es necesario el MonsterType:: porque cuando definí enum usé clase. No sería necesario este MonsterType:: si no hubiese puesto el class en la definición del enum. */
    return "Dragon";
  } else if (monster.type == MonsterType::ORC) {
    return "Orc";
  } else if (monster.type == MonsterType::GIANT_SPIDER) {
    return "Giant spider";
  } else if (monster.type == MonsterType::SLIME) {
    return "Slime";
  } else {
    return "Unknown";
  }
}

void printMonster(Monster monster){
  cout << "This " << getMonsterType(monster) << " is named " << monster.name << " and has " << monster.health << " health." << '\n';
}

int main(int argc, char const *argv[]) {

  Monster a = {MonsterType::OGRE, "Voldemort", 144};
  Monster b = {MonsterType::SLIME, "Grindelwald", 23};

  printMonster(a);
  printMonster(b);


  return 0;
}
