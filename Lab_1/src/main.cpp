#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"

int main()
{
    //Demo
    std :: cout << "Linked List Operations: " << std :: endl;
    LinkedList list;

    list.addToTail(21);
    list.addToTail(19);
    list.addToTail(16);
    list.addToTail(18);
    list.addToHead(10);
    list.addToHead(11);
    list.addToHead(11);
    list.addToHead(03);
    list.addToHead(03);
    list.addToHead(05);
    list.addToHead(05);
    list.addToHead(03);

    int a = 5689;
    Node * predecessor = new Node;
    predecessor = list.retrieve(21, predecessor);
    list.add(a, predecessor);

    list.remove(5);
    list.remove(11);
    list.traverse(',');

    std :: cout << std :: endl;

    list.search(54);
    list.search(599);

    std :: cout << std :: endl;

    Node * output = new Node;
    output = list.retrieve(19, output);
    std :: cout << "Data Retrieval: " <<  "Data = " << output -> info << " and next Node = " << output -> next << std :: endl;

    list.removeFromHead();
    list.removeFromTail();


    std :: cout << "Linked List: ";
    list.traverse(',');


    std :: cout << std :: endl;


    std :: cout << "Stack Operations: " <<  std :: endl;
    LinkedListStack s;

    s.push(55);
    s.push(56);
    s.push(58);

    s.display(',');
    std :: cout << "TOP: " <<  s.peek() << std :: endl;

    std::cout << "Deleted from Stack: " << s.pop() << ", " << s.pop() << std::endl;

    std :: cout << std :: endl;


    std :: cout << "Queue Operations: " <<  std :: endl;
    LinkedListQueue q;

    q.enqueue(11);
    q.enqueue(112);
    q.enqueue(3);
    q.enqueue(19);
    q.enqueue(21);

    
    q.display(',');
    std :: cout << "FRONT: " <<  q.front() << std :: endl;
    std :: cout << "REAR: " <<  q.rear() << std :: endl;
    
    std:: cout << "Deleted from Queue: " << q.dequeue() << ", " << q.dequeue() <<std::endl;


    std :: cout << std :: endl;
    std :: cout << std :: endl;
    std :: cout << "USER INPUT:" << std :: endl;
    std :: cout << "Choose your option: " << std :: endl;
    std :: cout << "Linked List Operations: " << std :: endl;
    std :: cout << "1. add to Head\n2. add to tail\n3. add\n4. remove from head\n5. remove from tail\n6. remove\n7. retrieve\n8. search\n9. traverse\n" << std :: endl;

    std :: cout << "Stack Operations: " << std :: endl;
    std :: cout << "10. push\n11. pop\n12. peek\n13. display" << std :: endl;

    std :: cout << "Queue Operations: " << std :: endl;
    std :: cout << "14. enqueue\n15. dequeue\n16. display" << std :: endl;

    std :: cout << std :: endl;
    std :: cout << "Choose your option: ";

    int n = 0;
    LinkedList list2;
    LinkedListStack s2;
    LinkedListQueue q2;
    std :: cin >> n;

    list2.addToTail(221);
    list2.addToTail(192);
    list2.addToTail(161);
    list2.addToTail(180);
    list2.addToHead(1044);
    list2.addToHead(115);
    list2.addToHead(1199);
    list2.addToHead(032);

    s2.push(1200);
    s2.push(1300);
    s2.push(1400);

    q2.enqueue(1100);
    q2.enqueue(11200);
    q2.enqueue(300);
    q2.enqueue(1900);
    q2.enqueue(2100);

    if(n==1){
        int num;
        std :: cout << "Enter the data: ";
        std :: cin >> num;
        list2.addToHead(num);
        list2.traverse(',');

    }else if (n==2){
        int num;
        std :: cout << "Enter the data: ";
        std :: cin >> num;
        list2.addToTail(num);
        list2.traverse(',');

    }else if (n==3){
        int num;
        int num2;
        list2.traverse(',');
        std :: cout << "Enter the predecessing data: ";
        std :: cin >> num;

        std :: cout << "Enter the data to insert: ";
        std :: cin >> num2;

        Node * outputnode = new Node;
        outputnode = list2.retrieve(num, outputnode);
        std :: cout << "Data Retrieval: " <<  "Data = " << outputnode -> info << " and next Node = " << outputnode -> next << std :: endl;

       /*  Node *pre = new Node;
        *pre = *output; */

       /*  Node *b2 = new Node;
        *b2 = list2.getHead(); */

        list2.add(num2, outputnode);
        list2.traverse(',');

    }else if (n==4){
        list2.removeFromHead();
        list2.traverse(',');
        
    }else if (n==5){
        list2.removeFromTail();
        list2.traverse(',');
        
    }else if (n==6){
        int num;
        std :: cout << "Enter the data: ";
        std :: cin >> num;
        list2.remove(num);
        list2.traverse(',');
        
    }else if (n==7){
         int num;
        std :: cout << "Enter the data: ";
        std :: cin >> num;
        Node * output2 = new Node;
        output2 = list2.retrieve(num, output2);
        std :: cout << "Data Retrieval: " <<  "Data = " << output2 -> info << " and next Node = " << output2 -> next << std :: endl;
        list2.traverse(',');

    }else if (n==8){
        int num;
        std :: cout << "Enter the data: ";
        std :: cin >> num;
        list2.search(num);
        
    }else if (n==9){
        list2.traverse(',');
        
    }else if (n==10){
        int num;
        std :: cout << "Enter the data: ";
        std :: cin >> num;
        s2.push(num);
        s2.display(',');

    }else if (n==11){
        s2.pop();
        s2.display(',');

    }else if (n==12){
      std :: cout << "TOP: " <<  s2.peek() << std :: endl;
       s2.display(',');  
        
    }else if (n==13){
        s2.display(',');
        
    }else if (n==14){
        int num;
        std :: cout << "Enter the data: ";
        std :: cin >> num;
        q2.enqueue(num);
        q2.display(',');

    }else if (n==15){
        q2.dequeue();
        q2.display(',');
        
    }else if(n==16){
        q2.display(',');
    }else{
        std :: cout << "Invalid Operation." << std :: endl;
    }
}