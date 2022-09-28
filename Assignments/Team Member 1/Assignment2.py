from random import randint

def generating_tempvalue():
    return randint(1,150)
def generating_humidityvalue():
    return randint(1,150)
    
random_tempvalue = generating_tempvalue()
print("The value of temperature is:",random_tempvalue)
random_humidityvalue = generating_humidityvalue()
print("The value of humidity is:",random_humidityvalue)

if random_tempvalue>80:
    print("High temperature detected")
    if random_humidityvalue>90:
        print("High humidity\n********ALERT SIGNAL********")
    else:
        print("High temperature detected")
elif random_tempvalue==80:
    print("Temperature is at maximum level")
else:
    print("Normal")
