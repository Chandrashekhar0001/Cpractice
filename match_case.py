a=input('''enter first two letter of week days :''')
match a:
    case ("mo"):
        print("Monday")
    case ("tu"):
        print("Tuesday")
    case ("we"):
        print("Wednesday")
    case ("th"):
        print("Thursday")
    case ("fr"):
        print("Friday")
    case ("sa"):
        print("Saturday")
    case _:
        print("Sunday")