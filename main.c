#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
   for (int i = 0; i < n; i++) {
	  if (arr[i] == key) {
		 return i;
	  }
   }
}

int main()
{
	int arr[] = {5, 5, 8, 10, 6};
	// Calculates the sizes of the array in bytes, and divides it by the single element size in bytes 
	// to determine how many elements in the array there is, each element takes an equal ammount of bytes.
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 8;
	
	int index = linearSearch(arr, n, key);
	
	if (index != -1) {
	   printf("Key found at index %d\n", index);
    } else {
	   printf("Key not found\n");
    }
	
	return 0;
}
