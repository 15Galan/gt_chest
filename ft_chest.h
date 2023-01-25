/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chest.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:15:20 by antgalan          #+#    #+#             */
/*   Updated: 2023/01/25 10:45:30 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHEST_H
# define FT_CHEST_H

/**
 * @brief	Definition of an item.
 * 
 * @param	name	Name of the item.
 * @param	count	Quantity of the item.
 */
typedef struct s_item
{
	char			*name;
	unsigned int	count;
}	t_item;

/**
 * @brief	Creates a new item.
 * 
 * @param name	Name of the item.
 * @param count	Quantity of the item.
 *  
 * @return	Pointer to the new item.
 */
t_item	*new_item(char *name, int count);

/**
 * @brief	Checks if two items are the same.
 * 
 * @example	"Sword" == "SwORd" != "Sw0rd".
 * 
 * @param item1	Pointer to the first item.
 * @param item2	Pointer to the second item.
 * 
 * @return	1 if the items are equal;
 * 			0 otherwise.
 */
int		equal_items(t_item *item1, t_item *item2);

/**
 * @brief	Searches an item in the chest.
 * 
 * @param chest	Pointer to the chest.
 * @param name	Name of the item to find.
 * 
 * @return	Pointer to the item if found;
 * 			NULL otherwise.
 */
t_item	*search_item(t_item *chest, char *name);

/**
 * @brief	Adds an item to the chest.
 * 
 * @param chest	Pointer to the chest.
 * @param item	Pointer to the item to add.
 */
void	add_item(t_item **chest, t_item *item);

/**
 * @brief	Deletes an item from the chest.
 * 
 * @param chest	Pointer to the chest.
 * @param name	Name of the item to delete.
 */
void	delete_item(t_item **chest, char *name);

/**
 * @brief	Deletes all items from the chest.
 * 
 * @param chest	Pointer to the chest.
 * 
 * @return	Number of items deleted.
 */
int		empty_chest(t_item **chest);

/**
 * @brief	Prints an item in a formatted way.
 * 
 * @example	"Sword    x 1".		Notice that '\t' is used.
 * 
 * @param item	Pointer to the item to print.
 */
void	print_item(t_item *item);

/**
 * @brief	Prints the chest in a formatted way.
 * 
 * @example	Potion      x 5			Notice that
 * 			Gold Sword  x 1			the 'x' is
 * 			Shield      x 1			aligned.
 * 			Fake Iron   x 10
 * 
 * @param chest	Pointer to the chest to print.
 */
void	print_chest(t_item *chest);

/**
 * @brief	Checks a chest and prints information about the number of different
 * 			items, the total quantity of items, and the most/least common item.
 * 
 * @example	Number of items :   4
 * 			Total quantity  :   17
 * 			Most common     :   Fake Iron   x 10	If 2 or more item verifies,
 * 			Most rare       :   Gold Sword  x 1		it takes the first one.
 * 
 * @param chest	Pointer to the chest to check.
 */
void	print_report(t_item *chest);

#endif
