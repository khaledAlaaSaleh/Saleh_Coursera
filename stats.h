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
 * @param 	unsigned char *		a pointer to unsigned char
 * @param 	int 			an integer representing the length of the array
 *
 * @return 	unsigned char *		a pointer to the location of the array in memory
 */

unsigned char* creatMemory       (unsigned char*, int);

/**********************************************************************************



/**
 * @brief 				This function store array in the memory.
 *
 * @param	unsigned char *		a pointer to unsigned char
 * @param	int 			an integer representing the length the array
 *
 * @return 	int 			return (0) in case of failure, Else returns (1)
 */

int            creatArray        (unsigned char*, int);

/**********************************************************************************



/**
 * @brief 				This function make another copy of the array.
 *
 * @param	unsigned char *		a pointer to the array.
 * @param	int 			an integer representing the length the array
 *
 * @return 	unsigned char *		a pointer to the location of the copied array
 */

unsigned char* copyArray         (unsigned char*, int, unsigned char*);

/**********************************************************************************



/**
 * @brief 				This function sort the array.
 *
 * @param	unsigned char *		a pointer to the copy of the array.
 * @param	int 			an integer representing the length the array
 * @param	int 			an integer 2 for ascending 1 for descending
 *
 * @return 	unsigned char *		a pointer to the location of the sorted array
 */

unsigned char* sort_array        (unsigned char*, int, int);

/**********************************************************************************



/**
 * @brief 				This function print the array.
 *
 * @param	unsigned char *		a pointer to the array needed to be printed
 * @param	int 			an integer representing the length the array
 * @param	char*			the name of the array
 *
 * @return 	void			returns nothing
 */

void           print_array       (unsigned char*, int, char*);

/**********************************************************************************



/**
 * @brief 				This function find the minimum value in array.
 *
 * @param	unsigned char *		a pointer to the array
 * @param	int 			an integer representing the length the array
 *
 * @return 	int			minimum value
 */

int            find_minimum      (unsigned char*, int);

/**********************************************************************************



/**
 * @brief 				This function find the Maximum value in array.
 *
 * @param	unsigned char *		a pointer to the array
 * @param	int 			an integer representing the length the array
 *
 * @return 	int			maximum value
 */


int            find_maximum      (unsigned char*, int);

/**********************************************************************************



/**
 * @brief 				This function find the mean value in array.
 *
 * @param	unsigned char *		a pointer to the array
 * @param	int 			an integer representing the length the array
 *
 * @return 	int			mean value
 */


int            find_mean         (unsigned char*, int);

/*********************************************************************************



/**
 * @brief 				This function find the median value in array.
 *
 * @param	unsigned char *		a pointer to the array
 * @param	int 			an integer representing the length the array
 *
 * @return 	int			median value
 */


float          find_median       (unsigned char*, int);

/**********************************************************************************




/**
 * @brief 				This function print the array statics.
 *
 * @param	unsigned char *		a pointer to the array
 * @param	unsigned char *		a pointer to the array
 * @param	int 			an integer representing the length the array
 * @param	int 			an integer to maximum value in the array
 * @param	int 			an integer to minimum value in the array
 * @param	int 			an integer to mean value in the array
 * @param	float			an float to median value in the array
 *
 * @return 	void 			returns nothing
 *
 * @example 	void           print_statistics  (unsigned char*array,unsigned char* sorted,int n,int max,int min ,int mean,float median)
 */

void           print_statistics  (unsigned char*, unsigned char*, int, int, int, int, float);

/**********************************************************************************/





