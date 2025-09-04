#include <stdio.h>
void llenarArray(int entero[10]);
void mostraArray(int entero[10]);
void bubbleSort(int a[], int n);
void selectionSort(int a[], int n);
void insertionSort(int a[], int n);

int main() {
    int enteroPrincipal[10];
    int opcion;
    do {
        printf("1. llenar entero\n");
        printf("2. mostrar entero\n");
        printf("3. ordenar bubbleSort\n");
        printf("4. ordenar de forma ascendente\n");
        printf("5. ordenar de forma descendente\n");
        printf("6. salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

         switch (opcion)
         {
         case 1:
            llenarArray(enteroPrincipal);
            break;
         case 2: 
            mostraArray(enteroPrincipal);
            break;
         case 3: 
          bubbleSort(enteroPrincipal, 10);
          break;
         case 4:
         selectionSort(enteroPrincipal, 10);
         break;
         case 5:
         insertionSort(enteroPrincipal, 10);
            break;
         case 6:
         printf("saliendo\n");
         break;
         default:
         printf("ingreselo nueva mente\n");
         }

    } while (opcion != 6);

    return 0;
    
}

void llenarArray(int entero[10]) {
    for(int i=0; i<10; i++){
        printf("Digite el numero %d " , i+1);

        scanf("%d" , &entero[i]);

    }

}

void mostrarArray(int entero[10]) {
    for(int i=0; 1<10; i++) {
        printf("Los puntos de %d son %d\n" , i+1 , entero[i]) ;

    }
    
}
// METODO DE ORDENAMIENTO

void bubbleSort(int a[], int n) {
    for (int i=0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j +1] = temp;
            }
        }
    }
}

// selection Sort
void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;

        for (int j = i +1; j < n; j++) {
            if(a[j] < a[min]) {
                min = j;
            }
        }

        if (min != i) {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
}

// insertion Sort
void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i - 1;
        while (j >=0 && a[j] > key)

        {
            a[j + 1] = a[j];
            j--;
        }
        a[j+1]=key;
        
    }
}