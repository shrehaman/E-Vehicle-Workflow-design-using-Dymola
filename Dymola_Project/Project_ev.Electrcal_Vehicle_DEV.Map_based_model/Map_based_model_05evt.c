/* Events: Sample, Zero Crossings, Relations, Discrete Changes */
#include "Map_based_model_model.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* Initializes the raw time events of the simulation using the now
   calcualted parameters. */
void Map_based_model_function_initSample(DATA *data, threadData_t *threadData)
{
  long i=0;
}

const char *Map_based_model_zeroCrossingDescription(int i, int **out_EquationIndexes)
{
  static const char *res[] = {"time >= pre(driver.driveCyc.nextTimeEvent)",
  "eleDrive.inertia.w < eleDrive.limTau.powMax / eleDrive.limTau.tauMax",
  "eleDrive.inertia.w < (1.0 + eleDrive.limTau.alpha) * eleDrive.limTau.wMax",
  "eleDrive.inertia.w > eleDrive.limTau.wMax",
  "mass.v > 0.0",
  "pre(dragF.mode) == 0 and (dragF.sa < (-dragF.A) or pre(dragF.startBackward) and dragF.sa < (-dragF.A)) or pre(dragF.mode) == 1 and mass.v < (-dragF.v_small)",
  "pre(dragF.mode) == 0 and (dragF.sa > dragF.A or pre(dragF.startForward) and dragF.sa > dragF.A) or pre(dragF.mode) == -1 and mass.v > dragF.v_small",
  "(pre(dragF.mode) == -1 or pre(dragF.mode) == 2 or dragF.startBackward) and mass.v < 0.0",
  "add.y > cutNeg.uMax",
  "add.y < cutNeg.uMin",
  "dragF.sa < (-dragF.A)",
  "mass.v < (-dragF.v_small)",
  "dragF.sa > dragF.A",
  "mass.v > dragF.v_small"};
  static const int occurEqs0[] = {1,294};
  static const int occurEqs1[] = {1,309};
  static const int occurEqs2[] = {1,309};
  static const int occurEqs3[] = {1,309};
  static const int occurEqs4[] = {1,284};
  static const int occurEqs5[] = {1,-1};
  static const int occurEqs6[] = {1,-1};
  static const int occurEqs7[] = {1,347};
  static const int occurEqs8[] = {1,306};
  static const int occurEqs9[] = {1,306};
  static const int occurEqs10[] = {1,360};
  static const int occurEqs11[] = {1,360};
  static const int occurEqs12[] = {1,361};
  static const int occurEqs13[] = {1,361};
  static const int *occurEqs[] = {occurEqs0,occurEqs1,occurEqs2,occurEqs3,occurEqs4,occurEqs5,occurEqs6,occurEqs7,occurEqs8,occurEqs9,occurEqs10,occurEqs11,occurEqs12,occurEqs13};
  *out_EquationIndexes = (int*) occurEqs[i];
  return res[i];
}

