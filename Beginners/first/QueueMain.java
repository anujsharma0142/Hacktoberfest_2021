package first;

import java.util.Scanner;

/**
 *
 * @author LENOVO
 */
public class QueueMain {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        
        //Variabel
        int pil=0;
        System.out.print("Masukan berapa maksimal data antrian : ");
        int m = sc.nextInt();
        System.out.println();
        Queue qobj = new Queue(m);
        
        //Proses
        do{
            menu();
            pil = sc.nextInt();
            switch(pil){
                case 1: System.out.print("Masukan data baru : ");
                        int dataIn = sc.nextInt();
                        qobj.enqueue(dataIn);
                        break;
                case 2: int dataOut = qobj.dequeue();
                        if(dataOut!=0){
                        System.out.println("Data yang terambil : " + dataOut);
                        }
                        break;
                case 3: qobj.print();
                        break;
            }   
        }while(pil!=4);
    }
    
    static void menu(){
        System.out.println("Pilih operasi yang ingin dilakukan : ");
        System.out.println("1. Enqueue");
        System.out.println("2. Dequeue");
        System.out.println("3. Print");
        System.out.println("4. Keluar");
    }
}
