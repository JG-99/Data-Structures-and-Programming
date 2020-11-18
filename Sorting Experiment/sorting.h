// Simple Insertion Sort and Quicksort implementations
// for sorting Sorts arrays of ints.

void InsertionSort(int A[], int lo, int hi ){
   // Sorts A[lo] to A[hi].
   for( int i = lo+1 ; i <= hi ; i++ ){
        int pivot = A[i] ;
        int j = i-1 ;
        while( j >= lo && A[j] > pivot ){
           // shift A[j] to the right.
           A[j+1]=A[j];
           j = j-1 ;
        }
        A[j+1]=pivot;
   }
}

void QuickSort(int A[], int lo, int hi ){ 
   // Sorts A[lo] to A[hi].
   int temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){
      // Choose a pivot.
      // This is an easy, but poor, choice.
      //int pivotIndex = hi ;

      // This is middle element pivot choice.
      int pivotIndex = (hi+lo)/2;

      // This is Random Element Pivot choice.
      //int pivotIndex = rand() % hi;
     

      // swap the pivot into A[hi] 
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      int pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++; 
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts. 
      QuickSort(A, lo, i-1 );
      QuickSort(A, i+1, hi );
   }
}

void MidQuickSort(int A[], int lo, int hi ){ 
   // Sorts A[lo] to A[hi].
   int temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){

      // This is middle element pivot choice.
      int pivotIndex = (hi+lo)/2;
     
      // swap the pivot into A[hi] 
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      int pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++; 
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts. 
      QuickSort(A, lo, i-1 );
      QuickSort(A, i+1, hi );
   }
}

void RandQuickSort(int A[], int lo, int hi ){ 
   // Sorts A[lo] to A[hi].
   int temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){

      // This is Random Element Pivot choice.
      int pivotIndex = rand() % hi;

     
      // swap the pivot into A[hi] 
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      int pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++; 
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts. 
      QuickSort(A, lo, i-1 );
      QuickSort(A, i+1, hi );
   }
}


void swap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
}

void SelectionSort(int A[], int lo, int hi){

	int index;
	for(int i = lo;i<hi;i++){
		index = i;
		for(int j=i+1;j<=hi;j++){
			if(A[j]<A[index]){
				index=j;
			}
		}
		swap(&A[index],&A[i]);
	}			
}

void SmallQuickSort(int A[], int lo, int hi ){ //Experiment 2 modified Quicksort for small inputs.
   // Sorts A[lo] to A[hi].
   int temp ; // auxilliary variable used for performing swaps.
   if( lo < hi ){


      if( lo + 15 < hi){      //From Lecture notes, Changing base case!
		InsertionSort(A,lo,hi);
      }

      // This is Random Element Pivot choice.
      int pivotIndex = (hi+lo)/2;

     
      // swap the pivot into A[hi] 
      temp = A[pivotIndex]; A[pivotIndex] = A[hi]; A[hi] = temp ;

      // Partition based on the pivot.
      int pivot = A[hi];
      int i = lo ; // i indexes the next place to put a newly found small value.
      for( int j = lo; j < hi; j++ ){
         // j indexes the next element to inspect.
         if( A[j] < pivot ){
            // swap A[i] and A[j], and increment i.
            temp = A[i]; A[i] = A[j]; A[j] = temp;
            i++; 
         }
      }
      // swap A[hi] and A[i], to put the pivot in place.
      temp = A[hi]; A[hi] = A[i]; A[i] = temp;

      // Recursively sort the two parts. 
      QuickSort(A, lo, i-1 );
      QuickSort(A, i+1, hi );
   }
}




