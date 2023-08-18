
#include <iostream>
#include <algorithm>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int count1,count2,countDiff = 0;
        
        int num1 = LinkedListToNum(l1,&count1);
        int num2 = LinkedListToNum(l2,&count2);

        //cases

        countDiff = count1-count2;

        if(countDiff<0){
            countDiff = countDiff * -1;
        }
        int maxnum = max(count1,count2);

        //suming hte digits

    }

    int LinkedListToNum(ListNode *l, int *count){
        int num1 = 0;
        while(l!=nullptr){

            num1 = num1 + l->val;
            num1 = num1*10;
            l = l->next;
            count++;
        }
        num1 = num1/10;
        return num1;
        
    }
};


int main(){

    return 0;
}