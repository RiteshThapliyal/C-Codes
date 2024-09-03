import subprocess
import sys

password = int(input("Enter Password: "))

subprocess.run(shell=True)

check_password = int(input("Enter Password Again: "))

if password == check_password:
    print("Correct Password")
else:
    print("Wrong Password")