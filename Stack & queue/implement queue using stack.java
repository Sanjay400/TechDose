class MyQueue {
    
    Stack<Integer> s1 = null;
    Stack<Integer> s2 = null;
    public MyQueue() {
        s1= new Stack();
        s2 = new Stack();
    }
    
    public void push(int x) {
        while(!s2.empty()){
            s1.push(s2.pop());
        }
        
        
        s1.push(x);
    }
    
    public int pop() {
        while(!s1.empty()){
            s2.push(s1.pop());
        }
        return s2.pop();
    }
    
    public int peek() {
        while(!s1.empty()){
            s2.push(s1.pop());
        }
        return s2.peek();
    }
    
    public boolean empty() {
        return  s1.empty() && s2.empty();
    }
}
