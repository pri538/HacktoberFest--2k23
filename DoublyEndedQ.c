//Program to implement doubly eneded queue
/*
________________F1__________________________F2
|    |    |    |    |    |    |    |    |    |    |    |
____________________________________________
                R1                            R2    
*/
#include<stdio.h>
#include<stdlib.h>
#define size 10


int dequeue[size];
int f1,r1,f2,r2;


int insq_fe(){
    int val;
    
    if(r2 == r1+1){
        printf("\nThe queue is full");
        return 0;
    }else{
        if(r1==-1){
            r1++;f1++;
        }else{
            r1++;    
        }
        
        printf("\nEnter the value to insert");
        scanf("%d",&val);
        dequeue[r1] = val;
        return 1;
    }
}


int insq_re(){
    int val;
    
    if(r2 == r1+1){
        printf("\nThe queue is full");
        return 0;
    }else{
        if(r2==size){
            r2--;f2--;
        }else{
            r2--;    
        }
        printf("\nEnter the value to insert");
        scanf("%d",&val);
        dequeue[r2] = val;
        return 1;
    }
    
}


//////////////////////////////////////////////////////////////////////////
int delq_fe(){
        
    if(f1 == -1){
        printf("\nThe queue is empty");
        return 0;
    }else{
        
        if(f1 == r1){
            f1 = -1; r1 = -1;
        }else{
            f1++;    
        }
        return 1;
    }
}


int delq_re(){


    if(f2 == size){
        printf("\nThe queue is empty");
        return 0;
    }else{
        if(f2 == r2){
            f2 = size; r2 = size;
        }else{
            f2--;    
        }
        return 1;
    }
    
}
////////////////////////////////////////////////////////////////////////////////////
void printq(){
    
    int i;
    printf("\n-------------------------------------");
    printf("\nf1 = %d\tr1 = %d\tf2 = %d\tr2=%d",f1,r1,f2,r2);
    printf("\n-------------------------------------");
    printf("\n");
    for(i=0;i<size;i++){
        if(f1==i){
            printf("  f1  ");    
        }else if(f2==i){
            printf("  f2  ");    
        }else{
            printf("     ");    
        }


    }printf("\n");
    
    for(i=0;i<size;i++){
        printf("  %d  ",dequeue[i]);
    }printf("\n");
    
    for(i=0;i<size;i++){
        if(r1==i){
            printf("  r1  ");    
        }else if(r2==i){
            printf("  r2  ");    
        }else{
            printf("     ");    
        }


    }
    printf("\n-------------------------------------");
}



void main(){
    
    f1 = -1; f2 = size; r1 = -1; r2 = size;
    int ch1,ch2;
    
    do{
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Exit\n");
        scanf("%d",&ch1);
        
        switch(ch1){
            case 1:    printf("\n1.Insert from Front end");
                    printf("\n2.Insert from Rear end\n");                    
                    scanf("%d",&ch2);
                    if(ch2 == 1){
                        if(insq_fe()){
                            printf("\n\tInsert Successful!");
                        }else{
                            printf("\n\tInsert Unsuccessful!");
                        }
                        printq();
                    }else if(ch2 == 2){
                        if(insq_re()){
                            printf("\n\tInsert Successful!");
                        }else{
                            printf("\n\tInsert Unsuccessful!");
                        }
                        printq();
                    }else{
                        printf("\nWrong Choice");
                    }
                    break;
            case 2: printf("\n1.Delete from Front end");
                    printf("\n2.Delete from Rear end\n");                    
                    scanf("%d",&ch2);
                    if(ch2 == 1){
                        if(delq_fe()){
                            printf("\n\tDelete Successful!");
                        }else{
                            printf("\n\tDelete Unsuccessful!");
                        }
                        printq();
                    }else if(ch2 == 2){
                        if(delq_re()){
                            printf("\n\tDelete Successful!");
                        }else{
                            printf("\n\tDelete Unsuccessful!");
                        }
                        printq();
                    }else{
                        printf("\nWrong Choice");
                    }
                    break;
            default:break;
        }
        
        
    }while(ch1!=3);
    
}
