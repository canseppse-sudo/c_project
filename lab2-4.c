 #include <stdio.h>

int main(){
    char gender;
    printf("Enter gender :");
    scanf("%c", &gender);

    switch(gender) {
        case 'm' : printf("male");
                    break;
        case 'f' : printf("famale");
                    break;
        case 'M' : printf("male");
                    break;
        case 'F' : printf("famale");
                    break;
        default : printf("Invalid value");
    }

    
}    