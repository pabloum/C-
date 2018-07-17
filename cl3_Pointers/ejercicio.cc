#include <iostream>

// Linkedlist con flotantes.

using namespace std;

struct Node{

  float value;
  Node* next; // Porque vamos a apuntar a otro flotante y no a otro nodo.
};

Node* pushBack(Node* start, Node* new_node){
  // Toma primer nodo de la lista y agrega uno nuevo al final de ella. (El último estará apuntando a null). COnectar el último con el nuevo elemento y el nuevo último apuntará a null.
  // Recibe el valor inicial y el valor siguiente.
  // recibe nodo inicial y el nuevo nodo que vamos a agregar.
  // retorna el primer nodo de la lista

  Node* next_node = start;

  while (next_node->next != nullptr) {
    next_node = next_node->next;
  }
      // (*start).next    // una opción
  next_node->next = new_node;      // hace lo mismo de arriba
  new_node -> next = nullptr;

  return start;

}

Node* popBack(Node* start){

  Node* node = start;
  Node* previous_node = nullptr;

  while(node->next != nullptr){
    previous_node = node;
    node = node->next;
    if(node->next == nullptr){
      previous_node->next = nullptr;
    }
  }

  return start;
}

Node* removeNote(Node* start, int index){

  if(index==0){
    return start->next;
  }

  Node* found_node = start;
  Node* previous_node = nullptr;

  for(int i=0; i < index; i++){
      previous_node = found_node;
      found_node = found_node->next;
  }

  if (found_node->next != nullptr){
    previous_node->next = found_node->next;
    // found_node = found_node->next;
  }else{
    previous_node->next = nullptr;
  }

  return start;
}

void printList(Node* start){
  Node* next_node;
  for(Node* next_node = start; next_node != nullptr; next_node=next_node->next){
    std::cout << "Node: " << next_node << '\t';
    std::cout << "Value: " << next_node->value << "\t Next: " << next_node -> next <<'\n';
  }
  std::cout << "----------------" << '\n';
}

int main(){
  system("clear");

  // Node A, B, C, D;
  Node A={0.0f, nullptr};
  Node B={1.0f, nullptr};
  Node C={7.0f, nullptr};
  Node D={10.0f, nullptr};

  Node* start = &A;

  start = pushBack(start, &B);
  start = pushBack(start, &C);
  start = pushBack(start, &D);

  // Imprimo que pushBack funcione bien
  cout << "Original list after using several times pushBack" << endl;
  cout << "\n";
  printList(start);

  // Pruebo removeNote y Verifico que removeNote funcione bien
  start = removeNote(start,3);
  cout << "I print after removing a node" << endl;
  cout << "\n";
  printList(start);

  // Vuelvo a meter al Linkedlist el nodo que eliminé con removeNote
  // Luego verifico que sí quedó bien "re-creada" la lista
  start = pushBack(start, &D);
  cout << "I print to re-check that the original list was re-created" << endl;
  cout << "\n";
  printList(start);

  // Pruebo y luego verifico la función popBack
  start = popBack(start);
  cout << "Verification of popBack" << endl;
  cout << "\n";
  printList(start);

  // std::cout << "Tamaño de Node " << sizeof(Node) << '\n';
  return 0;
}
