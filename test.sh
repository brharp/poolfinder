#!/bin/sh

export REQUEST_METHOD QUERY_STRING

# Test GET
REQUEST_METHOD="GET"
./cal

# Test POST
REQUEST_METHOD="POST"
QUERY_STRING="action=create"
./cal <<HERE
summary=Public+Swim&location=West+End+Community+Centre
HERE

