#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct person {
    char name[30];
    int age;
};

void mySort(struct person *arr, int n, int (*compare)(struct person, struct person)) {

    int swapped = 1, i = 0, a;
    char b[50];
    while (swapped) {
        swapped = 0;
        for (i = 0; i < n - 1; i++) {
            if (compare(arr[i], arr[i + 1])) {
                strcpy(b, arr[i].name);
                strcpy(arr[i].name, arr[i + 1].name);
                strcpy(arr[i + 1].name, b);

                a = arr[i].age;
                arr[i].age = arr[i + 1].age;
                arr[i + 1].age = a;
                swapped = 1;
            }
        }
        n--;
    }
}

int compareAge(struct person A, struct person B) {
    if (A.age > B.age) {
        return 1;
    } else if (A.age == B.age) {
        if (strcmp(A.name, B.name) > 0) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

int compareName(struct person A, struct person B) {
    if (strcmp(A.name, B.name) > 0) {
        return 1;
    } else if (strcmp(A.name, B.name) == 0) {
        if (A.age > B.age) {
            return 1;
        } else {
            return 0;
        }
    } else {
        return 0;
    }
}

void printList(struct person *arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("{%s, %d}; ", arr[i].name, arr[i].age);
    }
    printf("\n");
}

int main() {
    int n, i;
    scanf("%d", &n);
    struct person people[n];

    for (i = 0; i < n; i++) {
        scanf("%s", people[i].name);
        scanf("%d", &people[i].age);
    }

    mySort(people, n, compareName);
    printList(people, n);

    mySort(people, n, compareAge);
    printList(people, n);

    return 0;
}