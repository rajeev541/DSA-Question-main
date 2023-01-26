//      #Amazaon       #Adobe   #GoldmanSach    #Oracle

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

Node *removeDuplicates(Node *head)
{
    if(head == NULL)
        return NULL;
    
    Node *curr = head;
    while(curr != NULL)
    {
        Node *temp = curr->next;
        Node *prev = curr;
        while(temp != NULL)
        {
            
			if(temp->data == curr->data)
            {
                prev->next = temp->next;
                Node *ptr = temp;
                delete ptr;
                temp = prev->next;
            }
            else{
                temp = temp->next;
                prev = prev->next; 
            }
        }
        curr = curr->next;
    }
	return head;
}