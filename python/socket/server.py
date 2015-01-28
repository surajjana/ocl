#!/usr/bin/python           # This is server.py file

import socket               # Import socket module

s = socket.socket()         # Create a socket object
host = '10.42.0.1' # Get local machine name
port = 12368                # Reserve a port for your service.
s.bind((host, port))        # Bind to the port

s.listen(5)   
c, addr = s.accept()     # Establish connection with client.
print 'Got connection from', addr              # Now wait for client connection.
while True:
   a = raw_input(">>")
   if(a=='exit'):
   		break
   c.send(a)
   print "Client : ",c.recv(1024)
c.send('Server going to sleep... :)')
c.close()                # Close the connection