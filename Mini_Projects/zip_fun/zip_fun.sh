# !/bin/bash
# ==========================
# zip_fun by o-dka 05 february 2022
# give executable, write access
# don't use for bad stuff!!! Only for fun and friendly pranks!!!
# =========================
# Algorithm:
# 1. Creates folders 
# 2. Creates and writes a file 
# 3. Moves the file to a folder and zips the folder 
# 4. Moves the zip folder into an another folder
# 5. Repeat until all of our folders are inside one 
# 6. Move the final folder and zip it with the highest level of compression
# 7. Check if the zip file exists, clean it up if specified.
#------------------------------------------------------------------
FILENAME="file.txt" 
ZIPNAME="zip_folder"
CHAR="◌󠇯◌󠇯◌󠇯◌󠇯◌󠇯◌󠇯◌󠇯◌󠇯◌󠇯◌󠇯" # character to print in the file
HOWM=100 # amount of characters and files to print and copy
#------------------------------------------------------------------
prepare_nd_print(){		
	for i in {1..8}; do
		mkdir $i # Creating folder levels
	done
	if [[ -e $FILENAME || ! -s $FILENAME ]]; then
		for ((o = 0 ; o < $HOWM ; o++)); do
			printf "line# %i\n" $o
			for ((i = 0 ; i < $HOWM ; i++)); do
				printf "%s" $CHAR >> $FILENAME	
			done
			printf "\n"  >> $FILENAME
		done
	elif [[ ! -e $FILENAME ]]; then
		printf "Creating file\n"
		touch $FILENAME
		print_to_file
	else
		printf "file already exists, and has data"
	fi
}
zip_it_up(){
: '
$3 is a level of compression
$2 is a name of the file / folder that you compress
$1 is what is the name of the zip file will be
'	
zip -q -$3 -r $1.zip $2
}
check_nd_clean(){
	if [[ -e $ZIPNAME.zip ]]; then
       		printf "done , %s.zip created" $ZIPNAME
		for y in {1..10} ;do
			rm -rf $y
			rm "$y.zip"
		done

	else 
       		printf "something clearly went wrong here"
	fi
}

prepare_nd_print # Creating and writing to file
mv  $FILENAME 1
for i in {1..8}; do 	
	zip_it_up $i $i "5"
	if [[ $((i + 1)) < 9 ]]; then
		mv "$i.zip" $((i + 1))
	else
		echo "moved all"	
	fi
done
 # final zip with the highest level of compression
zip_it_up $ZIPNAME "8.zip" "9"
check_nd_clean
