class Node{
    int a;
    Node *next;
    public:
    Node *head;
        Node(int data)
        {
            a=data;
            next=NULL;
            head=NULL;
        }
        int takeInput()
        {
            int dta=a,length=0;
            Node* tail=NULL;
            while (dta!=-1)
            {
                if(head==NULL)
                {
                    Node *n=new Node(a);
                    head=n;
                    tail=n;
                    length++;
                }
                else
                {
                    Node *n=new Node(dta);
                    tail->next=n;
                    tail=n;
                    length++;
                }
                cin>>dta;
            }
            return length;
            
        }

};