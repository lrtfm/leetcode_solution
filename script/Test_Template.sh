#!/bin/sh

if [[ $# != 2 ]]
then
    cat <<EOF
        usage: $0 <Test_Name> <Test_CaseNumber>
EOF
    exit 1;
fi

__TEST_NAME__=$1
__TEST_NO__=$2

__FILE_NAME__="${1}_TEST.cpp"
__TEST_FILE__="${1}_TEST.cpp"

__DESCRIPTION__="test $1"
__TEST_CLASS__="${1}Test"
__DATE__=`date`

#if [ -f $__FILE_NAME__ ]
#then
#    echo $__FILE_NAME__ exist!
#    echo Continue?[Y/N]
#    read option
#    case $option in
#        Y)
#            echo $__FILE_NAME__ will be overwrite!
#            ;; 
#        *)
#            echo Will exit!
#            ;;
#    esac
#fi
            
echo >$__FILE_NAME__
cat  <<EOF >>$__FILE_NAME__
/****************************************************************************\

    FileName: $__FILE_NAME__
    Description: 
        $__DESCRIPTION__
        
    Name: 00797A7A
    Email: yzz1215@live.cn
    Create Date: $__DATE__

\****************************************************************************/

#include "cppunit/TestFixture.h"
#include "cppunit/ui/text/TestRunner.h"
#include "cppunit/TestCaller.h"
#include "cppunit/TestSuite.h"

#include "${__TEST_NAME__}.cpp"

class $__TEST_CLASS__ : public CppUnit::TestFixture 
{
public:
    $__TEST_CLASS__() {}
    void setUp() {}
EOF

for i in `seq 1 $__TEST_NO__`
do
    cat  <<EOF >>$__FILE_NAME__
    void test$i() 
    {
        // add your code here.
        CPPUNIT_ASSERT($i == $i);
    }
EOF
done

cat <<EOF >>$__FILE_NAME__
    void tearDown() {}
};

int main(int argc, char *argv[])
{
    CppUnit::TextUi::TestRunner runner;
    CppUnit::TestSuite *suite = new CppUnit::TestSuite();

EOF

for i in `seq 1 $__TEST_NO__`
do
    cat <<EOF >>$__FILE_NAME__
    suite->addTest(new CppUnit::TestCaller<$__TEST_CLASS__>(
                "test$i", &$__TEST_CLASS__::test$i));
EOF
done

cat <<EOF >>$__FILE_NAME__
    runner.addTest(suite);
    runner.run("", true);

    return 0;
}
EOF
