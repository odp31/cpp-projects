// linear data structure where elements are not stored in contiguous memory locations
// instead each element (a node) contains data and a pointer to next node in list 

// basic structure of node 
struct Node {
  int data;
  Node* next;
};

// Operations
// insertion 

// at the beginning
void insertAtBeginning(Node** head_ref, int new_data)
{
  // allocate node
  Node* new_node = new Node();

  // put in data
  new_node->data = new_data;

  // makenext of new node as head 
  new_node->next = (*head_ref);

  // move the head to point to new node
  (*head_ref) = new_node;
}

// insertion at end
void insertAtEnd(Node** head_ref, int new_data)
{
  // allocate node
  Node* new_node = new Node();
  // put in data
  new_node->data = new_data;
  new_node-> next = NULL;
// if empty, make new node as head
  if(*head_ref == NULL){
    *head_ref = new_node;
    return;
  }
  // traverse till last node
  Node* last = *head_ref;
  while(last -> next != NULL)
    last = last->next;
  // change next of last node
  last -> next = new_node;
}

// insertion after a given node 
void insertAfter(Node* prev_node, int new_data) {
  // check if given prev_node is NULL
  if(prev_node == NULL){
    std::cout << "the given previous node cannot be NULL";
    return;
  }
  // allocate new node
  Node* new_node = new Node();

  // put in data
  new_node -> data = new_data;

  // make next of new node as next of prev node
  new_node->next = prev_node->next;

  // make next of prev_node as new_node
  prev_node -> next = new_node;
}

// deletion 
// at beginning
void deleteNode(Node** head_ref)
{
  if(*head_ref == NULL)
    return;
  Node* temp = *head_ref;
  *head_ref = temp-> next;
  delete temp;
}

// at given positon 
void deleteNodeAtPosition(Node** head_ref, int position)
{
  // if linked list is empty
  if(*head_ref == NULL)
    return;
  // if position is 0, delete first node
  if(position == 0) {
    Node* temp = *head_ref;
    *head_ref = temp-> next;
    delete temp;
    return;
  }
  // find previous node of node to be deleted 
  Node* prev = *head_ref;
  int count = 0;
  while(prev != NULL && count < position - 1) {
    prev = prev -> next;
    count++;
  }
  // if position is more than number of nodes
  if (prev == NULL)
    return;
  // node to be deleted is in between them
  Node* next = prev-> next;
  prev-> next = next-> next;

  // delete node
  delete next;
}

// traversal 
void printList(Node* node)
{
  while (node != NULL) {
    std::cout << node->data << "";
    node = node -> next;
  }
}

