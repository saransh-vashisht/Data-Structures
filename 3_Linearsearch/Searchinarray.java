public class Searchinarray {
    public static void main(String[] args) {
        int[] nums= {23,45,667,32,45,23,45,65,76,32,54,65};
        int target= 667;
        System.out.println(linearSearch(nums, target));
    }
    // Search in the array if item found r
    // otherwise if not found return -1
    static int linearSearch(int[] arr, int target){
        if(arr.length==0) return -1;
        // run a for loop
        for (int i = 0; i < arr.length; i++) {
            int element=arr[i];
            if(element==target) return i;
        }
        return -1;
    }
    
    
    // For returning the target
    
    static int linearSearch2(int[] arr, int target){
        if(arr.length==0) return -1;
        // run a for loop
        for (int element: arr) {
            
            if(element==target) return element;
        }
        
        // returning the max value cuz the -1 can be the element in the array
        return Integer.MAX_VALUE;
        
    }
    static boolean linearSearch3(int[] arr, int target){
        if(arr.length==0) return false;
        // run a for loop
        for (int element: arr) {
            
            if(element==target) return true;
        }
        

        return false;
        
    }
}
