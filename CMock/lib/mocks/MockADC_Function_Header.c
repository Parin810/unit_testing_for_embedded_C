/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "../../../Unity-master/src/unity.h"
#include "../../../CMock/src/cmock.c"
#include "MockADC_Function_Header.h"

static const char* CMockString_ADC_conversion = "ADC_conversion";
static const char* CMockString_Sharp_GP2D12_estimation = "Sharp_GP2D12_estimation";
static const char* CMockString_adc_reading = "adc_reading";
static const char* CMockString_channel = "channel";
static const char* CMockString_cmock_arg1 = "cmock_arg1";
static const char* CMockString_coloumn = "coloumn";
static const char* CMockString_digits = "digits";
static const char* CMockString_lcd_print = "lcd_print";
static const char* CMockString_print_sensor = "print_sensor";
static const char* CMockString_row = "row";
static const char* CMockString_value = "value";

typedef struct _CMOCK_ADC_conversion_CALL_INSTANCE
{
  int LineNumber;
  unsigned char ReturnVal;
  unsigned char Expected_cmock_arg1;

} CMOCK_ADC_conversion_CALL_INSTANCE;

typedef struct _CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE
{
  int LineNumber;
  unsigned int ReturnVal;
  unsigned char Expected_adc_reading;

} CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE;

typedef struct _CMOCK_print_sensor_CALL_INSTANCE
{
  int LineNumber;
  char Expected_row;
  char Expected_coloumn;
  unsigned char Expected_channel;

} CMOCK_print_sensor_CALL_INSTANCE;

typedef struct _CMOCK_lcd_print_CALL_INSTANCE
{
  int LineNumber;
  char Expected_row;
  char Expected_coloumn;
  unsigned int Expected_value;
  int Expected_digits;

} CMOCK_lcd_print_CALL_INSTANCE;

static struct MockADC_Function_HeaderInstance
{
  int ADC_conversion_IgnoreBool;
  unsigned char ADC_conversion_FinalReturn;
  CMOCK_MEM_INDEX_TYPE ADC_conversion_CallInstance;
  int Sharp_GP2D12_estimation_IgnoreBool;
  unsigned int Sharp_GP2D12_estimation_FinalReturn;
  CMOCK_MEM_INDEX_TYPE Sharp_GP2D12_estimation_CallInstance;
  int print_sensor_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE print_sensor_CallInstance;
  int lcd_print_IgnoreBool;
  CMOCK_MEM_INDEX_TYPE lcd_print_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockADC_Function_Header_Verify(void)
{
  int cmock_line = TEST_LINE_NUM;
  if (Mock.ADC_conversion_IgnoreBool)
    Mock.ADC_conversion_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_ADC_conversion);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.ADC_conversion_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.Sharp_GP2D12_estimation_IgnoreBool)
    Mock.Sharp_GP2D12_estimation_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_Sharp_GP2D12_estimation);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.Sharp_GP2D12_estimation_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.print_sensor_IgnoreBool)
    Mock.print_sensor_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_print_sensor);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.print_sensor_CallInstance, cmock_line, CMockStringCalledLess);
  if (Mock.lcd_print_IgnoreBool)
    Mock.lcd_print_CallInstance = CMOCK_GUTS_NONE;
  UNITY_SET_DETAIL(CMockString_lcd_print);
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.lcd_print_CallInstance, cmock_line, CMockStringCalledLess);
}

void MockADC_Function_Header_Init(void)
{
  MockADC_Function_Header_Destroy();
}

void MockADC_Function_Header_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

