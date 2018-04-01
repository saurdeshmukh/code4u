listNode* remove_duplicates(listNode* head){    
    listNode *temp1,*temp2,*temp3;
    if(head==NULL || head->next ==NULL)
    return head;
    temp1=head;
    while(temp1!=NULL && temp1->next !=NULL)
    {
        temp2=temp1;
        while(temp2->next!=NULL)
        {
            if(temp1->value==temp2->next->value)
            {
                temp3=temp2->next;
                temp2->next=temp2->next->next;
                free(temp3);
            }
            else
            temp2=temp2->next;
        }
        temp1=temp1->next;
    }
return head;
}