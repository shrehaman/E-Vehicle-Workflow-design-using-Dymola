#ifndef Map_based_model__H
#define Map_based_model__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#include "simulation/simulation_runtime.h"
#ifdef __cplusplus
extern "C" {
#endif


DLLExport
modelica_real omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData_t *threadData, modelica_complex _tableID, modelica_real _timeIn);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _timeIn);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getNextTimeEvent,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getNextTimeEvent,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getNextTimeEvent MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getNextTimeEvent)

extern double ModelicaStandardTables_CombiTimeTable_nextTimeEvent(void * /*_tableID*/, double /*_timeIn*/);


DLLExport
real_array omc_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmax(threadData_t *threadData, modelica_complex _tableID);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmax(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmax,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmax,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmax MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmax)

extern void ModelicaStandardTables_CombiTable2D_maximumAbscissa(void * /*_tableID*/, double* /*_uMax*/);


DLLExport
real_array omc_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmin(threadData_t *threadData, modelica_complex _tableID);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmin(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmin,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmin,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmin MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmin)

extern void ModelicaStandardTables_CombiTable2D_minimumAbscissa(void * /*_tableID*/, double* /*_uMin*/);


DLLExport
modelica_real omc_Modelica_Blocks_Tables_Internal_getTable2DValueNoDer2(threadData_t *threadData, modelica_complex _tableID, modelica_real _u1, modelica_real _u2);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTable2DValueNoDer2(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _u1, modelica_metatype _u2);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable2DValueNoDer2,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTable2DValueNoDer2,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTable2DValueNoDer2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTable2DValueNoDer2)

extern double ModelicaStandardTables_CombiTable2D_getValue(void * /*_tableID*/, double /*_u1*/, double /*_u2*/);


DLLExport
modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData_t *threadData, modelica_complex _tableID);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableTmax,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmax,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTimeTableTmax MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableTmax)

extern double ModelicaStandardTables_CombiTimeTable_maximumTime(void * /*_tableID*/);


DLLExport
modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData_t *threadData, modelica_complex _tableID);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData_t *threadData, modelica_metatype _tableID);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableTmin,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTimeTableTmin,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTimeTableTmin MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableTmin)

extern double ModelicaStandardTables_CombiTimeTable_minimumTime(void * /*_tableID*/);


DLLExport
modelica_real omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData_t *threadData, modelica_complex _tableID, modelica_integer _icol, modelica_real _timeIn, modelica_real _nextTimeEvent, modelica_real _pre_nextTimeEvent);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData_t *threadData, modelica_metatype _tableID, modelica_metatype _icol, modelica_metatype _timeIn, modelica_metatype _nextTimeEvent, modelica_metatype _pre_nextTimeEvent);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2,2,0) {(void*) boxptr_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2,0}};
#define boxvar_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2 MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2)

extern double ModelicaStandardTables_CombiTimeTable_getValue(void * /*_tableID*/, int /*_icol*/, double /*_timeIn*/, double /*_nextTimeEvent*/, double /*_pre_nextTimeEvent*/);


DLLExport
modelica_complex omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData_t *threadData, modelica_string _tableName, modelica_string _fileName, real_array _table, modelica_integer _smoothness, modelica_integer _extrapolation, modelica_boolean _verboseRead);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData_t *threadData, modelica_metatype _tableName, modelica_metatype _fileName, modelica_metatype _table, modelica_metatype _smoothness, modelica_metatype _extrapolation, modelica_metatype _verboseRead);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable2D_constructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTable2D_constructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTable2D_constructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable2D_constructor)

extern void * ModelicaStandardTables_CombiTable2D_init2(const char* /*_fileName*/, const char* /*_tableName*/, const double* /*_table*/, size_t, size_t, int /*_smoothness*/, int /*_extrapolation*/, int /*_verboseRead*/);


DLLExport
void omc_Modelica_Blocks_Types_ExternalCombiTable2D_destructor(threadData_t *threadData, modelica_complex _externalCombiTable2D);
DLLExport
void boxptr_Modelica_Blocks_Types_ExternalCombiTable2D_destructor(threadData_t *threadData, modelica_metatype _externalCombiTable2D);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable2D_destructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTable2D_destructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTable2D_destructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTable2D_destructor)

extern void ModelicaStandardTables_CombiTable2D_close(void * /*_externalCombiTable2D*/);


DLLExport
modelica_complex omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData_t *threadData, modelica_string _tableName, modelica_string _fileName, real_array _table, modelica_real _startTime, integer_array _columns, modelica_integer _smoothness, modelica_integer _extrapolation, modelica_real _shiftTime, modelica_integer _timeEvents, modelica_boolean _verboseRead);
DLLExport
modelica_metatype boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData_t *threadData, modelica_metatype _tableName, modelica_metatype _fileName, modelica_metatype _table, modelica_metatype _startTime, modelica_metatype _columns, modelica_metatype _smoothness, modelica_metatype _extrapolation, modelica_metatype _shiftTime, modelica_metatype _timeEvents, modelica_metatype _verboseRead);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor)

extern void * ModelicaStandardTables_CombiTimeTable_init2(const char* /*_fileName*/, const char* /*_tableName*/, const double* /*_table*/, size_t, size_t, double /*_startTime*/, const int* /*_columns*/, size_t, int /*_smoothness*/, int /*_extrapolation*/, double /*_shiftTime*/, int /*_timeEvents*/, int /*_verboseRead*/);


DLLExport
void omc_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData_t *threadData, modelica_complex _externalCombiTimeTable);
DLLExport
void boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor(threadData_t *threadData, modelica_metatype _externalCombiTimeTable);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor,2,0) {(void*) boxptr_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor,0}};
#define boxvar_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Blocks_Types_ExternalCombiTimeTable_destructor)

extern void ModelicaStandardTables_CombiTimeTable_close(void * /*_externalCombiTimeTable*/);


DLLExport
modelica_boolean omc_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_string _string);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_isEmpty(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEmpty,2,0) {(void*) boxptr_Modelica_Utilities_Strings_isEmpty,0}};
#define boxvar_Modelica_Utilities_Strings_isEmpty MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_isEmpty)


DLLExport
modelica_integer omc_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_string _string);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_length(threadData_t *threadData, modelica_metatype _string);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length,2,0) {(void*) boxptr_Modelica_Utilities_Strings_length,0}};
#define boxvar_Modelica_Utilities_Strings_length MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_length)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaStrings_length(const char* (*_string*));
 */


DLLExport
modelica_integer omc_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_string _string, modelica_integer _startIndex);
DLLExport
modelica_metatype boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace(threadData_t *threadData, modelica_metatype _string, modelica_metatype _startIndex);
static const MMC_DEFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_skipWhiteSpace,2,0) {(void*) boxptr_Modelica_Utilities_Strings_Advanced_skipWhiteSpace,0}};
#define boxvar_Modelica_Utilities_Strings_Advanced_skipWhiteSpace MMC_REFSTRUCTLIT(boxvar_lit_Modelica_Utilities_Strings_Advanced_skipWhiteSpace)

/*
 * The function has annotation(Include=...>) or is builtin
 * the external function definition should be present
 * in one of these files and have this prototype:
 * extern int ModelicaStrings_skipWhiteSpace(const char* (*_string*), int (*_startIndex*));
 */
#include "Map_based_model_model.h"


#ifdef __cplusplus
}
#endif
#endif

