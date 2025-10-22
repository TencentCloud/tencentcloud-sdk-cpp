/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/billing/v20180709/model/BudgetExtend.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetExtend::BudgetExtend() :
    m_budgetNameHasBeenSet(false),
    m_budgetQuotaHasBeenSet(false),
    m_cycleTypeHasBeenSet(false),
    m_billTypeHasBeenSet(false),
    m_feeTypeHasBeenSet(false),
    m_periodBeginHasBeenSet(false),
    m_periodEndHasBeenSet(false),
    m_dimensionsHasBeenSet(false),
    m_planTypeHasBeenSet(false),
    m_warnJsonHasBeenSet(false),
    m_payerUinHasBeenSet(false),
    m_waveThresholdJsonHasBeenSet(false),
    m_budgetNoteHasBeenSet(false),
    m_sendDetailHasBeenSet(false),
    m_defaultModeHasBeenSet(false),
    m_templateTypeHasBeenSet(false),
    m_moneyStatusHasBeenSet(false),
    m_remindTimesHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_budgetIdHasBeenSet(false),
    m_hasForecastHasBeenSet(false),
    m_forecastCostHasBeenSet(false),
    m_forecastProgressHasBeenSet(false),
    m_realCostHasBeenSet(false),
    m_budgetSendInfoFormHasBeenSet(false),
    m_curDateDescHasBeenSet(false),
    m_budgetStatusHasBeenSet(false),
    m_dimensionsRangeHasBeenSet(false),
    m_budgetProgressHasBeenSet(false),
    m_budgetQuotaJsonHasBeenSet(false)
{
}

