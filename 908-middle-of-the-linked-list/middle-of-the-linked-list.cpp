/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int count = 0;
        ListNode* temp = head;
        while (temp->next != NULL) {
            count++;
            temp = temp->next;
        }

        temp = head;
        int i = 0;
        if(count%2 != 0){
            while (i != count / 2 + 1) {

            temp = temp->next;
            i++;
        }
        }else{
            while (i != count / 2) {

            temp = temp->next;
            i++;
        }
        }
        head = temp;

        return head;
    }
};