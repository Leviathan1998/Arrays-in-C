/* Includes ------------------------------------------------------------------*/
#include "array.h"

#include <stdio.h>  // printf

/* Private macros ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function declarations ---------------------------------------------*/
/* Exported functions definitions --------------------------------------------*/

void Array_Print(const int array[], size_t size) {
//for statement to print values using array
    {

        const int array[6] = {5, 7, 15, 35, 81, 51};


        int loop;

        for(loop = 0; loop < 5; loop++)
            printf("%d ", array[loop]);
        size_t i = 0;
        for( ; i < size; ++i );
        printf("%d ", array[loop]);


    }

}






void Array_Fill(int array[], size_t size, int value) {
    if (array != NULL){
        for (size_t i = 0; i < size; ++i){
            array[i] = value;

            {
                int ar[6]={5, 7, 15, 35, 81, 51};
                Array_Fill(ar, 6, 7);{

                    for (int i = 0; i < 10; ++i)

                        printf("%d ", ar[i]);
                }
            }
        }
    }
}






void Array_Clear(int array[], size_t size){
    if (array != NULL){
        for (size_t i = 0; i < size; ++i){
            array[i] = 0;
            size_t size = 6;
            int array[6]={5, 7, 15, 35, 81, 51};

            printf("%d",array);
        }
    }
}

bool Array_MovingAverage(const int inputSeries[], size_t inputSize, size_t window, float output[],
                         size_t outputSize) {
    float sum;
    if (inputSeries != NULL && output != NULL){
        if(outputSize >= inputSize){

            size_t inputSize[11] =  {1, 2, 2, 3, 6, 8, 9, 2, 1, 2, 1};
            const uint8_t window = 5;
            {
                const int inputSeries[] = {1, 2, 2, 3, 6, 8, 9, 2, 1, 2, 1};
                double window = 5;
                double c = 0.0;
                double d = 0.0;

                for(int i = 0; i < window; i++)
                {
                    c += inputSeries[i];
                    d = c / window;

                }

                printf("%f\n", d);
                return 0;
            }

            for(int i = 0; i < inputSize; i++)
                sum += inputSeries[i];



        }  }
    return false;
}

/* Private function definitions ----------------------------------------------*/
