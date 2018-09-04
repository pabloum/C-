#include <iostream>

using namespace std;

class Node {
private:
public:
  int value;
  Node* next;

  Node (int value, Node* next) : value(value), next(next) {}
  // virtual ~Node () {delete next;}
};

void pushBack (Node* start, Node* element) {
  Node* middleNode = start;
  while (middleNode->next != nullptr){
    middleNode = middleNode->next;
  }
  middleNode->next = element;
}

void printList (Node* start) {

  for (Node* middleNode = start; middleNode != nullptr; middleNode = middleNode->next) {
    std::cout << "Node " << middleNode << '\t';
    std::cout << "Value: " << middleNode->value << "; Next: " << middleNode->next << '\n';
  }

}

int main(int argc, char const *argv[]) {

  Node A = {1, nullptr};
  Node B = {2, nullptr};
  Node C = {3, nullptr};
  Node D = {4, nullptr};

  Node* start = &A;

  pushBack(start,&B);
  pushBack(start,&C);
  pushBack(start,&D);
  printList(start);
  // std::cout << "Node A: " << A.value << " " << A.next << '\n';


  return 0;
}
