/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:20:12 by mknoll            #+#    #+#             */
/*   Updated: 2024/12/16 09:35:31 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *sa(int *stack_a)
{
	int temp;
	
	if (!stack_a[0] || !stack_a[1])
		return;
	temp = stack_a[0];
	stack_a[0] = stack_a[1];
	stack_a[1] = stack_a[0];
	return (stack_a);
}


void *sb(int *stack_b)
{
	int temp;
	
	if (!stack_b[0] || stack_b[1])
		return;
	temp = stack_b[0];
	stack_b[0] = stack_b[1];
	stack_b[1] = stack_b[0];
	
	return (stack_b);
}

void *ss(int *stack_a, int *stack_b)
{
	sb(stack_b);
	sa(stack_a);
	return (stack_a, stack_b);
}