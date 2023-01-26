
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

Node *reverseLinkedList(Node *head)
{

    // Iterativr solution.
    // if list is empty or only one element.
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forword;
    while (curr != NULL)
    {
        forword = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forword;
    }
    return prev;
}
