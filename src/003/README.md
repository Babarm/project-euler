# Problem 3
## Largest Prime Factor

---

### Description

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143?

---

### Explanation of Solution

A quick brute force solution to this problem would be simply to check all
possible divisors of 600851475143 and then check each divisor for primality.
Then take the largest prime factor.

But that will take FOREVER to calculate. There is a much, much faster method of
calculation. This will require us to use the [Fundamental Theorem of
Arithmetic](https://en.wikipedia.org/wiki/Fundamental_theorem_of_arithmetic),
which states: every integer greater than 1 is either a prime number itself or
can be represented as a unique product of prime numbers.

Thus, rather than calculating all prime numbers below the given limit, we can
simply enumerate each number until we factor the limit completely. Essentially
we start with 2 (since each integer is always divisible by 1) and determine how
many times our limit is divisible by that number. Then we check 3, 4, etc.
Consider the divisor 4. If the original number *is* divisible by 4, that would
have already been captured by 2, twice. Since 4's factorization is
2<sup>2</sup>. Therefore, we will not have duplicate results. If the limit is
divisible by, say, 2, we divide the limit by 2 and check again. We continue
checking until it is no longer divisible by 2.

How do we know when we are done? Well, we are dividing our limit each time we
find a factor. So, eventually we will try to check a factor that is greater than
the square root of the limit. That is our upper bound on possible candidates.
The last thing to check is if the limit is 1. That would indicate that the last
factor found is our largest prime factor. If the limit is greater than 1 (or,
rather greater than the last factor found), then the remainder is our largest
prime factor.

The algorithm would go something like this:

<pre>
LIMIT := 600851475143
LARGEST\_FACTOR := 0

i := 2
while i * i <= LIMIT:
    if LIMIT mod i is 0:
        LIMIT := LIMIT / i
        LARGEST\_FACTOR := i
    else:
        i := i + 1

if LIMIT > LARGEST\_FACTOR:
    LARGEST\_FACTOR := LIMIT
</pre>
