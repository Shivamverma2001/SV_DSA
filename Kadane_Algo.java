import java.util.*;
import java.io.*;
//Finding the maximum sum of subarray by O(n) compkexity
public class Kadane_Algo{
    static void algo(int a[],int n){
        int max=-100000,cur=0;
        for(int i=0;i<n;i++){
            cur=cur+a[i];
            if(max<cur){
                max=cur;
            }
            if(cur<0){
                cur=0;
            }
        }
        System.out.println(max);
    }
    public static void main(String[] args){
        int a[]=new int[5];
        a[0]=5;
        a[1]=-6;
        a[2]=4;
        a[3]=3;
        a[4]=-7;
        int n=a.length;
        algo(a,n);
    }
}