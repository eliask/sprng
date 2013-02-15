#!/bin/sh
find lib -type f -name \*.a -mmin -10 | xargs rm -v
find SRC -type f -name \*.o -mmin -10 | xargs rm -v
find TESTS -type f -name \*.o -mmin -10 | xargs rm -v
find TESTS -type f -perm 755  | xargs rm -v
find EXAMPLES -type f -perm 755  | xargs rm -v
