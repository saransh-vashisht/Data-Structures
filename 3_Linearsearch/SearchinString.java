import java.util.Arrays;

public class SearchinString{
     public static void main(String[] args) {
        String name="Saransh";
        char target='n';
        // System.out.println(search(name,target));
        // This converts the String to character array 
        System.out.println(Arrays.toString(name.toCharArray()));
        System.out.println(search2(name,target));
    }
    //  Linear search using for i loop
    static boolean search(String str, char target){
            if(str.length()==0) {
                return false;
            }
            for(int i=0; i<str.length(); i++){
                if(target==str.charAt(i)){
                    return true;
                }
            }
            return false;
    }
    // Linear search using for each loop
    static boolean search2(String str, char target){
            if(str.length()==0) {
                return false;
            }
          for (char ch : str.toCharArray()) {
              if(ch==target )  return true;

          }
            return false;
    }
}