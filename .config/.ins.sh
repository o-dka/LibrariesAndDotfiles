#!/bin/sh
#=======================================================================================
# Ins script 
# Script to install `.deb` packages on void linux, `.deb` package should be in ~/Downloads
# in order for the script to work run chmod +x ins.sh
# PLEASE READ THE COMMENTS 
#=======================================================================================
# Written by o-dka, 2021
#======================================================================================
echo -n "What file to install?\n"
read filename   #reads file name with extension not the file name per say e.i: $filename == file.deb and not file

cd ~/Downloads
if [ -e "$filename" ]; then   # checks if the file exists	
	echo -n "Are you sure you want to install $filename ? [y/N]:"
	read ans
	if [ "$ans" = "y" ]; then
		ar x "$filename"
		if [ -d "temp/" ]; then	 #does the `/temp` directory exists?( if it does ,should be empty before running for the first time)
			tar xf data.tar.* -C temp	
		else
			mkdir temp
			tar xf data.tar.* -C temp
		fi
		sudo cp -R temp/* /  # this is a point at which you should write your own password
		echo "Removing trash...\n"
		cd ~/Downloads/temp/ && rm -rv usr/ #Removes the tmp/usr/.. 
		echo "\nDone, trash removed, file installed"
	else
		echo  -n "Answer is no, stopping\n"
		return 0
	fi	
else 
	echo -n "ERROR: File doesn't exist, stopping\n"
	return 1
fi
