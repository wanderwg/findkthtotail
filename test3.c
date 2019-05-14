//输出链表中倒数第k个节点
/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	ListNode* front = pListHead;
	ListNode* back = pListHead;
	ListNode* frontpre = pListHead;
	if (front == NULL)
		return NULL;
	while ((k--) && front) {
		frontpre = front;
		front = front->next;
	}
	if (front == NULL&&frontpre)
		return back;
	while (front) {
		back = back->next;
		front = front->next;
	}
	return back;
}

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	ListNode* front = pListHead;
	ListNode* back = pListHead;
	unsigned int i;
	for (i = 0; front != NULL&&i < k; i++) {
		front = front->next;
	}
	if (i < k)
		return NULL;
	while (front) {
		front = front->next;
		back = back->next;
	}
	return back;
}