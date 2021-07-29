/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:14:04 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/15 18:43:09 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strdup(char *src);

int main(void)
{

    char * arr = "hello";
    char * clone = arr;
    char * result;
    char * OGstrup;


    result = ft_strdup(arr);
    printf("%c", '\n');

    printf("%s %s\n", "arr return string: ", arr);
    printf("%s %p\n", "arr[0] mem address : ", &arr[0]);
    printf("%c", '\n');

    printf("%s %s\n", "clone return string: ", clone);
    printf("%s %p\n", "clone[0] mem address : ", &clone[0]);
    printf("%c", '\n');

    printf("%s %s\n", "ft_strdup return string: ", result);
    printf("%s %p\n", "ft_strdup[0] mem address : ", &result[0]);
    printf("%c", '\n');

    OGstrup = strdup(arr);

    printf("%s %s\n", "OG strup return string: ", OGstrup);
    printf("%s %p\n", "OG strup[0] mem address : ", &OGstrup[0]);
    printf("%c", '\n');


    if (arr == result)
    {
        printf("%s\n", "result matches with src (if you see this, then error)");
    } 
    else
    {
        printf("%s\n", "ft_strdup does NOT match with src - if (arr == ft_strdup comparison) (should not match)");
    }

    if (arr == OGstrup)
    {
        printf("%s\n", "OGstrup matches with src (if you see this, then error)");
    } 
    else
    {
        printf("%s\n", "OGstrup does NOT match with src - if (arr == OGstrup comparison) (should not match)");
    }

    printf("%c", '\n');

    return(0);
}