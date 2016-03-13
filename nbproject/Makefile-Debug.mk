#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/ArmPartContainer.o

# Test Directory
TESTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}/tests

# Test Files
TESTFILES= \
	${TESTDIR}/TestFiles/f1

# Test Object Files
TESTOBJECTFILES= \
	${TESTDIR}/tests/PartContainerTest.o \
	${TESTDIR}/tests/PartContainerTestRunner.o

# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpartcontainerlibrary.a

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpartcontainerlibrary.a: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpartcontainerlibrary.a
	${AR} -rv ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpartcontainerlibrary.a ${OBJECTFILES} 
	$(RANLIB) ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpartcontainerlibrary.a

${OBJECTDIR}/ArmPartContainer.o: ArmPartContainer.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../ArmPartsLibrary/RoboticArmParts/dist/Debug/GNU-Linux -include /mnt/western_digital_2TB/Development/Robotkar/ArmPartsLibrary/RoboticArmParts/AllParts.h -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArmPartContainer.o ArmPartContainer.cpp

# Subprojects
.build-subprojects:

# Build Test Targets
.build-tests-conf: .build-tests-subprojects .build-conf ${TESTFILES}
.build-tests-subprojects:

${TESTDIR}/TestFiles/f1: ${TESTDIR}/tests/PartContainerTest.o ${TESTDIR}/tests/PartContainerTestRunner.o ${OBJECTFILES:%.o=%_nomain.o}
	${MKDIR} -p ${TESTDIR}/TestFiles
	${LINK.cc}   -o ${TESTDIR}/TestFiles/f1 $^ ${LDLIBSOPTIONS} `cppunit-config --libs`   


${TESTDIR}/tests/PartContainerTest.o: tests/PartContainerTest.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../ArmPartsLibrary/RoboticArmParts/dist/Debug/GNU-Linux -include /mnt/western_digital_2TB/Development/Robotkar/ArmPartsLibrary/RoboticArmParts/AllParts.h -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/PartContainerTest.o tests/PartContainerTest.cpp


${TESTDIR}/tests/PartContainerTestRunner.o: tests/PartContainerTestRunner.cpp 
	${MKDIR} -p ${TESTDIR}/tests
	${RM} "$@.d"
	$(COMPILE.cc) -g -I../ArmPartsLibrary/RoboticArmParts/dist/Debug/GNU-Linux -include /mnt/western_digital_2TB/Development/Robotkar/ArmPartsLibrary/RoboticArmParts/AllParts.h -std=c++11 `cppunit-config --cflags` -MMD -MP -MF "$@.d" -o ${TESTDIR}/tests/PartContainerTestRunner.o tests/PartContainerTestRunner.cpp


${OBJECTDIR}/ArmPartContainer_nomain.o: ${OBJECTDIR}/ArmPartContainer.o ArmPartContainer.cpp 
	${MKDIR} -p ${OBJECTDIR}
	@NMOUTPUT=`${NM} ${OBJECTDIR}/ArmPartContainer.o`; \
	if (echo "$$NMOUTPUT" | ${GREP} '|main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T main$$') || \
	   (echo "$$NMOUTPUT" | ${GREP} 'T _main$$'); \
	then  \
	    ${RM} "$@.d";\
	    $(COMPILE.cc) -g -I../ArmPartsLibrary/RoboticArmParts/dist/Debug/GNU-Linux -include /mnt/western_digital_2TB/Development/Robotkar/ArmPartsLibrary/RoboticArmParts/AllParts.h -std=c++11 -Dmain=__nomain -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ArmPartContainer_nomain.o ArmPartContainer.cpp;\
	else  \
	    ${CP} ${OBJECTDIR}/ArmPartContainer.o ${OBJECTDIR}/ArmPartContainer_nomain.o;\
	fi

# Run Test Targets
.test-conf:
	@if [ "${TEST}" = "" ]; \
	then  \
	    ${TESTDIR}/TestFiles/f1 || true; \
	else  \
	    ./${TEST} || true; \
	fi

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/libpartcontainerlibrary.a

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
