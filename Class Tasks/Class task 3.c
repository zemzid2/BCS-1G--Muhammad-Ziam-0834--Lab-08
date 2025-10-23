#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5;
    int countstudents=0;
    int countempty=0;
    char seating[5][5];


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0)
               {
				 seating[i][j] = 'X';  
                countstudents++;
            	}
            else
                {
				seating[i][j] = 'O'; 
				countempty++;
				}
        }
    }

    printf("Classroom Seating Chart (X = occupied, O = empty):\n\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", seating[i][j]);
        }
        printf("\n");
    }
    
    printf("\nSummary : \n");
    printf("Students Seated : %d\n", countstudents);
    printf("Empty desks : %d \n", countempty);
    printf("Total desks : %d", countstudents+countempty);

    return 0;
}