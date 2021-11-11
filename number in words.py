digits = [
    'zero',
    'one',
    'two',
    'three',
    'four',
    'five',
    'six',
    'seven',
    'eight',
    'nine'
]
teens = [
    'ten',
    'eleven',
    'twelve',
    'thirteen',
    'fourteen',
    'fifteen',
    'sixteen',
    'seventeen',
    'eighteen',
    'nineteen'
]
tens = [
    'twenty',
    'thirty',
    'fourty',
    'fifty',
    'sixty',
    'seventy',
    'eighty',
    'ninety'
]

powers = [
    '',
    'thousand',
    'million',
    'billion',
    'trillion',
    'quadrillion',
    'quintillion',
    'sextillion',
    'septillion',
    'octillion',
    'nonillion',
    'decillion',
    'undecillion',
    'duodecillion',
    'tredecillion',
    'quattuordecillion',
    'quindecillion',
    'sexdecillion',
    'septendecillion',
    'octodecillion',
    'novemdecillion',
    'vigintillion',
    'unvigintillion',
    'duovigintillion',
    'trevigintillion',
    'quattuorvigintillion',
    'quinvigintillion',
    'sexvigintillion',
    'septenvigintillion',
    'octovigintillion',
    'novemvigintillion',
    'trigintillion',
    'untrigintillion',
    'duotrigintillion'
]

def three_digits(number):
    string = ""

    if (number // 100 != 0):
        string = string + digits[number // 100] + ' hundred '

    if (number // 10 % 10 == 1):
        string = string + teens[number % 10] + ' '
    elif (number // 10 % 10 > 1):
        string = string + tens[number // 10 % 10 - 2] + ' '
        if (number % 10 > 0):
            string = string + digits[number % 10] + ' '
    elif (number % 10 > 0):
        string = string + digits[number % 10] + ' '
    
    return string

def main():
    number = int(input('Enter the number here: '))
    string = ""

    if number == 0:
        print(digits[0])

    else:
        try:
            i = 0
            while(number != 0):
                string = three_digits(number % 1000) + powers[i] + ' ' + string + ' '
                number = number // 1000
                i += 1
        
            print(string)
        except:
            print('Number too large')

if __name__ == '__main__':
    main()