#include <stdio.h>
#include <conio.h>


void traverse1D(int a[100], int n);
void insert_unsorted1D(int a[100], int *n, int loc, int val);
void insert_sorted1D(int a[100], int *n, int val);
void detach1D(int a[100], int *n, int loc);

void transpose2D(int a[10][10], int b[10][10], int m, int n);
void traverse2D(int a[50][50], int m, int n);

int main() {
    int choice;

    printf("Enter 1 for 1D array, 2 for 2D array: ");
    scanf("%d", &choice);

    if (choice == 1) {
        int i, n, loc, val, restart, a[100];

        printf("\n ENTER ARRAY INDEX: ");
        scanf("%d", &n);

        printf("\n ENTER SORTED ELEMENTS OF AN ARRAY: \n");
        for (i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }

        traverse1D(a, n);

        printf("\nChoose operation for 1D array:\n");
        printf("1 for Insert Sorted\n2 for Insert Unsorted\n3 for Detach\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n ENTER VALUE TO INSERT: ");
                scanf("%d", &val);
                insert_sorted1D(a, &n, val);
                break;

            case 2:
                printf("\n\n INPUT LOCATION INDEX TO INSERT: ");
                scanf("%d", &loc);
                printf("\n ENTER VALUE TO INSERT: ");
                scanf("%d", &val);
                insert_unsorted1D(a, &n, loc, val);
                break;

            case 3:
                printf("\n\n ENTER LOCATION TO REMOVE ELEMENT: ");
                scanf("%d", &loc);
                detach1D(a, &n, loc);
                break;

            default:
                printf("Invalid choice for 1D array operation.");
                break;
        }

        printf("\n NEW ELEMENTS OF ARRAY:");
        traverse1D(a, n);

        printf("\n\n RESTART THE PROGRAM?");
        printf("\n PRESS 1 TO RESTART - INPUT ANY VALUE TO TERMINATE: ");
        scanf("%d", &restart);

        if (restart == 1) {
            main();
        } else {
            printf("\n\n PROGRAM TERMINATE!");
        }
    } else if (choice == 2) {
        int a[10][10], b[10][10], m, n;

        printf("\n ENTER NUMBER OF ROWS: ");
        scanf("%d", &m);

        printf("\n ENTER NUMBER OF COLUMNS: ");
        scanf("%d", &n);

        printf("\n ENTER ELEMENTS OF 2-D ARRAY: \n");
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                scanf("%d", &a[i][j]);

        printf("\n\nChoose operation for 2D array:\n");
        printf("1 for Transpose\n2 for Traverse\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                transpose2D(a, b, m, n);
                printf("\n\n 2-D ARRAY AFTER TRANSPOSING: \n\n");
                traverse2D(b, n, m);
                break;

            case 2:
                printf("\n\n 2-D ARRAY BEFORE TRAVERSING: \n\n");
                traverse2D(a, m, n);
                break;

            default:
                printf("Invalid choice for 2D array operation.");
                break;
        }
    } else {
        printf("Invalid choice. Please enter 1 or 2.");
    }

    return 0;
}

void traverse1D(int a[100], int n) {
    printf("\n ELEMENTS INSIDE THE ARRAY ARE:");
    for (int i = 1; i <= n; i++) {
        printf(" %d", a[i]);
    }
}

void insert_unsorted1D(int a[100], int *n, int loc, int val) {
    int i = *n;
    while (i >= loc) {
        a[i + 1] = a[i];
        i--;
    }
    a[loc] = val;
    (*n)++;
}

void insert_sorted1D(int a[100], int *n, int val) {
    int i = *n;

    while (val < a[i] && i >= 1) {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = val;
    (*n)++;
}

void detach1D(int a[100], int *n, int loc) {
    int val = a[loc - 1];
    for (int i = loc; i <= *n; i++)
        a[i] = a[i + 1];
    (*n)--;
    printf("\n ELEMENT REMOVED: %d", val);
}


void transpose2D(int a[10][10], int b[10][10], int m, int n) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            b[j][i] = a[i][j];
}

void traverse2D(int a[50][50], int m, int n) {
    printf("\n 2-D ARRAY BEFORE TRAVERSING: \n\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("\t%d", a[i][j]);
        printf("\n\n");
    }
}
