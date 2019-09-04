# Problem 1
## Multiples of 3 and 5

---

### Description

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get
3, 5, 6, and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

---

### Explanation of Solution

This problem is deceptively straight forward.

If we start listing out the multiples of 3: <code>3 + 6 + 9 + 12 + ...</code>
We can see that it is really just: <code>(3 * 1) + (3 * 2) + (3 * 3) + (3 * 4) +
...</code>
Which is just: <code>3 * (1 + 2 + 3 + 4 + ...)</code>

Since we are looking for a sum and our sum in the parenthesis is consecutive
natural numbers, we can use the well defined Triangle Number
formula for finding the n<sup>th</sup> Triangle Number: <var>n</var> *
(<var>n</var> + 1) &div; 2

The next question is what is our <var>n</var> in the case of multiples of 3.

Well, we can simply floor divide 1000 (our upper limit) by 3 and yield the
result 333.

That's our <var>n</var>. Now, we simply find the 333<sup>rd</sup> Triangle
Number and then multiply the result by 3 (since we factored 3 out of our sum).

That takes care of the multiples of 3. Repeat that process for multiples of 5
and add the results together.

Now, we need to take care of the multiples of both 3 AND 5. This is simple.
Repeat the process above with multiples of 15. Then, subtract that result from
the sum of the multiples of 3 and/or 5. That takes care of the double counting,
and we have completed the problem.
