#include "Linked_list.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::append(int value) {
    Node* newNode = new Node{value, nullptr};
    if (!head) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

std::string LinkedList::updateNodeData(int position, int newValue) {
    if (position <= 0) {
        return "Invalid position.";
    }

    Node* current = head;
    int currentIndex = 1;

    while (current) {
        if (currentIndex == position) {
            current->data = newValue;
            return "Node updated successfully.";
        }
        current = current->next;
        currentIndex++;
    }

    return "Position is out of range.";
}

void LinkedList::display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

bool LinkedList::search(int value) {
    Node* temp = head;
    while (temp) {
        if (temp->data == value) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

std::string LinkedList::deleteByPosition(int position) {
    if (position <= 0 || !head) {
        return "Invalid position.";
    }

    if (position == 1) { // Delete the first node
        Node* temp = head;
        head = head->next;
        delete temp;
        return "Node deleted successfully.";
    }

    Node* current = head;
    int currentIndex = 1;

    while (current->next && currentIndex < position - 1) {
        current = current->next;
        currentIndex++;
    }

    if (!current->next) {
        return "Position is out of range.";
    }

    Node* nodeToDelete = current->next;
    current->next = nodeToDelete->next;
    delete nodeToDelete;

    return "Node deleted successfully.";
}

int LinkedList::countNodes() {
    int count = 0;
    Node* temp = head;
    while (temp) {
        count++;
        temp = temp->next;
    }
    return count;
}

std::string LinkedList::deleteByValue(int value) {
    bool found = false;
    while (head && head->data == value) { // Delete all occurrences at the start
        Node* temp = head;
        head = head->next;
        delete temp;
        found = true;
    }

    Node* current = head;
    while (current && current->next) {
        if (current->next->data == value) {
            Node* nodeToDelete = current->next;
            current->next = nodeToDelete->next;
            delete nodeToDelete;
            found = true;
        } else {
            current = current->next;
        }
    }

    return found ? "Value deleted successfully." : "Value not found in the list.";
}

Node* LinkedList::findMiddle() {
    if (!head) return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}
