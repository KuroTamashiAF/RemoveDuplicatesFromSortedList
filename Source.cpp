//Remove Duplicates from Sorted List
#include <iostream>
using namespace std;


struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	ListNode* deleteDuplicates(ListNode* head) {
		ListNode* current = head;
		while (current != NULL)
		{
			if (current->next != NULL && current->val == current->next->val)
			{
				ListNode* temp = current->next;
				current->next = current->next->next;
				temp->next = NULL;
				delete temp;
			}
			else
			{
				current = current->next;
			}
			
			
		}
		return head;
	}
};







int main()
{
	ListNode head = { 1 };
	ListNode* ptr = &head;

	Solution x;

	cout<<x.deleteDuplicates(ptr)->val;
}




