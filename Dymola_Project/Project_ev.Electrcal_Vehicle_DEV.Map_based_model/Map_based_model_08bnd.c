/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "Map_based_model_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 382
type: SIMPLE_ASSIGN
$START.eleDrive.constPDC.integrator1.y = eleDrive.constPDC.integrator1.y_start
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  data->modelData->realVarsData[3].attribute /* eleDrive.constPDC.integrator1.y STATE(1) */.start = data->simulationInfo->realParameter[73] /* eleDrive.constPDC.integrator1.y_start PARAM */;
    data->localData[0]->realVars[3] /* eleDrive.constPDC.integrator1.y STATE(1) */ = data->modelData->realVarsData[3].attribute /* eleDrive.constPDC.integrator1.y STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[3].info /* eleDrive.constPDC.integrator1.y */.name, (modelica_real) data->localData[0]->realVars[3] /* eleDrive.constPDC.integrator1.y STATE(1) */);
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
$START.batt1.cDummy.v = batt1.EBatteryMin + batt1.SOCInit * (batt1.EBatteryMax - batt1.EBatteryMin)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->modelData->realVarsData[2].attribute /* batt1.cDummy.v STATE(1) */.start = data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */ + (data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */) * (data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ - data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */);
    data->localData[0]->realVars[2] /* batt1.cDummy.v STATE(1) */ = data->modelData->realVarsData[2].attribute /* batt1.cDummy.v STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[2].info /* batt1.cDummy.v */.name, (modelica_real) data->localData[0]->realVars[2] /* batt1.cDummy.v STATE(1) */);
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
$START.batt1.cBattery.v = batt1.EBatteryMin + batt1.SOCInit * (batt1.EBatteryMax - batt1.EBatteryMin)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->modelData->realVarsData[1].attribute /* batt1.cBattery.v STATE(1) */.start = data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */ + (data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */) * (data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ - data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */);
    data->localData[0]->realVars[1] /* batt1.cBattery.v STATE(1) */ = data->modelData->realVarsData[1].attribute /* batt1.cBattery.v STATE(1) */.start;
    infoStreamPrint(LOG_INIT_V, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[1].info /* batt1.cBattery.v */.name, (modelica_real) data->localData[0]->realVars[1] /* batt1.cBattery.v STATE(1) */);
  TRACE_POP
}
OMC_DISABLE_OPT
int Map_based_model_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  Map_based_model_eqFunction_382(data, threadData);

  Map_based_model_eqFunction_383(data, threadData);

  Map_based_model_eqFunction_384(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void Map_based_model_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 385
type: SIMPLE_ASSIGN
driver.driveCyc.fileName = driver.CycleFileName
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,385};
  data->simulationInfo->stringParameter[1] /* driver.driveCyc.fileName PARAM */ = data->simulationInfo->stringParameter[0] /* driver.CycleFileName PARAM */;
  TRACE_POP
}

/*
equation index: 386
type: SIMPLE_ASSIGN
driver.driveCyc.extrapolation = driver.extrapolation
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  data->simulationInfo->integerParameter[4] /* driver.driveCyc.extrapolation PARAM */ = data->simulationInfo->integerParameter[8] /* driver.extrapolation PARAM */;
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
driver.driveCyc.shiftTime = driver.driveCyc.startTime
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[54] /* driver.driveCyc.shiftTime PARAM */ = data->simulationInfo->realParameter[55] /* driver.driveCyc.startTime PARAM */;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
driver.driveCyc.tableID = Modelica.Blocks.Types.ExternalCombiTimeTable.constructor(driver.driveCyc.tableName, if driver.driveCyc.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(driver.driveCyc.fileName) then driver.driveCyc.fileName else "NoName", {{}}, driver.driveCyc.startTime, {driver.driveCyc.columns[1]}, Modelica.Blocks.Types.Smoothness.LinearSegments, driver.driveCyc.extrapolation, driver.driveCyc.shiftTime, driver.driveCyc.timeEvents, driver.driveCyc.verboseRead)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  integer_array tmp1;
  array_alloc_scalar_integer_array(&tmp1, 1, (modelica_integer)data->simulationInfo->integerParameter[3] /* driver.driveCyc.columns[1] PARAM */);
  data->simulationInfo->extObjs[0] = omc_Modelica_Blocks_Types_ExternalCombiTimeTable_constructor(threadData, data->simulationInfo->stringParameter[2] /* driver.driveCyc.tableName PARAM */, (((!stringEqual(data->simulationInfo->stringParameter[1] /* driver.driveCyc.fileName PARAM */, _OMC_LIT4)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, data->simulationInfo->stringParameter[1] /* driver.driveCyc.fileName PARAM */)))?data->simulationInfo->stringParameter[1] /* driver.driveCyc.fileName PARAM */:_OMC_LIT4), _OMC_LIT5, data->simulationInfo->realParameter[55] /* driver.driveCyc.startTime PARAM */, tmp1, 1, data->simulationInfo->integerParameter[4] /* driver.driveCyc.extrapolation PARAM */, data->simulationInfo->realParameter[54] /* driver.driveCyc.shiftTime PARAM */, data->simulationInfo->integerParameter[7] /* driver.driveCyc.timeEvents PARAM */, data->simulationInfo->booleanParameter[8] /* driver.driveCyc.verboseRead PARAM */);
  TRACE_POP
}

/*
equation index: 389
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[1,1] = eleDrive.effTable[1,1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,389};
  data->simulationInfo->realParameter[96] /* eleDrive.toElePow.effTable[1,1] PARAM */ = data->simulationInfo->realParameter[79] /* eleDrive.effTable[1,1] PARAM */;
  TRACE_POP
}

/*
equation index: 390
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[1,1] = eleDrive.toElePow.effTable[1,1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  data->simulationInfo->realParameter[105] /* eleDrive.toElePow.effTable_.table[1,1] PARAM */ = data->simulationInfo->realParameter[96] /* eleDrive.toElePow.effTable[1,1] PARAM */;
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[1,2] = eleDrive.effTable[1,2]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->realParameter[97] /* eleDrive.toElePow.effTable[1,2] PARAM */ = data->simulationInfo->realParameter[80] /* eleDrive.effTable[1,2] PARAM */;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[1,2] = eleDrive.toElePow.effTable[1,2]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[106] /* eleDrive.toElePow.effTable_.table[1,2] PARAM */ = data->simulationInfo->realParameter[97] /* eleDrive.toElePow.effTable[1,2] PARAM */;
  TRACE_POP
}

/*
equation index: 393
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[1,3] = eleDrive.effTable[1,3]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,393};
  data->simulationInfo->realParameter[98] /* eleDrive.toElePow.effTable[1,3] PARAM */ = data->simulationInfo->realParameter[81] /* eleDrive.effTable[1,3] PARAM */;
  TRACE_POP
}

/*
equation index: 394
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[1,3] = eleDrive.toElePow.effTable[1,3]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  data->simulationInfo->realParameter[107] /* eleDrive.toElePow.effTable_.table[1,3] PARAM */ = data->simulationInfo->realParameter[98] /* eleDrive.toElePow.effTable[1,3] PARAM */;
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[2,1] = eleDrive.effTable[2,1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[99] /* eleDrive.toElePow.effTable[2,1] PARAM */ = data->simulationInfo->realParameter[82] /* eleDrive.effTable[2,1] PARAM */;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[2,1] = eleDrive.toElePow.effTable[2,1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[108] /* eleDrive.toElePow.effTable_.table[2,1] PARAM */ = data->simulationInfo->realParameter[99] /* eleDrive.toElePow.effTable[2,1] PARAM */;
  TRACE_POP
}

/*
equation index: 397
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[2,2] = eleDrive.effTable[2,2]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,397};
  data->simulationInfo->realParameter[100] /* eleDrive.toElePow.effTable[2,2] PARAM */ = data->simulationInfo->realParameter[83] /* eleDrive.effTable[2,2] PARAM */;
  TRACE_POP
}

/*
equation index: 398
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[2,2] = eleDrive.toElePow.effTable[2,2]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  data->simulationInfo->realParameter[109] /* eleDrive.toElePow.effTable_.table[2,2] PARAM */ = data->simulationInfo->realParameter[100] /* eleDrive.toElePow.effTable[2,2] PARAM */;
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[2,3] = eleDrive.effTable[2,3]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[101] /* eleDrive.toElePow.effTable[2,3] PARAM */ = data->simulationInfo->realParameter[84] /* eleDrive.effTable[2,3] PARAM */;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[2,3] = eleDrive.toElePow.effTable[2,3]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[110] /* eleDrive.toElePow.effTable_.table[2,3] PARAM */ = data->simulationInfo->realParameter[101] /* eleDrive.toElePow.effTable[2,3] PARAM */;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[3,1] = eleDrive.effTable[3,1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[102] /* eleDrive.toElePow.effTable[3,1] PARAM */ = data->simulationInfo->realParameter[85] /* eleDrive.effTable[3,1] PARAM */;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[3,1] = eleDrive.toElePow.effTable[3,1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[111] /* eleDrive.toElePow.effTable_.table[3,1] PARAM */ = data->simulationInfo->realParameter[102] /* eleDrive.toElePow.effTable[3,1] PARAM */;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[3,2] = eleDrive.effTable[3,2]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[103] /* eleDrive.toElePow.effTable[3,2] PARAM */ = data->simulationInfo->realParameter[86] /* eleDrive.effTable[3,2] PARAM */;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[3,2] = eleDrive.toElePow.effTable[3,2]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[112] /* eleDrive.toElePow.effTable_.table[3,2] PARAM */ = data->simulationInfo->realParameter[103] /* eleDrive.toElePow.effTable[3,2] PARAM */;
  TRACE_POP
}

/*
equation index: 405
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable[3,3] = eleDrive.effTable[3,3]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  data->simulationInfo->realParameter[104] /* eleDrive.toElePow.effTable[3,3] PARAM */ = data->simulationInfo->realParameter[87] /* eleDrive.effTable[3,3] PARAM */;
  TRACE_POP
}

/*
equation index: 406
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.table[3,3] = eleDrive.toElePow.effTable[3,3]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[113] /* eleDrive.toElePow.effTable_.table[3,3] PARAM */ = data->simulationInfo->realParameter[104] /* eleDrive.toElePow.effTable[3,3] PARAM */;
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTableName = eleDrive.effTableName
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->stringParameter[5] /* eleDrive.toElePow.effTableName PARAM */ = data->simulationInfo->stringParameter[3] /* eleDrive.effTableName PARAM */;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.tableName = eleDrive.toElePow.effTableName
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->stringParameter[7] /* eleDrive.toElePow.effTable_.tableName PARAM */ = data->simulationInfo->stringParameter[5] /* eleDrive.toElePow.effTableName PARAM */;
  TRACE_POP
}

/*
equation index: 409
type: SIMPLE_ASSIGN
eleDrive.toElePow.mapsFileName = eleDrive.mapsFileName
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->stringParameter[8] /* eleDrive.toElePow.mapsFileName PARAM */ = data->simulationInfo->stringParameter[4] /* eleDrive.mapsFileName PARAM */;
  TRACE_POP
}

