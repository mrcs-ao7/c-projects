#include <stdio.h>

int main(){
    char *albuns[] = {"Off the Wall", "Thriller", "Bad", "Dangerous", "HIStory",
                      "Blood on the Dance Floor", "Invincible", "Michael", "Xscape"};

    for(int numero = 0; numero <= 8; numero++)
    {
        if(numero >= 7)
        {
            printf("O %d° album póstumo do Michael Jackson é %s\n", numero - 6, albuns[numero]);
        } else
        printf("O %d° album solo do Michael Jackson é %s\n", numero + 1, albuns[numero]);
    }


    return 0;
}