/** Listing 1.1 Example of C Source Code 
 * @file example.c
 * @brief 
 * @author WANGHUI (479058251@qq.com)
 * @version 1.0
 * @date 2022-12-10
 * 
 * @copyright Copyright (c) 2022 
 * 
 */

#include <stdio.h>
int main(void)
{
    int dogs;

    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);
    printf("So you have %d dog(s)!\n", dogs);
    
    return 0;
}