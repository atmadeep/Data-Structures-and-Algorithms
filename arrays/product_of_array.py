def product_of_array(array):
   result_array = [1] * len(array)

   # Construct the prefix array
   prefix = 1
   for i in range(len(array)):
      result_array[i] = prefix
      prefix*=array[i]

   # Construct the postfix array
   postfix = 1
   for i in range(len(array)-1,-1,-1):
      result_array[i]*=postfix
      postfix*=array[i]

   return result_array
    

array = [1,2,3,4]
print(product_of_array(array))