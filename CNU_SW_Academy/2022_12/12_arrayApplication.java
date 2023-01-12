import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] MN = sc.nextLine().split(" ");
        
        int M = Integer.parseInt(MN[0]);
        int N = Integer.parseInt(MN[1]);
        
        int[][] key = new int[M][M];
        int[][] lock = new int[N][N];
        
        
        for(int i=0; i<M; i++){
            String[] temp = sc.nextLine().split(" ");
            for(int j=0; j<M; j++){
                key[i][j] = Integer.parseInt(temp[j]);
            }
        }
        
        for(int i=0; i<N; i++){
            String[] temp = sc.nextLine().split(" ");
            for(int j=0; j<N; j++){
                lock[i][j] = Integer.parseInt(temp[j]);
            }
        }

        
        System.out.println(testUnlock(key, lock, M, N));
        
        
    }
    
    private static boolean testUnlock(int[][] key, int[][] lock, int M, int N){
        
        int movingRange = N-M;
        
        for(int i=0; i<movingRange; i++){
            
            for(int j=0; j<movingRange; j++){
                
                
            }
            
        }
        return false;
    }
    
    private static int[] basicBlank(int[][] key, int M){
        
        int[] blank = new int[M*M];
        int blankC = 0;
        
        for(int i=0; i<M; i++){
            for(int j=0; j<M; j++){
                if(key[i][j] = 0){
                    blank[blankC] = i*M + j;
                }
            }
        }
        
        return blank;
    }
    
    private static int[] turnBlank(int[][] key, int M){
        
        int[] blank = new int[M*M];
        int blankC = 0;
        
        for(int i=M-1; i>=0; i--){
            for(int j=0; j>=M; j--){
                if(key[i][j] = 0){
                    blank[blankC] = i*M + j;
                }
            }
        }
        
        return blank;
        
        
    }
    
}
