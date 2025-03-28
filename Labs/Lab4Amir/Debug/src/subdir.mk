################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Lab4Amir.c \
../src/funciones.c 

C_DEPS += \
./src/Lab4Amir.d \
./src/funciones.d 

OBJS += \
./src/Lab4Amir.o \
./src/funciones.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Lab4Amir.d ./src/Lab4Amir.o ./src/funciones.d ./src/funciones.o

.PHONY: clean-src

