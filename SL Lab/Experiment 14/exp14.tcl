set list1 [ list 3 5 9 { { } } 1 6 8 2 ]
puts "Creation of list is done and printing the list"  
puts $list1
puts "After appending the list is"
lappend list1 7 4
puts $list1

puts "Traversing the list"
set n [llength $list1]
set i 0

while {$i < $n} {

    puts [lindex $list1 $i]
    incr i
}
puts "After concatenation of list"
set a [ concat {*}$list1 ]
puts $a
