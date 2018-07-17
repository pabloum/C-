enum Character{
  WARRIOR,
  MAGE,
  ARCHER,
};

float getDamper (const Character character){
  if(character == Character::WARRIOR){
    return 10.0f;
  }else if(character == Character::MAGE){
    return 20.0f;
  }else{
    return 5.0f;
  }
}
