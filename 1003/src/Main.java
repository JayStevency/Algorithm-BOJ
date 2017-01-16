import java.util.*;

public class Main{

  public static int inputNum;
  public static int FibonacciNum;
  final private static int MAX = 41;
  public static int [] zeroFibo;
  public static int [] oneFibo;

 
  public static void getFiboNum(){

    zeroFibo = new int[MAX];
    oneFibo = new int[MAX];

    zeroFibo[0] = 1;
    zeroFibo[1] = 0;
    oneFibo[0] = 0;
    oneFibo[1] = 1;

    for(int i = 2; i < MAX; i++){
        zeroFibo[i] = zeroFibo[i - 1]  + zeroFibo[i - 2];
        oneFibo[i] = oneFibo[i - 1] + oneFibo[i - 2];      
    }
  }

  public static void main(String [] args){
    getFiboNum();
    Scanner sc = new Scanner(System.in);
    inputNum = sc.nextInt();
    for(int i = 0; i < inputNum; i++){
      FibonacciNum = sc.nextInt();
      System.out.println(zeroFibo[FibonacciNum]+" "+oneFibo[FibonacciNum]);
    }
  }  
}