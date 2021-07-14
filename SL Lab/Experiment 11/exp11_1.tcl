#Using Recursion
proc fact n {
if  {$n==0} {
    return 1
} else {
    return [expr $n * [fact [expr $n-1]]]
}
}
puts "The Factorial  of a Number is"
puts [fact 5]
