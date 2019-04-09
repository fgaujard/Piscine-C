#!/bin/sh
ldapwhoami | sed s/"dn:"//
