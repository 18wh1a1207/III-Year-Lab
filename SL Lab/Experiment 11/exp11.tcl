#Using Iteration method
set i 1; set fact 1
puts "The factorial of a number is"
set x 6

while {$i <= $x} {
      set fact [expr $fact * $i]
      incr i
}

puts $fact
