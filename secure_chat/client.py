#!/usr/bin/python           # This is client.py file

import socket               # Import socket module
from subprocess import call

s = socket.socket()         # Create a socket object
host = '127.0.0.1' # Get local machine name
port = 12348                # Reserve a port for your service.

s.connect((host, port))

while True:
	msg = s.recv(1024)
	call("./singlepad "+msg,shell=True)
	fi = open("data.txt","r+")
	new_msg = fi.read(10)
	print ">>",new_msg
	a = raw_input(">>")
	s.send(a)
s.close                     # Close the socket when done
