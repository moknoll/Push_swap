/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:41:26 by mknoll            #+#    #+#             */
/*   Updated: 2024/12/16 11:25:43 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

int arr_size(int *stack)
{
	int i;

	i = 0;
	while(stack[i] != 0)
		i++;
	return(i);	
}

void ra(int *stack_a)
{
	int i;
	int size_a;
	
	size_a = arr_size(stack_a);
	i = 1;

	stack_a[size_a] = stack_a[0];
	while(stack_a[i])
	{
		stack_a[i - 1] = stack_a[i];
		i++;
	}
	stack_a[size_a] = '\0';
}

void rra(int *stack_a)
{
	int size_a;
	
	size_a = arr_size(stack_a);
	while (stack_a[size_a])
	{
		stack_a[size_a] = stack_a[size_a - 1];
		stack_a--;
	}
	stack_a[0] = stack_a[size_a - 1];
	stack_a[size_a] = '\0';
}

int main()
{
	int stack_a[20] = {1, 2, 3, 4};
	int i = 0;
	
	rra(stack_a);
    while (stack_a[i] != 0)
    {
        printf("stack_a[%d] = %d ", i, stack_a[i]);
		printf("\n");
        i++;
    }
}