int trap(int* height, int heightSize)
{
    int max = 0;
    int max_ix = 0;
    if (heightSize < 1) return 0;
    for (int i=0; i<heightSize; i++)
    {
        if (height[i]> max)
        {
            max = height[i];
            max_ix = i;
        }
    }
    
    int water = 0;
    int h = 0;
    int l = 0;
    if (max_ix > 0)
    for (int i=0; i<=max_ix; i++)      
    {
        water += (h - l);              
        if (height[i]> h)
        {
            h = height[i];            
        }
        l= height[i];                  
    }

    if ((heightSize-1) < max_ix)
        return water;
    
    h = 0;
    l = 0;
    for (int i=heightSize-1; i>=max_ix; i--)
    {
        water += (h - l);
        if (height[i]> h)
        {
            h = height[i];
        }
        l= height[i];
    }
    return water;
}
