
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
Node *reverse1(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
        return head;

    Node *chotaHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;
}

Node *reverseLinkedList(Node *head)
{
    // recursive solution 2

    return reverse1(head);
}
