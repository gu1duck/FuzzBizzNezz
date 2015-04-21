//
//  main.c
//  FuzzBizzNezz
//
//  Created by Jeremy Petter on 2015-03-11.
//  Copyright (c) 2015 Jeremy Petter. All rights reserved.
//

#include <stdio.h>

int main() {
    int Fuzz = 5;
    int Bizz = 7;
    int Nezz = 0;
    
    // The sizeof clause isn't excluding non-ints entered into Nezz as I'd hope it would :(
    
    if (sizeof(Nezz) == 4 && Nezz >0){
        int count = 0;
        while (count < Nezz){
            count++;
            if (count % Fuzz == 0 || count % Bizz == 0){
                if (count % Fuzz == 0)
                    printf("Fuzz");
                if (count % Bizz == 0)
                    printf("Bizz");
            }else{
                printf("%d",count);
            }
            printf("\n");
        }
    } else {
        printf("Nezz is not a real number.");
    }
        return 0;
}
