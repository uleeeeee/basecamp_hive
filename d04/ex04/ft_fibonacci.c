/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tulenius <tulenius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:30:09 by tulenius          #+#    #+#             */
/*   Updated: 2021/07/11 09:57:28 by tulenius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int fibonacci(int index) {

   if(index == 0) {
      return 0;
   }
	
   if(index == 1) {
      return 1;
   }

	else {
		
	}
   return fibonacci(i-1) + fibonacci(i-2);
}

int  main() {

   int i;
	
   for (i = 0; i < 10; i++) {
      printf("%d\t\n", fibonacci(i));
   }
	
   return 0;
}
