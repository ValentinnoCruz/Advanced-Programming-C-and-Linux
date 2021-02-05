import sys
sys.setrecursionlimit(100000)

def factorial(n):
    # 0 factorial is 1
    if n is 0:
        return 1
    return n * factorial(n - 1)
        
print "factorial(5):", factorial(5)

# Expected 120

def fib(n):
    # fibonacci of 0 is 0 and 1 is 1
    if n <= 1:
        return n
    return fib(n - 1) + fib(n - 2)
        
print "fib(7):", fib(7)
# Expected 13

def equal(A, B):
    # Check the lengths
    if len(A) is not len(B):
        return False

    if len(A) is 0 and len(B) is 0:
        return True

    if A[0] is not B[0]:
        return False

    return equal(A[1:], B[1:])
    
print "equal('ALICE', 'BOB):", equal('ALICE', 'BOB')
# Expected False
print "equal('ALICE', 'ALICE'):", equal('ALICE', 'ALICE')
# Expected True

def addup(list):
    # Base sum is 0
    if len(l) is 0:
        return 0
    return l[0] + addup(l[1:])

print "addup([1,2,3,4,5]):", addup([1,2,3,4,5])
# Expected 15
print "addup(range(101)):", addup(range(101))
# Expected 5050

def reverse(A):
    # If A is empty, return empty
    if len(A) is 0:
        return A
    return A[-1] + reverse(A[:-1])
        
print "reverse('hello'):", reverse('hello')
# Expected olleh

if __name__ == '__main__':
    print("factorial(5):",factorial(5))
    print("fib(7):",fib(7))
    print("equal('ALICE','BOB'):",equal('ALICE','BOB'))
    print("equal('ALICE','ALICE'):",equal('ALICE','ALICE'))
    print("addup([1,2,3,4,5]):",addup([1,2,3,4,5]))
    print("addup(range(101)):",addup(range(101)))
    print("reverse('hello'):",reverse('hello'))