listNode* insert_at_head( listNode* head, int data){
    
listNode *temp = (listNode *)malloc(sizeof(listNode));
    temp->value = data;
    temp->next = head;
    head = temp;
    return head;
}
