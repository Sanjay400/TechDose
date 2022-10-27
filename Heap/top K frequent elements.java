public class Solution
{
public int[] topKFrequent(int[] nums, int k)
{
Map<Integer, Integer> count = new HashMap<>();

Map<Integer, List<Integer>> count2 = new TreeMap<>();

for (int x: nums) 
{
  count.put(x, count.getOrDefault(x, 0) + 1);
}


for (int n: count.keySet()) 
{
   List<Integer> numbersList = count2.get(count.get(n));
    
    if(numbersList != null)
    {
        numbersList.add(n);
    }
    else
    {
        numbersList = new ArrayList<>();
        numbersList.add(n);
        count2.put(count.get(n), numbersList);
    }
}


List<Integer> list = new ArrayList<>();

for(int  c : count2.keySet()) 
{
   List<Integer> numbersList = count2.get(c);
   
   list.addAll(numbersList);
}

int[] top = new int[k];

int i =0;

for(int j = list.size()-1 ; j >list.size()-1-k;  j--)
{
	top[i++] =list.get(j);
}
 
return top;
}

}
