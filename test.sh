#!/bin/sh

export REQUEST_METHOD QUERY_STRING

# Test GET
REQUEST_METHOD="GET"
./events

# Test POST
REQUEST_METHOD="POST"
QUERY_STRING="action=create"
./events <<HERE
summary=Public+Swim&location=West+End+Community+Centre&byday=MO%2CWE%2CFR
HERE

