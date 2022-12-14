struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    if (l1 == NULL) {
        return l2;
    }else if (l2 == NULL){
        return l1;
    }else if (l1->val < l2->val){
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }else{
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
}

struct ListNode *mergeKLists(struct ListNode **lists, int listsSize) {
    if (listsSize == 0)  {
        return NULL;
    }
    if (listsSize == 1)   {
        return lists[0];
    }
    for (int i = 0,j = listsSize - 1; i < j; i++, j--) {
        lists[i] = mergeTwoLists(lists[i], lists[j]);
        listsSize--;
    }
    return mergeKLists(lists, listsSize);
}
