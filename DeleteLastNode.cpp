#include <iostream>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};

Node* removeLastNode(struct Node* head)
{
     if (head == NULL || head->next == NULL) {
        delete head;
        return NULL;
    }

    Node* curr = head;
    Node* prev = NULL;

    while (curr->next != NULL) {
        prev = curr;
        curr = curr->next;
    }

    delete curr;
    prev->next = NULL;

    return head;
}

void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node = new Node;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
int main()
{
	Node* head = NULL;
	push(&head, 8);
	push(&head, 28);
	push(&head, 19);
	push(&head, 21);
	push(&head, 12);

	head = removeLastNode(head);
	for (Node* temp = head; temp != NULL; temp = temp->next)
		cout << temp->data << " ";

	return 0;
}
