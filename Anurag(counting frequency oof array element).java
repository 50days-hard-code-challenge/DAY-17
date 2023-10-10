import java.util.*;
public class Solution {
    public static int[] countFrequency(int n, int x, int []nums){
        // Write your code here.
        HashMap<Integer,Integer> map=new HashMap<>();
        int ans[]=new int[n];
        int k=0;
        for(int i=0;i<nums.length;i++)
        {
           if(map.containsKey(nums[i]))
           {
               map.put(nums[i],map.get(nums[i])+1);
           }
           else{
           map.put(nums[i],1);
           }
        }
        for(int i=1;i<=n;i++)
        {
            if(map.containsKey(i))
            {
                ans[k]=map.get(i);
                k++;
            }
            else{
                ans[k]=0;
                k++;
            }
        }
        return ans;
    }
}