CoreInternalOutcome BudgetExtend::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("BudgetName") && !value["BudgetName"].IsNull())
    {
        if (!value["BudgetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BudgetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetName = string(value["BudgetName"].GetString());
        m_budgetNameHasBeenSet = true;
    }

    if (value.HasMember("BudgetQuota") && !value["BudgetQuota"].IsNull())
    {
        if (!value["BudgetQuota"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BudgetQuota` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetQuota = string(value["BudgetQuota"].GetString());
        m_budgetQuotaHasBeenSet = true;
    }

    if (value.HasMember("CycleType") && !value["CycleType"].IsNull())
    {
        if (!value["CycleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.CycleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cycleType = string(value["CycleType"].GetString());
        m_cycleTypeHasBeenSet = true;
    }

    if (value.HasMember("BillType") && !value["BillType"].IsNull())
    {
        if (!value["BillType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BillType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_billType = string(value["BillType"].GetString());
        m_billTypeHasBeenSet = true;
    }

    if (value.HasMember("FeeType") && !value["FeeType"].IsNull())
    {
        if (!value["FeeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.FeeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_feeType = string(value["FeeType"].GetString());
        m_feeTypeHasBeenSet = true;
    }

    if (value.HasMember("PeriodBegin") && !value["PeriodBegin"].IsNull())
    {
        if (!value["PeriodBegin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.PeriodBegin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodBegin = string(value["PeriodBegin"].GetString());
        m_periodBeginHasBeenSet = true;
    }

    if (value.HasMember("PeriodEnd") && !value["PeriodEnd"].IsNull())
    {
        if (!value["PeriodEnd"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.PeriodEnd` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_periodEnd = string(value["PeriodEnd"].GetString());
        m_periodEndHasBeenSet = true;
    }

    if (value.HasMember("Dimensions") && !value["Dimensions"].IsNull())
    {
        if (!value["Dimensions"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.Dimensions` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dimensions = string(value["Dimensions"].GetString());
        m_dimensionsHasBeenSet = true;
    }

    if (value.HasMember("PlanType") && !value["PlanType"].IsNull())
    {
        if (!value["PlanType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.PlanType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_planType = string(value["PlanType"].GetString());
        m_planTypeHasBeenSet = true;
    }

    if (value.HasMember("WarnJson") && !value["WarnJson"].IsNull())
    {
        if (!value["WarnJson"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.WarnJson` is not array type"));

        const rapidjson::Value &tmpValue = value["WarnJson"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BudgetWarn item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_warnJson.push_back(item);
        }
        m_warnJsonHasBeenSet = true;
    }

    if (value.HasMember("PayerUin") && !value["PayerUin"].IsNull())
    {
        if (!value["PayerUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.PayerUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_payerUin = value["PayerUin"].GetUint64();
        m_payerUinHasBeenSet = true;
    }

    if (value.HasMember("WaveThresholdJson") && !value["WaveThresholdJson"].IsNull())
    {
        if (!value["WaveThresholdJson"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.WaveThresholdJson` is not array type"));

        const rapidjson::Value &tmpValue = value["WaveThresholdJson"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            WaveThresholdForm item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_waveThresholdJson.push_back(item);
        }
        m_waveThresholdJsonHasBeenSet = true;
    }

    if (value.HasMember("BudgetNote") && !value["BudgetNote"].IsNull())
    {
        if (!value["BudgetNote"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BudgetNote` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetNote = string(value["BudgetNote"].GetString());
        m_budgetNoteHasBeenSet = true;
    }

    if (value.HasMember("SendDetail") && !value["SendDetail"].IsNull())
    {
        if (!value["SendDetail"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.SendDetail` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sendDetail = string(value["SendDetail"].GetString());
        m_sendDetailHasBeenSet = true;
    }

    if (value.HasMember("DefaultMode") && !value["DefaultMode"].IsNull())
    {
        if (!value["DefaultMode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.DefaultMode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_defaultMode = value["DefaultMode"].GetInt64();
        m_defaultModeHasBeenSet = true;
    }

    if (value.HasMember("TemplateType") && !value["TemplateType"].IsNull())
    {
        if (!value["TemplateType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.TemplateType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_templateType = string(value["TemplateType"].GetString());
        m_templateTypeHasBeenSet = true;
    }

    if (value.HasMember("MoneyStatus") && !value["MoneyStatus"].IsNull())
    {
        if (!value["MoneyStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.MoneyStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_moneyStatus = value["MoneyStatus"].GetInt64();
        m_moneyStatusHasBeenSet = true;
    }

    if (value.HasMember("RemindTimes") && !value["RemindTimes"].IsNull())
    {
        if (!value["RemindTimes"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.RemindTimes` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_remindTimes = value["RemindTimes"].GetInt64();
        m_remindTimesHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("BudgetId") && !value["BudgetId"].IsNull())
    {
        if (!value["BudgetId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BudgetId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetId = string(value["BudgetId"].GetString());
        m_budgetIdHasBeenSet = true;
    }

    if (value.HasMember("HasForecast") && !value["HasForecast"].IsNull())
    {
        if (!value["HasForecast"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.HasForecast` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_hasForecast = string(value["HasForecast"].GetString());
        m_hasForecastHasBeenSet = true;
    }

    if (value.HasMember("ForecastCost") && !value["ForecastCost"].IsNull())
    {
        if (!value["ForecastCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.ForecastCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forecastCost = string(value["ForecastCost"].GetString());
        m_forecastCostHasBeenSet = true;
    }

    if (value.HasMember("ForecastProgress") && !value["ForecastProgress"].IsNull())
    {
        if (!value["ForecastProgress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.ForecastProgress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_forecastProgress = string(value["ForecastProgress"].GetString());
        m_forecastProgressHasBeenSet = true;
    }

    if (value.HasMember("RealCost") && !value["RealCost"].IsNull())
    {
        if (!value["RealCost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.RealCost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_realCost = string(value["RealCost"].GetString());
        m_realCostHasBeenSet = true;
    }

    if (value.HasMember("BudgetSendInfoForm") && !value["BudgetSendInfoForm"].IsNull())
    {
        if (!value["BudgetSendInfoForm"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BudgetSendInfoForm` is not array type"));

        const rapidjson::Value &tmpValue = value["BudgetSendInfoForm"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BudgetSendInfoDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_budgetSendInfoForm.push_back(item);
        }
        m_budgetSendInfoFormHasBeenSet = true;
    }

    if (value.HasMember("CurDateDesc") && !value["CurDateDesc"].IsNull())
    {
        if (!value["CurDateDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.CurDateDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_curDateDesc = string(value["CurDateDesc"].GetString());
        m_curDateDescHasBeenSet = true;
    }

    if (value.HasMember("BudgetStatus") && !value["BudgetStatus"].IsNull())
    {
        if (!value["BudgetStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BudgetStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetStatus = string(value["BudgetStatus"].GetString());
        m_budgetStatusHasBeenSet = true;
    }

    if (value.HasMember("DimensionsRange") && !value["DimensionsRange"].IsNull())
    {
        if (!value["DimensionsRange"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.DimensionsRange` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_dimensionsRange.Deserialize(value["DimensionsRange"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_dimensionsRangeHasBeenSet = true;
    }

    if (value.HasMember("BudgetProgress") && !value["BudgetProgress"].IsNull())
    {
        if (!value["BudgetProgress"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BudgetProgress` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_budgetProgress = string(value["BudgetProgress"].GetString());
        m_budgetProgressHasBeenSet = true;
    }

    if (value.HasMember("BudgetQuotaJson") && !value["BudgetQuotaJson"].IsNull())
    {
        if (!value["BudgetQuotaJson"].IsArray())
            return CoreInternalOutcome(Core::Error("response `BudgetExtend.BudgetQuotaJson` is not array type"));

        const rapidjson::Value &tmpValue = value["BudgetQuotaJson"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            BudgetPlan item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_budgetQuotaJson.push_back(item);
        }
        m_budgetQuotaJsonHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetExtend::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_budgetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetName.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetQuotaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetQuota";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_cycleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CycleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cycleType.c_str(), allocator).Move(), allocator);
    }

    if (m_billTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BillType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_billType.c_str(), allocator).Move(), allocator);
    }

    if (m_feeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FeeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_feeType.c_str(), allocator).Move(), allocator);
    }

    if (m_periodBeginHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodBegin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodBegin.c_str(), allocator).Move(), allocator);
    }

    if (m_periodEndHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodEnd";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_periodEnd.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Dimensions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dimensions.c_str(), allocator).Move(), allocator);
    }

    if (m_planTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlanType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_planType.c_str(), allocator).Move(), allocator);
    }

    if (m_warnJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_warnJson.begin(); itr != m_warnJson.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_payerUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PayerUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_payerUin, allocator);
    }

    if (m_waveThresholdJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WaveThresholdJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_waveThresholdJson.begin(); itr != m_waveThresholdJson.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_budgetNoteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetNote";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetNote.c_str(), allocator).Move(), allocator);
    }

    if (m_sendDetailHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SendDetail";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sendDetail.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultMode, allocator);
    }

    if (m_templateTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TemplateType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_templateType.c_str(), allocator).Move(), allocator);
    }

    if (m_moneyStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MoneyStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_moneyStatus, allocator);
    }

    if (m_remindTimesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RemindTimes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_remindTimes, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetId.c_str(), allocator).Move(), allocator);
    }

    if (m_hasForecastHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HasForecast";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_hasForecast.c_str(), allocator).Move(), allocator);
    }

    if (m_forecastCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForecastCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forecastCost.c_str(), allocator).Move(), allocator);
    }

    if (m_forecastProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ForecastProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_forecastProgress.c_str(), allocator).Move(), allocator);
    }

    if (m_realCostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RealCost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_realCost.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetSendInfoFormHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetSendInfoForm";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_budgetSendInfoForm.begin(); itr != m_budgetSendInfoForm.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_curDateDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurDateDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_curDateDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_dimensionsRangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DimensionsRange";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_dimensionsRange.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_budgetProgressHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetProgress";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_budgetProgress.c_str(), allocator).Move(), allocator);
    }

    if (m_budgetQuotaJsonHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BudgetQuotaJson";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_budgetQuotaJson.begin(); itr != m_budgetQuotaJson.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string BudgetExtend::GetBudgetName() const
{
    return m_budgetName;
}

void BudgetExtend::SetBudgetName(const string& _budgetName)
{
    m_budgetName = _budgetName;
    m_budgetNameHasBeenSet = true;
}

bool BudgetExtend::BudgetNameHasBeenSet() const
{
    return m_budgetNameHasBeenSet;
}

string BudgetExtend::GetBudgetQuota() const
{
    return m_budgetQuota;
}

void BudgetExtend::SetBudgetQuota(const string& _budgetQuota)
{
    m_budgetQuota = _budgetQuota;
    m_budgetQuotaHasBeenSet = true;
}

bool BudgetExtend::BudgetQuotaHasBeenSet() const
{
    return m_budgetQuotaHasBeenSet;
}

string BudgetExtend::GetCycleType() const
{
    return m_cycleType;
}

void BudgetExtend::SetCycleType(const string& _cycleType)
{
    m_cycleType = _cycleType;
    m_cycleTypeHasBeenSet = true;
}

bool BudgetExtend::CycleTypeHasBeenSet() const
{
    return m_cycleTypeHasBeenSet;
}

string BudgetExtend::GetBillType() const
{
    return m_billType;
}

void BudgetExtend::SetBillType(const string& _billType)
{
    m_billType = _billType;
    m_billTypeHasBeenSet = true;
}

bool BudgetExtend::BillTypeHasBeenSet() const
{
    return m_billTypeHasBeenSet;
}

string BudgetExtend::GetFeeType() const
{
    return m_feeType;
}

void BudgetExtend::SetFeeType(const string& _feeType)
{
    m_feeType = _feeType;
    m_feeTypeHasBeenSet = true;
}

bool BudgetExtend::FeeTypeHasBeenSet() const
{
    return m_feeTypeHasBeenSet;
}

string BudgetExtend::GetPeriodBegin() const
{
    return m_periodBegin;
}

void BudgetExtend::SetPeriodBegin(const string& _periodBegin)
{
    m_periodBegin = _periodBegin;
    m_periodBeginHasBeenSet = true;
}

bool BudgetExtend::PeriodBeginHasBeenSet() const
{
    return m_periodBeginHasBeenSet;
}

string BudgetExtend::GetPeriodEnd() const
{
    return m_periodEnd;
}

void BudgetExtend::SetPeriodEnd(const string& _periodEnd)
{
    m_periodEnd = _periodEnd;
    m_periodEndHasBeenSet = true;
}

bool BudgetExtend::PeriodEndHasBeenSet() const
{
    return m_periodEndHasBeenSet;
}

string BudgetExtend::GetDimensions() const
{
    return m_dimensions;
}

void BudgetExtend::SetDimensions(const string& _dimensions)
{
    m_dimensions = _dimensions;
    m_dimensionsHasBeenSet = true;
}

bool BudgetExtend::DimensionsHasBeenSet() const
{
    return m_dimensionsHasBeenSet;
}

string BudgetExtend::GetPlanType() const
{
    return m_planType;
}

void BudgetExtend::SetPlanType(const string& _planType)
{
    m_planType = _planType;
    m_planTypeHasBeenSet = true;
}

bool BudgetExtend::PlanTypeHasBeenSet() const
{
    return m_planTypeHasBeenSet;
}

vector<BudgetWarn> BudgetExtend::GetWarnJson() const
{
    return m_warnJson;
}

void BudgetExtend::SetWarnJson(const vector<BudgetWarn>& _warnJson)
{
    m_warnJson = _warnJson;
    m_warnJsonHasBeenSet = true;
}

bool BudgetExtend::WarnJsonHasBeenSet() const
{
    return m_warnJsonHasBeenSet;
}

uint64_t BudgetExtend::GetPayerUin() const
{
    return m_payerUin;
}

void BudgetExtend::SetPayerUin(const uint64_t& _payerUin)
{
    m_payerUin = _payerUin;
    m_payerUinHasBeenSet = true;
}

bool BudgetExtend::PayerUinHasBeenSet() const
{
    return m_payerUinHasBeenSet;
}

vector<WaveThresholdForm> BudgetExtend::GetWaveThresholdJson() const
{
    return m_waveThresholdJson;
}

void BudgetExtend::SetWaveThresholdJson(const vector<WaveThresholdForm>& _waveThresholdJson)
{
    m_waveThresholdJson = _waveThresholdJson;
    m_waveThresholdJsonHasBeenSet = true;
}

bool BudgetExtend::WaveThresholdJsonHasBeenSet() const
{
    return m_waveThresholdJsonHasBeenSet;
}

string BudgetExtend::GetBudgetNote() const
{
    return m_budgetNote;
}

void BudgetExtend::SetBudgetNote(const string& _budgetNote)
{
    m_budgetNote = _budgetNote;
    m_budgetNoteHasBeenSet = true;
}

bool BudgetExtend::BudgetNoteHasBeenSet() const
{
    return m_budgetNoteHasBeenSet;
}

string BudgetExtend::GetSendDetail() const
{
    return m_sendDetail;
}

void BudgetExtend::SetSendDetail(const string& _sendDetail)
{
    m_sendDetail = _sendDetail;
    m_sendDetailHasBeenSet = true;
}

bool BudgetExtend::SendDetailHasBeenSet() const
{
    return m_sendDetailHasBeenSet;
}

int64_t BudgetExtend::GetDefaultMode() const
{
    return m_defaultMode;
}

void BudgetExtend::SetDefaultMode(const int64_t& _defaultMode)
{
    m_defaultMode = _defaultMode;
    m_defaultModeHasBeenSet = true;
}

bool BudgetExtend::DefaultModeHasBeenSet() const
{
    return m_defaultModeHasBeenSet;
}

string BudgetExtend::GetTemplateType() const
{
    return m_templateType;
}

void BudgetExtend::SetTemplateType(const string& _templateType)
{
    m_templateType = _templateType;
    m_templateTypeHasBeenSet = true;
}

bool BudgetExtend::TemplateTypeHasBeenSet() const
{
    return m_templateTypeHasBeenSet;
}

int64_t BudgetExtend::GetMoneyStatus() const
{
    return m_moneyStatus;
}

void BudgetExtend::SetMoneyStatus(const int64_t& _moneyStatus)
{
    m_moneyStatus = _moneyStatus;
    m_moneyStatusHasBeenSet = true;
}

bool BudgetExtend::MoneyStatusHasBeenSet() const
{
    return m_moneyStatusHasBeenSet;
}

int64_t BudgetExtend::GetRemindTimes() const
{
    return m_remindTimes;
}

void BudgetExtend::SetRemindTimes(const int64_t& _remindTimes)
{
    m_remindTimes = _remindTimes;
    m_remindTimesHasBeenSet = true;
}

bool BudgetExtend::RemindTimesHasBeenSet() const
{
    return m_remindTimesHasBeenSet;
}

string BudgetExtend::GetCreateTime() const
{
    return m_createTime;
}

void BudgetExtend::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool BudgetExtend::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string BudgetExtend::GetUpdateTime() const
{
    return m_updateTime;
}

void BudgetExtend::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool BudgetExtend::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string BudgetExtend::GetBudgetId() const
{
    return m_budgetId;
}

void BudgetExtend::SetBudgetId(const string& _budgetId)
{
    m_budgetId = _budgetId;
    m_budgetIdHasBeenSet = true;
}

bool BudgetExtend::BudgetIdHasBeenSet() const
{
    return m_budgetIdHasBeenSet;
}

string BudgetExtend::GetHasForecast() const
{
    return m_hasForecast;
}

void BudgetExtend::SetHasForecast(const string& _hasForecast)
{
    m_hasForecast = _hasForecast;
    m_hasForecastHasBeenSet = true;
}

bool BudgetExtend::HasForecastHasBeenSet() const
{
    return m_hasForecastHasBeenSet;
}

string BudgetExtend::GetForecastCost() const
{
    return m_forecastCost;
}

void BudgetExtend::SetForecastCost(const string& _forecastCost)
{
    m_forecastCost = _forecastCost;
    m_forecastCostHasBeenSet = true;
}

bool BudgetExtend::ForecastCostHasBeenSet() const
{
    return m_forecastCostHasBeenSet;
}

string BudgetExtend::GetForecastProgress() const
{
    return m_forecastProgress;
}

void BudgetExtend::SetForecastProgress(const string& _forecastProgress)
{
    m_forecastProgress = _forecastProgress;
    m_forecastProgressHasBeenSet = true;
}

bool BudgetExtend::ForecastProgressHasBeenSet() const
{
    return m_forecastProgressHasBeenSet;
}

string BudgetExtend::GetRealCost() const
{
    return m_realCost;
}

void BudgetExtend::SetRealCost(const string& _realCost)
{
    m_realCost = _realCost;
    m_realCostHasBeenSet = true;
}

bool BudgetExtend::RealCostHasBeenSet() const
{
    return m_realCostHasBeenSet;
}

vector<BudgetSendInfoDto> BudgetExtend::GetBudgetSendInfoForm() const
{
    return m_budgetSendInfoForm;
}

void BudgetExtend::SetBudgetSendInfoForm(const vector<BudgetSendInfoDto>& _budgetSendInfoForm)
{
    m_budgetSendInfoForm = _budgetSendInfoForm;
    m_budgetSendInfoFormHasBeenSet = true;
}

bool BudgetExtend::BudgetSendInfoFormHasBeenSet() const
{
    return m_budgetSendInfoFormHasBeenSet;
}

string BudgetExtend::GetCurDateDesc() const
{
    return m_curDateDesc;
}

void BudgetExtend::SetCurDateDesc(const string& _curDateDesc)
{
    m_curDateDesc = _curDateDesc;
    m_curDateDescHasBeenSet = true;
}

bool BudgetExtend::CurDateDescHasBeenSet() const
{
    return m_curDateDescHasBeenSet;
}

string BudgetExtend::GetBudgetStatus() const
{
    return m_budgetStatus;
}

void BudgetExtend::SetBudgetStatus(const string& _budgetStatus)
{
    m_budgetStatus = _budgetStatus;
    m_budgetStatusHasBeenSet = true;
}

bool BudgetExtend::BudgetStatusHasBeenSet() const
{
    return m_budgetStatusHasBeenSet;
}

BudgetConditionsForm BudgetExtend::GetDimensionsRange() const
{
    return m_dimensionsRange;
}

void BudgetExtend::SetDimensionsRange(const BudgetConditionsForm& _dimensionsRange)
{
    m_dimensionsRange = _dimensionsRange;
    m_dimensionsRangeHasBeenSet = true;
}

bool BudgetExtend::DimensionsRangeHasBeenSet() const
{
    return m_dimensionsRangeHasBeenSet;
}

string BudgetExtend::GetBudgetProgress() const
{
    return m_budgetProgress;
}

void BudgetExtend::SetBudgetProgress(const string& _budgetProgress)
{
    m_budgetProgress = _budgetProgress;
    m_budgetProgressHasBeenSet = true;
}

bool BudgetExtend::BudgetProgressHasBeenSet() const
{
    return m_budgetProgressHasBeenSet;
}

vector<BudgetPlan> BudgetExtend::GetBudgetQuotaJson() const
{
    return m_budgetQuotaJson;
}

void BudgetExtend::SetBudgetQuotaJson(const vector<BudgetPlan>& _budgetQuotaJson)
{
    m_budgetQuotaJson = _budgetQuotaJson;
    m_budgetQuotaJsonHasBeenSet = true;
}

bool BudgetExtend::BudgetQuotaJsonHasBeenSet() const
{
    return m_budgetQuotaJsonHasBeenSet;
}

