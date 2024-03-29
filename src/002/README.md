# Problem 2
## Even Fibonacci Numbers

---

### Description

Each new term in the Fibonacci sequence is generated by adding the previous two
terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed
four million, find the sum of the even-valued terms.

---

### Explanation of Solution

There is not really any good way to go about this problem other than a brute
force solution. Fortunately, there are some patterns we can observe.

Take the first 10 terms provided by the problem:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

We can see that every 3 terms, there is a new even-valued terms. We can
capitalize on this by not checking every term generated by our Fibonacci
algorithm and rather just adding every 3<sup>rd</sup> term to our sum.
