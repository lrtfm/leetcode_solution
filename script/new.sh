#!/bin/sh

if [[ $# < 1 ]]
then
    cat <<EOF
        usage: $0 <Test_Name...>
EOF
    exit 1;
fi
__NAME__=`echo $@ | cut -d' ' -f1- --output-delimiter='_'`
__FILE_NAME__="${__NAME__}.cpp"
__TEST_FILE_NAME__="${__NAME__}_TEST.cpp"
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
class Solution {
public:

};
EOF

Test_Command=`dirname $0`/Test_Template.sh

./$Test_Command $__NAME__ 10

command1="/^all:/a \\\\t${__NAME__} \\\\"
command2="/^test:/a \\\\ttest_${__NAME__} \\\\"

cp makefile obj/makefile
sed -e "$command1" obj/makefile | sed -e "$command2" > makefile

echo "${__NAME__}: ${__TEST_FILE_NAME__} ${__FILE_NAME__} M_Obj_Dir" >>makefile
echo -e "\tg++ -g ${__TEST_FILE_NAME__} -o obj/$__NAME__ -lcppunit" >>makefile
echo "test_${__NAME__}: ${__NAME__}" >> makefile
echo -e "\tobj/$__NAME__\n" >> makefile

