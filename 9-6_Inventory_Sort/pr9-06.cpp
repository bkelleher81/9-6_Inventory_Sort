#include"Inventory.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
  
void displayInventory(const Inventory[], int);
//void bubbleSort(Inventory[], int);
void selectionSort(Inventory[], int);

/*******************************************************
 *                      main                           *
 *******************************************************/
int main()
{
   const int SIZE = 6;
   
   // Create and initialize the array of Inventory objects
   Inventory silverware[SIZE] =
                             { Inventory("S15", "soup spoon",  2.35),
                               Inventory("S12", "teaspoon",    2.19),
                               Inventory("F15", "dinner fork", 3.19),
                               Inventory("F09", "salad fork" , 2.25),
                               Inventory("K33", "knife",       2.35), 
                               Inventory("K41", "steak knife", 4.15) };
                               
   // Display the inventory
   cout << "Here is the original data\n";
   displayInventory(silverware, SIZE);
   
   // Sort the objects by their itemCode
   selectionSort(silverware, SIZE);
   
   // Display the inventory again
   cout << "\nHere is the sorted data\n";
   displayInventory(silverware, SIZE);

   return 0;
} 

void displayInventory(const Inventory object[], int size)
{  
   for (int index = 0; index < size; index++)
   {  cout << setw(5)  << left  << object[index].getCode() 
           << setw(13) << left  << object[index].getDescription()
           << "$"      << right << object[index].getPrice() << endl;
   }
} // End displayInventory
//void bubbleSort(Inventory array[], int size)
//{
//   bool madeAswap = true;      // This allows the for loop to begin iterating
//
//   for (int maxElement = size - 1; maxElement > 0 && madeAswap; maxElement--)
//   {  
//      madeAswap = false;       // No swaps have occurred yet on this pass
//      
//      for (int index = 0; index < maxElement; index++)
//      {
//         if (array[index].getCode() > array[index + 1].getCode())
//         {
//             swap(array[index], array[index + 1]);
//             madeAswap = true;
//         }
//      }
//   } 
//}
void selectionSort(Inventory array[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) 
        {
            // Compare itemCode strings for Inventory objects
            if (array[j].getCode() < array[minIndex].getCode())
 {
                minIndex = j;
            }
        }
        if (minIndex != i) 
        {
            // Swap only if minIndex is different from i
            swap(array[i], array[minIndex]);
        }
    }
}


 void swap(Inventory &a, Inventory &b)
{
   Inventory temp = a;
   a = b;
   b = temp;
}
