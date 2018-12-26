/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.ai.assignments;

import static java.lang.Thread.sleep;
import java.util.Scanner;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Laxmi Chainani
 */
public class Ass2 {

    void sleep(){
     try {
                 // to sleep for few seconds
                   Thread.sleep(1500);
                 } catch (InterruptedException e) {
                     // recommended because catching InterruptedException clears interrupt flag
                      Thread.currentThread().interrupt();
                        // you probably want to quit if the thread is interrupted
                      return;
                }
    }

public static void main(String args[])
{
    //declaration
    Ass2 a=new Ass2();
    int[] block=new int[]{1,2,3,4,5,6,7,8}; //goal
                int[] input=new int[8]; //input
                int[] hg=new int[]{1,1,1,1,1,1,1,0}; //heuristic of goal
                int[] hi=new int[]{-1,-1,-1,-1,-1,-1,-1,0}; //heuristic of input
                int j=0;
                int k=7;//for calculation of heuristic of goal
                int m=7;//for calculation of heuristic of input
                int sg=0;//sum of heuristic of goal
                int si=0;//sum of heuristic of input
                int si2=0;
              
	//goal output
	System.out.print("we want this 8 block game:\n");
	for(int i=7;i>=0;i--)
	{
	System.out.print(" | "+block[i]);
                  System.out.println(" | ");
	}
        //calculating heuristic of goal
        while(k>=0){
        sg=sg+hg[k];
        k--;
        }
        
        System.out.println("heuristic of goal is "+sg);
        
                //Accepting user input sequence
                  Scanner scan=new Scanner(System.in);
	System.out.print("Enter your number sequence which you want to arrange:\n");
           do
            m:{
	int n=scan.nextInt();
	 if(n>8)
	  System.out.print("Please enter number sequence in the range 8\n");
	 else{
	 for(int i=0;i<input.length;i++)
                    {
                        if(n==input[i])
                        {
                            System.out.println("Number already entered please enter another number...");
                            break m;
                        }   
                    }
	 input[j]=n;
	 j++; 
                  }
	} while(j<8);

                       a.sleep();
	
    System.out.print("Input sequence is as follows:\n");
	for(int i=0;i<8;i++)
	{
	System.out.print(" | "+input[i]);
                  System.out.println(" | ");
	}
        //calculating heuristic of input 
        while(m>=0){
        si=si+hi[m];
        m--;
        }
        m=7;
        
        a.sleep();
        
          System.out.println("heuristic of input is "+si);
          
          
            //Removing last input block and setting heuristic values of all input blocks
            
            //last block
          /*  int a1=input[0];
            hi[0]=0;
            int[] input2=new int[1];
            input2[0]=a1;*/

     for( j=1,k=0;j<=7 && k<=6;j++,k++)
     {
         
          a.sleep();
            
              System.out.println("\nRemoving upper most block and then calculating the heuristic..");
            
              a.sleep();
          
            //displaying input
            for(int i=j;i<8;i++)
	{
	System.out.print(" | "+input[i]);
                  if(i<7)
                  System.out.println(" | ");
                  else
                  System.out.print(" | ");
	}
            
            System.out.print("       ");
            System.out.print(" | "+input[k]);
            System.out.print(" | ");
         
            //Again calculating heuristic
               while(m>=j){
                si2=si2+hi[m];
                 m--;
                }
              
        
                   a.sleep();
        
                    System.out.println("\nheuristic of input is "+si2);
 
            if(si2>si)
            {
                 a.sleep();
                System.out.println("This heuristic value is better as compare to previous input so new heuristic value is "+si2);
            }
            
             m=7;
             si2=0;
 
     }
     
    a.sleep();
     System.out.println("\nWe got best heuristic value by separating each block and final goal can be achieved by just adjusting block upon one another as per goal state..");
     a.sleep();
     System.out.println("Final goal: ");
     a.sleep();
     for(int i=7;i>=0;i--)
	{
	System.out.print(" | "+block[i]);
                  System.out.println(" | ");
	}
 }


}





    
