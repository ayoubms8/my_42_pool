#!/bin/sh
ifconfig | grep ether | sed '2d' | cut -d " " -f 2
