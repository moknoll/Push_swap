/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 09:59:49 by mknoll            #+#    #+#             */
/*   Updated: 2024/12/16 10:04:11 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
#define FT_PUSH_SWAP_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>

void *sa(int *stack_a);
void *sb(int *stack_b);
void *ss(int *stack_a, int *stack_b);
int arr_size(int *stack);
void ra(int *stack_a);
void pa(int *stack_a, int *stack_b);

#endif