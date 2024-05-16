#include "linked_list.h"
#include <iostream>

// 링크드리스트 생성자
LinkedList::LinkedList() : head_(nullptr), size_(0){};
// 링크드리스트 소멸자
LinkedList::~LinkedList()
{
    Node *current = head_;
    while (current != nullptr)
    {
        Node *next = current->next_;
        delete current;
        current = next;
    }
    void LinkedList::print()
    {
        }
}