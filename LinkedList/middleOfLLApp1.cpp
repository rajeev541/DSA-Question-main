
//      #Media Tek

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
int getLength(Node* head)
{
    int len = 0;
    while(head !=NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

Node *findMiddle(Node *head) {
    // Write your code here
    int len = getLength(head);
    int ans = len/2;
    Node* temp = head;
    int  i =0;
    while(i < ans)
    {
        temp = temp->next;
        i++;
    }
    return temp;
    
}