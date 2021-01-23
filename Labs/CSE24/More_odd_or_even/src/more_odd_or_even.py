# Valentinno Cruz
# ESS-001-03
# 1/28/21
# More Odd or Even


# ask the user to input 10 integers individually.
 # here we will assign each int to "numx" and evaluate the inputs individually

num0 = int(input("Please enter integer one "))
num1 = int(input("Please enter integer two "))
num2 = int(input("Please enter integer three "))
num3 = int(input("Please enter integer four "))
num4 = int(input("Please enter integer five "))
num5 = int(input("Please enter integer six "))
num6 = int(input("Please enter integer seven "))
num7 = int(input("Please enter integer eight "))
num8 = int(input("Please enter integer nine "))
num9 = int(input("Please enter integer ten "))

# after we assigned each int the user input we then divide them by 2
 # this will ensure that we are dealing with an odd or even number
  # if the number is even we set its value to 0, if not then we know
   # that it is an odd number so we assign it back its original value

if num0%2 == 0:
    num0 = 0
else:
    num0 = num0
    
if num1%2 == 0:
    num1 =0
else:
    num1 = num1
    
if num2%2 == 0:
    num2 =0
else:
    num2 = num2
    
if num3%2 == 0:
    num3 =0
else:
    num3 = num3
    
if num4%2 == 0:
    num4 =0
else:
    num4 = num4
    
if num5%2 == 0:
    num5 =0
else:
    num5 = num5
    
if num6%2 == 0:
    num6 =0
else:
    num6 = num6
    
if num7%2 == 0:
    num7 =0
else:
    num7 = num7
    
if num8%2 ==0:
    num8 =0
else:
    num8 = num8
    
if num9%2 == 0:
    num9 = 0
else:
    num9 = num9
    

# 
    
value = num0, num1, num2, num3, num4, num5, num6, num7, num8,num9
max = max(value)

if max == 0:
    print ("There are no odd numbers")
else:
    print("The largest number is ", max)
    

    
    
    