#*************************************************************************
# Copyright (c) 2002 The University of Chicago, as Operator of Argonne
#     National Laboratory.
# Copyright (c) 2002 The Regents of the University of California, as
#     Operator of Los Alamos National Laboratory.
# EPICS BASE is distributed subject to a Software License Agreement found
# in file LICENSE that is included with this distribution.
#*************************************************************************

TOP = ../..
include $(TOP)/configure/CONFIG

PROD_HOST += inftest
inftest_SRC += inftest.cpp

include $(TOP)/configure/RULES

ifdef T_A
runtests:
	inftest.exe
endif