/* forwarded equations */
extern void Map_based_model_eqFunction_265(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_285(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_294(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_296(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_297(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_298(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_299(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_300(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_303(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_305(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_306(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_309(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_310(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_334(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_337(DATA* data, threadData_t *threadData);
extern void Map_based_model_eqFunction_346(DATA* data, threadData_t *threadData);

int Map_based_model_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->callStatistics.functionZeroCrossingsEquations++;

  Map_based_model_eqFunction_265(data, threadData);

  Map_based_model_eqFunction_285(data, threadData);

  Map_based_model_eqFunction_294(data, threadData);

  Map_based_model_eqFunction_296(data, threadData);

  Map_based_model_eqFunction_297(data, threadData);

  Map_based_model_eqFunction_298(data, threadData);

  Map_based_model_eqFunction_299(data, threadData);

  Map_based_model_eqFunction_300(data, threadData);

  Map_based_model_eqFunction_303(data, threadData);

  Map_based_model_eqFunction_305(data, threadData);

  Map_based_model_eqFunction_306(data, threadData);

  Map_based_model_eqFunction_309(data, threadData);

  Map_based_model_eqFunction_310(data, threadData);

  Map_based_model_eqFunction_334(data, threadData);

  Map_based_model_eqFunction_337(data, threadData);

  Map_based_model_eqFunction_346(data, threadData);
  
  TRACE_POP
  return 0;
}

int Map_based_model_function_ZeroCrossings(DATA *data, threadData_t *threadData, double *gout)
{
  TRACE_PUSH
  modelica_boolean tmp2;
  modelica_boolean tmp3;
  modelica_boolean tmp4;
  modelica_boolean tmp5;
  modelica_boolean tmp6;
  modelica_boolean tmp8;
  modelica_boolean tmp9;
  modelica_boolean tmp11;
  modelica_boolean tmp13;
  modelica_boolean tmp14;
  modelica_boolean tmp16;
  modelica_boolean tmp19;
  modelica_boolean tmp20;
  modelica_boolean tmp21;
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  modelica_boolean tmp24;
  modelica_boolean tmp25;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_ZC);
#endif
  data->simulationInfo->callStatistics.functionZeroCrossings++;

  tmp2 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realVarsPre[97] /* driver.driveCyc.nextTimeEvent DISCRETE */, data->simulationInfo->storedRelations[0]);
  gout[0] = (tmp2) ? 1 : -1;
  tmp3 = LessZC(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, DIVISION(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */,"eleDrive.limTau.tauMax"), data->simulationInfo->storedRelations[1]);
  gout[1] = (tmp3) ? 1 : -1;
  tmp4 = LessZC(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, (1.0 + data->simulationInfo->realParameter[90] /* eleDrive.limTau.alpha PARAM */) * (data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */), data->simulationInfo->storedRelations[2]);
  gout[2] = (tmp4) ? 1 : -1;
  tmp5 = GreaterZC(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */, data->simulationInfo->storedRelations[3]);
  gout[3] = (tmp5) ? 1 : -1;
  tmp6 = GreaterZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, 0.0, data->simulationInfo->storedRelations[4]);
  gout[4] = (tmp6) ? 1 : -1;
  tmp8 = LessZC(data->localData[0]->realVars[51] /* dragF.sa variable */, (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */), data->simulationInfo->storedRelations[5]);
  tmp9 = LessZC(data->localData[0]->realVars[51] /* dragF.sa variable */, (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */), data->simulationInfo->storedRelations[5]);
  tmp11 = LessZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, (-data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */), data->simulationInfo->storedRelations[6]);
  gout[5] = ((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp8 || (data->simulationInfo->booleanVarsPre[3] /* dragF.startBackward DISCRETE */ && tmp9))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 1)) && tmp11))) ? 1 : -1;
  tmp13 = GreaterZC(data->localData[0]->realVars[51] /* dragF.sa variable */, data->simulationInfo->realParameter[42] /* dragF.A PARAM */, data->simulationInfo->storedRelations[7]);
  tmp14 = GreaterZC(data->localData[0]->realVars[51] /* dragF.sa variable */, data->simulationInfo->realParameter[42] /* dragF.A PARAM */, data->simulationInfo->storedRelations[7]);
  tmp16 = GreaterZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */, data->simulationInfo->storedRelations[8]);
  gout[6] = ((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 0)) && (tmp13 || (data->simulationInfo->booleanVarsPre[4] /* dragF.startForward DISCRETE */ && tmp14))) || ((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1)) && tmp16))) ? 1 : -1;
  tmp19 = LessZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, 0.0, data->simulationInfo->storedRelations[9]);
  gout[7] = (((((data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) -1)) || (data->simulationInfo->integerVarsPre[0] /* dragF.mode DISCRETE */ == ((modelica_integer) 2))) || data->localData[0]->booleanVars[3] /* dragF.startBackward DISCRETE */) && tmp19)) ? 1 : -1;
  tmp20 = GreaterZC(data->localData[0]->realVars[23] /* add.y variable */, data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */, data->simulationInfo->storedRelations[10]);
  gout[8] = (tmp20) ? 1 : -1;
  tmp21 = LessZC(data->localData[0]->realVars[23] /* add.y variable */, data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */, data->simulationInfo->storedRelations[11]);
  gout[9] = (tmp21) ? 1 : -1;
  tmp22 = LessZC(data->localData[0]->realVars[51] /* dragF.sa variable */, (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */), data->simulationInfo->storedRelations[5]);
  gout[10] = (tmp22) ? 1 : -1;
  tmp23 = LessZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, (-data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */), data->simulationInfo->storedRelations[6]);
  gout[11] = (tmp23) ? 1 : -1;
  tmp24 = GreaterZC(data->localData[0]->realVars[51] /* dragF.sa variable */, data->simulationInfo->realParameter[42] /* dragF.A PARAM */, data->simulationInfo->storedRelations[7]);
  gout[12] = (tmp24) ? 1 : -1;
  tmp25 = GreaterZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */, data->simulationInfo->storedRelations[8]);
  gout[13] = (tmp25) ? 1 : -1;

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_ZC);
#endif

  TRACE_POP
  return 0;
}

const char *Map_based_model_relationDescription(int i)
{
  const char *res[] = {"time >= pre(driver.driveCyc.nextTimeEvent)",
  "eleDrive.inertia.w < eleDrive.limTau.powMax / eleDrive.limTau.tauMax",
  "eleDrive.inertia.w < (1.0 + eleDrive.limTau.alpha) * eleDrive.limTau.wMax",
  "eleDrive.inertia.w > eleDrive.limTau.wMax",
  "mass.v > 0.0",
  "dragF.sa < (-dragF.A)",
  "mass.v < (-dragF.v_small)",
  "dragF.sa > dragF.A",
  "mass.v > dragF.v_small",
  "mass.v < 0.0",
  "add.y > cutNeg.uMax",
  "add.y < cutNeg.uMin"};
  return res[i];
}

