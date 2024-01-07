#!/usr/bin/env ruby

# This Ruby script accepts one argument and matches it with a regular expression

pattern = /School/

if ARGV.length == 1
  input_string = ARGV[0]
  match = pattern.match(input_string)
  puts match ? match[0] : ""
else
  puts "Usage: #{$PROGRAM_NAME} <string>"
end
