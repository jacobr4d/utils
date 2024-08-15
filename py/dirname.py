#!/usr/bin/env python3
import sys

for path in sys.argv[1:]:
    # edge case: if all '/'s then return '/'
    if all(x == '/' for x in path):
        print('/')
        continue
    # edge case: remove trailing /'s unless they are starting '/'s
    path = path.rstrip('/')
    # edge case: if no /'s then return .
    if '/' not in path:
        print('.')
        continue
    i = path.rindex('/')
    # if final '/' is at the start, then return '/'
    if i == 0:
        print('/')
        continue
    print(path[:i])

