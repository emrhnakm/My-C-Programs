#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int passorfail(int); //pass or fail?

int stdntno[100],notes[100];
int main(){
    int size,i,bignote=0,smallnote=100,bigindex,smallindex;
    printf("Enter class size:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter to student no:");
        scanf("%d",&stdntno[i]);
        printf("Enter to note:");
        scanf("%d",&notes[i]);
    }
    for(i=0;i<size;i++){        
        if(notes[i]<smallnote){    //find the smallest note
            smallnote=notes[i];
            smallindex=i;
        }
        if(notes[i]>bignote){      //find the biggest note
            bignote=notes[i];
            bigindex=i;
        }
    }
    for(i=0;i<size;i++){
        if(passorfail(notes[i])){
            printf("%d student number's grade is %d - Pass :)\n",stdntno[i],notes[i]);   
        }
        else{
            printf("%d student number's grade is %d - Fail :(\n",stdntno[i],notes[i]);
        }
    }
    printf("\nStuden number %d received the highest score of %d\n",stdntno[bigindex],bignote);
    printf("Studen number %d received the smallest score of %d\n",stdntno[smallindex],smallnote);
    return 0;
}
int passorfail(int note){
    if(note<50 && note>=0) return 0;
    if(note<=100 && note>50) return 1;
    return 0;
}