/*
equation index: 410
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.fileName = eleDrive.toElePow.mapsFileName
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->stringParameter[6] /* eleDrive.toElePow.effTable_.fileName PARAM */ = data->simulationInfo->stringParameter[8] /* eleDrive.toElePow.mapsFileName PARAM */;
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.tableID = Modelica.Blocks.Types.ExternalCombiTable2D.constructor(eleDrive.toElePow.effTable_.tableName, if eleDrive.toElePow.effTable_.fileName <> "NoName" and not Modelica.Utilities.Strings.isEmpty(eleDrive.toElePow.effTable_.fileName) then eleDrive.toElePow.effTable_.fileName else "NoName", {{eleDrive.toElePow.effTable_.table[1,1], eleDrive.toElePow.effTable_.table[1,2], eleDrive.toElePow.effTable_.table[1,3]}, {eleDrive.toElePow.effTable_.table[2,1], eleDrive.toElePow.effTable_.table[2,2], eleDrive.toElePow.effTable_.table[2,3]}, {eleDrive.toElePow.effTable_.table[3,1], eleDrive.toElePow.effTable_.table[3,2], eleDrive.toElePow.effTable_.table[3,3]}}, Modelica.Blocks.Types.Smoothness.LinearSegments, eleDrive.toElePow.effTable_.extrapolation, eleDrive.toElePow.effTable_.verboseRead)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  real_array tmp3;
  /* -- start: matrix[3,3] -- */
  alloc_real_array(&tmp3, 2, (_index_t)3, (_index_t)3);
  put_real_matrix_element(data->simulationInfo->realParameter[105] /* eleDrive.toElePow.effTable_.table[1,1] PARAM */, 0, 0, &tmp3);
  put_real_matrix_element(data->simulationInfo->realParameter[106] /* eleDrive.toElePow.effTable_.table[1,2] PARAM */, 0, 1, &tmp3);
  put_real_matrix_element(data->simulationInfo->realParameter[107] /* eleDrive.toElePow.effTable_.table[1,3] PARAM */, 0, 2, &tmp3);
  put_real_matrix_element(data->simulationInfo->realParameter[108] /* eleDrive.toElePow.effTable_.table[2,1] PARAM */, 1, 0, &tmp3);
  put_real_matrix_element(data->simulationInfo->realParameter[109] /* eleDrive.toElePow.effTable_.table[2,2] PARAM */, 1, 1, &tmp3);
  put_real_matrix_element(data->simulationInfo->realParameter[110] /* eleDrive.toElePow.effTable_.table[2,3] PARAM */, 1, 2, &tmp3);
  put_real_matrix_element(data->simulationInfo->realParameter[111] /* eleDrive.toElePow.effTable_.table[3,1] PARAM */, 2, 0, &tmp3);
  put_real_matrix_element(data->simulationInfo->realParameter[112] /* eleDrive.toElePow.effTable_.table[3,2] PARAM */, 2, 1, &tmp3);
  put_real_matrix_element(data->simulationInfo->realParameter[113] /* eleDrive.toElePow.effTable_.table[3,3] PARAM */, 2, 2, &tmp3);
  /* -- end: matrix[3,3] -- */
  data->simulationInfo->extObjs[1] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, data->simulationInfo->stringParameter[7] /* eleDrive.toElePow.effTable_.tableName PARAM */, (((!stringEqual(data->simulationInfo->stringParameter[6] /* eleDrive.toElePow.effTable_.fileName PARAM */, _OMC_LIT4)) && (!omc_Modelica_Utilities_Strings_isEmpty(threadData, data->simulationInfo->stringParameter[6] /* eleDrive.toElePow.effTable_.fileName PARAM */)))?data->simulationInfo->stringParameter[6] /* eleDrive.toElePow.effTable_.fileName PARAM */:_OMC_LIT4), tmp3, 1, data->simulationInfo->integerParameter[14] /* eleDrive.toElePow.effTable_.extrapolation PARAM */, data->simulationInfo->booleanParameter[20] /* eleDrive.toElePow.effTable_.verboseRead PARAM */);
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
batt1.R0.T = batt1.R0.T_ref
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[16] /* batt1.R0.T PARAM */ = data->simulationInfo->realParameter[18] /* batt1.R0.T_ref PARAM */;
  TRACE_POP
}

/*
equation index: 413
type: SIMPLE_ASSIGN
batt1.R0.T_heatPort = batt1.R0.T
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[17] /* batt1.R0.T_heatPort PARAM */ = data->simulationInfo->realParameter[16] /* batt1.R0.T PARAM */;
  TRACE_POP
}

/*
equation index: 414
type: SIMPLE_ASSIGN
batt1.R1.T = batt1.R1.T_ref
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[23] /* batt1.R1.T PARAM */ = data->simulationInfo->realParameter[25] /* batt1.R1.T_ref PARAM */;
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
batt1.R1.T_heatPort = batt1.R1.T
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[24] /* batt1.R1.T_heatPort PARAM */ = data->simulationInfo->realParameter[23] /* batt1.R1.T PARAM */;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
dragF.m = mass.m
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[49] /* dragF.m PARAM */ = data->simulationInfo->realParameter[128] /* mass.m PARAM */;
  TRACE_POP
}

/*
equation index: 417
type: SIMPLE_ASSIGN
dragF.A = 9.806649999999999 * dragF.fc * dragF.m
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[42] /* dragF.A PARAM */ = (9.806649999999999) * ((data->simulationInfo->realParameter[48] /* dragF.fc PARAM */) * (data->simulationInfo->realParameter[49] /* dragF.m PARAM */));
  TRACE_POP
}

/*
equation index: 418
type: SIMPLE_ASSIGN
dragF.f0 = dragF.A
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[46] /* dragF.f0 PARAM */ = data->simulationInfo->realParameter[42] /* dragF.A PARAM */;
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
dragF.f0_max = dragF.A
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[47] /* dragF.f0_max PARAM */ = data->simulationInfo->realParameter[42] /* dragF.A PARAM */;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
eleDrive.constPDC.varCond.T = eleDrive.constPDC.varCond.T_ref
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[75] /* eleDrive.constPDC.varCond.T PARAM */ = data->simulationInfo->realParameter[77] /* eleDrive.constPDC.varCond.T_ref PARAM */;
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
eleDrive.constPDC.varCond.T_heatPort = eleDrive.constPDC.varCond.T
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,421};
  data->simulationInfo->realParameter[76] /* eleDrive.constPDC.varCond.T_heatPort PARAM */ = data->simulationInfo->realParameter[75] /* eleDrive.constPDC.varCond.T PARAM */;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
wheel.internalSupportR.phi = wheel.fixedR.phi0
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[135] /* wheel.internalSupportR.phi PARAM */ = data->simulationInfo->realParameter[131] /* wheel.fixedR.phi0 PARAM */;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
wheel.internalSupportR.flange.phi = wheel.fixedR.phi0
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[134] /* wheel.internalSupportR.flange.phi PARAM */ = data->simulationInfo->realParameter[131] /* wheel.fixedR.phi0 PARAM */;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
wheel.fixedR.flange.phi = wheel.fixedR.phi0
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,425};
  data->simulationInfo->realParameter[130] /* wheel.fixedR.flange.phi PARAM */ = data->simulationInfo->realParameter[131] /* wheel.fixedR.phi0 PARAM */;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
wheel.internalSupportT.s = wheel.fixedT.s0
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[137] /* wheel.internalSupportT.s PARAM */ = data->simulationInfo->realParameter[133] /* wheel.fixedT.s0 PARAM */;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
wheel.internalSupportT.flange.s = wheel.fixedT.s0
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[136] /* wheel.internalSupportT.flange.s PARAM */ = data->simulationInfo->realParameter[133] /* wheel.fixedT.s0 PARAM */;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
wheel.fixedT.flange.s = wheel.fixedT.s0
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[132] /* wheel.fixedT.flange.s PARAM */ = data->simulationInfo->realParameter[133] /* wheel.fixedT.s0 PARAM */;
  TRACE_POP
}

/*
equation index: 434
type: SIMPLE_ASSIGN
eleDrive.inertia.J = eleDrive.J
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */ = data->simulationInfo->realParameter[70] /* eleDrive.J PARAM */;
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
eleDrive.constPDC.vNom = eleDrive.uDcNom
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[74] /* eleDrive.constPDC.vNom PARAM */ = data->simulationInfo->realParameter[123] /* eleDrive.uDcNom PARAM */;
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
eleDrive.constPDC.integrator1.k = eleDrive.constPDC.vNom ^ (-2.0) / eleDrive.constPDC.Ti
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,439};
  data->simulationInfo->realParameter[72] /* eleDrive.constPDC.integrator1.k PARAM */ = DIVISION_SIM(real_int_pow(threadData, data->simulationInfo->realParameter[74] /* eleDrive.constPDC.vNom PARAM */, -2),data->simulationInfo->realParameter[71] /* eleDrive.constPDC.Ti PARAM */,"eleDrive.constPDC.Ti",equationIndexes);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
