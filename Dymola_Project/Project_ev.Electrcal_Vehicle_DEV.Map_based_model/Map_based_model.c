/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "Map_based_model_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation Map_based_model_performSimulation
#define prefixedName_updateContinuousSystem Map_based_model_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation Map_based_model_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>


/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int Map_based_model_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Map_based_model_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Map_based_model_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Map_based_model_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Map_based_model_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int Map_based_model_dataReconciliationInputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Map_based_model_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int Map_based_model_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 261
type: SIMPLE_ASSIGN
batt1.R1.v = batt1.C1.v
*/
void Map_based_model_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->localData[0]->realVars[35] /* batt1.R1.v variable */ = data->localData[0]->realVars[0] /* batt1.C1.v STATE(1) */;
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
$DER.dragF.s = mass.v
*/
void Map_based_model_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->localData[0]->realVars[14] /* der(dragF.s) DUMMY_DER */ = data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */;
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
dragF.v = mass.v
*/
void Map_based_model_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */ = data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */;
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
$DER.pP1.flange_a.s = mass.v
*/
void Map_based_model_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->localData[0]->realVars[19] /* der(pP1.flange_a.s) DUMMY_DER */ = data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */;
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
driver.driveCyc.timeScaled = time
*/
void Map_based_model_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->localData[0]->realVars[55] /* driver.driveCyc.timeScaled variable */ = data->localData[0]->timeValue;
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
$DER.mass.s = mass.v
*/
void Map_based_model_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->localData[0]->realVars[10] /* der(mass.s) STATE_DER */ = data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */;
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
batt1.R1.i = batt1.C1.v / batt1.R1.R_actual
*/
void Map_based_model_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->localData[0]->realVars[34] /* batt1.R1.i variable */ = DIVISION_SIM(data->localData[0]->realVars[0] /* batt1.C1.v STATE(1) */,data->localData[0]->realVars[33] /* batt1.R1.R_actual variable */,"batt1.R1.R_actual",equationIndexes);
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
batt1.R1.LossPower = batt1.C1.v * batt1.R1.i
*/
void Map_based_model_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->localData[0]->realVars[32] /* batt1.R1.LossPower variable */ = (data->localData[0]->realVars[0] /* batt1.C1.v STATE(1) */) * (data->localData[0]->realVars[34] /* batt1.R1.i variable */);
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
batt1.Ip.v = batt1.cBattery.v + batt1.C1.v
*/
void Map_based_model_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->localData[0]->realVars[27] /* batt1.Ip.v variable */ = data->localData[0]->realVars[1] /* batt1.cBattery.v STATE(1) */ + data->localData[0]->realVars[0] /* batt1.C1.v STATE(1) */;
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
batt1.R0.v = batt1.cDummy.v - batt1.Ip.v
*/
void Map_based_model_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->localData[0]->realVars[31] /* batt1.R0.v variable */ = data->localData[0]->realVars[2] /* batt1.cDummy.v STATE(1) */ - data->localData[0]->realVars[27] /* batt1.Ip.v variable */;
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
batt1.R0.i = batt1.R0.v / batt1.R0.R_actual
*/
void Map_based_model_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->localData[0]->realVars[30] /* batt1.R0.i variable */ = DIVISION_SIM(data->localData[0]->realVars[31] /* batt1.R0.v variable */,data->localData[0]->realVars[29] /* batt1.R0.R_actual variable */,"batt1.R0.R_actual",equationIndexes);
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
batt1.abs1.u = (-batt1.gain.k) * batt1.R0.i
*/
void Map_based_model_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->localData[0]->realVars[37] /* batt1.abs1.u variable */ = ((-data->simulationInfo->realParameter[37] /* batt1.gain.k PARAM */)) * (data->localData[0]->realVars[30] /* batt1.R0.i variable */);
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
batt1.Ip.i = if noEvent(batt1.abs1.u >= 0.0) then batt1.abs1.u else -batt1.abs1.u
*/
void Map_based_model_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  modelica_boolean tmp0;
  tmp0 = GreaterEq(data->localData[0]->realVars[37] /* batt1.abs1.u variable */,0.0);
  data->localData[0]->realVars[26] /* batt1.Ip.i variable */ = (tmp0?data->localData[0]->realVars[37] /* batt1.abs1.u variable */:(-data->localData[0]->realVars[37] /* batt1.abs1.u variable */));
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
batt1.iCellStray = batt1.Ip.i / (*Real*)(batt1.np)
*/
void Map_based_model_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->localData[0]->realVars[40] /* batt1.iCellStray variable */ = DIVISION_SIM(data->localData[0]->realVars[26] /* batt1.Ip.i variable */,((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */),"/*Real*/(batt1.np)",equationIndexes);
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
batt1.cBattery.i = batt1.R0.i - batt1.Ip.i
*/
void Map_based_model_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->localData[0]->realVars[38] /* batt1.cBattery.i variable */ = data->localData[0]->realVars[30] /* batt1.R0.i variable */ - data->localData[0]->realVars[26] /* batt1.Ip.i variable */;
  TRACE_POP
}
/*
equation index: 276
type: SIMPLE_ASSIGN
batt1.C1.i = batt1.cBattery.i - batt1.R1.i
*/
void Map_based_model_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->localData[0]->realVars[24] /* batt1.C1.i variable */ = data->localData[0]->realVars[38] /* batt1.cBattery.i variable */ - data->localData[0]->realVars[34] /* batt1.R1.i variable */;
  TRACE_POP
}
/*
equation index: 277
type: SIMPLE_ASSIGN
$DER.batt1.C1.v = batt1.C1.i / batt1.C1.C
*/
void Map_based_model_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->localData[0]->realVars[6] /* der(batt1.C1.v) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[24] /* batt1.C1.i variable */,data->simulationInfo->realParameter[3] /* batt1.C1.C PARAM */,"batt1.C1.C",equationIndexes);
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
$DER.batt1.cBattery.v = batt1.cBattery.i / batt1.cBattery.C
*/
void Map_based_model_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->localData[0]->realVars[7] /* der(batt1.cBattery.v) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[38] /* batt1.cBattery.i variable */,data->simulationInfo->realParameter[33] /* batt1.cBattery.C PARAM */,"batt1.cBattery.C",equationIndexes);
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
ground.p.i = batt1.cBattery.i + batt1.Ip.i - batt1.R0.i
*/
void Map_based_model_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->localData[0]->realVars[87] /* ground.p.i variable */ = data->localData[0]->realVars[38] /* batt1.cBattery.i variable */ + data->localData[0]->realVars[26] /* batt1.Ip.i variable */ - data->localData[0]->realVars[30] /* batt1.R0.i variable */;
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
batt1.R0.LossPower = batt1.R0.v * batt1.R0.i
*/
void Map_based_model_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->localData[0]->realVars[28] /* batt1.R0.LossPower variable */ = (data->localData[0]->realVars[31] /* batt1.R0.v variable */) * (data->localData[0]->realVars[30] /* batt1.R0.i variable */);
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
batt1.powerLoss = batt1.R0.LossPower + batt1.R1.LossPower + batt1.Ip.v * batt1.Ip.i
*/
void Map_based_model_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->localData[0]->realVars[42] /* batt1.powerLoss variable */ = data->localData[0]->realVars[28] /* batt1.R0.LossPower variable */ + data->localData[0]->realVars[32] /* batt1.R1.LossPower variable */ + (data->localData[0]->realVars[27] /* batt1.Ip.v variable */) * (data->localData[0]->realVars[26] /* batt1.Ip.i variable */);
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
batt1.ECell = batt1.cBattery.v / (*Real*)(batt1.ns)
*/
void Map_based_model_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->localData[0]->realVars[25] /* batt1.ECell variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* batt1.cBattery.v STATE(1) */,((modelica_real)data->simulationInfo->integerParameter[1] /* batt1.ns PARAM */),"/*Real*/(batt1.ns)",equationIndexes);
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
batt1.SOC = (batt1.cBattery.v - batt1.EBatteryMin) / (batt1.EBatteryMax - batt1.EBatteryMin)
*/
void Map_based_model_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->localData[0]->realVars[36] /* batt1.SOC variable */ = DIVISION_SIM(data->localData[0]->realVars[1] /* batt1.cBattery.v STATE(1) */ - data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */,data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ - data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */,"batt1.EBatteryMax - batt1.EBatteryMin",equationIndexes);
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
dragF.Sign = if mass.v > 0.0 then 1.0 else -1.0
*/
void Map_based_model_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  modelica_boolean tmp1;
  relationhysteresis(data, &tmp1, data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, 0.0, 4, Greater, GreaterZC);
  data->localData[0]->realVars[46] /* dragF.Sign variable */ = (tmp1?1.0:-1.0);
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
dragF.f = dragF.B * mass.v ^ 2.0
*/
void Map_based_model_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  modelica_real tmp2;
  tmp2 = data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */;
  data->localData[0]->realVars[48] /* dragF.f variable */ = (data->simulationInfo->realParameter[43] /* dragF.B PARAM */) * ((tmp2 * tmp2));
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
pP2.power = dragF.f * mass.v
*/
void Map_based_model_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->localData[0]->realVars[93] /* pP2.power variable */ = (data->localData[0]->realVars[48] /* dragF.f variable */) * (data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */);
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
eleDrive.constPDC.varCond.G_actual = eleDrive.constPDC.integrator1.y / (1.0 + eleDrive.constPDC.varCond.alpha * (eleDrive.constPDC.varCond.T - eleDrive.constPDC.varCond.T_ref))
*/
void Map_based_model_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->localData[0]->realVars[66] /* eleDrive.constPDC.varCond.G_actual variable */ = DIVISION_SIM(data->localData[0]->realVars[3] /* eleDrive.constPDC.integrator1.y STATE(1) */,1.0 + (data->simulationInfo->realParameter[78] /* eleDrive.constPDC.varCond.alpha PARAM */) * (data->simulationInfo->realParameter[75] /* eleDrive.constPDC.varCond.T PARAM */ - data->simulationInfo->realParameter[77] /* eleDrive.constPDC.varCond.T_ref PARAM */),"1.0 + eleDrive.constPDC.varCond.alpha * (eleDrive.constPDC.varCond.T - eleDrive.constPDC.varCond.T_ref)",equationIndexes);
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
eleDrive.constPDC.varCond.i = eleDrive.constPDC.varCond.G_actual * batt1.cDummy.v
*/
void Map_based_model_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->localData[0]->realVars[68] /* eleDrive.constPDC.varCond.i variable */ = (data->localData[0]->realVars[66] /* eleDrive.constPDC.varCond.G_actual variable */) * (data->localData[0]->realVars[2] /* batt1.cDummy.v STATE(1) */);
  TRACE_POP
}
/*
equation index: 289
type: SIMPLE_ASSIGN
eleDrive.constPDC.feedback1.u2 = batt1.cDummy.v * eleDrive.constPDC.varCond.i
*/
void Map_based_model_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->localData[0]->realVars[61] /* eleDrive.constPDC.feedback1.u2 variable */ = (data->localData[0]->realVars[2] /* batt1.cDummy.v STATE(1) */) * (data->localData[0]->realVars[68] /* eleDrive.constPDC.varCond.i variable */);
  TRACE_POP
}
/*
equation index: 290
type: SIMPLE_ASSIGN
eleDrive.constPDC.varCond.LossPower = eleDrive.constPDC.feedback1.u2
*/
void Map_based_model_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->localData[0]->realVars[67] /* eleDrive.constPDC.varCond.LossPower variable */ = data->localData[0]->realVars[61] /* eleDrive.constPDC.feedback1.u2 variable */;
  TRACE_POP
}
/*
equation index: 291
type: SIMPLE_ASSIGN
batt1.cDummy.i = (-batt1.R0.i) - eleDrive.constPDC.varCond.i
*/
void Map_based_model_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->localData[0]->realVars[39] /* batt1.cDummy.i variable */ = (-data->localData[0]->realVars[30] /* batt1.R0.i variable */) - data->localData[0]->realVars[68] /* eleDrive.constPDC.varCond.i variable */;
  TRACE_POP
}
/*
equation index: 292
type: SIMPLE_ASSIGN
$DER.batt1.cDummy.v = batt1.cDummy.i / batt1.cDummy.C
*/
void Map_based_model_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->localData[0]->realVars[8] /* der(batt1.cDummy.v) STATE_DER */ = DIVISION_SIM(data->localData[0]->realVars[39] /* batt1.cDummy.i variable */,data->simulationInfo->realParameter[34] /* batt1.cDummy.C PARAM */,"batt1.cDummy.C",equationIndexes);
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
batt1.n.i = (-batt1.Ip.i) - batt1.cDummy.i - batt1.cBattery.i
*/
void Map_based_model_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->localData[0]->realVars[41] /* batt1.n.i variable */ = (-data->localData[0]->realVars[26] /* batt1.Ip.i variable */) - data->localData[0]->realVars[39] /* batt1.cDummy.i variable */ - data->localData[0]->realVars[38] /* batt1.cBattery.i variable */;
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
$whenCondition1 = time >= pre(driver.driveCyc.nextTimeEvent)
*/
void Map_based_model_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  modelica_boolean tmp3;
  relationhysteresis(data, &tmp3, data->localData[0]->timeValue, data->simulationInfo->realVarsPre[97] /* driver.driveCyc.nextTimeEvent DISCRETE */, 0, GreaterEq, GreaterEqZC);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = tmp3;
  TRACE_POP
}
/*
equation index: 295
type: WHEN

when {$whenCondition1} then
  driver.driveCyc.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(driver.driveCyc.tableID, driver.driveCyc.timeScaled);
end when;
*/
void Map_based_model_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    data->localData[0]->realVars[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */ = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, data->simulationInfo->extObjs[0], data->localData[0]->realVars[55] /* driver.driveCyc.timeScaled variable */);
  }
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
$cse1 = Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(driver.driveCyc.tableID, 1, driver.driveCyc.timeScaled, driver.driveCyc.nextTimeEventScaled, pre(driver.driveCyc.nextTimeEventScaled))
*/
void Map_based_model_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->localData[0]->realVars[20] /* $cse1 variable */ = omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, data->simulationInfo->extObjs[0], ((modelica_integer) 1), data->localData[0]->realVars[55] /* driver.driveCyc.timeScaled variable */, data->localData[0]->realVars[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */, data->simulationInfo->realVarsPre[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */);
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
driver.driveCyc.y[1] = driver.driveCyc.p_offset[1] + $cse1
*/
void Map_based_model_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->localData[0]->realVars[56] /* driver.driveCyc.y[1] variable */ = data->simulationInfo->realParameter[53] /* driver.driveCyc.p_offset[1] PARAM */ + data->localData[0]->realVars[20] /* $cse1 variable */;
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
driver.feedback.u1 = 0.2777777777777778 * driver.driveCyc.y[1]
*/
void Map_based_model_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->localData[0]->realVars[57] /* driver.feedback.u1 variable */ = (0.2777777777777778) * (data->localData[0]->realVars[56] /* driver.driveCyc.y[1] variable */);
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
driver.feedback.y = driver.feedback.u1 - mass.v
*/
void Map_based_model_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->localData[0]->realVars[58] /* driver.feedback.y variable */ = data->localData[0]->realVars[57] /* driver.feedback.u1 variable */ - data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */;
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
driver.gain.y = driver.gain.k * driver.feedback.y
*/
void Map_based_model_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->localData[0]->realVars[59] /* driver.gain.y variable */ = (data->simulationInfo->realParameter[61] /* driver.gain.k PARAM */) * (data->localData[0]->realVars[58] /* driver.feedback.y variable */);
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
driver.accelTau = smooth(0, if driver.gain.y > driver.limAcc.uMax then driver.limAcc.uMax else if driver.gain.y < driver.limAcc.uMin then driver.limAcc.uMin else driver.gain.y)
*/
void Map_based_model_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_real tmp7;
  tmp4 = Greater(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[63] /* driver.limAcc.uMax PARAM */);
  tmp6 = (modelica_boolean)tmp4;
  if(tmp6)
  {
    tmp7 = data->simulationInfo->realParameter[63] /* driver.limAcc.uMax PARAM */;
  }
  else
  {
    tmp5 = Less(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[64] /* driver.limAcc.uMin PARAM */);
    tmp7 = (tmp5?data->simulationInfo->realParameter[64] /* driver.limAcc.uMin PARAM */:data->localData[0]->realVars[59] /* driver.gain.y variable */);
  }
  data->localData[0]->realVars[53] /* driver.accelTau variable */ = tmp7;
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
driver.brakeTau = smooth(0, if driver.gain.y > driver.limBrak.uMax then driver.limBrak.uMax else if driver.gain.y < driver.limBrak.uMin then driver.limBrak.uMin else driver.gain.y)
*/
void Map_based_model_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp10;
  modelica_real tmp11;
  tmp8 = Greater(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[65] /* driver.limBrak.uMax PARAM */);
  tmp10 = (modelica_boolean)tmp8;
  if(tmp10)
  {
    tmp11 = data->simulationInfo->realParameter[65] /* driver.limBrak.uMax PARAM */;
  }
  else
  {
    tmp9 = Less(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */);
    tmp11 = (tmp9?data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */:data->localData[0]->realVars[59] /* driver.gain.y variable */);
  }
  data->localData[0]->realVars[54] /* driver.brakeTau variable */ = tmp11;
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
add.u2 = smooth(0, if driver.gain.y > driver.limiter1.uMax then driver.limiter1.uMax else if driver.gain.y < driver.limiter1.uMin then driver.limiter1.uMin else driver.gain.y)
*/
void Map_based_model_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_real tmp15;
  tmp12 = Greater(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */);
  tmp14 = (modelica_boolean)tmp12;
  if(tmp14)
  {
    tmp15 = data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */;
  }
  else
  {
    tmp13 = Less(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */);
    tmp15 = (tmp13?data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */:data->localData[0]->realVars[59] /* driver.gain.y variable */);
  }
  data->localData[0]->realVars[22] /* add.u2 variable */ = tmp15;
  TRACE_POP
}
/*
equation index: 304
type: WHEN

when {$whenCondition1} then
  driver.driveCyc.nextTimeEvent = if driver.driveCyc.nextTimeEventScaled < 9.999999999999999e+59 then driver.driveCyc.nextTimeEventScaled else 9.999999999999999e+59;
end when;
*/
void Map_based_model_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  modelica_boolean tmp16;
  if((data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ && !data->simulationInfo->booleanVarsPre[0] /* $whenCondition1 DISCRETE */ /* edge */))
  {
    tmp16 = Less(data->localData[0]->realVars[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */,9.999999999999999e+59);
    data->localData[0]->realVars[97] /* driver.driveCyc.nextTimeEvent DISCRETE */ = (tmp16?data->localData[0]->realVars[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */:9.999999999999999e+59);
  }
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
$DER.gear.phi_b = mass.v / wheel.radius
*/
void Map_based_model_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->localData[0]->realVars[18] /* der(gear.phi_b) DUMMY_DER */ = DIVISION_SIM(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */,data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius",equationIndexes);
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
eleDrive.inertia.w = gear.ratio * $DER.gear.phi_b
*/
void Map_based_model_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (data->localData[0]->realVars[18] /* der(gear.phi_b) DUMMY_DER */);
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
eleDrive.toElePow.abs1.y = if noEvent(eleDrive.inertia.w >= 0.0) then eleDrive.inertia.w else -eleDrive.inertia.w
*/
void Map_based_model_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  modelica_boolean tmp17;
  tmp17 = GreaterEq(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,0.0);
  data->localData[0]->realVars[76] /* eleDrive.toElePow.abs1.y variable */ = (tmp17?data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */:(-data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */));
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.u2 = eleDrive.toElePow.normalizeSpeed.k * eleDrive.toElePow.abs1.y
*/
void Map_based_model_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->localData[0]->realVars[80] /* eleDrive.toElePow.effTable_.u2 variable */ = (data->simulationInfo->realParameter[118] /* eleDrive.toElePow.normalizeSpeed.k PARAM */) * (data->localData[0]->realVars[76] /* eleDrive.toElePow.abs1.y variable */);
  TRACE_POP
}
/*
equation index: 309
type: ALGORITHM

  eleDrive.limTau.yL := $START.eleDrive.limTau.yL;
  eleDrive.limTau.yH := $START.eleDrive.limTau.yH;
  eleDrive.limTau.state := pre(eleDrive.limTau.state);
  if eleDrive.inertia.w < eleDrive.limTau.powMax / eleDrive.limTau.tauMax then
    eleDrive.limTau.state := 0;
    eleDrive.limTau.yH := eleDrive.limTau.tauMax;
  else
    eleDrive.limTau.state := 1;
    eleDrive.limTau.yH := eleDrive.limTau.powMax / eleDrive.inertia.w;
  end if;
  if eleDrive.inertia.w > eleDrive.limTau.wMax then
    if eleDrive.inertia.w < (1.0 + eleDrive.limTau.alpha) * eleDrive.limTau.wMax then
      eleDrive.limTau.state := 2;
      eleDrive.limTau.yH := eleDrive.limTau.powMax * (1.0 + (eleDrive.limTau.wMax - eleDrive.inertia.w) / (eleDrive.limTau.wMax * eleDrive.limTau.alpha)) / eleDrive.limTau.wMax;
    else
      eleDrive.limTau.state := 3;
      eleDrive.limTau.yH := 0.0;
    end if;
  end if;
  eleDrive.limTau.yL := -eleDrive.limTau.yH;
*/
void Map_based_model_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  modelica_boolean tmp18;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */ = data->modelData->realVarsData[73].attribute /* eleDrive.limTau.yL variable */.start;

  data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = data->modelData->realVarsData[72].attribute /* eleDrive.limTau.yH variable */.start;

  data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = data->simulationInfo->integerVarsPre[1] /* eleDrive.limTau.state DISCRETE */;

  relationhysteresis(data, &tmp18, data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, DIVISION_SIM(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */,"eleDrive.limTau.tauMax",equationIndexes), 1, Less, LessZC);
  if(tmp18)
  {
    data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = ((modelica_integer) 0);

    data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */;
  }
  else
  {
    data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = ((modelica_integer) 1);

    data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = DIVISION_SIM(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,"eleDrive.inertia.w",equationIndexes);
  }

  relationhysteresis(data, &tmp19, data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */, 3, Greater, GreaterZC);
  if(tmp19)
  {
    relationhysteresis(data, &tmp20, data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, (1.0 + data->simulationInfo->realParameter[90] /* eleDrive.limTau.alpha PARAM */) * (data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */), 2, Less, LessZC);
    if(tmp20)
    {
      data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = ((modelica_integer) 2);

      data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = (data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */) * (DIVISION_SIM(1.0 + DIVISION_SIM(data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */ - data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,(data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */) * (data->simulationInfo->realParameter[90] /* eleDrive.limTau.alpha PARAM */),"eleDrive.limTau.wMax * eleDrive.limTau.alpha",equationIndexes),data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */,"eleDrive.limTau.wMax",equationIndexes));
    }
    else
    {
      data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = ((modelica_integer) 3);

      data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = 0.0;
    }
  }

  data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */ = (-data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */);
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
eleDrive.toElePow.tau = smooth(0, if add.u2 > eleDrive.limTau.yH then eleDrive.limTau.yH else if add.u2 < eleDrive.limTau.yL then eleDrive.limTau.yL else add.u2)
*/
void Map_based_model_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_real tmp24;
  tmp21 = Greater(data->localData[0]->realVars[22] /* add.u2 variable */,data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */);
  tmp23 = (modelica_boolean)tmp21;
  if(tmp23)
  {
    tmp24 = data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */;
  }
  else
  {
    tmp22 = Less(data->localData[0]->realVars[22] /* add.u2 variable */,data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */);
    tmp24 = (tmp22?data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */:data->localData[0]->realVars[22] /* add.u2 variable */);
  }
  data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */ = tmp24;
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
eleDrive.toElePow.abs2.y = if noEvent(eleDrive.toElePow.tau >= 0.0) then eleDrive.toElePow.tau else -eleDrive.toElePow.tau
*/
void Map_based_model_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  modelica_boolean tmp25;
  tmp25 = GreaterEq(data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */,0.0);
  data->localData[0]->realVars[77] /* eleDrive.toElePow.abs2.y variable */ = (tmp25?data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */:(-data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */));
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
eleDrive.toElePow.effTable_.u1 = eleDrive.toElePow.normalizeTau.k * eleDrive.toElePow.abs2.y
*/
void Map_based_model_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->localData[0]->realVars[79] /* eleDrive.toElePow.effTable_.u1 variable */ = (data->simulationInfo->realParameter[119] /* eleDrive.toElePow.normalizeTau.k PARAM */) * (data->localData[0]->realVars[77] /* eleDrive.toElePow.abs2.y variable */);
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
eleDrive.toElePow.applyEta.eta = Modelica.Blocks.Tables.Internal.getTable2DValueNoDer2(eleDrive.toElePow.effTable_.tableID, eleDrive.toElePow.effTable_.u1, eleDrive.toElePow.effTable_.u2)
*/
void Map_based_model_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->localData[0]->realVars[78] /* eleDrive.toElePow.applyEta.eta variable */ = omc_Modelica_Blocks_Tables_Internal_getTable2DValueNoDer2(threadData, data->simulationInfo->extObjs[1], data->localData[0]->realVars[79] /* eleDrive.toElePow.effTable_.u1 variable */, data->localData[0]->realVars[80] /* eleDrive.toElePow.effTable_.u2 variable */);
  TRACE_POP
}
void Map_based_model_eqFunction_314(DATA*, threadData_t*);
void Map_based_model_eqFunction_315(DATA*, threadData_t*);
void Map_based_model_eqFunction_316(DATA*, threadData_t*);
void Map_based_model_eqFunction_317(DATA*, threadData_t*);
void Map_based_model_eqFunction_318(DATA*, threadData_t*);
void Map_based_model_eqFunction_319(DATA*, threadData_t*);
void Map_based_model_eqFunction_320(DATA*, threadData_t*);
void Map_based_model_eqFunction_321(DATA*, threadData_t*);
void Map_based_model_eqFunction_322(DATA*, threadData_t*);
void Map_based_model_eqFunction_323(DATA*, threadData_t*);
/*
equation index: 334
indexNonlinear: 3
type: NONLINEAR

vars: {add.u1}
eqns: {314, 315, 316, 317, 318, 319, 320, 321, 322, 323}
*/
void Map_based_model_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 334 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->localData[0]->realVars[21] /* add.u1 variable */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,334};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 334 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[21] /* add.u1 variable */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}
/*
equation index: 335
type: SIMPLE_ASSIGN
pP1.power = (-wheel.flangeT.f) * mass.v
*/
void Map_based_model_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->localData[0]->realVars[92] /* pP1.power variable */ = ((-data->localData[0]->realVars[96] /* wheel.flangeT.f variable */)) * (data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */);
  TRACE_POP
}
/*
equation index: 336
type: SIMPLE_ASSIGN
$DER.eleDrive.inertia.w = eleDrive.inertia.a
*/
void Map_based_model_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->localData[0]->realVars[16] /* der(eleDrive.inertia.w) DUMMY_DER */ = data->localData[0]->realVars[70] /* eleDrive.inertia.a variable */;
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
$DER.mass.v = dragF.a_relfric
*/
void Map_based_model_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->localData[0]->realVars[11] /* der(mass.v) STATE_DER */ = data->localData[0]->realVars[47] /* dragF.a_relfric variable */;
  TRACE_POP
}
void Map_based_model_eqFunction_338(DATA*, threadData_t*);
void Map_based_model_eqFunction_339(DATA*, threadData_t*);
void Map_based_model_eqFunction_340(DATA*, threadData_t*);
void Map_based_model_eqFunction_341(DATA*, threadData_t*);
/*
equation index: 346
indexNonlinear: 4
type: NONLINEAR

vars: {dragF.sa}
eqns: {338, 339, 340, 341}
*/
void Map_based_model_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 346 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->localData[0]->realVars[51] /* dragF.sa variable */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,346};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 346 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[51] /* dragF.sa variable */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}
/*
equation index: 347
type: SIMPLE_ASSIGN
dragF.mode = if (pre(dragF.mode) == 1 or pre(dragF.mode) == 2 or dragF.startForward) and mass.v > 0.0 then 1 else if (pre(dragF.mode) == -1 or pre(dragF.mode) == 2 or dragF.startBackward) and mass.v < 0.0 then -1 else 0
*/
void Map_based_model_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  modelica_boolean tmp2;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_integer tmp7;
  relationhysteresis(data, &tmp2, data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, 0.0, 4, Greater, GreaterZC);
  tmp6 = (modelica_boolean)((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 2))) || data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */) && tmp2);
  if(tmp6)
  {
    tmp7 = ((modelica_integer) 1);
  }
  else
  {
    relationhysteresis(data, &tmp5, data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, 0.0, 9, Less, LessZC);
    tmp7 = (((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1)) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 2))) || data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */) && tmp5)?((modelica_integer) -1):((modelica_integer) 0));
  }
  data->localData[0]->integerVars[0] /* dragF.mode DISCRETE */ = tmp7;
  TRACE_POP
}
/*
equation index: 348
type: SIMPLE_ASSIGN
$DER.$DER.pP1.flange_a.s = dragF.a_relfric
*/
void Map_based_model_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->localData[0]->realVars[13] /* der(der(pP1.flange_a.s)) DUMMY_DER */ = data->localData[0]->realVars[47] /* dragF.a_relfric variable */;
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
mass.a = dragF.a_relfric
*/
void Map_based_model_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->localData[0]->realVars[89] /* mass.a variable */ = data->localData[0]->realVars[47] /* dragF.a_relfric variable */;
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
$DER.dragF.v = dragF.a_relfric
*/
void Map_based_model_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->localData[0]->realVars[15] /* der(dragF.v) DUMMY_DER */ = data->localData[0]->realVars[47] /* dragF.a_relfric variable */;
  TRACE_POP
}
/*
equation index: 351
type: SIMPLE_ASSIGN
eleDrive.toElePow.PMOT.y = eleDrive.toElePow.tau * eleDrive.inertia.w
*/
void Map_based_model_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */ = (data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */) * (data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 352
type: ALGORITHM

  eleDrive.gain.u := $START.eleDrive.gain.u;
  if noEvent(eleDrive.toElePow.PMOT.y <= 0.0) then
    eleDrive.gain.u := eleDrive.toElePow.PMOT.y * eleDrive.toElePow.applyEta.eta;
  else
    eleDrive.gain.u := eleDrive.toElePow.PMOT.y / eleDrive.toElePow.applyEta.eta;
  end if;
*/
void Map_based_model_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  modelica_boolean tmp8;
  data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = data->modelData->realVarsData[69].attribute /* eleDrive.gain.u variable */.start;

  tmp8 = LessEq(data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */,0.0);
  if(tmp8)
  {
    data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = (data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */) * (data->localData[0]->realVars[78] /* eleDrive.toElePow.applyEta.eta variable */);
  }
  else
  {
    data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = DIVISION_SIM(data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */,data->localData[0]->realVars[78] /* eleDrive.toElePow.applyEta.eta variable */,"eleDrive.toElePow.applyEta.eta",equationIndexes);
  }
  TRACE_POP
}
/*
equation index: 353
type: SIMPLE_ASSIGN
eleDrive.constPDC.Pref = eleDrive.gain.k * eleDrive.gain.u
*/
void Map_based_model_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->localData[0]->realVars[60] /* eleDrive.constPDC.Pref variable */ = (data->simulationInfo->realParameter[88] /* eleDrive.gain.k PARAM */) * (data->localData[0]->realVars[69] /* eleDrive.gain.u variable */);
  TRACE_POP
}
/*
equation index: 354
type: SIMPLE_ASSIGN
eleDrive.constPDC.feedback1.y = eleDrive.constPDC.Pref - eleDrive.constPDC.feedback1.u2
*/
void Map_based_model_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->localData[0]->realVars[62] /* eleDrive.constPDC.feedback1.y variable */ = data->localData[0]->realVars[60] /* eleDrive.constPDC.Pref variable */ - data->localData[0]->realVars[61] /* eleDrive.constPDC.feedback1.u2 variable */;
  TRACE_POP
}
/*
equation index: 355
type: SIMPLE_ASSIGN
$DER.eleDrive.constPDC.integrator1.y = eleDrive.constPDC.integrator1.k * eleDrive.constPDC.feedback1.y
*/
void Map_based_model_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->localData[0]->realVars[9] /* der(eleDrive.constPDC.integrator1.y) STATE_DER */ = (data->simulationInfo->realParameter[72] /* eleDrive.constPDC.integrator1.k PARAM */) * (data->localData[0]->realVars[62] /* eleDrive.constPDC.feedback1.y variable */);
  TRACE_POP
}
/*
equation index: 356
type: SIMPLE_ASSIGN
eleDrive.powSensor.power = add.u1 * eleDrive.inertia.w
*/
void Map_based_model_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->localData[0]->realVars[74] /* eleDrive.powSensor.power variable */ = (data->localData[0]->realVars[21] /* add.u1 variable */) * (data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
$DER.eleDrive.wSensor.flange.phi = eleDrive.inertia.w
*/
void Map_based_model_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->localData[0]->realVars[17] /* der(eleDrive.wSensor.flange.phi) DUMMY_DER */ = data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */;
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
dragF.s = mass.s + 0.5 * mass.L
*/
void Map_based_model_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->localData[0]->realVars[49] /* dragF.s DUMMY_STATE */ = data->localData[0]->realVars[4] /* mass.s STATE(1,mass.v) */ + (0.5) * (data->simulationInfo->realParameter[127] /* mass.L PARAM */);
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
pP1.flange_a.s = mass.s + (-0.5) * mass.L
*/
void Map_based_model_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->localData[0]->realVars[91] /* pP1.flange_a.s DUMMY_STATE */ = data->localData[0]->realVars[4] /* mass.s STATE(1,mass.v) */ + (-0.5) * (data->simulationInfo->realParameter[127] /* mass.L PARAM */);
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
gear.phi_b = (pP1.flange_a.s - wheel.fixedT.s0) / wheel.radius + wheel.fixedR.phi0
*/
void Map_based_model_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->localData[0]->realVars[85] /* gear.phi_b DUMMY_STATE */ = DIVISION_SIM(data->localData[0]->realVars[91] /* pP1.flange_a.s DUMMY_STATE */ - data->simulationInfo->realParameter[133] /* wheel.fixedT.s0 PARAM */,data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius",equationIndexes) + data->simulationInfo->realParameter[131] /* wheel.fixedR.phi0 PARAM */;
  TRACE_POP
}
/*
equation index: 361
type: SIMPLE_ASSIGN
eleDrive.wSensor.flange.phi = gear.ratio * gear.phi_b
*/
void Map_based_model_eqFunction_361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,361};
  data->localData[0]->realVars[83] /* eleDrive.wSensor.flange.phi DUMMY_STATE */ = (data->simulationInfo->realParameter[126] /* gear.ratio PARAM */) * (data->localData[0]->realVars[85] /* gear.phi_b DUMMY_STATE */);
  TRACE_POP
}
/*
equation index: 381
type: ALGORITHM

  assert(eleDrive.wMax >= eleDrive.powMax / eleDrive.tauMax, "
****
PARAMETER VERIFICATION ERROR:
wMax must be not lower than powMax/tauMax
***
");
*/
void Map_based_model_eqFunction_381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,381};
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,82,"\n****\nPARAMETER VERIFICATION ERROR:\nwMax must be not lower than powMax/tauMax\n***\n");
  static int tmp11 = 0;
  {
    tmp9 = GreaterEq(data->simulationInfo->realParameter[125] /* eleDrive.wMax PARAM */,DIVISION_SIM(data->simulationInfo->realParameter[94] /* eleDrive.powMax PARAM */,data->simulationInfo->realParameter[95] /* eleDrive.tauMax PARAM */,"eleDrive.tauMax",equationIndexes));
    if(!tmp9)
    {
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",1828,13,1828,145,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.wMax >= eleDrive.powMax / eleDrive.tauMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp10)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 380
type: ALGORITHM

  assert(eleDrive.toElePow.effTable_.tableName <> "NoName", "tableOnFile = true and no table name given");
*/
void Map_based_model_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  static const MMC_DEFSTRINGLIT(tmp14,6,"NoName");
  static const MMC_DEFSTRINGLIT(tmp15,42,"tableOnFile = true and no table name given");
  static int tmp16 = 0;
  {
    if(!(!stringEqual(data->simulationInfo->stringParameter[7] /* eleDrive.toElePow.effTable_.tableName PARAM */, MMC_REFSTRINGLIT(tmp14))))
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Tables.mo",925,11,926,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.toElePow.effTable_.tableName <> \"NoName\"", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp15)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 379
type: ALGORITHM

  assert(cutNeg.uMax >= cutNeg.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(cutNeg.uMax, 6, 0, true) + ") < uMin (=" + String(cutNeg.uMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  modelica_boolean tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp19;
  static const MMC_DEFSTRINGLIT(tmp20,11,") < uMin (=");
  modelica_string tmp21;
  static int tmp22 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp17 = GreaterEq(data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */,data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */);
    if(!tmp17)
    {
      tmp19 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp18),tmp19);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp20));
      tmp21 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp21);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ncutNeg.uMax >= cutNeg.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 378
