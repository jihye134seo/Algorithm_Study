import java.util.Scanner;
import java.util.HashMap;

public class test {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
    
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        
        int allword = 0;
        
        while(sc.hasNext()) {
            String temp = sc.next().toLowerCase();
            allword++;
            
            if(map.get(temp) != null){
                map.put(temp, Integer.valueOf(map.get(temp).intValue() + 1));
            }
            else {
            	map.put(temp, 1);
            }
        }
        
        int count = -1;
        String word = "";
        
        for( String key : map.keySet() ){
            if(map.get(key).intValue() > count){
                count = map.get(key).intValue();
                word = key;
            }
        }
        
        
        double result = count / (allword*1.0);
        result = Math.round(result*100)/100.0;
        
        System.out.println(word + " " + result);
        
        
    }
}
