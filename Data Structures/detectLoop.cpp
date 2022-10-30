// Author : Divyansh Rai
// function which will detect whether linked list has loop or not

bool detectLoop(Node* head)
    { if(head==NULL || head->next==NULL)
    return 0;
    
    Node*s=head;
    Node*f=head;
    while(f!=NULL  && f->next!=NULL)
    {s=s->next; 
        f=f->next->next;
        if(s==f)
        break;
        
    }
    if(s==f)
    return 1;
    else
    return 0;
    }