int Map_based_model_function_updateRelations(DATA *data, threadData_t *threadData, int evalforZeroCross)
{
  TRACE_PUSH
  modelica_boolean tmp26;
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  modelica_boolean tmp31;
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  modelica_boolean tmp37;
  
  if(evalforZeroCross) {
    tmp26 = GreaterEqZC(data->localData[0]->timeValue, data->simulationInfo->realVarsPre[97] /* driver.driveCyc.nextTimeEvent DISCRETE */, data->simulationInfo->storedRelations[0]);
    data->simulationInfo->relations[0] = tmp26;
    tmp27 = LessZC(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, DIVISION(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */,"eleDrive.limTau.tauMax"), data->simulationInfo->storedRelations[1]);
    data->simulationInfo->relations[1] = tmp27;
    tmp28 = LessZC(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, (1.0 + data->simulationInfo->realParameter[90] /* eleDrive.limTau.alpha PARAM */) * (data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */), data->simulationInfo->storedRelations[2]);
    data->simulationInfo->relations[2] = tmp28;
    tmp29 = GreaterZC(data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */, data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */, data->simulationInfo->storedRelations[3]);
    data->simulationInfo->relations[3] = tmp29;
    tmp30 = GreaterZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, 0.0, data->simulationInfo->storedRelations[4]);
    data->simulationInfo->relations[4] = tmp30;
    tmp31 = LessZC(data->localData[0]->realVars[51] /* dragF.sa variable */, (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */), data->simulationInfo->storedRelations[5]);
    data->simulationInfo->relations[5] = tmp31;
    tmp32 = LessZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, (-data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */), data->simulationInfo->storedRelations[6]);
    data->simulationInfo->relations[6] = tmp32;
    tmp33 = GreaterZC(data->localData[0]->realVars[51] /* dragF.sa variable */, data->simulationInfo->realParameter[42] /* dragF.A PARAM */, data->simulationInfo->storedRelations[7]);
    data->simulationInfo->relations[7] = tmp33;
    tmp34 = GreaterZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */, data->simulationInfo->storedRelations[8]);
    data->simulationInfo->relations[8] = tmp34;
    tmp35 = LessZC(data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */, 0.0, data->simulationInfo->storedRelations[9]);
    data->simulationInfo->relations[9] = tmp35;
    tmp36 = GreaterZC(data->localData[0]->realVars[23] /* add.y variable */, data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */, data->simulationInfo->storedRelations[10]);
    data->simulationInfo->relations[10] = tmp36;
    tmp37 = LessZC(data->localData[0]->realVars[23] /* add.y variable */, data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */, data->simulationInfo->storedRelations[11]);
    data->simulationInfo->relations[11] = tmp37;
  } else {
    data->simulationInfo->relations[0] = (data->localData[0]->timeValue >= data->simulationInfo->realVarsPre[97] /* driver.driveCyc.nextTimeEvent DISCRETE */);
    data->simulationInfo->relations[1] = (data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */ < DIVISION(data->simulationInfo->realParameter[91] /* eleDrive.limTau.powMax PARAM */,data->simulationInfo->realParameter[92] /* eleDrive.limTau.tauMax PARAM */,"eleDrive.limTau.tauMax"));
    data->simulationInfo->relations[2] = (data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */ < (1.0 + data->simulationInfo->realParameter[90] /* eleDrive.limTau.alpha PARAM */) * (data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */));
    data->simulationInfo->relations[3] = (data->localData[0]->realVars[71] /* eleDrive.inertia.w DUMMY_STATE */ > data->simulationInfo->realParameter[93] /* eleDrive.limTau.wMax PARAM */);
    data->simulationInfo->relations[4] = (data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */ > 0.0);
    data->simulationInfo->relations[5] = (data->localData[0]->realVars[51] /* dragF.sa variable */ < (-data->simulationInfo->realParameter[42] /* dragF.A PARAM */));
    data->simulationInfo->relations[6] = (data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */ < (-data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */));
    data->simulationInfo->relations[7] = (data->localData[0]->realVars[51] /* dragF.sa variable */ > data->simulationInfo->realParameter[42] /* dragF.A PARAM */);
    data->simulationInfo->relations[8] = (data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */ > data->simulationInfo->realParameter[51] /* dragF.v_small PARAM */);
    data->simulationInfo->relations[9] = (data->localData[0]->realVars[5] /* mass.v STATE(1,dragF.a_relfric) */ < 0.0);
    data->simulationInfo->relations[10] = (data->localData[0]->realVars[23] /* add.y variable */ > data->simulationInfo->realParameter[40] /* cutNeg.uMax PARAM */);
    data->simulationInfo->relations[11] = (data->localData[0]->realVars[23] /* add.y variable */ < data->simulationInfo->realParameter[41] /* cutNeg.uMin PARAM */);
  }
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

