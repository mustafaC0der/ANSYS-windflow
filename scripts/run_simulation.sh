#!/bin/bash

# Set the case name
CASE="case_1"

# Run ANSYS Fluent in batch mode with the defined case
fluent 3d -g -i simulation/cases/$CASE.cas > simulation/results/$CASE.log

echo "Simulation completed for $CASE."
