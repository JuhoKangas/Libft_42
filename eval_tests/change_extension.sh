#! /bin/zsh

echo -n "What files do you want to change: "
read FILE_NAME
echo -n "Please choose what extension you want to give the files: "
read EX_NAME
echo "The extension will be now .$EX_NAME"
for f in $(ls *.$FILE_NAME)
do
	mv $f ${f%.$FILE_NAME}.$EX_NAME
	# ${string%substring} finds the shortest substring and deletes it
done
echo
echo "Heres the new files:"
ls *.$EX_NAME
