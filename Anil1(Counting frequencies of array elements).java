import java.util.*;
public class Solution {
    public static int[] countFrequency(int n, int x, int []nums){
        // Write your code here.
        int[] arr = new int[n];
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int i = 0; i<n; i++){
            if(!map.containsKey(nums[i])){
                map.put(nums[i],1);
            }
            else{
                map.put(nums[i],map.get(nums[i])+1);
            }
        }
        // traverse the element from 1 to n
        
        for(int i = 1; i<=n; i++){
            if(map.containsKey(i)){
                arr[i-1] = map.get(i);
            }
            else{
                arr[i-1] = 0;
            }
        }

        return arr;
    }
}
