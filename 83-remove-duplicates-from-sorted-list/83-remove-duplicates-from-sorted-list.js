/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function(head) {
    let temp = head;
    
    while(temp && temp.next)
        {
            let cp = temp.next;
            if(temp.val === cp.val)
                {
                temp.next = cp.next;
                    delete cp;
                }
            else
                temp = temp.next;
        }
    return head;
};