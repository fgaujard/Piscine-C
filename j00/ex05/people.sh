#!/bin/sh
ldapsearch uid="z*" cn | grep "cn:" | sed s/"cn: "// | sort -rf
