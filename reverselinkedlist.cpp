 #include <iostream>
  using namespace std;
   class  ListNode {
     public: 
      int val;
       ListNode *next;

         ListNode (int x ){
             val = x;
              next = NULL;

         }
        
        };
    ListNode* reverseList(ListNode *head){
         ListNode * prev = NULL;
          ListNode *curr = head;
           while (curr!=NULL){
             ListNode * nextTemp = curr->next;
              curr-> next = prev;
               prev= curr;
                curr = nextTemp;

           }
            return prev;


    }
     void printList(ListNode* Node){
         while (Node!=NULL){
             cout <<Node->val<<" ";
              Node = Node->next;
               
         }
     }

    

    

   int main ( ){

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    // Reverse the list
    head = reverseList(head);

    cout << "Reversed List: ";
    printList(head);

    return 0;
}
     
   