unsigned char ADC_conversion(unsigned char cmock_arg1)
{
  int cmock_line = TEST_LINE_NUM;
  CMOCK_ADC_conversion_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_ADC_conversion);
  cmock_call_instance = (CMOCK_ADC_conversion_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.ADC_conversion_CallInstance);
  Mock.ADC_conversion_CallInstance = CMock_Guts_MemNext(Mock.ADC_conversion_CallInstance);
  if (Mock.ADC_conversion_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.ADC_conversion_FinalReturn;
    Mock.ADC_conversion_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_ADC_conversion,CMockString_cmock_arg1);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_cmock_arg1, cmock_arg1, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_ADC_conversion(CMOCK_ADC_conversion_CALL_INSTANCE* cmock_call_instance, unsigned char cmock_arg1)
{
  cmock_call_instance->Expected_cmock_arg1 = cmock_arg1;
}

void ADC_conversion_CMockIgnoreAndReturn(int cmock_line, unsigned char cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ADC_conversion_CALL_INSTANCE));
  CMOCK_ADC_conversion_CALL_INSTANCE* cmock_call_instance = (CMOCK_ADC_conversion_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ADC_conversion_CallInstance = CMock_Guts_MemChain(Mock.ADC_conversion_CallInstance, cmock_guts_index);
  Mock.ADC_conversion_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.ADC_conversion_IgnoreBool = (int)1;
}

void ADC_conversion_CMockExpectAndReturn(int cmock_line, unsigned char cmock_arg1, unsigned char cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_ADC_conversion_CALL_INSTANCE));
  CMOCK_ADC_conversion_CALL_INSTANCE* cmock_call_instance = (CMOCK_ADC_conversion_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.ADC_conversion_CallInstance = CMock_Guts_MemChain(Mock.ADC_conversion_CallInstance, cmock_guts_index);
  Mock.ADC_conversion_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_ADC_conversion(cmock_call_instance, cmock_arg1);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

unsigned int Sharp_GP2D12_estimation(unsigned char adc_reading)
{
  int cmock_line = TEST_LINE_NUM;
  CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_Sharp_GP2D12_estimation);
  cmock_call_instance = (CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.Sharp_GP2D12_estimation_CallInstance);
  Mock.Sharp_GP2D12_estimation_CallInstance = CMock_Guts_MemNext(Mock.Sharp_GP2D12_estimation_CallInstance);
  if (Mock.Sharp_GP2D12_estimation_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    if (cmock_call_instance == NULL)
      return Mock.Sharp_GP2D12_estimation_FinalReturn;
    Mock.Sharp_GP2D12_estimation_FinalReturn = cmock_call_instance->ReturnVal;
    return cmock_call_instance->ReturnVal;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_Sharp_GP2D12_estimation,CMockString_adc_reading);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_adc_reading, adc_reading, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_Sharp_GP2D12_estimation(CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE* cmock_call_instance, unsigned char adc_reading)
{
  cmock_call_instance->Expected_adc_reading = adc_reading;
}

void Sharp_GP2D12_estimation_CMockIgnoreAndReturn(int cmock_line, unsigned int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE));
  CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE* cmock_call_instance = (CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Sharp_GP2D12_estimation_CallInstance = CMock_Guts_MemChain(Mock.Sharp_GP2D12_estimation_CallInstance, cmock_guts_index);
  Mock.Sharp_GP2D12_estimation_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  cmock_call_instance->ReturnVal = cmock_to_return;
  Mock.Sharp_GP2D12_estimation_IgnoreBool = (int)1;
}

void Sharp_GP2D12_estimation_CMockExpectAndReturn(int cmock_line, unsigned char adc_reading, unsigned int cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE));
  CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE* cmock_call_instance = (CMOCK_Sharp_GP2D12_estimation_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.Sharp_GP2D12_estimation_CallInstance = CMock_Guts_MemChain(Mock.Sharp_GP2D12_estimation_CallInstance, cmock_guts_index);
  Mock.Sharp_GP2D12_estimation_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_Sharp_GP2D12_estimation(cmock_call_instance, adc_reading);
  cmock_call_instance->ReturnVal = cmock_to_return;
  UNITY_CLR_DETAILS();
}

