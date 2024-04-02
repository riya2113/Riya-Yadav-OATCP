Algorithm for the problem of Maximum Ice Bars 

1. Arrange the array 'costs' in an ascending fashion.
2. Set the variable 'num_ice_creams' to 0 to begin tracking the quantity of ice cream bars purchased.
3. Every ice cream bar price in the sorted 'costs' array is iterated through.
4. Verify if the boy's current amount of coins is less than or equal to the cost of the ice cream bar.
5. If so, increase 'num_ice_creams' by 1 and deduct the price of the ice cream bar from the boy's total coin count.
6. This method should be repeated until the boy runs out of coins or there are no more ice cream bars available for purchase.
7. In the final step, give the boy's maximum allowed amount of ice cream bars by returning the value of 'num_ice_creams'.
