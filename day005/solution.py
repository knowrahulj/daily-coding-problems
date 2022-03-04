# cons is a function which takes two arguments, a and b and returns a function pair.
# The function pair takes a function f as an argument which consumes two arguments.

def cons(a, b):
    def pair(f):
        return f(a, b)
    return pair

def car(f):
    def left(a, _):
        return a
    return f(left)

def cdr(f):
    def right(_, b):
        return b
    return f(right)

print(car(cons(3,4)))
print(cdr(cons(3,4)))