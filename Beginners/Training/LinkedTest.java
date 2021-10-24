package Training;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class LinkedTest {
    public static void main(String[] args) {
        
       Linked list = new Linked();
       try{
           list.addFirst();
           list.print();
           list.addFirst();
           list.remove(0);
           list.print();
       } catch (Exception e){
           System.out.println(e.getMessage());
       }
    }
}
