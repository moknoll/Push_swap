/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mknoll <mknoll@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:33:57 by mknoll            #+#    #+#             */
/*   Updated: 2024/12/16 13:53:08 by mknoll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
# include "libft.h"

int main(int argc, char *argv[])
{
	// 1. parse and valisate inputs
		// Convert the input into a unified list of numbers for processing, whetheer passed as arguments or inside quotes 
		// Split quoted strings by spaces
		// Ensure no invalid characters are present (e. g. letters or symbols other than = or - )
	// 2. Check integer limits 
		// each parsed number must fall within the range INT_MIN to INT_MAX
	// 3. Handle dplicates 
		// store numbers in a set (or equivalent) to detect duplicates efficiently
	// 4. Return Errors
		// If any of the validation checks fail, print "Error\n" and terminate  
}