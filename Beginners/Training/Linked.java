package Training;

/**
 *
 * @author LENOVO
 */
public class Linked {
    Node head, tail;
    int size;
    
    boolean isEmpty(){
        return head == null;
    }
    
    void addFirst(Node input){
        if(!isEmpty()){
            head=input;
            tail=input;
        } else {
            input.next = head;
            head = input;
        }
    }
    
   void add(int item, int index) throws Exception{
       if(index < 0 || index > size) throw new Exception ("Nilai index diluar batas");
       if(isEmpty() || index == 0){
           addFirst(item);
       } else {
           Node tmp = head;
           for(int i=1;i<index;i++){
               tmp = tmp.next;
           }
           Node next = (tmp  == null) ? null : tmp.next;
           tmp.next = new Node(item, next);
           size++;
       }
   } 
    
    void addLast(Node input){
        if(!isEmpty()){
            head=input;
            tail=input;
        } else {
            tail.next = input;
            tail = input;
        }
    }
    
    void print(){
        if(!isEmpty()){
            Node tmp = head;
            while (tmp != null){
                System.out.print(tmp.data + "\t");
                tmp = tmp.next;
            }
        } else {
            System.out.println("Linked List Kosong");
        }
    }
    
    void inserAfter(int key, Node input){
        Node temp = head;
        do{
            if(temp.data==key){
                input.next = temp.next;
                temp.next = input;
                System.out.println("Insert data berhasil");
                break;
            }
        } while(temp!=null);
    }
    
    void insertBefore(int key, Node input){
        Node temp = head;
        
        while(temp!=null){
            if((temp.data == key) && (temp == head)){
                this.addFirst(input);
                System.out.println("Insert data berhasil");
                break;
            } else if(temp.next.data == key){
                input.next = temp.next;
                temp.next = input;
                System.out.println("Insert data berhasil");
                break;
            }
            temp = temp.next;
        }
    }
    
    void clear(){
        head=null;
        size=0;
    }
    
    void removeFirst(){
        Node temp = head;
        if(!isEmpty()){
            if(head == tail){
                head = tail = null;
            } else {
                temp = temp.next;
                head = temp;
                temp = null;
            }
        } else {
            System.out.println("Data kosong");
        }
    }
    
    void removeLast(){
        Node temp = head;
        if(!isEmpty()){
            if(tail==head){
                head=tail=null;
            } else {
                while(temp.next != tail){
                    temp = temp.next;
                }
                temp.next = null;
                tail = temp;
                temp = null;
            }
        } else {
            System.out.println("Data kosong");
        }
    }
    
    void remove(int key){
        Node temp = head;
        if(!isEmpty()){
            while(temp != null){
                if(temp.next.data == key){
                    temp.next = temp.next.next;
                    break;
                } else if ((temp.data == key) && (temp == head)){
                    this.removeFirst();
                    break;
                }
                temp = temp.next;
            }
        } else {
            System.out.println("Data kosong");
        }
    }
    
    void find(int key){
        int i=0;
        boolean found = false;
        Node temp = head;
        while(temp != null){
            if(temp.data == key){
                found = true;
                break;
            }
            i++;
            temp = temp.next;
        }
        if(found){
            System.out.println(key + " ditemukan pada index ke-" + i);
        } else{
            System.out.println("Data tidak ditemukan");
        }
    }
}
