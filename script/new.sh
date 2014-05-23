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
/****************************************************************************\

    FileName: $__FILE_NAME__
    Promblem:
    Description: 
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: $__DATE__

\****************************************************************************/
EOF

Test_Command=`dirname $0`/Test_Template.sh

./$Test_Command $1 5
