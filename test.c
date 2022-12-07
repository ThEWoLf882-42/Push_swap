/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agimi <agimi@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 13:17:16 by agimi             #+#    #+#             */
/*   Updated: 2022/12/07 13:17:17 by agimi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void quicksort(int *stack1, int *stack2, int low, int high) {
  // base case: if the low index is greater than or equal to the high index, the data is already sorted
  if (low >= high) {
    return;
  }

  // choose the pivot element as the middle element in stack1
  int pivot = stack1[(low + high) / 2];

  // initialize the left and right indexes
  int left = low;
  int right = high;

  // while the left index is less than the right index, continue sorting
  while (left < right) {
    // move the left index to the right until it finds an element that is greater than or equal to the pivot
    while (stack1[left] < pivot) {
      left++;
    }

    // move the right index to the left until it finds an element that is less than or equal to the pivot
    while (stack1[right] > pivot) {
      right--;
    }

    // if the left index is still less than the right index, swap the elements at the left and right indexes
    if (left < right) {
      int temp = stack1[left];
      stack1[left] = stack1[right];
      stack1[right] = temp;
    }
  }

  // sort the left and right sub-stacks using the quicksort algorithm
  quicksort(stack1, stack2, low, right);
  quicksort(stack1, stack2, right + 1, high);
}
