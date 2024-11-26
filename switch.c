include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Very Good!\n");
            break;
        case 'C':
            printf("Good.\n");   

            break;
        case 'D':
            printf("Fair.\n");
            break;
        case   
 'F':
            printf("Failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

    return 0;
}
