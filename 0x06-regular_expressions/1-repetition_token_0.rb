# File: 1-repetition_token_0.rb

def match_repetition_token(input)
    # Your regular expression goes here
    regex = /your_regular_expression/
  
    # Check if the input matches the regular expression
    if input.match?(regex)
      puts "Input matches the repetition token!"
    else
      puts "Input does not match the repetition token."
    end
  end
  
  # Accept one argument from the command line
  input_argument = ARGV[0]
  
  # Call the method with the input argument
  match_repetition_token(input_argument)
  