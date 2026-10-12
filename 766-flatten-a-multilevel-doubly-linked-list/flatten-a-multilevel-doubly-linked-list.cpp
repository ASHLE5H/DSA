/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {

        Node* temp = head;

        while(temp != NULL){

           if(temp->child != NULL){

               Node* subHead =  flatten(temp->child);
               Node* nextNode = temp->next;
               temp->next = subHead;
               subHead->prev = temp;

               temp->child = NULL;

               while( subHead->next != NULL){
                    subHead = subHead -> next;
               }
                subHead->next = nextNode;
                if(nextNode != NULL){
                nextNode->prev = subHead;
                    
                }

           }
           temp = temp->next;

        }
        return head;        
    }
};