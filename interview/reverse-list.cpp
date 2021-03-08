#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode *next) : val(x), next(next) {}                                                                                                                               *
};

// ListNode* reverse_list () {

// }

int main(int argc, char const *argv[])
{
    ListNode *list = new ListNode();

    for(int i = 1; i < 5; i++) 
        list->next = new ListNode(i);

    
    return 0;
}
