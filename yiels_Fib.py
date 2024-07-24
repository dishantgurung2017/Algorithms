def Fib():
    a,b = 0,1
    while True:
        yield a
        a,b = b,a+b
        
fib = Fib()
for _ in range(15):
   print(next(fib))
