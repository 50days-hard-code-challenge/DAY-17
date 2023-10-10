import java.util.HashSet;
public class Solution {
    public static int longestSuccessiveElements(int []a) {
        // Write your code here.
        int longest = 1;
        HashSet<Integer> set = new HashSet<>();
       // put all the elements of array into set 
        for(int i = 0; i<a.length; i++){
            set.add(a[i]);
        }
        // using for each loop we can directly get element from the set  
        for(int temp : set){
            // starting number se phle wala number nahi hai to
            if(!set.contains(temp-1)){
                int count = 1;
                int x = temp;
                while(set.contains(x+1)){
                    // update the value of x
                    x = x+1;
                    count++;
                }
                longest = Math.max(longest,count);
            }
        }
        return longest;
    }
}
