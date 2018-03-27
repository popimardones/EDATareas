#include<stdio.h>
#include<stdlib.h>
#include"2fila_l.h" 

int main()
{
    int caso;
    while(1)  //loop infinito, termina cuando la elección es 5
    {
        printf("\nElija una de las opciones:\n");
        printf("1.Queue\n2.Dequeue\n3.Peek\n4.IsEmpty\n5.Evacuar\n");
        printf("Elija su elección(1-5):\n");
        scanf("%d",&caso);
      
        switch(caso)
        {
            case 1: for(int i = 1; i<9; i++){
                    QUEUE(i);
                    printf("el numero %i fue 'queued'/agregado a la lista\n", i);
                    }
                    break;
            case 2: DEQUEUE();
                    break;
            case 3: PEEK();
                    break;
            case 4: ISEMPTY();
                    break;
            case 5: exit(0);
            default: printf("\nDebe elegir un número 1-5.");
        }
    }

    return 0;
}