void print_sensor(char row, char coloumn, unsigned char channel)
{
  int cmock_line = TEST_LINE_NUM;
  CMOCK_print_sensor_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_print_sensor);
  cmock_call_instance = (CMOCK_print_sensor_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.print_sensor_CallInstance);
  Mock.print_sensor_CallInstance = CMock_Guts_MemNext(Mock.print_sensor_CallInstance);
  if (Mock.print_sensor_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_print_sensor,CMockString_row);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_row, row, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_print_sensor,CMockString_coloumn);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_coloumn, coloumn, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_print_sensor,CMockString_channel);
    UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_channel, channel, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_print_sensor(CMOCK_print_sensor_CALL_INSTANCE* cmock_call_instance, char row, char coloumn, unsigned char channel)
{
  cmock_call_instance->Expected_row = row;
  cmock_call_instance->Expected_coloumn = coloumn;
  cmock_call_instance->Expected_channel = channel;
}

void print_sensor_CMockIgnore(void)
{
  Mock.print_sensor_IgnoreBool = (int)1;
}

void print_sensor_CMockExpect(int cmock_line, char row, char coloumn, unsigned char channel)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_print_sensor_CALL_INSTANCE));
  CMOCK_print_sensor_CALL_INSTANCE* cmock_call_instance = (CMOCK_print_sensor_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.print_sensor_CallInstance = CMock_Guts_MemChain(Mock.print_sensor_CallInstance, cmock_guts_index);
  Mock.print_sensor_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_print_sensor(cmock_call_instance, row, coloumn, channel);
  UNITY_CLR_DETAILS();
}

void lcd_print(char row, char coloumn, unsigned int value, int digits)
{
  int cmock_line = TEST_LINE_NUM;
  CMOCK_lcd_print_CALL_INSTANCE* cmock_call_instance;
  UNITY_SET_DETAIL(CMockString_lcd_print);
  cmock_call_instance = (CMOCK_lcd_print_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.lcd_print_CallInstance);
  Mock.lcd_print_CallInstance = CMock_Guts_MemNext(Mock.lcd_print_CallInstance);
  if (Mock.lcd_print_IgnoreBool)
  {
    UNITY_CLR_DETAILS();
    return;
  }
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_SET_DETAILS(CMockString_lcd_print,CMockString_row);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_row, row, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_lcd_print,CMockString_coloumn);
    UNITY_TEST_ASSERT_EQUAL_INT8(cmock_call_instance->Expected_coloumn, coloumn, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_lcd_print,CMockString_value);
    UNITY_TEST_ASSERT_EQUAL_HEX32(cmock_call_instance->Expected_value, value, cmock_line, CMockStringMismatch);
  }
  {
    UNITY_SET_DETAILS(CMockString_lcd_print,CMockString_digits);
    UNITY_TEST_ASSERT_EQUAL_INT(cmock_call_instance->Expected_digits, digits, cmock_line, CMockStringMismatch);
  }
  UNITY_CLR_DETAILS();
}

void CMockExpectParameters_lcd_print(CMOCK_lcd_print_CALL_INSTANCE* cmock_call_instance, char row, char coloumn, unsigned int value, int digits)
{
  cmock_call_instance->Expected_row = row;
  cmock_call_instance->Expected_coloumn = coloumn;
  cmock_call_instance->Expected_value = value;
  cmock_call_instance->Expected_digits = digits;
}

void lcd_print_CMockIgnore(void)
{
  Mock.lcd_print_IgnoreBool = (int)1;
}

void lcd_print_CMockExpect(int cmock_line, char row, char coloumn, unsigned int value, int digits)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_lcd_print_CALL_INSTANCE));
  CMOCK_lcd_print_CALL_INSTANCE* cmock_call_instance = (CMOCK_lcd_print_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.lcd_print_CallInstance = CMock_Guts_MemChain(Mock.lcd_print_CallInstance, cmock_guts_index);
  Mock.lcd_print_IgnoreBool = (int)0;
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_lcd_print(cmock_call_instance, row, coloumn, value, digits);
  UNITY_CLR_DETAILS();
}

