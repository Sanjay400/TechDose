class Solution{
public int maximum69Number (int num) {
    Stack<Integer> stack = new Stack<>();
    int a = 0, b = 0;
    while(num > 0){
        stack.push(num%10);
        num/=10;
    }
    while(!stack.isEmpty()){
        int curr = stack.pop();
        if(curr == 6 && b == 0){
            curr = 9;
            b++;
        }
        a = a * 10 + curr;
    }
    return a;
}
}
