#!/bin/sh

if [[ $# != 1 ]]
then
    cat <<EOF
        usage: $0 <Test_Name>
EOF
    exit 1;
fi

__FILE_NAME__="${1}.cpp"
__DATE__=`date`

cat  <<EOF >$__FILE_NAME__
/****************************************************************************\\

    FileName: $__FILE_NAME__
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: $__DATE__

\\****************************************************************************/
EOF

Test_Command=`dirname $0`/Test_Template.sh

./$Test_Command $1 5

command1="/^all:/a \\\\t${1} \\\\"
command2="/^test:/a \\\\ttest_${1} \\\\"

cp makefile obj/makefile
sed -e "$command1" obj/makefile | sed -e "$command2" > makefile

echo "$1: ${1}_TEST.cpp ${1}.cpp M_Obj_Dir" >>makefile
echo -e "\tg++ -g ${1}_TEST.cpp -o ${1} -lcppunit\n\n" >>makefile
echo "test_${1}: $1" >> makefile
echo -e "\tobj/$1\n\n" >> makefile

