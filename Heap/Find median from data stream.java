class MedianFinder {
    private List<Integer> total = new ArrayList<>();
    private int len; // len as int type
    /** initialize your data structure here. */
    public MedianFinder() {}
    
    public void addNum(int num) {
        if(total.size()==0){ 
            total.add(num);
        } else {
           int index = Collections.binarySearch(total,num);
           if(index < 0)
                index = -index-1;
           total.add(index,num); 
        }
        len++;
    }
    
	// O(1) time
    public double findMedian() {
        if(len==0)
            return 0;
        // even
        if((len & 1) == 1)
            return total.get(len >> 1);
        //odd
        int a = (len-1) >> 1;
        return (total.get(a)+total.get(a+1))/2d;   
    }
}
