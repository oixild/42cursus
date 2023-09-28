/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsabater <dsabater@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:06:03 by dsabater          #+#    #+#             */
/*   Updated: 2023/09/28 11:53:27 by dsabater         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_min(t_stack_node **stack, int excluded_index)
{
    t_stack_node *current = *stack;
    int min = current->index;

    while (current->next)
    {
        current = current->next;
        if ((current->index < min) && current->index != excluded_index)
            min = current->index;
    }

    return min;
}

static void sort_3(t_stack_node **stack_a)
{
    t_stack_node *current = *stack_a;
    int min;
    int next_min;

    min = get_min(stack_a, -1);
    next_min = get_min(stack_a, min);

    if (is_sorted(stack_a))
        return;

    if (current->index == min && current->next->index != next_min)
    {
        ra(stack_a);
        sa(stack_a);
        rra(stack_a);
    }
    else if (current->index == next_min)
    {
        if (current->next->index == min)
            sa(stack_a);
        else
            rra(stack_a);
    }
    else
    {
        if (current->next->index == min)
            ra(stack_a);
        else
        {
            sa(stack_a);
            rra(stack_a);
        }
    }
}

static void sort_4(t_stack_node **stack_a, t_stack_node **stack_b)
{
    int distance;

    if (is_sorted(stack_a))
        return;

    distance = get_distance(stack_a, get_min(stack_a, -1));

    if (distance == 1)
        ra(stack_a);
    else if (distance == 2)
    {
        ra(stack_a);
        ra(stack_a);
    }
    else if (distance == 3)
        rra(stack_a);

    if (is_sorted(stack_a))
        return;

    pb(stack_a, stack_b);
    sort_3(stack_a);
    pa(stack_a, stack_b);
}

void sort_5(t_stack_node **stack_a, t_stack_node **stack_b)
{
    int distance;

    distance = get_distance(stack_a, get_min(stack_a, -1));

    if (distance == 1)
        ra(stack_a);
    else if (distance == 2)
    {
        ra(stack_a);
        ra(stack_a);
    }
    else if (distance == 3)
    {
        rra(stack_a);
        rra(stack_a);
    }
    else if (distance == 4)
        rra(stack_a);

    if (is_sorted(stack_a))
        return;

    pb(stack_a, stack_b);
    sort_4(stack_a, stack_b);
    pa(stack_a, stack_b);
}

void simple_sort(t_stack_node **stack_a, t_stack_node **stack_b)
{
    int size;

    if (is_sorted(stack_a) || ft_stack_size(*stack_a) == 0 || ft_stack_size(*stack_a) == 1)
        return;

    size = ft_stack_size(*stack_a);

    if (size == 2)
        sa(stack_a);
    else if (size == 3)
        sort_3(stack_a);
    else if (size == 4)
        sort_4(stack_a, stack_b);
    else if (size == 5)
        sort_5(stack_a, stack_b);
}
