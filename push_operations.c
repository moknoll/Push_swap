/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:32:00 by mknoll            #+#    #+#             */
/*   Updated: 2024/12/16 09:43:25 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int arr_size(int *stack)
{
	int i;

	i = 0;
	while(stack[i] != 0)
		i++;
	return(i);	
}

void pa(int *stack_a, int *stack_b)
{
	int i;
	int size_a;
	
	i = 0;
	size_a = arr_size(stack_a);
	if (stack_b[0] == 0)
		return;
	while (size_a > 0)
	{
		stack_a[size_a] = stack_a[size_a - 1];
		size_a--;
	}
	stack_a[0] = stack_b[0];
	while(stack_b[i] != 0)
	{
		stack_b[i] = stack_b[i + 1];
		i++;
	}

}

int main()
{
	// Arrays mit ausreichend großem Speicher definieren
    int stack_a[10] = {1, 2}; // Rest wird automatisch mit 0 initialisiert
    int stack_b[10] = {3};

    // Operation pa ausführen
    pa(stack_a, stack_b);

    // Ergebnis ausgeben
    int i = 0;
    printf("stack_a: ");
    while (stack_a[i] != 0)
    {
        printf("%d ", stack_a[i]);
        i++;
    }

    printf("\nstack_b: ");
    i = 0;
    while (stack_b[i] != 0)
    {
        printf("%d ", stack_b[i]);
        i++;
    }
    printf("\n");

    return 0;
}