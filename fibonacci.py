#Write a program to generate the Fibonacci sequence up to 100.
def fibonacci (n):
    if n in [1,2]:
        return 1
    return fibonacci(n-1)+(n-2)
#for i in range(1,20):
    #if i<100:
     #print(fibonacci(i))

for i in range(1,16):
      print(fibonacci(i))