marks={
    'science'=> 82,
    'maths'=> 90,
    'social'=>65
}
total = 0
marks.each {|key,value|
              total +=value
        } 
puts "Total Marks: "+ total.to_s
