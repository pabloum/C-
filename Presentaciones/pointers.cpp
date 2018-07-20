#include <iostream>

struct Node {
    float value;
    Node* next;
};

Node* pushBack(Node* start, Node* new_node) {
    Node* next_node = start;
    while (next_node->next != nullptr) {
        next_node = next_node->next;
    }

    next_node->next = new_node;
    new_node->next = nullptr;
    return start;
}

Node* removeNode(Node* start, int index) {
    Node* found_node = start;
    Node* previous_node = nullptr;
    for (int i = 0; i < index; i++) {
        previous_node = found_node;
        if (previous_node == nullptr) {
            return start;
        }
        found_node = found_node->next;
    }
    if (previous_node != nullptr) {
        previous_node->next = found_node->next;
        return start;
    } else {
        return start->next;
    }
}

void printList(Node* start) {
    for (Node* next_node = start; next_node != nullptr; next_node = next_node->next) {
        std::cout << "Nodo: " << next_node <<
                     " Valor: " << next_node->value <<
                     " Next: " << next_node->next << std::endl;
    }
    std::cout << "------------------" << std::endl;
}

int main() {
    Node A = {0.0f, nullptr};
    Node B = {1.0f, nullptr};
    Node C = {7.0f, nullptr};
    Node D = {10.0f, nullptr};

    Node* start = &A;

    start = pushBack(start, &B);
    start = pushBack(start, &C);
    start = pushBack(start, &D);

    printList(start);

    start = removeNode(start, 1);

    printList(start);

    start = removeNode(start, 0);

    printList(start);

    return 0;
}
