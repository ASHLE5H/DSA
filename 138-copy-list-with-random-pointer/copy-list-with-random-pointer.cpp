/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {

//         if(head == NULL){
//             return NULL;
//         }

//         unordered_map<Node* , Node*> map;

//         Node* newCopy = new Node(head->val);
//         Node* oldCopy = head->next;
//         Node* newHead = newCopy;
        
//          map[head] = newHead;


//         while(oldCopy != NULL){
// Node* newNode = new Node(oldCopy->val);

// newCopy->next = newNode;
// Node* oldCopy = head->next;

// map[oldCopy] = newNode;

// newCopy = newNode;

//         }

//         oldCopy = head; newCopy = newHead;
//         while(oldCopy != NULL){
//             newCopy->random = map[oldCopy->random];
//              oldCopy = oldCopy->next;
//             newCopy = newCopy->next;


//         }
//         return newHead;
        
//     }
// };


class Solution {
public:
    Node* copyRandomList(Node* head) {

        if(head == NULL){
            return NULL;
        }

        unordered_map<Node* , Node*> map;

        Node* copyNode = new Node(head->val);
        Node* oldNode = head->next;
        Node* newHead = copyNode;

            map[head] = copyNode;

        while( oldNode != NULL){

            Node* next = new Node(oldNode->val);
            map[oldNode] = next;
            copyNode->next = next;
            
            copyNode =  copyNode->next;
            oldNode = oldNode->next;

        }

        copyNode = newHead;
        oldNode = head;

        while( oldNode != NULL){

            copyNode->random = map[oldNode->random];
            oldNode = oldNode->next;
            copyNode = copyNode->next;

        }


    return newHead;
     
    }
};