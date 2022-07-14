#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_start_pad(int *iter);
void print_end_pad();
void print_row();

int passes = 0;
int rows = 0, cols = 0;
int mid = 0;
int total_passes = 0;
int completed[64];
int cc_len = 0;
int n;

int main(){
    scanf("%d",&n);
    rows = (n + n) - 1;
    cols = rows;
    mid = n + 2 -3 ;
    while(total_passes != rows){
        // printf("%d\n",total_passes);
        print_row();
        total_passes++;
    }
    return 0;
}


void print_row(){
    int ccl_copy = rows - cc_len;
    int i = 0;
    print_start_pad(&i);
    if(total_passes == rows - 1) return;
    if(total_passes > mid){
        // printf("sub\n");
        cc_len--;
    }
    else{
        if(passes != 0 && passes < mid){
            // printf("Added %d to completed\n",n - passes);
            completed[cc_len++] = n - passes;     

        }
    } 
    fprintf(stderr,"i%d %d\n",i,abs(rows - (ccl_copy + ccl_copy)));
    if(total_passes == mid) printf("1 ");
    else{
        
        for( ; i < abs(rows - (ccl_copy + ccl_copy ));){
            printf("\033[32m%d\033[0m ", n - passes);
            i++;
        }
    }
    if(total_passes > mid) passes--;
    else passes++;
    print_end_pad();
    // printf("c%d\n",cc_len);
    // printf("iter: %d",abs(rows - (total_passes + total_passes)));
    printf("\n");

}

void print_start_pad(int *iter){
    if(passes == 0 || total_passes == rows - 1){
        int i;
        for(i = 0; i < rows - 1 ; i++)
            printf("%d ",n);
        printf("%d",n);
        *iter = cols + 2;
        if(total_passes == 0){
            completed[cc_len++] = n;
        }
    } 
    else {
        int i;
        // printf("cclen=%d\n",cc_len);
        for(i = 0; i < (cc_len) ; i++)
            completed[i] != 1 ? printf("%d ", completed[i]) : i;
        *iter += cc_len - 1;
        // printf("iter: %d\n",*iter);
        
    }
}
void print_end_pad(){
    if(total_passes != 0 && total_passes != rows - 1){
        for(int i = cc_len -1; i > 0; )
            printf("%d ", completed[--i]);

    }
}
