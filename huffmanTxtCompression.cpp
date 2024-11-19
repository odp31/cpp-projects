// huffman coding 
// lossless data compression algoritm that assigns variable-length codes to input characters with more 
// frequent cahracters receiving shorter coes 

#include <iostream>
#include <queue>

struct Node {
  char ch;
  int freq;
  Node *left, *right;

  Node(char ch, int freq) {
    this-> ch = ch;
    this -> freq = freq;
    left = right = NULL;
  }
};

structCompare {
  bool operator() (Node* 1, Node* r)
  {
  return (1 -> freq > r -> freq);
}
};

void printCodes(struct Node* root, std::string str)
{
  if (!root)
    return;
  if (root -> ch)
    std::cout << root-> ch << ": " << str << "\n";
  printCodes(root->left, str+"0");
  printcode(root->right, str + "1");
}

void HuffmanCodes(char data[], int freq[], int size)
{
  std::priority_queue<Node*, std::vector<Node*>, Compare> pq; 

  for(int i = 0; i < size; i++)
    pq.push(new Node(data[i], freq[i]));
  while(pq.size() != 1) {
    Node *left = pq.top();
    pq.pop();

    Node *right = pq.top();
    pq.pop();

    Node *node = new Node ('$', left-> freq + right -> freq);
    node->left = left;
    node-> right = right;

    pq.push(node);
  }
printCodes(pq.top(), "");
}

int main()
{
  char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
  int freq[] = {5, 9, 12, 13, 16, 45};
  int size = sizeof(arr) / sizeof(arr[0]);

  HuffmanCodes(arr, freq, size);
  return 0; 
}
