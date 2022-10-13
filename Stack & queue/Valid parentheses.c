bool isValid(char * s){
 int length = strlen(s);
    char stack[length];
    int top = -1;
    char c;
    while ((c = *s) != '\0')
    {
        switch (c)
        {
        case (')'):
            if (top == -1 || stack[top--] != '(')
                return false;
            break;
        case ('}'):
            if (top == -1 || stack[top--] != '{')
                return false;
            break;
        case (']'):
            if (top == -1 || stack[top--] != '[')
                return false;
            break;
        default:
            stack[++top] = c;
            break;
        }
        s++;
    }
    return top == -1;
}
