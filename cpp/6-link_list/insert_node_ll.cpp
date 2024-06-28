#include <iostream>
using namespace std;

struct ListNode {
    int data;
    ListNode *next;

    ListNode(int val) {
        data = val;
        next = nullptr;
    }
};

ListNode *atBegin(ListNode *head, int val) {
    if (head == nullptr)
        return new ListNode(val);

    auto newNode = new ListNode(val);
    newNode->next = head;
    head = newNode;

    return head;
}

ListNode *atEnd(ListNode *head, int val) {
    if (head == nullptr)
        return new ListNode(val);

    auto last = head;
    while (last->next != nullptr) {
        last = last->next;
    }
    last->next = new ListNode(val);

    return head;
}

int main() { return 0; }