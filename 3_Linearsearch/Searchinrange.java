public class Searchinrange {
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,7,88,9,334,323};
        int target= 2;
        System.out.println(linearSearch(arr, target, 6, 9)) ;

    }
    static int linearSearch(int[] arr, int target, int start, int end){
        if(arr.length==0) return -1;
        // run a for loop
        for (int i = start; i <= end; i++) {
            int element=arr[i];
            if(element==target) return i;
        }
        return -1;
    }
    
}
