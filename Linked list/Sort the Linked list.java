class Solution {
    public ListNode sortList(ListNode head) {
        if(head==null || head.next== null){
            return head;
        }
        List <Integer> values=new ArrayList<>(); // creating list in integer type
        while(head !=null){
            values.add(head.val);
            head=head.next;
        }
        Collections.sort(values);  // sort the list(merge sort)
        ListNode a=new ListNode(0);
        ListNode b=new ListNode(0,a);
        for(Integer value: values){
            a.next=new ListNode(value);
            a=a.next;
        }
         return b.next.next;
    }
}
