// Input: 1 2 3 4
// Output: 4 3 2 1


class StackNode {
    int data;
    StackNode next;
    public StackNode(int data)
    {
        this.data = data;
        this.next = null;
    }
}
 
class Stack {
    StackNode top;
    public void push(int data)
    {
        if (this.top == null) {
            top = new StackNode(data);
            return;
        }
        StackNode s = new StackNode(data);
        s.next = this.top;
        this.top = s;
    }
    public StackNode pop()
    {
        StackNode s = this.top;
        this.top = this.top.next;
        return s;
    }
    public void display()
    {
        StackNode s = this.top;
        while (s != null) {
            System.out.print(s.data + " ");
            s = s.next;
        }
        System.out.println();
    }
    public void reverse()
    {
        StackNode prev, curr, s;
        curr = prev = this.top;
        curr= curr.next;
        prev.next = null;
        while (curr != null) {
 
            s= curr.next;
            curr.next = prev;
            prev = curr;
            curr = s;
        }
        this.top = prev;
    }
}
 
public class Main {
    public static void main(String[] args)
    {
        Stack s = new Stack();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        System.out.println(" ");
        s.display();
        s.reverse();
        System.out.println(" ");
        s.display();
    }
}
