
//      #Sprinklr

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forword = curr->next;
    reverse(head, forword, curr);
    curr->next = prev;
}

Node *reverseLinkedList(Node *head)
{

    //  recursive solution 1
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}
