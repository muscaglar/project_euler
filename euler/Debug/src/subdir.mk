################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/euler.cpp \
../src/euler10.cpp \
../src/euler11.cpp \
../src/euler12.cpp \
../src/euler7.cpp \
../src/euler8.cpp \
../src/euler9.cpp \
../src/generate_triangle.cpp \
../src/number_of_factors.cpp 

OBJS += \
./src/euler.o \
./src/euler10.o \
./src/euler11.o \
./src/euler12.o \
./src/euler7.o \
./src/euler8.o \
./src/euler9.o \
./src/generate_triangle.o \
./src/number_of_factors.o 

CPP_DEPS += \
./src/euler.d \
./src/euler10.d \
./src/euler11.d \
./src/euler12.d \
./src/euler7.d \
./src/euler8.d \
./src/euler9.d \
./src/generate_triangle.d \
./src/number_of_factors.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


