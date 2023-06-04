/* Initialization */
#include "Map_based_model_model.h"
#include "Map_based_model_11mix.h"
#include "Map_based_model_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void Map_based_model_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
eleDrive.constPDC.integrator1.local_reset = false
*/
void Map_based_model_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->booleanVars[5] /* eleDrive.constPDC.integrator1.local_reset DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
eleDrive.constPDC.integrator1.local_set = 0.0
*/
void Map_based_model_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[63] /* eleDrive.constPDC.integrator1.local_set variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
eleDrive.torque.phi_support = 0.0
*/
void Map_based_model_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[82] /* eleDrive.torque.phi_support variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
batt1.C1.v = $START.batt1.C1.v
*/
void Map_based_model_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[0] /* batt1.C1.v STATE(1) */ = data->modelData->realVarsData[0].attribute /* batt1.C1.v STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
mass.v = $START.mass.v
*/
void Map_based_model_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */ = data->modelData->realVarsData[5].attribute /* mass.v STATE(1,dragF.a_relfric) */.start;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
batt1.R1.R_actual = batt1.R1.R * (1.0 + batt1.R1.alpha * (batt1.R1.T - batt1.R1.T_ref))
*/
void Map_based_model_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[33] /* batt1.R1.R_actual variable */ = (data->simulationInfo->realParameter[22] /* batt1.R1.R PARAM */) * (1.0 + (data->simulationInfo->realParameter[26] /* batt1.R1.alpha PARAM */) * (data->simulationInfo->realParameter[23] /* batt1.R1.T PARAM */ - data->simulationInfo->realParameter[25] /* batt1.R1.T_ref PARAM */));
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
batt1.R0.R_actual = batt1.R0.R * (1.0 + batt1.R0.alpha * (batt1.R0.T - batt1.R0.T_ref))
*/
void Map_based_model_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[29] /* batt1.R0.R_actual variable */ = (data->simulationInfo->realParameter[15] /* batt1.R0.R PARAM */) * (1.0 + (data->simulationInfo->realParameter[19] /* batt1.R0.alpha PARAM */) * (data->simulationInfo->realParameter[16] /* batt1.R0.T PARAM */ - data->simulationInfo->realParameter[18] /* batt1.R0.T_ref PARAM */));
  TRACE_POP
}
extern void Map_based_model_eqFunction_265(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_266(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_261(DATA *data, threadData_t *threadData);


/*
equation index: 11
type: SIMPLE_ASSIGN
batt1.R1.i = batt1.R1.v / batt1.R1.R_actual
*/
void Map_based_model_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[34] /* batt1.R1.i variable */ = DIVISION_SIM(data->localData[0]->realVars[35] /* batt1.R1.v variable */,data->localData[0]->realVars[33] /* batt1.R1.R_actual variable */,"batt1.R1.R_actual",equationIndexes);
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
batt1.R1.LossPower = batt1.R1.v * batt1.R1.i
*/
void Map_based_model_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[32] /* batt1.R1.LossPower variable */ = (data->localData[0]->realVars[35] /* batt1.R1.v variable */) * (data->localData[0]->realVars[34] /* batt1.R1.i variable */);
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
driver.driveCyc.nextTimeEventScaled = Modelica.Blocks.Tables.Internal.getNextTimeEvent(driver.driveCyc.tableID, driver.driveCyc.timeScaled)
*/
void Map_based_model_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */ = omc_Modelica_Blocks_Tables_Internal_getNextTimeEvent(threadData, data->simulationInfo->extObjs[0], data->localData[0]->realVars[55] /* driver.driveCyc.timeScaled variable */);
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
driver.driveCyc.nextTimeEvent = if driver.driveCyc.nextTimeEventScaled < 9.999999999999999e+59 then driver.driveCyc.nextTimeEventScaled else 9.999999999999999e+59
*/
void Map_based_model_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  modelica_boolean tmp0;
  tmp0 = Less(data->localData[0]->realVars[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */,9.999999999999999e+59);
  data->localData[0]->realVars[97] /* driver.driveCyc.nextTimeEvent DISCRETE */ = (tmp0?data->localData[0]->realVars[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */:9.999999999999999e+59);
  TRACE_POP
}
extern void Map_based_model_eqFunction_263(DATA *data, threadData_t *threadData);


/*
equation index: 16
type: SIMPLE_ASSIGN
dragF.f = dragF.B * dragF.v ^ 2.0
*/
void Map_based_model_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  modelica_real tmp1;
  tmp1 = data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */;
  data->localData[0]->realVars[48] /* dragF.f variable */ = (data->simulationInfo->realParameter[43] /* dragF.B PARAM */) * ((tmp1 * tmp1));
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
dragF.Sign = if dragF.v > 0.0 then 1.0 else -1.0
*/
void Map_based_model_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  modelica_boolean tmp2;
  tmp2 = Greater(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,0.0);
  data->localData[0]->realVars[46] /* dragF.Sign variable */ = (tmp2?1.0:-1.0);
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
$DER.dragF.s = dragF.v
*/
void Map_based_model_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[14] /* der(dragF.s) DUMMY_DER */ = data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
pP2.power = dragF.f * dragF.v
*/
void Map_based_model_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[93] /* pP2.power variable */ = (data->localData[0]->realVars[48] /* dragF.f variable */) * (data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */);
  TRACE_POP
}
extern void Map_based_model_eqFunction_264(DATA *data, threadData_t *threadData);


/*
equation index: 21
type: SIMPLE_ASSIGN
$DER.gear.phi_b = $DER.pP1.flange_a.s / wheel.radius
*/
void Map_based_model_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[18] /* der(gear.phi_b) DUMMY_DER */ = DIVISION_SIM(data->localData[0]->realVars[19] /* der(pP1.flange_a.s) DUMMY_DER */,data->simulationInfo->realParameter[138] /* wheel.radius PARAM */,"wheel.radius",equationIndexes);
  TRACE_POP
}
extern void Map_based_model_eqFunction_306(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_307(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_308(DATA *data, threadData_t *threadData);


/*
equation index: 25
type: ALGORITHM

  eleDrive.limTau.yL := $START.eleDrive.limTau.yL;
  eleDrive.limTau.yH := $START.eleDrive.limTau.yH;
  eleDrive.limTau.state := $START.eleDrive.limTau.state;
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
void Map_based_model_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */ = data->modelData->realVarsData[73].attribute /* eleDrive.limTau.yL variable */.start;

  data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = data->modelData->realVarsData[72].attribute /* eleDrive.limTau.yH variable */.start;

  data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = data->modelData->integerVarsData[1].attribute /* eleDrive.limTau.state DISCRETE */.start;

  tmp3 = Less(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,DIVISION_SIM(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */,"eleDrive.limTau.tauMax",equationIndexes));
  if(tmp3)
  {
    data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = ((modelica_integer) 0);

    data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */;
  }
  else
  {
    data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = ((modelica_integer) 1);

    data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = DIVISION_SIM(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,"eleDrive.inertia.w",equationIndexes);
  }

  tmp4 = Greater(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */);
  if(tmp4)
  {
    tmp5 = Less(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,(1.0 + data->simulationInfo->realParameter[90] /* eleDrive.limTau.alpha PARAM */) * (data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */));
    if(tmp5)
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
extern void Map_based_model_eqFunction_357(DATA *data, threadData_t *threadData);


/*
equation index: 27
type: SIMPLE_ASSIGN
$PRE.driver.driveCyc.nextTimeEventScaled = 0.0
*/
void Map_based_model_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realVarsPre[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
driver.driveCyc.y[1] = driver.driveCyc.p_offset[1] + Modelica.Blocks.Tables.Internal.getTimeTableValueNoDer2(driver.driveCyc.tableID, 1, driver.driveCyc.timeScaled, driver.driveCyc.nextTimeEventScaled, $PRE.driver.driveCyc.nextTimeEventScaled)
*/
void Map_based_model_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[56] /* driver.driveCyc.y[1] variable */ = data->simulationInfo->realParameter[53] /* driver.driveCyc.p_offset[1] PARAM */ + omc_Modelica_Blocks_Tables_Internal_getTimeTableValueNoDer2(threadData, data->simulationInfo->extObjs[0], ((modelica_integer) 1), data->localData[0]->realVars[55] /* driver.driveCyc.timeScaled variable */, data->localData[0]->realVars[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */, data->simulationInfo->realVarsPre[98] /* driver.driveCyc.nextTimeEventScaled DISCRETE */);
  TRACE_POP
}
extern void Map_based_model_eqFunction_298(DATA *data, threadData_t *threadData);


/*
equation index: 30
type: SIMPLE_ASSIGN
driver.feedback.y = driver.feedback.u1 - dragF.v
*/
void Map_based_model_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[58] /* driver.feedback.y variable */ = data->localData[0]->realVars[57] /* driver.feedback.u1 variable */ - data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */;
  TRACE_POP
}
extern void Map_based_model_eqFunction_300(DATA *data, threadData_t *threadData);


/*
equation index: 32
type: SIMPLE_ASSIGN
add.u2 = homotopy(smooth(0, if driver.gain.y > driver.limiter1.uMax then driver.limiter1.uMax else if driver.gain.y < driver.limiter1.uMin then driver.limiter1.uMin else driver.gain.y), driver.gain.y)
*/
void Map_based_model_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  modelica_boolean tmp6;
  modelica_boolean tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp6 = Greater(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */);
  tmp8 = (modelica_boolean)tmp6;
  if(tmp8)
  {
    tmp9 = data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */;
  }
  else
  {
    tmp7 = Less(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */);
    tmp9 = (tmp7?data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */:data->localData[0]->realVars[59] /* driver.gain.y variable */);
  }
  data->localData[0]->realVars[22] /* add.u2 variable */ = homotopy(tmp9, data->localData[0]->realVars[59] /* driver.gain.y variable */);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
eleDrive.toElePow.tau = homotopy(smooth(0, if add.u2 > eleDrive.limTau.yH then eleDrive.limTau.yH else if add.u2 < eleDrive.limTau.yL then eleDrive.limTau.yL else add.u2), add.u2)
*/
void Map_based_model_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  modelica_boolean tmp10;
  modelica_boolean tmp11;
  modelica_boolean tmp12;
  modelica_real tmp13;
  tmp10 = Greater(data->localData[0]->realVars[22] /* add.u2 variable */,data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */);
  tmp12 = (modelica_boolean)tmp10;
  if(tmp12)
  {
    tmp13 = data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */;
  }
  else
  {
    tmp11 = Less(data->localData[0]->realVars[22] /* add.u2 variable */,data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */);
    tmp13 = (tmp11?data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */:data->localData[0]->realVars[22] /* add.u2 variable */);
  }
  data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */ = homotopy(tmp13, data->localData[0]->realVars[22] /* add.u2 variable */);
  TRACE_POP
}
extern void Map_based_model_eqFunction_351(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_311(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_312(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_313(DATA *data, threadData_t *threadData);


/*
equation index: 38
type: ALGORITHM

  eleDrive.gain.u := $START.eleDrive.gain.u;
  if noEvent(eleDrive.toElePow.PMOT.y <= 0.0) then
    eleDrive.gain.u := eleDrive.toElePow.PMOT.y * eleDrive.toElePow.applyEta.eta;
  else
    eleDrive.gain.u := eleDrive.toElePow.PMOT.y / eleDrive.toElePow.applyEta.eta;
  end if;
*/
void Map_based_model_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  modelica_boolean tmp14;
  data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = data->modelData->realVarsData[69].attribute /* eleDrive.gain.u variable */.start;

  tmp14 = LessEq(data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */,0.0);
  if(tmp14)
  {
    data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = (data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */) * (data->localData[0]->realVars[78] /* eleDrive.toElePow.applyEta.eta variable */);
  }
  else
  {
    data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = DIVISION_SIM(data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */,data->localData[0]->realVars[78] /* eleDrive.toElePow.applyEta.eta variable */,"eleDrive.toElePow.applyEta.eta",equationIndexes);
  }
  TRACE_POP
}
extern void Map_based_model_eqFunction_353(DATA *data, threadData_t *threadData);


void Map_based_model_eqFunction_40(DATA*, threadData_t*);
void Map_based_model_eqFunction_41(DATA*, threadData_t*);
void Map_based_model_eqFunction_42(DATA*, threadData_t*);
void Map_based_model_eqFunction_43(DATA*, threadData_t*);
void Map_based_model_eqFunction_44(DATA*, threadData_t*);
void Map_based_model_eqFunction_45(DATA*, threadData_t*);
void Map_based_model_eqFunction_46(DATA*, threadData_t*);
void Map_based_model_eqFunction_47(DATA*, threadData_t*);
void Map_based_model_eqFunction_48(DATA*, threadData_t*);
void Map_based_model_eqFunction_49(DATA*, threadData_t*);
void Map_based_model_eqFunction_50(DATA*, threadData_t*);
/*
equation index: 61
indexNonlinear: 0
type: NONLINEAR

vars: {mass.a}
eqns: {40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}
*/
void Map_based_model_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 61 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->localData[0]->realVars[89] /* mass.a variable */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,61};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 61 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[89] /* mass.a variable */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
dragF.a_relfric = mass.a
*/
void Map_based_model_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->localData[0]->realVars[47] /* dragF.a_relfric variable */ = data->localData[0]->realVars[89] /* mass.a variable */;
  TRACE_POP
}
extern void Map_based_model_eqFunction_350(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_356(DATA *data, threadData_t *threadData);


/*
equation index: 65
type: SIMPLE_ASSIGN
pP1.power = (-wheel.flangeT.f) * $DER.pP1.flange_a.s
*/
void Map_based_model_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->localData[0]->realVars[92] /* pP1.power variable */ = ((-data->localData[0]->realVars[96] /* wheel.flangeT.f variable */)) * (data->localData[0]->realVars[19] /* der(pP1.flange_a.s) DUMMY_DER */);
  TRACE_POP
}
extern void Map_based_model_eqFunction_336(DATA *data, threadData_t *threadData);


/*
equation index: 67
type: SIMPLE_ASSIGN
$DER.mass.v = mass.a
*/
void Map_based_model_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->localData[0]->realVars[11] /* der(mass.v) STATE_DER */ = data->localData[0]->realVars[89] /* mass.a variable */;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
driver.brakeTau = homotopy(smooth(0, if driver.gain.y > driver.limBrak.uMax then driver.limBrak.uMax else if driver.gain.y < driver.limBrak.uMin then driver.limBrak.uMin else driver.gain.y), driver.gain.y)
*/
void Map_based_model_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  modelica_real tmp3;
  tmp0 = Greater(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[65] /* driver.limBrak.uMax PARAM */);
  tmp2 = (modelica_boolean)tmp0;
  if(tmp2)
  {
    tmp3 = data->simulationInfo->realParameter[65] /* driver.limBrak.uMax PARAM */;
  }
  else
  {
    tmp1 = Less(data->localData[0]->realVars[59] /* driver.gain.y variable */,data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */);
    tmp3 = (tmp1?data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */:data->localData[0]->realVars[59] /* driver.gain.y variable */);
  }
  data->localData[0]->realVars[54] /* driver.brakeTau variable */ = homotopy(tmp3, data->localData[0]->realVars[59] /* driver.gain.y variable */);
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
driver.accelTau = homotopy(smooth(0, if driver.gain.y > driver.limAcc.uMax then driver.limAcc.uMax else if driver.gain.y < driver.limAcc.uMin then driver.limAcc.uMin else driver.gain.y), driver.gain.y)
*/
void Map_based_model_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
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
  data->localData[0]->realVars[53] /* driver.accelTau variable */ = homotopy(tmp7, data->localData[0]->realVars[59] /* driver.gain.y variable */);
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
batt1.cBattery.v = batt1.EBatteryMin + batt1.SOCInit * (batt1.EBatteryMax - batt1.EBatteryMin)
*/
void Map_based_model_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->localData[0]->realVars[1] /* batt1.cBattery.v STATE(1) */ = data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */ + (data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */) * (data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ - data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */);
  TRACE_POP
}
extern void Map_based_model_eqFunction_283(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_282(DATA *data, threadData_t *threadData);


/*
equation index: 73
type: SIMPLE_ASSIGN
batt1.Ip.v = batt1.cBattery.v + batt1.R1.v
*/
void Map_based_model_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->localData[0]->realVars[27] /* batt1.Ip.v variable */ = data->localData[0]->realVars[1] /* batt1.cBattery.v STATE(1) */ + data->localData[0]->realVars[35] /* batt1.R1.v variable */;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
batt1.cDummy.v = batt1.EBatteryMin + batt1.SOCInit * (batt1.EBatteryMax - batt1.EBatteryMin)
*/
void Map_based_model_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->localData[0]->realVars[2] /* batt1.cDummy.v STATE(1) */ = data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */ + (data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */) * (data->simulationInfo->realParameter[7] /* batt1.EBatteryMax PARAM */ - data->simulationInfo->realParameter[8] /* batt1.EBatteryMin PARAM */);
  TRACE_POP
}
extern void Map_based_model_eqFunction_270(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_271(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_272(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_273(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_275(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_276(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_277(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_278(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_279(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_274(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_280(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_281(DATA *data, threadData_t *threadData);


/*
equation index: 87
type: SIMPLE_ASSIGN
$PRE.dragF.startForward = false
*/
void Map_based_model_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->simulationInfo->booleanVarsPre[4] /* dragF.startForward DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
$PRE.dragF.startBackward = false
*/
void Map_based_model_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->simulationInfo->booleanVarsPre[3] /* dragF.startBackward DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
$PRE.dragF.mode = 3
*/
void Map_based_model_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ = ((modelica_integer) 3);
  TRACE_POP
}

void Map_based_model_eqFunction_90(DATA*, threadData_t*);
void Map_based_model_eqFunction_91(DATA*, threadData_t*);
void Map_based_model_eqFunction_92(DATA*, threadData_t*);
void Map_based_model_eqFunction_93(DATA*, threadData_t*);
/*
equation index: 95
indexNonlinear: 1
type: NONLINEAR

vars: {dragF.sa}
eqns: {90, 91, 92, 93}
*/
void Map_based_model_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 95 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->localData[0]->realVars[51] /* dragF.sa variable */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,95};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 95 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[51] /* dragF.sa variable */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
dragF.mode = if ($PRE.dragF.mode == 1 or $PRE.dragF.mode == 2 or dragF.startForward) and dragF.v > 0.0 then 1 else if ($PRE.dragF.mode == -1 or $PRE.dragF.mode == 2 or dragF.startBackward) and dragF.v < 0.0 then -1 else 0
*/
void Map_based_model_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  modelica_boolean tmp2;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_integer tmp7;
  tmp2 = Greater(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,0.0);
  tmp6 = (modelica_boolean)((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 2))) || data->localData[0]->booleanVars[4] /* dragF.startForward DISCRETE */) && tmp2);
  if(tmp6)
  {
    tmp7 = ((modelica_integer) 1);
  }
  else
  {
    tmp5 = Less(data->localData[0]->realVars[52] /* dragF.v DUMMY_STATE */,0.0);
    tmp7 = (((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1)) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 2))) || data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */) && tmp5)?((modelica_integer) -1):((modelica_integer) 0));
  }
  data->localData[0]->integerVars[0] /* dragF.mode DISCRETE */ = tmp7;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
eleDrive.constPDC.integrator1.y = eleDrive.constPDC.integrator1.y_start
*/
void Map_based_model_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->localData[0]->realVars[3] /* eleDrive.constPDC.integrator1.y STATE(1) */ = data->simulationInfo->realParameter[73] /* eleDrive.constPDC.integrator1.y_start PARAM */;
  TRACE_POP
}
extern void Map_based_model_eqFunction_287(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_288(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_291(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_293(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_292(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_289(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_290(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_354(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_355(DATA *data, threadData_t *threadData);


/*
equation index: 107
type: SIMPLE_ASSIGN
gear.phi_support = 0.0
*/
void Map_based_model_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->localData[0]->realVars[86] /* gear.phi_support variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
brake.s_support = 0.0
*/
void Map_based_model_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->localData[0]->realVars[44] /* brake.s_support variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
velSens.flange.f = 0.0
*/
void Map_based_model_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->localData[0]->realVars[94] /* velSens.flange.f variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
dragF.free = false
*/
void Map_based_model_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->localData[0]->booleanVars[1] /* dragF.free DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
dragF.s_support = 0.0
*/
void Map_based_model_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->localData[0]->realVars[50] /* dragF.s_support variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
eleDrive.wSensor.flange.tau = 0.0
*/
void Map_based_model_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->localData[0]->realVars[84] /* eleDrive.wSensor.flange.tau variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
eleDrive.constPDC.pSensor.voltageSensor.p.i = 0.0
*/
void Map_based_model_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->localData[0]->realVars[65] /* eleDrive.constPDC.pSensor.voltageSensor.p.i variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
eleDrive.constPDC.pSensor.voltageSensor.n.i = 0.0
*/
void Map_based_model_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->localData[0]->realVars[64] /* eleDrive.constPDC.pSensor.voltageSensor.n.i variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
ground.p.v = 0.0
*/
void Map_based_model_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->localData[0]->realVars[88] /* ground.p.v variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
$PRE.driver.driveCyc.nextTimeEvent = 0.0
*/
void Map_based_model_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realVarsPre[97] /* driver.driveCyc.nextTimeEvent DISCRETE */ = 0.0;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
$whenCondition1 = time >= $PRE.driver.driveCyc.nextTimeEvent
*/
void Map_based_model_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  modelica_boolean tmp8;
  tmp8 = GreaterEq(data->localData[0]->timeValue,data->simulationInfo->realVarsPre[97] /* driver.driveCyc.nextTimeEvent DISCRETE */);
  data->localData[0]->booleanVars[0] /* $whenCondition1 DISCRETE */ = tmp8;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
mass.s = $START.mass.s
*/
void Map_based_model_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->localData[0]->realVars[4] /* mass.s STATE(1,mass.v) */ = data->modelData->realVarsData[4].attribute /* mass.s STATE(1,mass.v) */.start;
  TRACE_POP
}
extern void Map_based_model_eqFunction_358(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_359(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_360(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_361(DATA *data, threadData_t *threadData);


/*
equation index: 138
type: ALGORITHM

  assert(1.0 + eleDrive.constPDC.varCond.alpha * (eleDrive.constPDC.varCond.T - eleDrive.constPDC.varCond.T_ref) >= 1e-15, "Temperature outside scope of model!");
*/
void Map_based_model_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,35,"Temperature outside scope of model!");
  static int tmp11 = 0;
  {
    tmp9 = GreaterEq(1.0 + (data->simulationInfo->realParameter[78] /* eleDrive.constPDC.varCond.alpha PARAM */) * (data->simulationInfo->realParameter[75] /* eleDrive.constPDC.varCond.T PARAM */ - data->simulationInfo->realParameter[77] /* eleDrive.constPDC.varCond.T_ref PARAM */),1e-15);
    if(!tmp9)
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/VariableConductor.mo",17,3,18,43,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\n1.0 + eleDrive.constPDC.varCond.alpha * (eleDrive.constPDC.varCond.T - eleDrive.constPDC.varCond.T_ref) >= 1e-15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp10)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 137
type: ALGORITHM

  assert(1.0 + batt1.R1.alpha * (batt1.R1.T - batt1.R1.T_ref) >= 1e-15, "Temperature outside scope of model!");
*/
void Map_based_model_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,35,"Temperature outside scope of model!");
  static int tmp14 = 0;
  {
    tmp12 = GreaterEq(1.0 + (data->simulationInfo->realParameter[26] /* batt1.R1.alpha PARAM */) * (data->simulationInfo->realParameter[23] /* batt1.R1.T PARAM */ - data->simulationInfo->realParameter[25] /* batt1.R1.T_ref PARAM */),1e-15);
    if(!tmp12)
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Resistor.mo",15,3,16,43,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\n1.0 + batt1.R1.alpha * (batt1.R1.T - batt1.R1.T_ref) >= 1e-15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp13)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 136
type: ALGORITHM

  assert(1.0 + batt1.R0.alpha * (batt1.R0.T - batt1.R0.T_ref) >= 1e-15, "Temperature outside scope of model!");
*/
void Map_based_model_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  modelica_boolean tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,35,"Temperature outside scope of model!");
  static int tmp17 = 0;
  {
    tmp15 = GreaterEq(1.0 + (data->simulationInfo->realParameter[19] /* batt1.R0.alpha PARAM */) * (data->simulationInfo->realParameter[16] /* batt1.R0.T PARAM */ - data->simulationInfo->realParameter[18] /* batt1.R0.T_ref PARAM */),1e-15);
    if(!tmp15)
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Electrical/Analog/Basic/Resistor.mo",15,3,16,43,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\n1.0 + batt1.R0.alpha * (batt1.R0.T - batt1.R0.T_ref) >= 1e-15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp16)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 135
type: ALGORITHM

  assert(driver.driveCyc.tableName <> "NoName", "tableOnFile = true and no table name given");
*/
void Map_based_model_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  static const MMC_DEFSTRINGLIT(tmp20,6,"NoName");
  static const MMC_DEFSTRINGLIT(tmp21,42,"tableOnFile = true and no table name given");
  static int tmp22 = 0;
  {
    if(!(!stringEqual(data->simulationInfo->stringParameter[2] /* driver.driveCyc.tableName PARAM */, MMC_REFSTRINGLIT(tmp20))))
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Sources.mo",1636,7,1637,54,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndriver.driveCyc.tableName <> \"NoName\"", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp21)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 134
type: ALGORITHM

  assert(driver.limAcc.uMax >= driver.limAcc.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(driver.limAcc.uMax, 6, 0, true) + ") < uMin (=" + String(driver.limAcc.uMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,11,") < uMin (=");
  modelica_string tmp27;
  static int tmp28 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp23 = GreaterEq(data->simulationInfo->realParameter[63] /* driver.limAcc.uMax PARAM */,data->simulationInfo->realParameter[64] /* driver.limAcc.uMin PARAM */);
    if(!tmp23)
    {
      tmp25 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[63] /* driver.limAcc.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp26));
      tmp27 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[64] /* driver.limAcc.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp27);
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
equation index: 133
type: ALGORITHM

  assert(driver.limBrak.uMax >= driver.limBrak.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(driver.limBrak.uMax, 6, 0, true) + ") < uMin (=" + String(driver.limBrak.uMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  modelica_boolean tmp29;
  static const MMC_DEFSTRINGLIT(tmp30,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,11,") < uMin (=");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp29 = GreaterEq(data->simulationInfo->realParameter[65] /* driver.limBrak.uMax PARAM */,data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */);
    if(!tmp29)
    {
      tmp31 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[65] /* driver.limBrak.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp30),tmp31);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp32));
      tmp33 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[66] /* driver.limBrak.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp33);
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
equation index: 132
type: ALGORITHM

  assert(driver.limiter1.uMax >= driver.limiter1.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(driver.limiter1.uMax, 6, 0, true) + ") < uMin (=" + String(driver.limiter1.uMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp37;
  static const MMC_DEFSTRINGLIT(tmp38,11,") < uMin (=");
  modelica_string tmp39;
  static int tmp40 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp35 = GreaterEq(data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */,data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */);
    if(!tmp35)
    {
      tmp37 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[67] /* driver.limiter1.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp38));
      tmp39 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[68] /* driver.limiter1.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp39);
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
equation index: 131
type: ALGORITHM

  assert(batt1.SOCMin >= 0.0, "SOCMin must be greater than, or equal to 0");
*/
void Map_based_model_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,42,"SOCMin must be greater than, or equal to 0");
  static int tmp43 = 0;
  {
    tmp41 = GreaterEq(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */,0.0);
    if(!tmp41)
    {
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",633,13,633,78,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCMin >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp42)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 130
type: ALGORITHM

  assert(batt1.SOCMax <= 1.0, "SOCMax must be smaller than, or equal to 1");
*/
void Map_based_model_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,42,"SOCMax must be smaller than, or equal to 1");
  static int tmp46 = 0;
  {
    tmp44 = LessEq(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */,1.0);
    if(!tmp44)
    {
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",634,13,634,78,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nbatt1.SOCMax <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp45)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 129
type: ALGORITHM

  assert(batt1.efficiency <= batt1.efficiencyMax, "Overall charging/discharging energy efficiency is too big with respect to the actual serial resistance (EfficiencyMax =" + String(batt1.efficiencyMax, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  modelica_boolean tmp47;
  static const MMC_DEFSTRINGLIT(tmp48,119,"Overall charging/discharging energy efficiency is too big with respect to the actual serial resistance (EfficiencyMax =");
  modelica_string tmp49;
  static int tmp50 = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  {
    tmp47 = LessEq(data->simulationInfo->realParameter[35] /* batt1.efficiency PARAM */,data->simulationInfo->realParameter[36] /* batt1.efficiencyMax PARAM */);
    if(!tmp47)
    {
      tmp49 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[36] /* batt1.efficiencyMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp48),tmp49);
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
equation index: 128
type: ALGORITHM

  assert(batt1.SOCMin < batt1.SOCMax, "SOCMax(=" + String(batt1.SOCMax, 6, 0, true) + ") must be greater than SOCMin(=" + String(batt1.SOCMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,8,"SOCMax(=");
  modelica_string tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,31,") must be greater than SOCMin(=");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp51 = Less(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */,data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */);
    if(!tmp51)
    {
      tmp53 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp54));
      tmp55 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp55);
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
equation index: 127
type: ALGORITHM

  assert(batt1.SOCInit >= batt1.SOCMin, "SOCInit(=" + String(batt1.SOCInit, 6, 0, true) + ") must be greater than, or equal to SOCMin(=" + String(batt1.SOCMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  modelica_boolean tmp57;
  static const MMC_DEFSTRINGLIT(tmp58,9,"SOCInit(=");
  modelica_string tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,44,") must be greater than, or equal to SOCMin(=");
  modelica_string tmp61;
  static int tmp62 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp57 = GreaterEq(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */,data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */);
    if(!tmp57)
    {
      tmp59 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp58),tmp59);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp60));
      tmp61 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[32] /* batt1.SOCMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp61);
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
equation index: 126
type: ALGORITHM

  assert(batt1.SOCInit <= batt1.SOCMax, "SOCInit(=" + String(batt1.SOCInit, 6, 0, true) + ") must be smaller than, or equal to SOCMax(=" + String(batt1.SOCMax, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,9,"SOCInit(=");
  modelica_string tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,44,") must be smaller than, or equal to SOCMax(=");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp63 = LessEq(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */,data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */);
    if(!tmp63)
    {
      tmp65 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[30] /* batt1.SOCInit PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp66));
      tmp67 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[31] /* batt1.SOCMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp67);
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
equation index: 125
type: ALGORITHM

  assert(cutNeg.uMax >= cutNeg.uMin, "Limiter: Limits must be consistent. However, uMax (=" + String(cutNeg.uMax, 6, 0, true) + ") < uMin (=" + String(cutNeg.uMin, 6, 0, true) + ")");
*/
void Map_based_model_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  modelica_boolean tmp69;
  static const MMC_DEFSTRINGLIT(tmp70,52,"Limiter: Limits must be consistent. However, uMax (=");
  modelica_string tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,11,") < uMin (=");
  modelica_string tmp73;
  static int tmp74 = 0;
  modelica_metatype tmpMeta[4] __attribute__((unused)) = {0};
  {
    tmp69 = GreaterEq(data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */,data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */);
    if(!tmp69)
    {
      tmp71 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp70),tmp71);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp72));
      tmp73 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[2] = stringAppend(tmpMeta[1],tmp73);
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
equation index: 124
type: ALGORITHM

  assert(eleDrive.toElePow.effTable_.tableName <> "NoName", "tableOnFile = true and no table name given");
*/
void Map_based_model_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  static const MMC_DEFSTRINGLIT(tmp77,6,"NoName");
  static const MMC_DEFSTRINGLIT(tmp78,42,"tableOnFile = true and no table name given");
  static int tmp79 = 0;
  {
    if(!(!stringEqual(data->simulationInfo->stringParameter[7] /* eleDrive.toElePow.effTable_.tableName PARAM */, MMC_REFSTRINGLIT(tmp77))))
    {
      {
        FILE_INFO info = {"C:/Program Files/OpenModelica1.18.1-64bit/lib/omlibrary/Modelica 4.0.0/Blocks/Tables.mo",925,11,926,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.toElePow.effTable_.tableName <> \"NoName\"", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp78)));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 123
type: ALGORITHM

  assert(eleDrive.wMax >= eleDrive.powMax / eleDrive.tauMax, "
****
PARAMETER VERIFICATION ERROR:
wMax must be not lower than powMax/tauMax
***
");
*/
void Map_based_model_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,82,"\n****\nPARAMETER VERIFICATION ERROR:\nwMax must be not lower than powMax/tauMax\n***\n");
  static int tmp82 = 0;
  {
    tmp80 = GreaterEq(data->simulationInfo->realParameter[125] /* eleDrive.wMax PARAM */,DIVISION_SIM(data->simulationInfo->realParameter[94] /* eleDrive.powMax PARAM */,data->simulationInfo->realParameter[95] /* eleDrive.tauMax PARAM */,"eleDrive.tauMax",equationIndexes));
    if(!tmp80)
    {
      {
        FILE_INFO info = {"C:/Users/SH REHEMAN/Desktop/Project_ev.mo",1828,13,1828,145,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neleDrive.wMax >= eleDrive.powMax / eleDrive.tauMax", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(MMC_REFSTRINGLIT(tmp81)));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void Map_based_model_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  Map_based_model_eqFunction_1(data, threadData);
  Map_based_model_eqFunction_2(data, threadData);
  Map_based_model_eqFunction_3(data, threadData);
  Map_based_model_eqFunction_4(data, threadData);
  Map_based_model_eqFunction_5(data, threadData);
  Map_based_model_eqFunction_6(data, threadData);
  Map_based_model_eqFunction_7(data, threadData);
  Map_based_model_eqFunction_265(data, threadData);
  Map_based_model_eqFunction_266(data, threadData);
  Map_based_model_eqFunction_261(data, threadData);
  Map_based_model_eqFunction_11(data, threadData);
  Map_based_model_eqFunction_12(data, threadData);
  Map_based_model_eqFunction_13(data, threadData);
  Map_based_model_eqFunction_14(data, threadData);
  Map_based_model_eqFunction_263(data, threadData);
  Map_based_model_eqFunction_16(data, threadData);
  Map_based_model_eqFunction_17(data, threadData);
  Map_based_model_eqFunction_18(data, threadData);
  Map_based_model_eqFunction_19(data, threadData);
  Map_based_model_eqFunction_264(data, threadData);
  Map_based_model_eqFunction_21(data, threadData);
  Map_based_model_eqFunction_306(data, threadData);
  Map_based_model_eqFunction_307(data, threadData);
  Map_based_model_eqFunction_308(data, threadData);
  Map_based_model_eqFunction_25(data, threadData);
  Map_based_model_eqFunction_357(data, threadData);
  Map_based_model_eqFunction_27(data, threadData);
  Map_based_model_eqFunction_28(data, threadData);
  Map_based_model_eqFunction_298(data, threadData);
  Map_based_model_eqFunction_30(data, threadData);
  Map_based_model_eqFunction_300(data, threadData);
  Map_based_model_eqFunction_32(data, threadData);
  Map_based_model_eqFunction_33(data, threadData);
  Map_based_model_eqFunction_351(data, threadData);
  Map_based_model_eqFunction_311(data, threadData);
  Map_based_model_eqFunction_312(data, threadData);
  Map_based_model_eqFunction_313(data, threadData);
  Map_based_model_eqFunction_38(data, threadData);
  Map_based_model_eqFunction_353(data, threadData);
  Map_based_model_eqFunction_61(data, threadData);
  Map_based_model_eqFunction_62(data, threadData);
  Map_based_model_eqFunction_350(data, threadData);
  Map_based_model_eqFunction_356(data, threadData);
  Map_based_model_eqFunction_65(data, threadData);
  Map_based_model_eqFunction_336(data, threadData);
  Map_based_model_eqFunction_67(data, threadData);
  Map_based_model_eqFunction_68(data, threadData);
  Map_based_model_eqFunction_69(data, threadData);
  Map_based_model_eqFunction_70(data, threadData);
  Map_based_model_eqFunction_283(data, threadData);
  Map_based_model_eqFunction_282(data, threadData);
  Map_based_model_eqFunction_73(data, threadData);
  Map_based_model_eqFunction_74(data, threadData);
  Map_based_model_eqFunction_270(data, threadData);
  Map_based_model_eqFunction_271(data, threadData);
  Map_based_model_eqFunction_272(data, threadData);
  Map_based_model_eqFunction_273(data, threadData);
  Map_based_model_eqFunction_275(data, threadData);
  Map_based_model_eqFunction_276(data, threadData);
  Map_based_model_eqFunction_277(data, threadData);
  Map_based_model_eqFunction_278(data, threadData);
  Map_based_model_eqFunction_279(data, threadData);
  Map_based_model_eqFunction_274(data, threadData);
  Map_based_model_eqFunction_280(data, threadData);
  Map_based_model_eqFunction_281(data, threadData);
  Map_based_model_eqFunction_87(data, threadData);
  Map_based_model_eqFunction_88(data, threadData);
  Map_based_model_eqFunction_89(data, threadData);
  Map_based_model_eqFunction_95(data, threadData);
  Map_based_model_eqFunction_96(data, threadData);
  Map_based_model_eqFunction_97(data, threadData);
  Map_based_model_eqFunction_287(data, threadData);
  Map_based_model_eqFunction_288(data, threadData);
  Map_based_model_eqFunction_291(data, threadData);
  Map_based_model_eqFunction_293(data, threadData);
  Map_based_model_eqFunction_292(data, threadData);
  Map_based_model_eqFunction_289(data, threadData);
  Map_based_model_eqFunction_290(data, threadData);
  Map_based_model_eqFunction_354(data, threadData);
  Map_based_model_eqFunction_355(data, threadData);
  Map_based_model_eqFunction_107(data, threadData);
  Map_based_model_eqFunction_108(data, threadData);
  Map_based_model_eqFunction_109(data, threadData);
  Map_based_model_eqFunction_110(data, threadData);
  Map_based_model_eqFunction_111(data, threadData);
  Map_based_model_eqFunction_112(data, threadData);
  Map_based_model_eqFunction_113(data, threadData);
  Map_based_model_eqFunction_114(data, threadData);
  Map_based_model_eqFunction_115(data, threadData);
  Map_based_model_eqFunction_116(data, threadData);
  Map_based_model_eqFunction_117(data, threadData);
  Map_based_model_eqFunction_118(data, threadData);
  Map_based_model_eqFunction_358(data, threadData);
  Map_based_model_eqFunction_359(data, threadData);
  Map_based_model_eqFunction_360(data, threadData);
  Map_based_model_eqFunction_361(data, threadData);
  Map_based_model_eqFunction_138(data, threadData);
  Map_based_model_eqFunction_137(data, threadData);
  Map_based_model_eqFunction_136(data, threadData);
  Map_based_model_eqFunction_135(data, threadData);
  Map_based_model_eqFunction_134(data, threadData);
  Map_based_model_eqFunction_133(data, threadData);
  Map_based_model_eqFunction_132(data, threadData);
  Map_based_model_eqFunction_131(data, threadData);
  Map_based_model_eqFunction_130(data, threadData);
  Map_based_model_eqFunction_129(data, threadData);
  Map_based_model_eqFunction_128(data, threadData);
  Map_based_model_eqFunction_127(data, threadData);
  Map_based_model_eqFunction_126(data, threadData);
  Map_based_model_eqFunction_125(data, threadData);
  Map_based_model_eqFunction_124(data, threadData);
  Map_based_model_eqFunction_123(data, threadData);
  TRACE_POP
}

int Map_based_model_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Map_based_model_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
extern void Map_based_model_eqFunction_1(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_2(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_3(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_4(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_5(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_6(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_7(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_265(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_266(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_261(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_11(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_12(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_13(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_14(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_263(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_16(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_17(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_18(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_19(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_264(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_21(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_306(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_307(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_308(DATA *data, threadData_t *threadData);


/*
equation index: 163
type: ALGORITHM

  eleDrive.limTau.yL := $START.eleDrive.limTau.yL;
  eleDrive.limTau.yH := $START.eleDrive.limTau.yH;
  eleDrive.limTau.state := $START.eleDrive.limTau.state;
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
void Map_based_model_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  modelica_boolean tmp2;
  data->localData[0]->realVars[73] /* eleDrive.limTau.yL variable */ = data->modelData->realVarsData[73].attribute /* eleDrive.limTau.yL variable */.start;

  data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = data->modelData->realVarsData[72].attribute /* eleDrive.limTau.yH variable */.start;

  data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = data->modelData->integerVarsData[1].attribute /* eleDrive.limTau.state DISCRETE */.start;

  tmp0 = Less(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,DIVISION_SIM(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */,"eleDrive.limTau.tauMax",equationIndexes));
  if(tmp0)
  {
    data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = ((modelica_integer) 0);

    data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */;
  }
  else
  {
    data->localData[0]->integerVars[1] /* eleDrive.limTau.state DISCRETE */ = ((modelica_integer) 1);

    data->localData[0]->realVars[72] /* eleDrive.limTau.yH variable */ = DIVISION_SIM(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,"eleDrive.inertia.w",equationIndexes);
  }

  tmp1 = Greater(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */);
  if(tmp1)
  {
    tmp2 = Less(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */,(1.0 + data->simulationInfo->realParameter[90] /* eleDrive.limTau.alpha PARAM */) * (data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */));
    if(tmp2)
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
extern void Map_based_model_eqFunction_357(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_27(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_28(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_298(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_30(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_300(DATA *data, threadData_t *threadData);


/*
equation index: 170
type: SIMPLE_ASSIGN
add.u2 = driver.gain.y
*/
void Map_based_model_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->localData[0]->realVars[22] /* add.u2 variable */ = data->localData[0]->realVars[59] /* driver.gain.y variable */;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
eleDrive.toElePow.tau = add.u2
*/
void Map_based_model_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->localData[0]->realVars[81] /* eleDrive.toElePow.tau variable */ = data->localData[0]->realVars[22] /* add.u2 variable */;
  TRACE_POP
}
extern void Map_based_model_eqFunction_351(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_311(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_312(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_313(DATA *data, threadData_t *threadData);


/*
equation index: 176
type: ALGORITHM

  eleDrive.gain.u := $START.eleDrive.gain.u;
  if noEvent(eleDrive.toElePow.PMOT.y <= 0.0) then
    eleDrive.gain.u := eleDrive.toElePow.PMOT.y * eleDrive.toElePow.applyEta.eta;
  else
    eleDrive.gain.u := eleDrive.toElePow.PMOT.y / eleDrive.toElePow.applyEta.eta;
  end if;
*/
void Map_based_model_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  modelica_boolean tmp3;
  data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = data->modelData->realVarsData[69].attribute /* eleDrive.gain.u variable */.start;

  tmp3 = LessEq(data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */,0.0);
  if(tmp3)
  {
    data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = (data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */) * (data->localData[0]->realVars[78] /* eleDrive.toElePow.applyEta.eta variable */);
  }
  else
  {
    data->localData[0]->realVars[69] /* eleDrive.gain.u variable */ = DIVISION_SIM(data->localData[0]->realVars[75] /* eleDrive.toElePow.PMOT.y variable */,data->localData[0]->realVars[78] /* eleDrive.toElePow.applyEta.eta variable */,"eleDrive.toElePow.applyEta.eta",equationIndexes);
  }
  TRACE_POP
}
extern void Map_based_model_eqFunction_353(DATA *data, threadData_t *threadData);


/*
equation index: 199
type: LINEAR

<var>mass.a</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void Map_based_model_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->localData[1]->realVars[89] /* mass.a variable */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 199 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,199};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 199 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[89] /* mass.a variable */ = aux_x[0];

  TRACE_POP
}
extern void Map_based_model_eqFunction_62(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_350(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_356(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_65(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_336(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_67(DATA *data, threadData_t *threadData);


/*
equation index: 206
type: SIMPLE_ASSIGN
driver.brakeTau = driver.gain.y
*/
void Map_based_model_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->localData[0]->realVars[54] /* driver.brakeTau variable */ = data->localData[0]->realVars[59] /* driver.gain.y variable */;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
driver.accelTau = driver.gain.y
*/
void Map_based_model_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->localData[0]->realVars[53] /* driver.accelTau variable */ = data->localData[0]->realVars[59] /* driver.gain.y variable */;
  TRACE_POP
}
extern void Map_based_model_eqFunction_70(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_283(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_282(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_73(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_74(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_270(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_271(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_272(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_273(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_275(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_276(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_277(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_278(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_279(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_274(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_280(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_281(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_87(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_88(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_89(DATA *data, threadData_t *threadData);


void Map_based_model_eqFunction_228(DATA*, threadData_t*);
void Map_based_model_eqFunction_229(DATA*, threadData_t*);
void Map_based_model_eqFunction_230(DATA*, threadData_t*);
void Map_based_model_eqFunction_231(DATA*, threadData_t*);
/*
equation index: 233
indexNonlinear: 2
type: NONLINEAR

vars: {dragF.sa}
eqns: {228, 229, 230, 231}
*/
void Map_based_model_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 233 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->localData[0]->realVars[51] /* dragF.sa variable */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,233};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 233 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[51] /* dragF.sa variable */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}
extern void Map_based_model_eqFunction_96(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_97(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_287(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_288(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_291(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_293(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_292(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_289(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_290(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_354(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_355(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_107(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_108(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_109(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_110(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_111(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_112(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_113(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_114(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_115(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_116(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_117(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_118(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_358(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_359(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_360(DATA *data, threadData_t *threadData);

extern void Map_based_model_eqFunction_361(DATA *data, threadData_t *threadData);

int Map_based_model_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  Map_based_model_eqFunction_1(data, threadData);

  Map_based_model_eqFunction_2(data, threadData);

  Map_based_model_eqFunction_3(data, threadData);

  Map_based_model_eqFunction_4(data, threadData);

  Map_based_model_eqFunction_5(data, threadData);

  Map_based_model_eqFunction_6(data, threadData);

  Map_based_model_eqFunction_7(data, threadData);

  Map_based_model_eqFunction_265(data, threadData);

  Map_based_model_eqFunction_266(data, threadData);

  Map_based_model_eqFunction_261(data, threadData);

  Map_based_model_eqFunction_11(data, threadData);

  Map_based_model_eqFunction_12(data, threadData);

  Map_based_model_eqFunction_13(data, threadData);

  Map_based_model_eqFunction_14(data, threadData);

  Map_based_model_eqFunction_263(data, threadData);

  Map_based_model_eqFunction_16(data, threadData);

  Map_based_model_eqFunction_17(data, threadData);

  Map_based_model_eqFunction_18(data, threadData);

  Map_based_model_eqFunction_19(data, threadData);

  Map_based_model_eqFunction_264(data, threadData);

  Map_based_model_eqFunction_21(data, threadData);

  Map_based_model_eqFunction_306(data, threadData);

  Map_based_model_eqFunction_307(data, threadData);

  Map_based_model_eqFunction_308(data, threadData);

  Map_based_model_eqFunction_163(data, threadData);

  Map_based_model_eqFunction_357(data, threadData);

  Map_based_model_eqFunction_27(data, threadData);

  Map_based_model_eqFunction_28(data, threadData);

  Map_based_model_eqFunction_298(data, threadData);

  Map_based_model_eqFunction_30(data, threadData);

  Map_based_model_eqFunction_300(data, threadData);

  Map_based_model_eqFunction_170(data, threadData);

  Map_based_model_eqFunction_171(data, threadData);

  Map_based_model_eqFunction_351(data, threadData);

  Map_based_model_eqFunction_311(data, threadData);

  Map_based_model_eqFunction_312(data, threadData);

  Map_based_model_eqFunction_313(data, threadData);

  Map_based_model_eqFunction_176(data, threadData);

  Map_based_model_eqFunction_353(data, threadData);

  Map_based_model_eqFunction_199(data, threadData);

  Map_based_model_eqFunction_62(data, threadData);

  Map_based_model_eqFunction_350(data, threadData);

  Map_based_model_eqFunction_356(data, threadData);

  Map_based_model_eqFunction_65(data, threadData);

  Map_based_model_eqFunction_336(data, threadData);

  Map_based_model_eqFunction_67(data, threadData);

  Map_based_model_eqFunction_206(data, threadData);

  Map_based_model_eqFunction_207(data, threadData);

  Map_based_model_eqFunction_70(data, threadData);

  Map_based_model_eqFunction_283(data, threadData);

  Map_based_model_eqFunction_282(data, threadData);

  Map_based_model_eqFunction_73(data, threadData);

  Map_based_model_eqFunction_74(data, threadData);

  Map_based_model_eqFunction_270(data, threadData);

  Map_based_model_eqFunction_271(data, threadData);

  Map_based_model_eqFunction_272(data, threadData);

  Map_based_model_eqFunction_273(data, threadData);

  Map_based_model_eqFunction_275(data, threadData);

  Map_based_model_eqFunction_276(data, threadData);

  Map_based_model_eqFunction_277(data, threadData);

  Map_based_model_eqFunction_278(data, threadData);

  Map_based_model_eqFunction_279(data, threadData);

  Map_based_model_eqFunction_274(data, threadData);

  Map_based_model_eqFunction_280(data, threadData);

  Map_based_model_eqFunction_281(data, threadData);

  Map_based_model_eqFunction_87(data, threadData);

  Map_based_model_eqFunction_88(data, threadData);

  Map_based_model_eqFunction_89(data, threadData);

  Map_based_model_eqFunction_233(data, threadData);

  Map_based_model_eqFunction_96(data, threadData);

  Map_based_model_eqFunction_97(data, threadData);

  Map_based_model_eqFunction_287(data, threadData);

  Map_based_model_eqFunction_288(data, threadData);

  Map_based_model_eqFunction_291(data, threadData);

  Map_based_model_eqFunction_293(data, threadData);

  Map_based_model_eqFunction_292(data, threadData);

  Map_based_model_eqFunction_289(data, threadData);

  Map_based_model_eqFunction_290(data, threadData);

  Map_based_model_eqFunction_354(data, threadData);

  Map_based_model_eqFunction_355(data, threadData);

  Map_based_model_eqFunction_107(data, threadData);

  Map_based_model_eqFunction_108(data, threadData);

  Map_based_model_eqFunction_109(data, threadData);

  Map_based_model_eqFunction_110(data, threadData);

  Map_based_model_eqFunction_111(data, threadData);

  Map_based_model_eqFunction_112(data, threadData);

  Map_based_model_eqFunction_113(data, threadData);

  Map_based_model_eqFunction_114(data, threadData);

  Map_based_model_eqFunction_115(data, threadData);

  Map_based_model_eqFunction_116(data, threadData);

  Map_based_model_eqFunction_117(data, threadData);

  Map_based_model_eqFunction_118(data, threadData);

  Map_based_model_eqFunction_358(data, threadData);

  Map_based_model_eqFunction_359(data, threadData);

  Map_based_model_eqFunction_360(data, threadData);

  Map_based_model_eqFunction_361(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int Map_based_model_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

