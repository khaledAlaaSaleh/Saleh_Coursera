/*****************************************************************************/
/**
 * @file stats.h
 * @brief statistical functions declaration
 *
 * a brief description of every function and their decelerations
 *
 * @author Khaled Alaa Saleh
 * @date 20/8/2019
 *
 */
/**
 * @brief 				This function allocate the memory
 *					with the size of the array
 *
 * @param 	int *		a pointer to int
 * @param 	int 			an integer representing the length of the array
 *
 * @return 	int *		a pointer to the location of the array in memory
 */

int* creatMemory       (int*, int);

/**********************************************************************************



/**
 * @brief 				This function store array in the memory.
 *
 * @param	int *		a pointer to int
 * @param	int 			an integer representing the length the array
 *
 * @return 	int 			return (0) in case of failure, Else returns (1)
 */

int            creatArray        (int*, int);

/**********************************************************************************



/**
 * @brief 				This function make another copy of the array.
 *
 * @param	int *		a pointer to the array.
 * @param	int 			an integer representing the length the array
 *
 * @return 	int *		a pointer to the location of the copied array
 */

int* copyArray         (int*, int, int*);

/**********************************************************************************



/**
 * @brief 				This function sort the array.
 *
 * @param	int *		a pointer to the copy of the array.
 * @param	int 			an integer representing the length the array
 * @param	int 			an integer 2 for ascending 1 for descending
 *
 * @return 	int *		a pointer to the location of the sorted array
 */

int* sort_array        (int*, int, int);

/**********************************************************************************



/**
 * @brief 				This function print the array.
 *
 * @param	int *		a pointer to the array needed to be printed
 * @param	int 			an integer representing the length the array
 * @param	char*			the name of the array
 *
 * @return 	void			returns nothing
 */

void           print_array       (int*, int, char*);

/**********************************************************************************



/**
 * @brief 				This function find the minimum value in array.
 *
 * @param	int *		a pointer to the array
 * @param	int 			an integer representing the length the array
 *
 * @return 	int			minimum value
 */

int            find_minimum      (int*, int);

/**********************************************************************************



/**
 * @brief 				This function find the Maximum value in array.
 *
 * @param	int *		a pointer to the array
 * @param	int 			an integer representing the length the array
 *
 * @return 	int			maximum value
 */


int            find_maximum      (int*, int);

/**********************************************************************************



/**
 * @brief 				This function find the mean value in array.
 *
 * @param	int *		a pointer to the array
 * @param	int 			an integer representing the length the array
 *
 * @return 	int			mean value
 */


int            find_mean         (int*, int);

/*********************************************************************************



/**
 * @brief 				This function find the median value in array.
 *
 * @param	int *		a pointer to the array
 * @param	int 			an integer representing the length the array
 *
 * @return 	int			median value
 */


float          find_median       (int*, int);

/**********************************************************************************




/**
 * @brief 				This function print the array statics.
 *
 * @param	int *		a pointer to the array
 * @param	int *		a pointer to the array
 * @param	int 			an integer representing the length the array
 * @param	int 			an integer to maximum value in the array
 * @param	int 			an integer to minimum value in the array
 * @param	int 			an integer to mean value in the array
 * @param	float			an float to median value in the array
 *
 * @return 	void 			returns nothing
 *
 * @example 	void           print_statistics  (int*array,int* sorted,int n,int max,int min ,int mean,float median)
 */

void           print_statistics  (int*, int*, int, int, int, int, float);

/**********************************************************************************/