type: ALGORITHM

  assert(batt1.SOCInit <= batt1.SOCMax, "SOCInit(=" + String(batt1.SOCInit, 6, 0, true) + ") must be smaller than, or equal to SOCMax(=" + String(batt1.SOCMax, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,9,"SOCInit(=");
  modelica_string tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,44,") must be smaller than, or equal to SOCMax(=");
  modelica_string tmp27;
  static int tmp28 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp23 = LessEq(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */,data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */);
    if(!tmp23)
    {
      tmp25 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp26));
      tmp27 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp27);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",638,13,638,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCInit <= batt1.SOCMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 377
type: ALGORITHM

  assert(batt1.SOCInit >= batt1.SOCMin, "SOCInit(=" + String(batt1.SOCInit, 6, 0, true) + ") must be greater than, or equal to SOCMin(=" + String(batt1.SOCMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,377};
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,9,"SOCInit(=");
  modelica_string tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,44,") must be greater than, or equal to SOCMin(=");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp29 = GreaterEq(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */,data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */);
    if(!tmp29)
    {
      tmp31 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp30),tmp31);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp32));
      tmp33 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp33);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",637,13,637,141,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCInit >= batt1.SOCMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 376
type: ALGORITHM

  assert(batt1.SOCMin < batt1.SOCMax, "SOCMax(=" + String(batt1.SOCMax, 6, 0, true) + ") must be greater than SOCMin(=" + String(batt1.SOCMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,8,"SOCMax(=");
  modelica_string tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,31,") must be greater than SOCMin(=");
  modelica_string tmp39;
  static int tmp40 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp35 = Less(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */,data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */);
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp38));
      tmp39 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp39);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",636,13,636,124,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCMin < batt1.SOCMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 375
