#!/usr/bin/python           # This is client.py file

import socket               # Import socket module

s = socket.socket()         # Create a socket object
host = '127.0.0.0' # Get local machine name
port = 12350                # Reserve a port for your service.

s.connect((host, port))

while True:
	print ">>",s.recv(1024)
	s.send
s.close                     # Close the socket when done