puts "Enter First Number "
a = gets.chomp.to_i
puts "Enter Second Number "
b = gets.chomp.to_i

if (a < 0 && b > 100) || (b < 0 && a > 100)
    puts "True"
else
    puts "False"
    
end
