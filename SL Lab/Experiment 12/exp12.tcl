proc times_table { x } {
    puts "Multiplication table for $x."
    for {set i 1 } { $i <= 10} {incr i } {
        set answer [expr $x * $i]
        puts "$x x $i =  $answer"
    }
 }
proc run_table { } {
    puts -nonewline "Enter a number:  "
    
    flush stdout
    set x [gets stdin]
    times_table $x
 }

run_table
 
