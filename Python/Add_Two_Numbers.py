class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        num1 = ''
        num2 = ''
        node1 = l1
        node2 = l2
        while node1:
            num1 += str(node1.val)
            node1 = node1.next
        while node2:
            num2 += str(node2.val)
            node2 = node2.next
        num1 = num1[::-1]
        num2 = num2[::-1]
        print(str(int(num1) + int(num2)))
        result = str(int(num1) + int(num2))[::-1]
        
        resultNode = ListNode(result[0], None)
        current = resultNode
        
        for i in range(1,len(result)):
            nextNode = ListNode(result[i], None)
            current.next = nextNode
            current =  current.next
            
        return resultNode