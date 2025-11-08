struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* prev = NULL;   // will hold reversed part
    struct ListNode* curr = head;   // pointer to current node
    struct ListNode* next = NULL;   // temporary pointer to store next node

    while(curr != NULL){
        next = curr->next;   // Step 1: save next node
        curr->next = prev;   // Step 2: reverse the link
        prev = curr;         // Step 3: move prev one step ahead
        curr = next;         // Step 4: move curr one step ahead
    }

    return prev;  // prev is new head
}