eleDrive.toElePow.wMax = eleDrive.wMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[122] /* eleDrive.toElePow.wMax PARAM */ = data->simulationInfo->realParameter[125] /* eleDrive.wMax PARAM */;
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
eleDrive.toElePow.normalizeSpeed.k = 1.0 / eleDrive.toElePow.wMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,442};
  data->simulationInfo->realParameter[118] /* eleDrive.toElePow.normalizeSpeed.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[122] /* eleDrive.toElePow.wMax PARAM */,"eleDrive.toElePow.wMax",equationIndexes);
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
eleDrive.toElePow.tauMax = eleDrive.tauMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  data->simulationInfo->realParameter[121] /* eleDrive.toElePow.tauMax PARAM */ = data->simulationInfo->realParameter[95] /* eleDrive.tauMax PARAM */;
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
eleDrive.toElePow.normalizeTau.k = 1.0 / eleDrive.toElePow.tauMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[119] /* eleDrive.toElePow.normalizeTau.k PARAM */ = DIVISION_SIM(1.0,data->simulationInfo->realParameter[121] /* eleDrive.toElePow.tauMax PARAM */,"eleDrive.toElePow.tauMax",equationIndexes);
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.u_max[2] = Modelica.Blocks.Tables.Internal.getTable2DAbscissaUmax(eleDrive.toElePow.effTable_.tableID)[2]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[115] /* eleDrive.toElePow.effTable_.u_max[2] PARAM */ = real_get(omc_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmax(threadData, data->simulationInfo->extObjs[1]), 1);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.u_max[1] = Modelica.Blocks.Tables.Internal.getTable2DAbscissaUmax(eleDrive.toElePow.effTable_.tableID)[1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[114] /* eleDrive.toElePow.effTable_.u_max[1] PARAM */ = real_get(omc_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmax(threadData, data->simulationInfo->extObjs[1]), 0);
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.u_min[2] = Modelica.Blocks.Tables.Internal.getTable2DAbscissaUmin(eleDrive.toElePow.effTable_.tableID)[2]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[117] /* eleDrive.toElePow.effTable_.u_min[2] PARAM */ = real_get(omc_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmin(threadData, data->simulationInfo->extObjs[1]), 1);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.u_min[1] = Modelica.Blocks.Tables.Internal.getTable2DAbscissaUmin(eleDrive.toElePow.effTable_.tableID)[1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[116] /* eleDrive.toElePow.effTable_.u_min[1] PARAM */ = real_get(omc_Modelica_Blocks_Tables_Internal_getTable2DAbscissaUmin(threadData, data->simulationInfo->extObjs[1]), 0);
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
eleDrive.toElePow.powMax = eleDrive.powMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[120] /* eleDrive.toElePow.powMax PARAM */ = data->simulationInfo->realParameter[94] /* eleDrive.powMax PARAM */;
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
eleDrive.limTau.wMax = eleDrive.wMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */ = data->simulationInfo->realParameter[125] /* eleDrive.wMax PARAM */;
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
eleDrive.limTau.tauMax = eleDrive.tauMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */ = data->simulationInfo->realParameter[95] /* eleDrive.tauMax PARAM */;
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
eleDrive.limTau.powMax = eleDrive.powMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */ = data->simulationInfo->realParameter[94] /* eleDrive.powMax PARAM */;
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
dragF.B = 0.5 * dragF.rho * dragF.S * dragF.Cx
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->realParameter[43] /* dragF.B PARAM */ = (0.5) * ((data->simulationInfo->realParameter[50] /* dragF.rho PARAM */) * ((data->simulationInfo->realParameter[45] /* dragF.S PARAM */) * (data->simulationInfo->realParameter[44] /* dragF.Cx PARAM */)));
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
batt1.ICellMax = 0.002777777777777778 * batt1.QCellNom
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[12] /* batt1.ICellMax PARAM */ = (0.002777777777777778) * (data->simulationInfo->realParameter[14] /* batt1.QCellNom PARAM */);
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
batt1.iCellEfficiency = 0.5 * batt1.ICellMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  data->simulationInfo->realParameter[38] /* batt1.iCellEfficiency PARAM */ = (0.5) * (data->simulationInfo->realParameter[12] /* batt1.ICellMax PARAM */);
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
batt1.EBatteryMin = batt1.ECellMin * (*Real*)(batt1.ns)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */ = (data->simulationInfo->realParameter[10] /* batt1.ECellMin PARAM */) * (((modelica_real)data->simulationInfo->integerParameter[1] /* batt1.ns PARAM */));
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
batt1.EBatteryMax = batt1.ECellMax * (*Real*)(batt1.ns)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ = (data->simulationInfo->realParameter[9] /* batt1.ECellMax PARAM */) * (((modelica_real)data->simulationInfo->integerParameter[1] /* batt1.ns PARAM */));
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
batt1.R0Cell = 0.05 * batt1.ECellMax / batt1.ICellMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[21] /* batt1.R0Cell PARAM */ = (0.05) * (DIVISION_SIM(data->simulationInfo->realParameter[9] /* batt1.ECellMax PARAM */,data->simulationInfo->realParameter[12] /* batt1.ICellMax PARAM */,"batt1.ICellMax",equationIndexes));
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
batt1.R0Battery = batt1.R0Cell * (*Real*)(batt1.ns) / (*Real*)(batt1.np)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[20] /* batt1.R0Battery PARAM */ = (data->simulationInfo->realParameter[21] /* batt1.R0Cell PARAM */) * (DIVISION_SIM(((modelica_real)data->simulationInfo->integerParameter[1] /* batt1.ns PARAM */),((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */),"/*Real*/(batt1.np)",equationIndexes));
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
batt1.R1Cell = batt1.R0Cell
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[28] /* batt1.R1Cell PARAM */ = data->simulationInfo->realParameter[21] /* batt1.R0Cell PARAM */;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
batt1.R1Battery = batt1.R1Cell * (*Real*)(batt1.ns) / (*Real*)(batt1.np)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[27] /* batt1.R1Battery PARAM */ = (data->simulationInfo->realParameter[28] /* batt1.R1Cell PARAM */) * (DIVISION_SIM(((modelica_real)data->simulationInfo->integerParameter[1] /* batt1.ns PARAM */),((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */),"/*Real*/(batt1.np)",equationIndexes));
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
batt1.Rtot = batt1.R0Battery + batt1.R1Battery
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->realParameter[29] /* batt1.Rtot PARAM */ = data->simulationInfo->realParameter[20] /* batt1.R0Battery PARAM */ + data->simulationInfo->realParameter[27] /* batt1.R1Battery PARAM */;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
batt1.k = ((1.0 - batt1.efficiency) * (batt1.EBatteryMax + batt1.EBatteryMin) + (-2.0) * (1.0 + batt1.efficiency) * batt1.Rtot * batt1.iCellEfficiency) / ((1.0 + batt1.efficiency) * (batt1.EBatteryMax + batt1.EBatteryMin) + (-2.0) * (1.0 - batt1.efficiency) * batt1.Rtot * batt1.iCellEfficiency)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[39] /* batt1.k PARAM */ = DIVISION_SIM((1.0 - data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */) * (data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ + data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */) + (-2.0) * ((1.0 + data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */) * ((data->simulationInfo->realParameter[29] /* batt1.Rtot PARAM */) * (data->simulationInfo->realParameter[38] /* batt1.iCellEfficiency PARAM */))),(1.0 + data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */) * (data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ + data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */) + (-2.0) * ((1.0 - data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */) * ((data->simulationInfo->realParameter[29] /* batt1.Rtot PARAM */) * (data->simulationInfo->realParameter[38] /* batt1.iCellEfficiency PARAM */))),"(1.0 + batt1.efficiency) * (batt1.EBatteryMax + batt1.EBatteryMin) + (-2.0) * (1.0 - batt1.efficiency) * batt1.Rtot * batt1.iCellEfficiency",equationIndexes);
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
batt1.gain.k = batt1.k
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[37] /* batt1.gain.k PARAM */ = data->simulationInfo->realParameter[39] /* batt1.k PARAM */;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
batt1.C1Cell = 60.0 / batt1.R1Cell
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[5] /* batt1.C1Cell PARAM */ = DIVISION_SIM(60.0,data->simulationInfo->realParameter[28] /* batt1.R1Cell PARAM */,"batt1.R1Cell",equationIndexes);
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
batt1.C1Battery = batt1.C1Cell * (*Real*)(batt1.np) / (*Real*)(batt1.ns)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[4] /* batt1.C1Battery PARAM */ = (data->simulationInfo->realParameter[5] /* batt1.C1Cell PARAM */) * (DIVISION_SIM(((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */),((modelica_real)data->simulationInfo->integerParameter[1] /* batt1.ns PARAM */),"/*Real*/(batt1.ns)",equationIndexes));
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
batt1.C = batt1.QCellNom / (batt1.ECellMax - batt1.ECellMin)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[2] /* batt1.C PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[14] /* batt1.QCellNom PARAM */,data->simulationInfo->realParameter[9] /* batt1.ECellMax PARAM */ - data->simulationInfo->realParameter[10] /* batt1.ECellMin PARAM */,"batt1.ECellMax - batt1.ECellMin",equationIndexes);
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
batt1.CBattery = batt1.C * (*Real*)(batt1.np) / (*Real*)(batt1.ns)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[6] /* batt1.CBattery PARAM */ = (data->simulationInfo->realParameter[2] /* batt1.C PARAM */) * (DIVISION_SIM(((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */),((modelica_real)data->simulationInfo->integerParameter[1] /* batt1.ns PARAM */),"/*Real*/(batt1.ns)",equationIndexes));
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
batt1.QBatteryNominal = batt1.QCellNom * (*Real*)(batt1.np)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[13] /* batt1.QBatteryNominal PARAM */ = (data->simulationInfo->realParameter[14] /* batt1.QCellNom PARAM */) * (((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */));
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
batt1.IBatteryMax = batt1.ICellMax * (*Real*)(batt1.np)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[11] /* batt1.IBatteryMax PARAM */ = (data->simulationInfo->realParameter[12] /* batt1.ICellMax PARAM */) * (((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */));
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
batt1.efficiencyMax = (batt1.EBatteryMin + batt1.EBatteryMax + (-2.0) * batt1.Rtot * batt1.iCellEfficiency) / (batt1.EBatteryMin + batt1.EBatteryMax + 2.0 * batt1.Rtot * batt1.iCellEfficiency)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->realParameter[36] /* batt1.efficiencyMax PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */ + data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ + (-2.0) * ((data->simulationInfo->realParameter[29] /* batt1.Rtot PARAM */) * (data->simulationInfo->realParameter[38] /* batt1.iCellEfficiency PARAM */)),data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */ + data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ + (2.0) * ((data->simulationInfo->realParameter[29] /* batt1.Rtot PARAM */) * (data->simulationInfo->realParameter[38] /* batt1.iCellEfficiency PARAM */)),"batt1.EBatteryMin + batt1.EBatteryMax + 2.0 * batt1.Rtot * batt1.iCellEfficiency",equationIndexes);
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
batt1.cDummy.C = 0.0001 * batt1.C1Battery
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[34] /* batt1.cDummy.C PARAM */ = (0.0001) * (data->simulationInfo->realParameter[4] /* batt1.C1Battery PARAM */);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
batt1.C1.C = batt1.C1Battery
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[3] /* batt1.C1.C PARAM */ = data->simulationInfo->realParameter[4] /* batt1.C1Battery PARAM */;
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
batt1.R1.R = batt1.R1Battery
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[22] /* batt1.R1.R PARAM */ = data->simulationInfo->realParameter[27] /* batt1.R1Battery PARAM */;
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
batt1.R0.R = batt1.R0Battery
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[15] /* batt1.R0.R PARAM */ = data->simulationInfo->realParameter[20] /* batt1.R0Battery PARAM */;
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
batt1.cBattery.C = batt1.CBattery
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->simulationInfo->realParameter[33] /* batt1.cBattery.C PARAM */ = data->simulationInfo->realParameter[6] /* batt1.CBattery PARAM */;
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
tqToForce.k = gear.ratio * wheel.radius
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[129] /* tqToForce.k PARAM */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (data->simulationInfo->realParameter[138] /* wheel.radius PARAM */);
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
driver.limiter1.uMax = driver.yMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */ = data->simulationInfo->realParameter[69] /* driver.yMax PARAM */;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
driver.limiter1.uMin = -driver.limiter1.uMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */ = (-data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */);
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
driver.limBrak.uMin = -driver.yMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */ = (-data->simulationInfo->realParameter[69] /* driver.yMax PARAM */);
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
driver.limAcc.uMax = driver.yMax
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[63] /* driver.limAcc.uMax PARAM */ = data->simulationInfo->realParameter[69] /* driver.yMax PARAM */;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
driver.gain.k = driver.k
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->realParameter[61] /* driver.gain.k PARAM */ = data->simulationInfo->realParameter[62] /* driver.k PARAM */;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
driver.driveCyc.p_offset[1] = driver.driveCyc.offset[1]
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->realParameter[53] /* driver.driveCyc.p_offset[1] PARAM */ = data->simulationInfo->realParameter[52] /* driver.driveCyc.offset[1] PARAM */;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
driver.driveCyc.t_maxScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmax(driver.driveCyc.tableID)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[57] /* driver.driveCyc.t_maxScaled PARAM */ = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmax(threadData, data->simulationInfo->extObjs[0]);
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
driver.driveCyc.t_minScaled = Modelica.Blocks.Tables.Internal.getTimeTableTmin(driver.driveCyc.tableID)
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[59] /* driver.driveCyc.t_minScaled PARAM */ = omc_Modelica_Blocks_Tables_Internal_getTimeTableTmin(threadData, data->simulationInfo->extObjs[0]);
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
driver.driveCyc.t_max = driver.driveCyc.t_maxScaled
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[56] /* driver.driveCyc.t_max PARAM */ = data->simulationInfo->realParameter[57] /* driver.driveCyc.t_maxScaled PARAM */;
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
driver.driveCyc.t_min = driver.driveCyc.t_minScaled
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[58] /* driver.driveCyc.t_min PARAM */ = data->simulationInfo->realParameter[59] /* driver.driveCyc.t_minScaled PARAM */;
  TRACE_POP
}
extern void Map_based_model_eqFunction_115(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_114(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_113(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_112(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_111(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_110(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_109(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_108(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_107(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_7(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_6(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_3(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_2(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_1(DATA *data, threadData_t *threadData);


/*
equation index: 531
type: ALGORITHM

  assert(driver.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and driver.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= driver.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(driver.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,180,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= driver.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp4 = GreaterEq(data->simulationInfo->integerParameter[8] /* driver.extrapolation PARAM */,1);
    tmp5 = LessEq(data->simulationInfo->integerParameter[8] /* driver.extrapolation PARAM */,4);
    if(!(tmp4 && tmp5))
    {
      tmp7 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[8] /* driver.extrapolation PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",503,13,503,177,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and driver.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp8 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 532
type: ALGORITHM

  assert(driver.driveCyc.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and driver.driveCyc.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= driver.driveCyc.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(driver.driveCyc.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,189,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= driver.driveCyc.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp12;
  static int tmp13 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp13)
  {
    tmp9 = GreaterEq(data->simulationInfo->integerParameter[4] /* driver.driveCyc.extrapolation PARAM */,1);
    tmp10 = LessEq(data->simulationInfo->integerParameter[4] /* driver.driveCyc.extrapolation PARAM */,4);
    if(!(tmp9 && tmp10))
    {
      tmp12 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[4] /* driver.driveCyc.extrapolation PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp11),tmp12);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Sources.mo",1586,5,1588,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.driveCyc.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and driver.driveCyc.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp13 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 533
type: ALGORITHM

  assert(driver.driveCyc.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and driver.driveCyc.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, "Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= driver.driveCyc.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: " + String(driver.driveCyc.timeEvents, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  modelica_boolean tmp14;
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,170,"Variable violating min/max constraint: Modelica.Blocks.Types.TimeEvents.Always <= driver.driveCyc.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents, has value: ");
  modelica_string tmp17;
  static int tmp18 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp18)
  {
    tmp14 = GreaterEq(data->simulationInfo->integerParameter[7] /* driver.driveCyc.timeEvents PARAM */,1);
    tmp15 = LessEq(data->simulationInfo->integerParameter[7] /* driver.driveCyc.timeEvents PARAM */,3);
    if(!(tmp14 && tmp15))
    {
      tmp17 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[7] /* driver.driveCyc.timeEvents PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp16),tmp17);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Sources.mo",1600,5,1602,131,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.driveCyc.timeEvents >= Modelica.Blocks.Types.TimeEvents.Always and driver.driveCyc.timeEvents <= Modelica.Blocks.Types.TimeEvents.NoTimeEvents", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp18 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 534
type: ALGORITHM

  assert(eleDrive.toElePow.effTable_.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and eleDrive.toElePow.effTable_.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, "Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= eleDrive.toElePow.effTable_.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: " + String(eleDrive.toElePow.effTable_.extrapolation, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,201,"Variable violating min/max constraint: Modelica.Blocks.Types.Extrapolation.HoldLastPoint <= eleDrive.toElePow.effTable_.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp19 = GreaterEq(data->simulationInfo->integerParameter[14] /* eleDrive.toElePow.effTable_.extrapolation PARAM */,1);
    tmp20 = LessEq(data->simulationInfo->integerParameter[14] /* eleDrive.toElePow.effTable_.extrapolation PARAM */,4);
    if(!(tmp19 && tmp20))
    {
      tmp22 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[14] /* eleDrive.toElePow.effTable_.extrapolation PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Tables.mo",904,7,906,63,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.toElePow.effTable_.extrapolation >= Modelica.Blocks.Types.Extrapolation.HoldLastPoint and eleDrive.toElePow.effTable_.extrapolation <= Modelica.Blocks.Types.Extrapolation.NoExtrapolation", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 535
type: ALGORITHM

  assert(batt1.R0.T_ref >= 0.0, "Variable violating min constraint: 0.0 <= batt1.R0.T_ref, has value: " + String(batt1.R0.T_ref, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  modelica_boolean tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,69,"Variable violating min constraint: 0.0 <= batt1.R0.T_ref, has value: ");
  modelica_string tmp26;
  static int tmp27 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp27)
  {
    tmp24 = GreaterEq(data->simulationInfo->realParameter[18] /* batt1.R0.T_ref PARAM */,0.0);
    if(!tmp24)
    {
      tmp26 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[18] /* batt1.R0.T_ref PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp25),tmp26);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Resistor.mo",5,3,5,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.R0.T_ref >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp27 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 536
type: ALGORITHM

  assert(batt1.R0.T >= 0.0, "Variable violating min constraint: 0.0 <= batt1.R0.T, has value: " + String(batt1.R0.T, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,65,"Variable violating min constraint: 0.0 <= batt1.R0.T, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp28 = GreaterEq(data->simulationInfo->realParameter[16] /* batt1.R0.T PARAM */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[16] /* batt1.R0.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",7,3,8,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.R0.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 537
type: ALGORITHM

  assert(batt1.R0.T_heatPort >= 0.0, "Variable violating min constraint: 0.0 <= batt1.R0.T_heatPort, has value: " + String(batt1.R0.T_heatPort, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  modelica_boolean tmp32;
  static const MMC_DEFSTRINGLIT(tmp33,74,"Variable violating min constraint: 0.0 <= batt1.R0.T_heatPort, has value: ");
  modelica_string tmp34;
  static int tmp35 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp35)
  {
    tmp32 = GreaterEq(data->simulationInfo->realParameter[17] /* batt1.R0.T_heatPort PARAM */,0.0);
    if(!tmp32)
    {
      tmp34 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[17] /* batt1.R0.T_heatPort PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp33),tmp34);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",14,3,14,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.R0.T_heatPort >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp35 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 538
type: ALGORITHM

  assert(batt1.R1.T_ref >= 0.0, "Variable violating min constraint: 0.0 <= batt1.R1.T_ref, has value: " + String(batt1.R1.T_ref, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,69,"Variable violating min constraint: 0.0 <= batt1.R1.T_ref, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp36 = GreaterEq(data->simulationInfo->realParameter[25] /* batt1.R1.T_ref PARAM */,0.0);
    if(!tmp36)
    {
      tmp38 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[25] /* batt1.R1.T_ref PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Resistor.mo",5,3,5,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.R1.T_ref >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 539
type: ALGORITHM

  assert(batt1.R1.T >= 0.0, "Variable violating min constraint: 0.0 <= batt1.R1.T, has value: " + String(batt1.R1.T, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,65,"Variable violating min constraint: 0.0 <= batt1.R1.T, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp40 = GreaterEq(data->simulationInfo->realParameter[23] /* batt1.R1.T PARAM */,0.0);
    if(!tmp40)
    {
      tmp42 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[23] /* batt1.R1.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",7,3,8,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.R1.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 540
type: ALGORITHM

  assert(batt1.R1.T_heatPort >= 0.0, "Variable violating min constraint: 0.0 <= batt1.R1.T_heatPort, has value: " + String(batt1.R1.T_heatPort, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,74,"Variable violating min constraint: 0.0 <= batt1.R1.T_heatPort, has value: ");
  modelica_string tmp46;
  static int tmp47 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp47)
  {
    tmp44 = GreaterEq(data->simulationInfo->realParameter[24] /* batt1.R1.T_heatPort PARAM */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[24] /* batt1.R1.T_heatPort PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",14,3,14,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.R1.T_heatPort >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp47 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 541
type: ALGORITHM

  assert(mass.m >= 0.0, "Variable violating min constraint: 0.0 <= mass.m, has value: " + String(mass.m, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,61,"Variable violating min constraint: 0.0 <= mass.m, has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp48 = GreaterEq(data->simulationInfo->realParameter[128] /* mass.m PARAM */,0.0);
    if(!tmp48)
    {
      tmp50 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[128] /* mass.m PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Mechanics/Translational/Components/Mass.mo",3,3,3,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmass.m >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 542
type: ALGORITHM

  assert(dragF.m >= 0.0, "Variable violating min constraint: 0.0 <= dragF.m, has value: " + String(dragF.m, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  modelica_boolean tmp52;
  static const MMC_DEFSTRINGLIT(tmp53,62,"Variable violating min constraint: 0.0 <= dragF.m, has value: ");
  modelica_string tmp54;
  static int tmp55 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp55)
  {
    tmp52 = GreaterEq(data->simulationInfo->realParameter[49] /* dragF.m PARAM */,0.0);
    if(!tmp52)
    {
      tmp54 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[49] /* dragF.m PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp53),tmp54);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",461,13,461,62,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndragF.m >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp55 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 543
type: ALGORITHM

  assert(eleDrive.constPDC.varCond.T_ref >= 0.0, "Variable violating min constraint: 0.0 <= eleDrive.constPDC.varCond.T_ref, has value: " + String(eleDrive.constPDC.varCond.T_ref, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,86,"Variable violating min constraint: 0.0 <= eleDrive.constPDC.varCond.T_ref, has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp56 = GreaterEq(data->simulationInfo->realParameter[77] /* eleDrive.constPDC.varCond.T_ref PARAM */,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[77] /* eleDrive.constPDC.varCond.T_ref PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/VariableConductor.mo",4,3,4,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.constPDC.varCond.T_ref >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 544
type: ALGORITHM

  assert(eleDrive.constPDC.varCond.T >= 0.0, "Variable violating min constraint: 0.0 <= eleDrive.constPDC.varCond.T, has value: " + String(eleDrive.constPDC.varCond.T, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,82,"Variable violating min constraint: 0.0 <= eleDrive.constPDC.varCond.T, has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp60 = GreaterEq(data->simulationInfo->realParameter[75] /* eleDrive.constPDC.varCond.T PARAM */,0.0);
    if(!tmp60)
    {
      tmp62 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[75] /* eleDrive.constPDC.varCond.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",7,3,8,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.constPDC.varCond.T >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 545
type: ALGORITHM

  assert(eleDrive.constPDC.varCond.T_heatPort >= 0.0, "Variable violating min constraint: 0.0 <= eleDrive.constPDC.varCond.T_heatPort, has value: " + String(eleDrive.constPDC.varCond.T_heatPort, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  modelica_boolean tmp64;
  static const MMC_DEFSTRINGLIT(tmp65,91,"Variable violating min constraint: 0.0 <= eleDrive.constPDC.varCond.T_heatPort, has value: ");
  modelica_string tmp66;
  static int tmp67 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp67)
  {
    tmp64 = GreaterEq(data->simulationInfo->realParameter[76] /* eleDrive.constPDC.varCond.T_heatPort PARAM */,0.0);
    if(!tmp64)
    {
      tmp66 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[76] /* eleDrive.constPDC.varCond.T_heatPort PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp65),tmp66);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Interfaces/ConditionalHeatPort.mo",14,3,14,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.constPDC.varCond.T_heatPort >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp67 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 546
type: ALGORITHM

  assert(eleDrive.variableLimiter.homotopyType >= Modelica.Blocks.Types.VariableLimiterHomotopy.NoHomotopy and eleDrive.variableLimiter.homotopyType <= Modelica.Blocks.Types.VariableLimiterHomotopy.Fixed, "Variable violating min/max constraint: Modelica.Blocks.Types.VariableLimiterHomotopy.NoHomotopy <= eleDrive.variableLimiter.homotopyType <= Modelica.Blocks.Types.VariableLimiterHomotopy.Fixed, has value: " + String(eleDrive.variableLimiter.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  modelica_boolean tmp68;
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,204,"Variable violating min/max constraint: Modelica.Blocks.Types.VariableLimiterHomotopy.NoHomotopy <= eleDrive.variableLimiter.homotopyType <= Modelica.Blocks.Types.VariableLimiterHomotopy.Fixed, has value: ");
  modelica_string tmp71;
  static int tmp72 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp72)
  {
    tmp68 = GreaterEq(data->simulationInfo->integerParameter[16] /* eleDrive.variableLimiter.homotopyType PARAM */,1);
    tmp69 = LessEq(data->simulationInfo->integerParameter[16] /* eleDrive.variableLimiter.homotopyType PARAM */,3);
    if(!(tmp68 && tmp69))
    {
      tmp71 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[16] /* eleDrive.variableLimiter.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",95,5,96,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.variableLimiter.homotopyType >= Modelica.Blocks.Types.VariableLimiterHomotopy.NoHomotopy and eleDrive.variableLimiter.homotopyType <= Modelica.Blocks.Types.VariableLimiterHomotopy.Fixed", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp72 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 547
type: ALGORITHM

  assert(eleDrive.inertia.stateSelect >= StateSelect.never and eleDrive.inertia.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= eleDrive.inertia.stateSelect <= StateSelect.always, has value: " + String(eleDrive.inertia.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  modelica_boolean tmp73;
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,123,"Variable violating min/max constraint: StateSelect.never <= eleDrive.inertia.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp76;
  static int tmp77 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp77)
  {
    tmp73 = GreaterEq(data->simulationInfo->integerParameter[13] /* eleDrive.inertia.stateSelect PARAM */,1);
    tmp74 = LessEq(data->simulationInfo->integerParameter[13] /* eleDrive.inertia.stateSelect PARAM */,5);
    if(!(tmp73 && tmp74))
    {
      tmp76 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[13] /* eleDrive.inertia.stateSelect PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp75),tmp76);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Mechanics/Rotational/Components/Inertia.mo",5,3,7,57,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.inertia.stateSelect >= StateSelect.never and eleDrive.inertia.stateSelect <= StateSelect.always", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp77 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 548
type: ALGORITHM

  assert(eleDrive.inertia.J >= 0.0, "Variable violating min constraint: 0.0 <= eleDrive.inertia.J, has value: " + String(eleDrive.inertia.J, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,73,"Variable violating min constraint: 0.0 <= eleDrive.inertia.J, has value: ");
  modelica_string tmp80;
  static int tmp81 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp81)
  {
    tmp78 = GreaterEq(data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */,0.0);
    if(!tmp78)
    {
      tmp80 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[89] /* eleDrive.inertia.J PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Mechanics/Rotational/Components/Inertia.mo",4,3,4,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.inertia.J >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 549
type: ALGORITHM

  assert(eleDrive.constPDC.integrator1.initType >= Modelica.Blocks.Types.Init.NoInit and eleDrive.constPDC.integrator1.initType <= Modelica.Blocks.Types.Init.InitialOutput, "Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eleDrive.constPDC.integrator1.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: " + String(eleDrive.constPDC.integrator1.initType, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,171,"Variable violating min/max constraint: Modelica.Blocks.Types.Init.NoInit <= eleDrive.constPDC.integrator1.initType <= Modelica.Blocks.Types.Init.InitialOutput, has value: ");
  modelica_string tmp85;
  static int tmp86 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp86)
  {
    tmp82 = GreaterEq(data->simulationInfo->integerParameter[12] /* eleDrive.constPDC.integrator1.initType PARAM */,1);
    tmp83 = LessEq(data->simulationInfo->integerParameter[12] /* eleDrive.constPDC.integrator1.initType PARAM */,4);
    if(!(tmp82 && tmp83))
    {
      tmp85 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[12] /* eleDrive.constPDC.integrator1.initType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Continuous.mo",19,5,21,40,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.constPDC.integrator1.initType >= Modelica.Blocks.Types.Init.NoInit and eleDrive.constPDC.integrator1.initType <= Modelica.Blocks.Types.Init.InitialOutput", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp86 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 550
type: ALGORITHM

  assert(eleDrive.wMax >= eleDrive.powMax / eleDrive.tauMax, "Variable violating min constraint: eleDrive.powMax / eleDrive.tauMax <= eleDrive.wMax, has value: " + String(eleDrive.wMax, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  modelica_boolean tmp87;
  static const MMC_DEFSTRINGLIT(tmp88,98,"Variable violating min constraint: eleDrive.powMax / eleDrive.tauMax <= eleDrive.wMax, has value: ");
  modelica_string tmp89;
  static int tmp90 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp90)
  {
    tmp87 = GreaterEq(data->simulationInfo->realParameter[125] /* eleDrive.wMax PARAM */,DIVISION_SIM(data->simulationInfo->realParameter[94] /* eleDrive.powMax PARAM */,data->simulationInfo->realParameter[95] /* eleDrive.tauMax PARAM */,"eleDrive.tauMax",equationIndexes));
    if(!tmp87)
    {
      tmp89 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[125] /* eleDrive.wMax PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp88),tmp89);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",1794,13,1794,113,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.wMax >= eleDrive.powMax / eleDrive.tauMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp90 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 551
type: ALGORITHM

  assert(eleDrive.toElePow.effTable_.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and eleDrive.toElePow.effTable_.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= eleDrive.toElePow.effTable_.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(eleDrive.toElePow.effTable_.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  modelica_boolean tmp91;
  modelica_boolean tmp92;
  static const MMC_DEFSTRINGLIT(tmp93,206,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= eleDrive.toElePow.effTable_.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp94;
  static int tmp95 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp95)
  {
    tmp91 = GreaterEq(data->simulationInfo->integerParameter[15] /* eleDrive.toElePow.effTable_.smoothness PARAM */,1);
    tmp92 = LessEq(data->simulationInfo->integerParameter[15] /* eleDrive.toElePow.effTable_.smoothness PARAM */,6);
    if(!(tmp91 && tmp92))
    {
      tmp94 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[15] /* eleDrive.toElePow.effTable_.smoothness PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp93),tmp94);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Tables.mo",901,7,903,63,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.toElePow.effTable_.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and eleDrive.toElePow.effTable_.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp95 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 552
type: ALGORITHM

  assert(eleDrive.limTau.wMax >= eleDrive.limTau.powMax / eleDrive.limTau.tauMax, "Variable violating min constraint: eleDrive.limTau.powMax / eleDrive.limTau.tauMax <= eleDrive.limTau.wMax, has value: " + String(eleDrive.limTau.wMax, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,119,"Variable violating min constraint: eleDrive.limTau.powMax / eleDrive.limTau.tauMax <= eleDrive.limTau.wMax, has value: ");
  modelica_string tmp98;
  static int tmp99 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp99)
  {
    tmp96 = GreaterEq(data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */,DIVISION_SIM(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */,"eleDrive.limTau.tauMax",equationIndexes));
    if(!tmp96)
    {
      tmp98 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",357,13,357,107,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.limTau.wMax >= eleDrive.limTau.powMax / eleDrive.limTau.tauMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp99 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 553
type: ALGORITHM

  assert(wheel.radius >= 0.0, "Variable violating min constraint: 0.0 <= wheel.radius, has value: " + String(wheel.radius, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,67,"Variable violating min constraint: 0.0 <= wheel.radius, has value: ");
  modelica_string tmp102;
  static int tmp103 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp103)
  {
    tmp100 = GreaterEq(data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,0.0);
    if(!tmp100)
    {
      tmp102 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[138] /* wheel.radius PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Mechanics/Rotational/Components/IdealRollingWheel.mo",6,3,6,57,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nwheel.radius >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 554
type: ALGORITHM

  assert(cutNeg.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and cutNeg.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= cutNeg.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(cutNeg.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,175,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= cutNeg.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp107;
  static int tmp108 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp108)
  {
    tmp104 = GreaterEq(data->simulationInfo->integerParameter[2] /* cutNeg.homotopyType PARAM */,1);
    tmp105 = LessEq(data->simulationInfo->integerParameter[2] /* cutNeg.homotopyType PARAM */,4);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[2] /* cutNeg.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncutNeg.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and cutNeg.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 555
type: ALGORITHM

  assert(dragF.rho >= 0.0, "Variable violating min constraint: 0.0 <= dragF.rho, has value: " + String(dragF.rho, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  modelica_boolean tmp109;
  static const MMC_DEFSTRINGLIT(tmp110,64,"Variable violating min constraint: 0.0 <= dragF.rho, has value: ");
  modelica_string tmp111;
  static int tmp112 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp112)
  {
    tmp109 = GreaterEq(data->simulationInfo->realParameter[50] /* dragF.rho PARAM */,0.0);
    if(!tmp109)
    {
      tmp111 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[50] /* dragF.rho PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp110),tmp111);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",462,13,462,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndragF.rho >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp112 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 556
type: ALGORITHM

  assert(batt1.efficiency >= 0.0 and batt1.efficiency <= 0.9999, "Variable violating min/max constraint: 0.0 <= batt1.efficiency <= 0.9999, has value: " + String(batt1.efficiency, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  modelica_boolean tmp113;
  modelica_boolean tmp114;
  static const MMC_DEFSTRINGLIT(tmp115,85,"Variable violating min/max constraint: 0.0 <= batt1.efficiency <= 0.9999, has value: ");
  modelica_string tmp116;
  static int tmp117 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp117)
  {
    tmp113 = GreaterEq(data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */,0.0);
    tmp114 = LessEq(data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */,0.9999);
    if(!(tmp113 && tmp114))
    {
      tmp116 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp115),tmp116);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",575,13,576,62,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.efficiency >= 0.0 and batt1.efficiency <= 0.9999", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp117 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 557
type: ALGORITHM

  assert(batt1.QCellNom >= 0.0, "Variable violating min constraint: 0.0 <= batt1.QCellNom, has value: " + String(batt1.QCellNom, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  modelica_boolean tmp118;
  static const MMC_DEFSTRINGLIT(tmp119,69,"Variable violating min constraint: 0.0 <= batt1.QCellNom, has value: ");
  modelica_string tmp120;
  static int tmp121 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp121)
  {
    tmp118 = GreaterEq(data->simulationInfo->realParameter[14] /* batt1.QCellNom PARAM */,0.0);
    if(!tmp118)
    {
      tmp120 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[14] /* batt1.QCellNom PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",555,13,556,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.QCellNom >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp121 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 558
type: ALGORITHM

  assert(batt1.ICellMax >= 0.0, "Variable violating min constraint: 0.0 <= batt1.ICellMax, has value: " + String(batt1.ICellMax, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  modelica_boolean tmp122;
  static const MMC_DEFSTRINGLIT(tmp123,69,"Variable violating min constraint: 0.0 <= batt1.ICellMax, has value: ");
  modelica_string tmp124;
  static int tmp125 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp125)
  {
    tmp122 = GreaterEq(data->simulationInfo->realParameter[12] /* batt1.ICellMax PARAM */,0.0);
    if(!tmp122)
    {
      tmp124 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[12] /* batt1.ICellMax PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp123),tmp124);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",567,13,568,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.ICellMax >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp125 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 559
type: ALGORITHM

  assert(batt1.iCellEfficiency >= 0.0, "Variable violating min constraint: 0.0 <= batt1.iCellEfficiency, has value: " + String(batt1.iCellEfficiency, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,76,"Variable violating min constraint: 0.0 <= batt1.iCellEfficiency, has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp126 = GreaterEq(data->simulationInfo->realParameter[38] /* batt1.iCellEfficiency PARAM */,0.0);
    if(!tmp126)
    {
      tmp128 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[38] /* batt1.iCellEfficiency PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",577,13,578,62,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.iCellEfficiency >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 560
type: ALGORITHM

  assert(batt1.ECellMin >= 0.0, "Variable violating min constraint: 0.0 <= batt1.ECellMin, has value: " + String(batt1.ECellMin, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,69,"Variable violating min constraint: 0.0 <= batt1.ECellMin, has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp133)
  {
    tmp130 = GreaterEq(data->simulationInfo->realParameter[10] /* batt1.ECellMin PARAM */,0.0);
    if(!tmp130)
    {
      tmp132 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[10] /* batt1.ECellMin PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",557,13,558,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.ECellMin >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 561
type: ALGORITHM

  assert(batt1.ECellMax >= 0.0001, "Variable violating min constraint: 0.0001 <= batt1.ECellMax, has value: " + String(batt1.ECellMax, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  modelica_boolean tmp134;
  static const MMC_DEFSTRINGLIT(tmp135,72,"Variable violating min constraint: 0.0001 <= batt1.ECellMax, has value: ");
  modelica_string tmp136;
  static int tmp137 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp137)
  {
    tmp134 = GreaterEq(data->simulationInfo->realParameter[9] /* batt1.ECellMax PARAM */,0.0001);
    if(!tmp134)
    {
      tmp136 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[9] /* batt1.ECellMax PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp135),tmp136);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",559,13,560,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.ECellMax >= 0.0001", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp137 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 562
type: ALGORITHM

  assert(batt1.R0Cell >= 0.0, "Variable violating min constraint: 0.0 <= batt1.R0Cell, has value: " + String(batt1.R0Cell, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,67,"Variable violating min constraint: 0.0 <= batt1.R0Cell, has value: ");
  modelica_string tmp140;
  static int tmp141 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp141)
  {
    tmp138 = GreaterEq(data->simulationInfo->realParameter[21] /* batt1.R0Cell PARAM */,0.0);
    if(!tmp138)
    {
      tmp140 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[21] /* batt1.R0Cell PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",569,13,570,80,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.R0Cell >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp141 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 563
type: ALGORITHM

  assert(batt1.R1Cell >= 0.0, "Variable violating min constraint: 0.0 <= batt1.R1Cell, has value: " + String(batt1.R1Cell, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  modelica_boolean tmp142;
  static const MMC_DEFSTRINGLIT(tmp143,67,"Variable violating min constraint: 0.0 <= batt1.R1Cell, has value: ");
  modelica_string tmp144;
  static int tmp145 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp145)
  {
    tmp142 = GreaterEq(data->simulationInfo->realParameter[28] /* batt1.R1Cell PARAM */,0.0);
    if(!tmp142)
    {
      tmp144 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[28] /* batt1.R1Cell PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp143),tmp144);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",571,13,572,80,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.R1Cell >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp145 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 564
type: ALGORITHM

  assert(batt1.C1Cell >= 0.0, "Variable violating min constraint: 0.0 <= batt1.C1Cell, has value: " + String(batt1.C1Cell, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,67,"Variable violating min constraint: 0.0 <= batt1.C1Cell, has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp149)
  {
    tmp146 = GreaterEq(data->simulationInfo->realParameter[5] /* batt1.C1Cell PARAM */,0.0);
    if(!tmp146)
    {
      tmp148 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[5] /* batt1.C1Cell PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",573,13,574,80,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.C1Cell >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp149 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 565
type: ALGORITHM

  assert(batt1.C1Battery >= 0.0, "Variable violating min constraint: 0.0 <= batt1.C1Battery, has value: " + String(batt1.C1Battery, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  modelica_boolean tmp150;
  static const MMC_DEFSTRINGLIT(tmp151,70,"Variable violating min constraint: 0.0 <= batt1.C1Battery, has value: ");
  modelica_string tmp152;
  static int tmp153 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp153)
  {
    tmp150 = GreaterEq(data->simulationInfo->realParameter[4] /* batt1.C1Battery PARAM */,0.0);
    if(!tmp150)
    {
      tmp152 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[4] /* batt1.C1Battery PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp151),tmp152);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",616,13,616,119,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.C1Battery >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp153 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 566
type: ALGORITHM

  assert(batt1.C >= 0.0, "Variable violating min constraint: 0.0 <= batt1.C, has value: " + String(batt1.C, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,62,"Variable violating min constraint: 0.0 <= batt1.C, has value: ");
  modelica_string tmp156;
  static int tmp157 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp157)
  {
    tmp154 = GreaterEq(data->simulationInfo->realParameter[2] /* batt1.C PARAM */,0.0);
    if(!tmp154)
    {
      tmp156 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[2] /* batt1.C PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp155),tmp156);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",605,13,605,108,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.C >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp157 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 567
type: ALGORITHM

  assert(batt1.CBattery >= 0.0, "Variable violating min constraint: 0.0 <= batt1.CBattery, has value: " + String(batt1.CBattery, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,69,"Variable violating min constraint: 0.0 <= batt1.CBattery, has value: ");
  modelica_string tmp160;
  static int tmp161 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp161)
  {
    tmp158 = GreaterEq(data->simulationInfo->realParameter[6] /* batt1.CBattery PARAM */,0.0);
    if(!tmp158)
    {
      tmp160 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[6] /* batt1.CBattery PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",612,13,612,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.CBattery >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp161 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 568
type: ALGORITHM

  assert(batt1.cDummy.C >= 0.0, "Variable violating min constraint: 0.0 <= batt1.cDummy.C, has value: " + String(batt1.cDummy.C, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  modelica_boolean tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,69,"Variable violating min constraint: 0.0 <= batt1.cDummy.C, has value: ");
  modelica_string tmp164;
  static int tmp165 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp165)
  {
    tmp162 = GreaterEq(data->simulationInfo->realParameter[34] /* batt1.cDummy.C PARAM */,0.0);
    if(!tmp162)
    {
      tmp164 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[34] /* batt1.cDummy.C PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp163),tmp164);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Capacitor.mo",4,3,4,52,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.cDummy.C >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp165 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 569
type: ALGORITHM

  assert(batt1.C1.C >= 0.0, "Variable violating min constraint: 0.0 <= batt1.C1.C, has value: " + String(batt1.C1.C, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,65,"Variable violating min constraint: 0.0 <= batt1.C1.C, has value: ");
  modelica_string tmp168;
  static int tmp169 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp169)
  {
    tmp166 = GreaterEq(data->simulationInfo->realParameter[3] /* batt1.C1.C PARAM */,0.0);
    if(!tmp166)
    {
      tmp168 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[3] /* batt1.C1.C PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Capacitor.mo",4,3,4,52,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.C1.C >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 570
type: ALGORITHM

  assert(batt1.cBattery.C >= 0.0, "Variable violating min constraint: 0.0 <= batt1.cBattery.C, has value: " + String(batt1.cBattery.C, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  modelica_boolean tmp170;
  static const MMC_DEFSTRINGLIT(tmp171,71,"Variable violating min constraint: 0.0 <= batt1.cBattery.C, has value: ");
  modelica_string tmp172;
  static int tmp173 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp173)
  {
    tmp170 = GreaterEq(data->simulationInfo->realParameter[33] /* batt1.cBattery.C PARAM */,0.0);
    if(!tmp170)
    {
      tmp172 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[33] /* batt1.cBattery.C PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp171),tmp172);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Capacitor.mo",4,3,4,52,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.cBattery.C >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp173 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 571
type: ALGORITHM

  assert(batt1.SOCInit >= 0.0 and batt1.SOCInit <= 1.0, "Variable violating min/max constraint: 0.0 <= batt1.SOCInit <= 1.0, has value: " + String(batt1.SOCInit, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  modelica_boolean tmp174;
  modelica_boolean tmp175;
  static const MMC_DEFSTRINGLIT(tmp176,79,"Variable violating min/max constraint: 0.0 <= batt1.SOCInit <= 1.0, has value: ");
  modelica_string tmp177;
  static int tmp178 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp178)
  {
    tmp174 = GreaterEq(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */,0.0);
    tmp175 = LessEq(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */,1.0);
    if(!(tmp174 && tmp175))
    {
      tmp177 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp176),tmp177);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",565,13,566,48,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCInit >= 0.0 and batt1.SOCInit <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp178 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 572
type: ALGORITHM

  assert(batt1.SOCMax >= 0.0 and batt1.SOCMax <= 1.0, "Variable violating min/max constraint: 0.0 <= batt1.SOCMax <= 1.0, has value: " + String(batt1.SOCMax, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_572(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,572};
  modelica_boolean tmp179;
  modelica_boolean tmp180;
  static const MMC_DEFSTRINGLIT(tmp181,78,"Variable violating min/max constraint: 0.0 <= batt1.SOCMax <= 1.0, has value: ");
  modelica_string tmp182;
  static int tmp183 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp183)
  {
    tmp179 = GreaterEq(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */,0.0);
    tmp180 = LessEq(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */,1.0);
    if(!(tmp179 && tmp180))
    {
      tmp182 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp181),tmp182);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",563,13,564,48,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCMax >= 0.0 and batt1.SOCMax <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp183 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 573
type: ALGORITHM

  assert(batt1.SOCMin >= 0.0 and batt1.SOCMin <= 1.0, "Variable violating min/max constraint: 0.0 <= batt1.SOCMin <= 1.0, has value: " + String(batt1.SOCMin, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  modelica_boolean tmp184;
  modelica_boolean tmp185;
  static const MMC_DEFSTRINGLIT(tmp186,78,"Variable violating min/max constraint: 0.0 <= batt1.SOCMin <= 1.0, has value: ");
  modelica_string tmp187;
  static int tmp188 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp188)
  {
    tmp184 = GreaterEq(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */,0.0);
    tmp185 = LessEq(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */,1.0);
    if(!(tmp184 && tmp185))
    {
      tmp187 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp186),tmp187);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",561,13,562,48,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCMin >= 0.0 and batt1.SOCMin <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp188 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 574
type: ALGORITHM

  assert(mass.stateSelect >= StateSelect.never and mass.stateSelect <= StateSelect.always, "Variable violating min/max constraint: StateSelect.never <= mass.stateSelect <= StateSelect.always, has value: " + String(mass.stateSelect, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  modelica_boolean tmp189;
  modelica_boolean tmp190;
  static const MMC_DEFSTRINGLIT(tmp191,111,"Variable violating min/max constraint: StateSelect.never <= mass.stateSelect <= StateSelect.always, has value: ");
  modelica_string tmp192;
  static int tmp193 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp193)
  {
    tmp189 = GreaterEq(data->simulationInfo->integerParameter[17] /* mass.stateSelect PARAM */,1);
    tmp190 = LessEq(data->simulationInfo->integerParameter[17] /* mass.stateSelect PARAM */,5);
    if(!(tmp189 && tmp190))
    {
      tmp192 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[17] /* mass.stateSelect PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp191),tmp192);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Mechanics/Translational/Components/Mass.mo",4,3,5,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nmass.stateSelect >= StateSelect.never and mass.stateSelect <= StateSelect.always", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp193 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 575
type: ALGORITHM

  assert(driver.limiter1.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and driver.limiter1.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= driver.limiter1.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(driver.limiter1.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  modelica_boolean tmp194;
  modelica_boolean tmp195;
  static const MMC_DEFSTRINGLIT(tmp196,184,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= driver.limiter1.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp197;
  static int tmp198 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp198)
  {
    tmp194 = GreaterEq(data->simulationInfo->integerParameter[11] /* driver.limiter1.homotopyType PARAM */,1);
    tmp195 = LessEq(data->simulationInfo->integerParameter[11] /* driver.limiter1.homotopyType PARAM */,4);
    if(!(tmp194 && tmp195))
    {
      tmp197 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[11] /* driver.limiter1.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp196),tmp197);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.limiter1.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and driver.limiter1.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp198 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 576
type: ALGORITHM

  assert(driver.limBrak.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and driver.limBrak.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= driver.limBrak.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(driver.limBrak.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  modelica_boolean tmp199;
  modelica_boolean tmp200;
  static const MMC_DEFSTRINGLIT(tmp201,183,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= driver.limBrak.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp202;
  static int tmp203 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp203)
  {
    tmp199 = GreaterEq(data->simulationInfo->integerParameter[10] /* driver.limBrak.homotopyType PARAM */,1);
    tmp200 = LessEq(data->simulationInfo->integerParameter[10] /* driver.limBrak.homotopyType PARAM */,4);
    if(!(tmp199 && tmp200))
    {
      tmp202 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[10] /* driver.limBrak.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp201),tmp202);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.limBrak.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and driver.limBrak.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp203 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 577
type: ALGORITHM

  assert(driver.limAcc.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and driver.limAcc.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, "Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= driver.limAcc.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: " + String(driver.limAcc.homotopyType, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  modelica_boolean tmp204;
  modelica_boolean tmp205;
  static const MMC_DEFSTRINGLIT(tmp206,182,"Variable violating min/max constraint: Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy <= driver.limAcc.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit, has value: ");
  modelica_string tmp207;
  static int tmp208 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp208)
  {
    tmp204 = GreaterEq(data->simulationInfo->integerParameter[9] /* driver.limAcc.homotopyType PARAM */,1);
    tmp205 = LessEq(data->simulationInfo->integerParameter[9] /* driver.limAcc.homotopyType PARAM */,4);
    if(!(tmp204 && tmp205))
    {
      tmp207 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[9] /* driver.limAcc.homotopyType PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp206),tmp207);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",12,9,13,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.limAcc.homotopyType >= Modelica.Blocks.Types.LimiterHomotopy.NoHomotopy and driver.limAcc.homotopyType <= Modelica.Blocks.Types.LimiterHomotopy.LowerLimit", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp208 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 578
type: ALGORITHM

  assert(driver.driveCyc.timeScale >= 1e-15, "Variable violating min constraint: 1e-15 <= driver.driveCyc.timeScale, has value: " + String(driver.driveCyc.timeScale, "g"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  modelica_boolean tmp209;
  static const MMC_DEFSTRINGLIT(tmp210,82,"Variable violating min constraint: 1e-15 <= driver.driveCyc.timeScale, has value: ");
  modelica_string tmp211;
  static int tmp212 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp212)
  {
    tmp209 = GreaterEq(data->simulationInfo->realParameter[60] /* driver.driveCyc.timeScale PARAM */,1e-15);
    if(!tmp209)
    {
      tmp211 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[60] /* driver.driveCyc.timeScale PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp210),tmp211);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Sources.mo",1589,5,1591,76,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.driveCyc.timeScale >= 1e-15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp212 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 579
type: ALGORITHM

  assert(driver.driveCyc.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and driver.driveCyc.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, "Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= driver.driveCyc.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: " + String(driver.driveCyc.smoothness, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  modelica_boolean tmp213;
  modelica_boolean tmp214;
  static const MMC_DEFSTRINGLIT(tmp215,194,"Variable violating min/max constraint: Modelica.Blocks.Types.Smoothness.LinearSegments <= driver.driveCyc.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative, has value: ");
  modelica_string tmp216;
  static int tmp217 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp217)
  {
    tmp213 = GreaterEq(data->simulationInfo->integerParameter[6] /* driver.driveCyc.smoothness PARAM */,1);
    tmp214 = LessEq(data->simulationInfo->integerParameter[6] /* driver.driveCyc.smoothness PARAM */,6);
    if(!(tmp213 && tmp214))
    {
      tmp216 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[6] /* driver.driveCyc.smoothness PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp215),tmp216);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Sources.mo",1583,5,1585,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.driveCyc.smoothness >= Modelica.Blocks.Types.Smoothness.LinearSegments and driver.driveCyc.smoothness <= Modelica.Blocks.Types.Smoothness.ModifiedContinuousDerivative", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp217 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 580
type: ALGORITHM

  assert(driver.driveCyc.nout >= 1, "Variable violating min constraint: 1 <= driver.driveCyc.nout, has value: " + String(driver.driveCyc.nout, "d"));
*/
OMC_DISABLE_OPT
static void Map_based_model_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  modelica_boolean tmp218;
  static const MMC_DEFSTRINGLIT(tmp219,73,"Variable violating min constraint: 1 <= driver.driveCyc.nout, has value: ");
  modelica_string tmp220;
  static int tmp221 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp221)
  {
    tmp218 = GreaterEq(data->simulationInfo->integerParameter[5] /* driver.driveCyc.nout PARAM */,((modelica_integer) 1));
    if(!tmp218)
    {
      tmp220 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[5] /* driver.driveCyc.nout PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp219),tmp220);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Interfaces.mo",313,5,313,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.driveCyc.nout >= 1", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp221 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void Map_based_model_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Map_based_model_eqFunction_385(data, threadData);
  Map_based_model_eqFunction_386(data, threadData);
  Map_based_model_eqFunction_387(data, threadData);
  Map_based_model_eqFunction_388(data, threadData);
  Map_based_model_eqFunction_389(data, threadData);
  Map_based_model_eqFunction_390(data, threadData);
  Map_based_model_eqFunction_391(data, threadData);
  Map_based_model_eqFunction_392(data, threadData);
  Map_based_model_eqFunction_393(data, threadData);
  Map_based_model_eqFunction_394(data, threadData);
  Map_based_model_eqFunction_395(data, threadData);
  Map_based_model_eqFunction_396(data, threadData);
  Map_based_model_eqFunction_397(data, threadData);
  Map_based_model_eqFunction_398(data, threadData);
  Map_based_model_eqFunction_399(data, threadData);
  Map_based_model_eqFunction_400(data, threadData);
  Map_based_model_eqFunction_401(data, threadData);
  Map_based_model_eqFunction_402(data, threadData);
  Map_based_model_eqFunction_403(data, threadData);
  Map_based_model_eqFunction_404(data, threadData);
  Map_based_model_eqFunction_405(data, threadData);
  Map_based_model_eqFunction_406(data, threadData);
  Map_based_model_eqFunction_407(data, threadData);
  Map_based_model_eqFunction_408(data, threadData);
  Map_based_model_eqFunction_409(data, threadData);
  Map_based_model_eqFunction_410(data, threadData);
  Map_based_model_eqFunction_411(data, threadData);
  Map_based_model_eqFunction_412(data, threadData);
  Map_based_model_eqFunction_413(data, threadData);
  Map_based_model_eqFunction_414(data, threadData);
  Map_based_model_eqFunction_415(data, threadData);
  Map_based_model_eqFunction_416(data, threadData);
  Map_based_model_eqFunction_417(data, threadData);
  Map_based_model_eqFunction_418(data, threadData);
  Map_based_model_eqFunction_419(data, threadData);
  Map_based_model_eqFunction_420(data, threadData);
  Map_based_model_eqFunction_421(data, threadData);
  Map_based_model_eqFunction_423(data, threadData);
  Map_based_model_eqFunction_424(data, threadData);
  Map_based_model_eqFunction_425(data, threadData);
  Map_based_model_eqFunction_427(data, threadData);
  Map_based_model_eqFunction_428(data, threadData);
  Map_based_model_eqFunction_429(data, threadData);
  Map_based_model_eqFunction_434(data, threadData);
  Map_based_model_eqFunction_438(data, threadData);
  Map_based_model_eqFunction_439(data, threadData);
  Map_based_model_eqFunction_441(data, threadData);
  Map_based_model_eqFunction_442(data, threadData);
  Map_based_model_eqFunction_443(data, threadData);
  Map_based_model_eqFunction_444(data, threadData);
  Map_based_model_eqFunction_447(data, threadData);
  Map_based_model_eqFunction_448(data, threadData);
  Map_based_model_eqFunction_449(data, threadData);
  Map_based_model_eqFunction_450(data, threadData);
  Map_based_model_eqFunction_454(data, threadData);
  Map_based_model_eqFunction_457(data, threadData);
  Map_based_model_eqFunction_458(data, threadData);
  Map_based_model_eqFunction_459(data, threadData);
  Map_based_model_eqFunction_465(data, threadData);
  Map_based_model_eqFunction_468(data, threadData);
  Map_based_model_eqFunction_469(data, threadData);
  Map_based_model_eqFunction_470(data, threadData);
  Map_based_model_eqFunction_471(data, threadData);
  Map_based_model_eqFunction_472(data, threadData);
  Map_based_model_eqFunction_473(data, threadData);
  Map_based_model_eqFunction_474(data, threadData);
  Map_based_model_eqFunction_475(data, threadData);
  Map_based_model_eqFunction_476(data, threadData);
  Map_based_model_eqFunction_477(data, threadData);
  Map_based_model_eqFunction_478(data, threadData);
  Map_based_model_eqFunction_479(data, threadData);
  Map_based_model_eqFunction_480(data, threadData);
  Map_based_model_eqFunction_481(data, threadData);
  Map_based_model_eqFunction_482(data, threadData);
  Map_based_model_eqFunction_483(data, threadData);
  Map_based_model_eqFunction_484(data, threadData);
  Map_based_model_eqFunction_485(data, threadData);
  Map_based_model_eqFunction_486(data, threadData);
  Map_based_model_eqFunction_487(data, threadData);
  Map_based_model_eqFunction_488(data, threadData);
  Map_based_model_eqFunction_490(data, threadData);
  Map_based_model_eqFunction_492(data, threadData);
  Map_based_model_eqFunction_493(data, threadData);
  Map_based_model_eqFunction_497(data, threadData);
  Map_based_model_eqFunction_498(data, threadData);
  Map_based_model_eqFunction_501(data, threadData);
  Map_based_model_eqFunction_504(data, threadData);
  Map_based_model_eqFunction_505(data, threadData);
  Map_based_model_eqFunction_506(data, threadData);
  Map_based_model_eqFunction_507(data, threadData);
  Map_based_model_eqFunction_508(data, threadData);
  Map_based_model_eqFunction_509(data, threadData);
  Map_based_model_eqFunction_510(data, threadData);
  Map_based_model_eqFunction_115(data, threadData);
  Map_based_model_eqFunction_114(data, threadData);
  Map_based_model_eqFunction_113(data, threadData);
  Map_based_model_eqFunction_112(data, threadData);
  Map_based_model_eqFunction_111(data, threadData);
  Map_based_model_eqFunction_110(data, threadData);
  Map_based_model_eqFunction_109(data, threadData);
  Map_based_model_eqFunction_108(data, threadData);
  Map_based_model_eqFunction_107(data, threadData);
  Map_based_model_eqFunction_7(data, threadData);
  Map_based_model_eqFunction_6(data, threadData);
  Map_based_model_eqFunction_3(data, threadData);
  Map_based_model_eqFunction_2(data, threadData);
  Map_based_model_eqFunction_1(data, threadData);
  Map_based_model_eqFunction_531(data, threadData);
  Map_based_model_eqFunction_532(data, threadData);
  Map_based_model_eqFunction_533(data, threadData);
  Map_based_model_eqFunction_534(data, threadData);
  Map_based_model_eqFunction_535(data, threadData);
  Map_based_model_eqFunction_536(data, threadData);
  Map_based_model_eqFunction_537(data, threadData);
  Map_based_model_eqFunction_538(data, threadData);
  Map_based_model_eqFunction_539(data, threadData);
  Map_based_model_eqFunction_540(data, threadData);
  Map_based_model_eqFunction_541(data, threadData);
  Map_based_model_eqFunction_542(data, threadData);
  Map_based_model_eqFunction_543(data, threadData);
  Map_based_model_eqFunction_544(data, threadData);
  Map_based_model_eqFunction_545(data, threadData);
  Map_based_model_eqFunction_546(data, threadData);
  Map_based_model_eqFunction_547(data, threadData);
  Map_based_model_eqFunction_548(data, threadData);
  Map_based_model_eqFunction_549(data, threadData);
  Map_based_model_eqFunction_550(data, threadData);
  Map_based_model_eqFunction_551(data, threadData);
  Map_based_model_eqFunction_552(data, threadData);
  Map_based_model_eqFunction_553(data, threadData);
  Map_based_model_eqFunction_554(data, threadData);
  Map_based_model_eqFunction_555(data, threadData);
  Map_based_model_eqFunction_556(data, threadData);
  Map_based_model_eqFunction_557(data, threadData);
  Map_based_model_eqFunction_558(data, threadData);
  Map_based_model_eqFunction_559(data, threadData);
  Map_based_model_eqFunction_560(data, threadData);
  Map_based_model_eqFunction_561(data, threadData);
  Map_based_model_eqFunction_562(data, threadData);
  Map_based_model_eqFunction_563(data, threadData);
  Map_based_model_eqFunction_564(data, threadData);
  Map_based_model_eqFunction_565(data, threadData);
  Map_based_model_eqFunction_566(data, threadData);
  Map_based_model_eqFunction_567(data, threadData);
  Map_based_model_eqFunction_568(data, threadData);
  Map_based_model_eqFunction_569(data, threadData);
  Map_based_model_eqFunction_570(data, threadData);
  Map_based_model_eqFunction_571(data, threadData);
  Map_based_model_eqFunction_572(data, threadData);
  Map_based_model_eqFunction_573(data, threadData);
  Map_based_model_eqFunction_574(data, threadData);
  Map_based_model_eqFunction_575(data, threadData);
  Map_based_model_eqFunction_576(data, threadData);
  Map_based_model_eqFunction_577(data, threadData);
  Map_based_model_eqFunction_578(data, threadData);
  Map_based_model_eqFunction_579(data, threadData);
  Map_based_model_eqFunction_580(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int Map_based_model_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[5] /* driver.driveCyc.nout PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->realParameter[60] /* driver.driveCyc.timeScale PARAM */ = 1.0;
  data->modelData->realParameterData[60].time_unvarying = 1;
  data->simulationInfo->realParameter[90] /* eleDrive.limTau.alpha PARAM */ = 0.1;
  data->modelData->realParameterData[90].time_unvarying = 1;
  data->simulationInfo->realParameter[131] /* wheel.fixedR.phi0 PARAM */ = 0.0;
  data->modelData->realParameterData[131].time_unvarying = 1;
  data->simulationInfo->realParameter[133] /* wheel.fixedT.s0 PARAM */ = 0.0;
  data->modelData->realParameterData[133].time_unvarying = 1;
  data->simulationInfo->booleanParameter[0] /* batt1.R0.useHeatPort PARAM */ = 0;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  data->simulationInfo->booleanParameter[1] /* batt1.R1.useHeatPort PARAM */ = 0;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  data->simulationInfo->booleanParameter[2] /* batt1.abs1.generateEvent PARAM */ = 0;
  data->modelData->booleanParameterData[2].time_unvarying = 1;
  data->simulationInfo->booleanParameter[3] /* brake.useSupport PARAM */ = 0;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  data->simulationInfo->booleanParameter[4] /* cutNeg.strict PARAM */ = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  data->simulationInfo->booleanParameter[5] /* dragF.useSupport PARAM */ = 0;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[6] /* driver.driveCyc.tableOnFile PARAM */ = 1;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  data->simulationInfo->booleanParameter[7] /* driver.driveCyc.verboseExtrapolation PARAM */ = 0;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  data->simulationInfo->booleanParameter[9] /* driver.limAcc.strict PARAM */ = 0;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  data->simulationInfo->booleanParameter[10] /* driver.limBrak.strict PARAM */ = 0;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  data->simulationInfo->booleanParameter[11] /* driver.limiter1.strict PARAM */ = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  data->simulationInfo->booleanParameter[12] /* eleDrive.constPDC.integrator1.use_reset PARAM */ = 0;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  data->simulationInfo->booleanParameter[13] /* eleDrive.constPDC.integrator1.use_set PARAM */ = 0;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  data->simulationInfo->booleanParameter[14] /* eleDrive.constPDC.varCond.useHeatPort PARAM */ = 0;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  data->simulationInfo->booleanParameter[15] /* eleDrive.mapsOnFile PARAM */ = 1;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  data->simulationInfo->booleanParameter[16] /* eleDrive.toElePow.abs1.generateEvent PARAM */ = 0;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  data->simulationInfo->booleanParameter[17] /* eleDrive.toElePow.abs2.generateEvent PARAM */ = 0;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  data->simulationInfo->booleanParameter[18] /* eleDrive.toElePow.effTable_.tableOnFile PARAM */ = 1;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  data->simulationInfo->booleanParameter[19] /* eleDrive.toElePow.effTable_.verboseExtrapolation PARAM */ = 0;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  data->simulationInfo->booleanParameter[21] /* eleDrive.toElePow.mapsOnFile PARAM */ = 1;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  data->simulationInfo->booleanParameter[22] /* eleDrive.torque.useSupport PARAM */ = 0;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  data->simulationInfo->booleanParameter[23] /* eleDrive.variableLimiter.strict PARAM */ = 0;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  data->simulationInfo->booleanParameter[24] /* gear.useSupport PARAM */ = 0;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  data->simulationInfo->booleanParameter[25] /* wheel.useSupportR PARAM */ = 0;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  data->simulationInfo->booleanParameter[26] /* wheel.useSupportT PARAM */ = 0;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* cutNeg.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* driver.driveCyc.smoothness PARAM */ = 1;
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* driver.limAcc.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* driver.limBrak.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->simulationInfo->integerParameter[11] /* driver.limiter1.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[11].time_unvarying = 1;
  data->simulationInfo->integerParameter[12] /* eleDrive.constPDC.integrator1.initType PARAM */ = 3;
  data->modelData->integerParameterData[12].time_unvarying = 1;
  data->simulationInfo->integerParameter[13] /* eleDrive.inertia.stateSelect PARAM */ = 3;
  data->modelData->integerParameterData[13].time_unvarying = 1;
  data->simulationInfo->integerParameter[15] /* eleDrive.toElePow.effTable_.smoothness PARAM */ = 1;
  data->modelData->integerParameterData[15].time_unvarying = 1;
  data->simulationInfo->integerParameter[16] /* eleDrive.variableLimiter.homotopyType PARAM */ = 2;
  data->modelData->integerParameterData[16].time_unvarying = 1;
  Map_based_model_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

