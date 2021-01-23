# Valentinno Cruz
# ESS-001-03
# 1/28/21
# Interger Classification




# ask you user to input a number, we will than assign it to the 
 # variable "num"
 
num = int(input ("Please Enter a Number "))


# Taking the input of "num" from the user as an integer we then
 # determine if it is even, or odd.

if (num % 2) == 0:          # if the number input when divided by 2 has 0 
    print('it is even')      # as a remainder than the number is even
else:                         # otherwise the number is odd
    print('it is odd')         # if you take any even num and div. by 2
                                # you will get a whole number always





#another way to do it.....

"""
num = int(input ("Please Enter a Number "))

mod = num % 2

if mod > 0:
    print ("It is an odd number")
else:
    print ("It is an even number")
    
"""