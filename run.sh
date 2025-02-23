#!/bin/bash
# Run a given units program

UNIT=$1
PROBLEM=$2

if [ "$UNIT" == "" ]; then
    echo "ERROR: First argument cannot be empty string";
    exit 1;
fi
if [ "$PROBLEM" == "" ]; then
    echo "ERROR: Second argument cannot be empty string";
    exit 1;
fi

UNIT_FOLDER=$(ls | grep "^$UNIT.")
PROBLEM_FILE=$(ls $UNIT_FOLDER | grep "^$PROBLEM.")

if [ "$UNIT_FOLDER" == "" ]; then
    echo "ERROR: First argument is not valid, as no such unit number found: $UNIT";
    exit 1;
fi
if [ "$PROBLEM_FILE" == "" ]; then
    echo "ERROR: Second argument is not valid, as no such problem number found: $PROBLEM";
    exit 1;
fi

echo running: $UNIT_FOLDER/$PROBLEM_FILE

g++ --std=c++11 $UNIT_FOLDER/$PROBLEM_FILE -o a.out && ./a.out