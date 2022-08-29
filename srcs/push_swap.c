/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youngcho <youngcho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 15:46:46 by youngcho          #+#    #+#             */
/*   Updated: 2022/08/29 19:03:28 by youngcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsing_argument.h"

#include <stdio.h>
int	main(int argc, char *argv[])
{
	t_argv	argv_int;

	printf("argc: %d\n", argc);
	// check argument
	parsing_argument(&argv_int, argc, argv);
	for(int i = 0; i < argv_int.len; i++)
		printf("%d ", argv_int.argv[i]);
	printf("\n");
	// make stack
	// merge sort
	return (0);
}