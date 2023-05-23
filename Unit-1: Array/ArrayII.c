#include <stdio.h>
#define mgmg 6 //declaration

int main(){
    
    int mgmgName[mgmg]; //put array declaration size in array name
    for(int j=0; j<mgmg; ++j){ //looping for array size
        
        mgmgName[j] = 2 + 2 * j; //create value in array name

        //mgmgName[0] = 2 + 2 * 0; 2
        //mgmgName[1] = 2 + 2 * 1; 4
        //mgmgName[2] = 2 + 2 * 2; 6
        //mgmgName[3] = 2 + 2 * 3; 8
        //mgmgName[4] = 2 + 2 * 4; 10
        //mgmgName[5] = 2 + 2 * 5; 12
    }

    printf("%s%13s\n","Element","Value"); //use %s for character

    for (int i = 0; i < mgmg; ++i)
    {
        printf("%5d%13d\n",i,mgmgName[i]); //i=0;
    }
    
}