type: ALGORITHM

  assert(batt1.efficiency <= batt1.efficiencyMax, "Overall charging/discharging energy efficiency is too big with respect to the actual serial resistance (EfficiencyMax =" + String(batt1.efficiencyMax, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,119,"Overall charging/discharging energy efficiency is too big with respect to the actual serial resistance (EfficiencyMax =");
  modelica_string tmp43;
  static int tmp44 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  {
    tmp41 = LessEq(data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */,data->simulationInfo->realParameter[36] /* batt1.efficiencyMax PARAM */);
    if(!tmp41)
    {
      tmp43 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[36] /* batt1.efficiencyMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      tmpMeta[1] = stringAppend(tmpMeta[0],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",635,13,635,201,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.efficiency <= batt1.efficiencyMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 374
type: ALGORITHM

  assert(batt1.SOCMax <= 1.0, "SOCMax must be smaller than, or equal to 1");
*/
void Map_based_model_eqFunction_374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,374};
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,42,"SOCMax must be smaller than, or equal to 1");
  static int tmp47 = 0;
  {
    tmp45 = LessEq(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */,1.0);
    if(!tmp45)
    {
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",634,13,634,78,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCMax <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp46)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 373
type: ALGORITHM

  assert(batt1.SOCMin >= 0.0, "SOCMin must be greater than, or equal to 0");
*/
void Map_based_model_eqFunction_373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,373};
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,42,"SOCMin must be greater than, or equal to 0");
  static int tmp50 = 0;
  {
    tmp48 = GreaterEq(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */,0.0);
    if(!tmp48)
    {
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",633,13,633,78,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCMin >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp49)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 372
type: ALGORITHM

  assert(driver.limiter1.uMax >= driver.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(driver.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(driver.limiter1.uMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,372};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,11,") < uMin (=");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp51 = GreaterEq(data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */,data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */);
    if(!tmp51)
    {
      tmp53 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp54));
      tmp55 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp55);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.limiter1.uMax >= driver.limiter1.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 371
type: ALGORITHM

  assert(driver.limBrak.uMax >= driver.limBrak.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(driver.limBrak.uMax, 6, 0, true) + ") < uMin (=" + String(driver.limBrak.uMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,371};
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,11,") < uMin (=");
  modelica_string tmp61;
  static int tmp62 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp57 = GreaterEq(data->simulationInfo->realParameter[65] /* driver.limBrak.uMax PARAM */,data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */);
    if(!tmp57)
    {
      tmp59 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[65] /* driver.limBrak.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp60));
      tmp61 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp61);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.limBrak.uMax >= driver.limBrak.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 370
type: ALGORITHM

  assert(driver.limAcc.uMax >= driver.limAcc.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(driver.limAcc.uMax, 6, 0, true) + ") < uMin (=" + String(driver.limAcc.uMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,370};
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,11,") < uMin (=");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp63 = GreaterEq(data->simulationInfo->realParameter[63] /* driver.limAcc.uMax PARAM */,data->simulationInfo->realParameter[64] /* driver.limAcc.uMin PARAM */);
    if(!tmp63)
    {
      tmp65 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[63] /* driver.limAcc.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp66));
      tmp67 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[64] /* driver.limAcc.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp67);
      tmpMeta[3] = stringAppend(tmpMeta[2],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",19,9,20,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.limAcc.uMax >= driver.limAcc.uMin", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 369
type: ALGORITHM

  assert(driver.driveCyc.tableName <> "NoName", "tableOnFile = true and no table name given");
*/
void Map_based_model_eqFunction_369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,369};
  static const MMC_DEFSTRINGLIT(tmp71,6,"NoName");
  static const MMC_DEFSTRINGLIT(tmp72,42,"tableOnFile = true and no table name given");
  static int tmp73 = 0;
  {
    if(!(!stringEqual(data->simulationInfo->stringParameter[2] /* driver.driveCyc.tableName PARAM */, MMC_REFSTRINGLIT(tmp71))))
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Sources.mo",1636,7,1637,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.driveCyc.tableName <> \"NoName\"", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp72)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 368
type: ALGORITHM

  assert(1.0 + batt1.R0.alpha * (batt1.R0.T - batt1.R0.T_ref) >= 1e-15, "Temperature outside scope of model!");
*/
void Map_based_model_eqFunction_368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,368};
  modelica_boolean tmp74;
  static const MMC_DEFSTRINGLIT(tmp75,35,"Temperature outside scope of model!");
  static int tmp76 = 0;
  {
    tmp74 = GreaterEq(1.0 + (data->simulationInfo->realParameter[19] /* batt1.R0.alpha PARAM */) * (data->simulationInfo->realParameter[16] /* batt1.R0.T PARAM */ - data->simulationInfo->realParameter[18] /* batt1.R0.T_ref PARAM */),1e-15);
    if(!tmp74)
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Resistor.mo",15,3,16,43,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\n1.0 + batt1.R0.alpha * (batt1.R0.T - batt1.R0.T_ref) >= 1e-15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp75)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 367
type: ALGORITHM

  assert(1.0 + batt1.R1.alpha * (batt1.R1.T - batt1.R1.T_ref) >= 1e-15, "Temperature outside scope of model!");
*/
void Map_based_model_eqFunction_367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,367};
  modelica_boolean tmp77;
  static const MMC_DEFSTRINGLIT(tmp78,35,"Temperature outside scope of model!");
  static int tmp79 = 0;
  {
    tmp77 = GreaterEq(1.0 + (data->simulationInfo->realParameter[26] /* batt1.R1.alpha PARAM */) * (data->simulationInfo->realParameter[23] /* batt1.R1.T PARAM */ - data->simulationInfo->realParameter[25] /* batt1.R1.T_ref PARAM */),1e-15);
    if(!tmp77)
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Resistor.mo",15,3,16,43,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\n1.0 + batt1.R1.alpha * (batt1.R1.T - batt1.R1.T_ref) >= 1e-15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp78)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 366
type: ALGORITHM

  assert(1.0 + eleDrive.constPDC.varCond.alpha * (eleDrive.constPDC.varCond.T - eleDrive.constPDC.varCond.T_ref) >= 1e-15, "Temperature outside scope of model!");
*/
void Map_based_model_eqFunction_366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,366};
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,35,"Temperature outside scope of model!");
  static int tmp82 = 0;
  {
    tmp80 = GreaterEq(1.0 + (data->simulationInfo->realParameter[78] /* eleDrive.constPDC.varCond.alpha PARAM */) * (data->simulationInfo->realParameter[75] /* eleDrive.constPDC.varCond.T PARAM */ - data->simulationInfo->realParameter[77] /* eleDrive.constPDC.varCond.T_ref PARAM */),1e-15);
    if(!tmp80)
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/VariableConductor.mo",17,3,18,43,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\n1.0 + eleDrive.constPDC.varCond.alpha * (eleDrive.constPDC.varCond.T - eleDrive.constPDC.varCond.T_ref) >= 1e-15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp81)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 365
type: ALGORITHM

  assert(eleDrive.limTau.yH >= eleDrive.limTau.yL, "Input signals are not consistent: limit1 < limit2");
*/
void Map_based_model_eqFunction_365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,365};
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,49,"Input signals are not consistent: limit1 < limit2");
  static int tmp85 = 0;
  {
    tmp83 = GreaterEq(data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */,data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */);
    if(!tmp83)
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Nonlinear.mo",108,5,108,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.limTau.yH >= eleDrive.limTau.yL", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp84)));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 364
type: ALGORITHM

  assert(batt1.SOCMin <= batt1.SOC, "Battery is fully discharged: State of charge reached minimum limit (=" + String(batt1.SOCMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,364};
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,69,"Battery is fully discharged: State of charge reached minimum limit (=");
  modelica_string tmp88;
  static int tmp89 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  {
    tmp86 = LessEq(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */,data->localData[0]->realVars[36] /* batt1.SOC variable */);
    if(!tmp86)
    {
      tmp88 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      tmpMeta[1] = stringAppend(tmpMeta[0],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",650,13,650,130,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCMin <= batt1.SOC", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 363
type: ALGORITHM

  assert(batt1.SOC <= batt1.SOCMax, "Battery is fully charged: State of charge reached maximum limit (=" + String(batt1.SOCMax, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,363};
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,66,"Battery is fully charged: State of charge reached maximum limit (=");
  modelica_string tmp92;
  static int tmp93 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  {
    tmp90 = LessEq(data->localData[0]->realVars[36] /* batt1.SOC variable */,data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */);
    if(!tmp90)
    {
      tmp92 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      tmpMeta[1] = stringAppend(tmpMeta[0],(modelica_string) mmc_strings_len1[41]);
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",649,13,649,127,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOC <= batt1.SOCMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[1]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 362
type: ALGORITHM

  assert(abs((-eleDrive.constPDC.varCond.i) / (*Real*)(batt1.np)) < batt1.ICellMax, "Battery cell current i=" + String(abs((-eleDrive.constPDC.varCond.i) / (*Real*)(batt1.np)), 6, 0, true) + "
 exceeds max admissable ICellMax (=" + String(batt1.ICellMax, 6, 0, true) + "A)");
*/
void Map_based_model_eqFunction_362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,362};
  modelica_boolean tmp94;
  static const MMC_DEFSTRINGLIT(tmp95,23,"Battery cell current i=");
  modelica_string tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,36,"\n exceeds max admissable ICellMax (=");
  modelica_string tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,2,"A)");
  static int tmp100 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp94 = Less(fabs(DIVISION_SIM((-data->localData[0]->realVars[68] /* eleDrive.constPDC.varCond.i variable */),((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */),"/*Real*/(batt1.np)",equationIndexes)),data->simulationInfo->realParameter[12] /* batt1.ICellMax PARAM */);
    if(!tmp94)
    {
      tmp96 = modelica_real_to_modelica_string(fabs(DIVISION_SIM((-data->localData[0]->realVars[68] /* eleDrive.constPDC.varCond.i variable */),((modelica_real)data->simulationInfo->integerParameter[0] /* batt1.np PARAM */),"/*Real*/(batt1.np)",equationIndexes)), ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp95),tmp96);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp97));
      tmp98 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[12] /* batt1.ICellMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp98);
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp99));
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",646,13,646,164,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nabs((-eleDrive.constPDC.varCond.i) / /*Real*/(batt1.np)) < batt1.ICellMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[3]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int Map_based_model_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  Map_based_model_functionLocalKnownVars(data, threadData);
  Map_based_model_eqFunction_261(data, threadData);

  Map_based_model_eqFunction_262(data, threadData);

  Map_based_model_eqFunction_263(data, threadData);

  Map_based_model_eqFunction_264(data, threadData);

  Map_based_model_eqFunction_265(data, threadData);

  Map_based_model_eqFunction_266(data, threadData);

  Map_based_model_eqFunction_267(data, threadData);

  Map_based_model_eqFunction_268(data, threadData);

  Map_based_model_eqFunction_269(data, threadData);

  Map_based_model_eqFunction_270(data, threadData);

  Map_based_model_eqFunction_271(data, threadData);

  Map_based_model_eqFunction_272(data, threadData);

  Map_based_model_eqFunction_273(data, threadData);

  Map_based_model_eqFunction_274(data, threadData);

  Map_based_model_eqFunction_275(data, threadData);

  Map_based_model_eqFunction_276(data, threadData);

  Map_based_model_eqFunction_277(data, threadData);

  Map_based_model_eqFunction_278(data, threadData);

  Map_based_model_eqFunction_279(data, threadData);

  Map_based_model_eqFunction_280(data, threadData);

  Map_based_model_eqFunction_281(data, threadData);

  Map_based_model_eqFunction_282(data, threadData);

  Map_based_model_eqFunction_283(data, threadData);

  Map_based_model_eqFunction_284(data, threadData);

  Map_based_model_eqFunction_285(data, threadData);

  Map_based_model_eqFunction_286(data, threadData);

  Map_based_model_eqFunction_287(data, threadData);

  Map_based_model_eqFunction_288(data, threadData);

  Map_based_model_eqFunction_289(data, threadData);

  Map_based_model_eqFunction_290(data, threadData);

  Map_based_model_eqFunction_291(data, threadData);

  Map_based_model_eqFunction_292(data, threadData);

  Map_based_model_eqFunction_293(data, threadData);

  Map_based_model_eqFunction_294(data, threadData);

  Map_based_model_eqFunction_295(data, threadData);

  Map_based_model_eqFunction_296(data, threadData);

  Map_based_model_eqFunction_297(data, threadData);

  Map_based_model_eqFunction_298(data, threadData);

  Map_based_model_eqFunction_299(data, threadData);

  Map_based_model_eqFunction_300(data, threadData);

  Map_based_model_eqFunction_301(data, threadData);

  Map_based_model_eqFunction_302(data, threadData);

  Map_based_model_eqFunction_303(data, threadData);

  Map_based_model_eqFunction_304(data, threadData);

  Map_based_model_eqFunction_305(data, threadData);

  Map_based_model_eqFunction_306(data, threadData);

  Map_based_model_eqFunction_307(data, threadData);

  Map_based_model_eqFunction_308(data, threadData);

  Map_based_model_eqFunction_309(data, threadData);

  Map_based_model_eqFunction_310(data, threadData);

  Map_based_model_eqFunction_311(data, threadData);

  Map_based_model_eqFunction_312(data, threadData);

  Map_based_model_eqFunction_313(data, threadData);

  Map_based_model_eqFunction_334(data, threadData);

  Map_based_model_eqFunction_335(data, threadData);

  Map_based_model_eqFunction_336(data, threadData);

  Map_based_model_eqFunction_337(data, threadData);

  Map_based_model_eqFunction_346(data, threadData);

  Map_based_model_eqFunction_347(data, threadData);

  Map_based_model_eqFunction_348(data, threadData);

  Map_based_model_eqFunction_349(data, threadData);

  Map_based_model_eqFunction_350(data, threadData);

  Map_based_model_eqFunction_351(data, threadData);

  Map_based_model_eqFunction_352(data, threadData);

  Map_based_model_eqFunction_353(data, threadData);

  Map_based_model_eqFunction_354(data, threadData);

  Map_based_model_eqFunction_355(data, threadData);

  Map_based_model_eqFunction_356(data, threadData);

  Map_based_model_eqFunction_357(data, threadData);

  Map_based_model_eqFunction_358(data, threadData);

  Map_based_model_eqFunction_359(data, threadData);

  Map_based_model_eqFunction_360(data, threadData);

  Map_based_model_eqFunction_361(data, threadData);

  Map_based_model_eqFunction_381(data, threadData);

  Map_based_model_eqFunction_380(data, threadData);

  Map_based_model_eqFunction_379(data, threadData);

  Map_based_model_eqFunction_378(data, threadData);

  Map_based_model_eqFunction_377(data, threadData);

  Map_based_model_eqFunction_376(data, threadData);

  Map_based_model_eqFunction_375(data, threadData);

  Map_based_model_eqFunction_374(data, threadData);

  Map_based_model_eqFunction_373(data, threadData);

  Map_based_model_eqFunction_372(data, threadData);

  Map_based_model_eqFunction_371(data, threadData);

  Map_based_model_eqFunction_370(data, threadData);

  Map_based_model_eqFunction_369(data, threadData);

  Map_based_model_eqFunction_368(data, threadData);

  Map_based_model_eqFunction_367(data, threadData);

  Map_based_model_eqFunction_366(data, threadData);

  Map_based_model_eqFunction_365(data, threadData);

  Map_based_model_eqFunction_364(data, threadData);

  Map_based_model_eqFunction_363(data, threadData);

  Map_based_model_eqFunction_362(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int Map_based_model_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void Map_based_model_eqFunction_265(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_266(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_267(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_269(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_270(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_271(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_272(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_273(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_275(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_276(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_277(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_278(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_285(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_287(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_288(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_289(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_291(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_292(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_294(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_296(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_297(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_298(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_299(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_300(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_303(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_305(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_306(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_307(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_308(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_309(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_310(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_311(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_312(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_313(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_334(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_337(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_351(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_352(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_353(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_354(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_355(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
  Map_based_model_eqFunction_265(data, threadData);
  threadData->lastEquationSolved = 265;
  Map_based_model_eqFunction_266(data, threadData);
  threadData->lastEquationSolved = 266;
  Map_based_model_eqFunction_267(data, threadData);
  threadData->lastEquationSolved = 267;
  Map_based_model_eqFunction_269(data, threadData);
  threadData->lastEquationSolved = 269;
  Map_based_model_eqFunction_270(data, threadData);
  threadData->lastEquationSolved = 270;
  Map_based_model_eqFunction_271(data, threadData);
  threadData->lastEquationSolved = 271;
  Map_based_model_eqFunction_272(data, threadData);
  threadData->lastEquationSolved = 272;
  Map_based_model_eqFunction_273(data, threadData);
  threadData->lastEquationSolved = 273;
  Map_based_model_eqFunction_275(data, threadData);
  threadData->lastEquationSolved = 275;
  Map_based_model_eqFunction_276(data, threadData);
  threadData->lastEquationSolved = 276;
  Map_based_model_eqFunction_277(data, threadData);
  threadData->lastEquationSolved = 277;
  Map_based_model_eqFunction_278(data, threadData);
  threadData->lastEquationSolved = 278;
  Map_based_model_eqFunction_285(data, threadData);
  threadData->lastEquationSolved = 285;
  Map_based_model_eqFunction_287(data, threadData);
  threadData->lastEquationSolved = 287;
  Map_based_model_eqFunction_288(data, threadData);
  threadData->lastEquationSolved = 288;
  Map_based_model_eqFunction_289(data, threadData);
  threadData->lastEquationSolved = 289;
  Map_based_model_eqFunction_291(data, threadData);
  threadData->lastEquationSolved = 291;
  Map_based_model_eqFunction_292(data, threadData);
  threadData->lastEquationSolved = 292;
  Map_based_model_eqFunction_294(data, threadData);
  threadData->lastEquationSolved = 294;
  Map_based_model_eqFunction_296(data, threadData);
  threadData->lastEquationSolved = 296;
  Map_based_model_eqFunction_297(data, threadData);
  threadData->lastEquationSolved = 297;
  Map_based_model_eqFunction_298(data, threadData);
  threadData->lastEquationSolved = 298;
  Map_based_model_eqFunction_299(data, threadData);
  threadData->lastEquationSolved = 299;
  Map_based_model_eqFunction_300(data, threadData);
  threadData->lastEquationSolved = 300;
  Map_based_model_eqFunction_303(data, threadData);
  threadData->lastEquationSolved = 303;
  Map_based_model_eqFunction_305(data, threadData);
  threadData->lastEquationSolved = 305;
  Map_based_model_eqFunction_306(data, threadData);
  threadData->lastEquationSolved = 306;
  Map_based_model_eqFunction_307(data, threadData);
  threadData->lastEquationSolved = 307;
  Map_based_model_eqFunction_308(data, threadData);
  threadData->lastEquationSolved = 308;
  Map_based_model_eqFunction_309(data, threadData);
  threadData->lastEquationSolved = 309;
  Map_based_model_eqFunction_310(data, threadData);
  threadData->lastEquationSolved = 310;
  Map_based_model_eqFunction_311(data, threadData);
  threadData->lastEquationSolved = 311;
  Map_based_model_eqFunction_312(data, threadData);
  threadData->lastEquationSolved = 312;
  Map_based_model_eqFunction_313(data, threadData);
  threadData->lastEquationSolved = 313;
  Map_based_model_eqFunction_334(data, threadData);
  threadData->lastEquationSolved = 334;
  Map_based_model_eqFunction_337(data, threadData);
  threadData->lastEquationSolved = 337;
  Map_based_model_eqFunction_351(data, threadData);
  threadData->lastEquationSolved = 351;
  Map_based_model_eqFunction_352(data, threadData);
  threadData->lastEquationSolved = 352;
  Map_based_model_eqFunction_353(data, threadData);
  threadData->lastEquationSolved = 353;
  Map_based_model_eqFunction_354(data, threadData);
  threadData->lastEquationSolved = 354;
  Map_based_model_eqFunction_355(data, threadData);
  threadData->lastEquationSolved = 355;
}

int Map_based_model_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  Map_based_model_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "Map_based_model_12jac.h"
#include "Map_based_model_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks Map_based_model_callback = {
   (int (*)(DATA *, threadData_t *, void *)) Map_based_model_performSimulation,    /* performSimulation */
   (int (*)(DATA *, threadData_t *, void *)) Map_based_model_performQSSSimulation,    /* performQSSSimulation */
   Map_based_model_updateContinuousSystem,    /* updateContinuousSystem */
   Map_based_model_callExternalObjectDestructors,    /* callExternalObjectDestructors */
   Map_based_model_initialNonLinearSystem,    /* initialNonLinearSystem */
   Map_based_model_initialLinearSystem,    /* initialLinearSystem */
   NULL,    /* initialMixedSystem */
   #if !defined(OMC_NO_STATESELECTION)
   Map_based_model_initializeStateSets,
   #else
   NULL,
   #endif    /* initializeStateSets */
   Map_based_model_initializeDAEmodeData,
   Map_based_model_functionODE,
   Map_based_model_functionAlgebraics,
   Map_based_model_functionDAE,
   Map_based_model_functionLocalKnownVars,
   Map_based_model_input_function,
   Map_based_model_input_function_init,
   Map_based_model_input_function_updateStartValues,
   Map_based_model_data_function,
   Map_based_model_output_function,
   Map_based_model_setc_function,
   Map_based_model_function_storeDelayed,
   Map_based_model_function_storeSpatialDistribution,
   Map_based_model_function_initSpatialDistribution,
   Map_based_model_updateBoundVariableAttributes,
   Map_based_model_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   Map_based_model_functionInitialEquations_lambda0,
   Map_based_model_functionRemovedInitialEquations,
   Map_based_model_updateBoundParameters,
   Map_based_model_checkForAsserts,
   Map_based_model_function_ZeroCrossingsEquations,
   Map_based_model_function_ZeroCrossings,
   Map_based_model_function_updateRelations,
   Map_based_model_zeroCrossingDescription,
   Map_based_model_relationDescription,
   Map_based_model_function_initSample,
   Map_based_model_INDEX_JAC_A,
   Map_based_model_INDEX_JAC_B,
   Map_based_model_INDEX_JAC_C,
   Map_based_model_INDEX_JAC_D,
   Map_based_model_INDEX_JAC_F,
   Map_based_model_initialAnalyticJacobianA,
   Map_based_model_initialAnalyticJacobianB,
   Map_based_model_initialAnalyticJacobianC,
   Map_based_model_initialAnalyticJacobianD,
   Map_based_model_initialAnalyticJacobianF,
   Map_based_model_functionJacA_column,
   Map_based_model_functionJacB_column,
   Map_based_model_functionJacC_column,
   Map_based_model_functionJacD_column,
   Map_based_model_functionJacF_column,
   Map_based_model_linear_model_frame,
   Map_based_model_linear_model_datarecovery_frame,
   Map_based_model_mayer,
   Map_based_model_lagrange,
   Map_based_model_pickUpBoundsForInputsInOptimization,
   Map_based_model_setInputData,
   Map_based_model_getTimeGrid,
   Map_based_model_symbolicInlineSystem,
   Map_based_model_function_initSynchronous,
   Map_based_model_function_updateSynchronous,
   Map_based_model_function_equationsSynchronous,
   Map_based_model_inputNames,
   Map_based_model_dataReconciliationInputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,55,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,70,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/ModelicaServices 4.0.0"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,78,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "Project_ev"
#define _OMC_LIT_RESOURCE_3_dir_data "C:/Users/SH REHEMAN/Desktop"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,10,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,27,_OMC_LIT_RESOURCE_3_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,8,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir)}};
void Map_based_model_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &Map_based_model_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "Project_ev.Electrcal_Vehicle_DEV.Map_based_model";
  data->modelData->modelFilePrefix = "Map_based_model";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "C:/Users/SH REHEMAN/Desktop";
  data->modelData->modelGUID = "{3c01fcd8-1a21-486d-b39f-6903e4ff728f}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "Map_based_model_init.c"
    ;
  static const char contents_info[] =
    #include "Map_based_model_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "Map_based_model_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "Map_based_model_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  data->modelData->runTestsuite = 0;
  
  data->modelData->nStates = 6;
  data->modelData->nVariablesReal = 99;
  data->modelData->nDiscreteReal = 2;
  data->modelData->nVariablesInteger = 2;
  data->modelData->nVariablesBoolean = 6;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 139;
  data->modelData->nParametersInteger = 18;
  data->modelData->nParametersBoolean = 27;
  data->modelData->nParametersString = 9;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 167;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 0;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 14;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 12;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 2;
  
  data->modelData->modelDataXml.fileName = "Map_based_model_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 14;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 582;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 1;
  data->modelData->nNonLinearSystems = 5;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 11;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSpatialDistributions = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
  data->modelData->linearizationDumpLanguage =
  OMC_LINEARIZE_DUMP_LANGUAGE_MODELICA;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    Map_based_model_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


