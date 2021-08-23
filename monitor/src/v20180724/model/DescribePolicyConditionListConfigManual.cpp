/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManual.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyConditionListConfigManual::DescribePolicyConditionListConfigManual() :
    m_calcTypeHasBeenSet(false),
    m_calcValueHasBeenSet(false),
    m_continueTimeHasBeenSet(false),
    m_periodHasBeenSet(false),
    m_periodNumHasBeenSet(false),
    m_statTypeHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyConditionListConfigManual::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CalcType") && !value["CalcType"].IsNull())
    {
        if (!value["CalcType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManual.CalcType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_calcType.Deserialize(value["CalcType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_calcTypeHasBeenSet = true;
    }

    if (value.HasMember("CalcValue") && !value["CalcValue"].IsNull())
    {
        if (!value["CalcValue"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManual.CalcValue` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_calcValue.Deserialize(value["CalcValue"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_calcValueHasBeenSet = true;
    }

    if (value.HasMember("ContinueTime") && !value["ContinueTime"].IsNull())
    {
        if (!value["ContinueTime"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManual.ContinueTime` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_continueTime.Deserialize(value["ContinueTime"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_continueTimeHasBeenSet = true;
    }

    if (value.HasMember("Period") && !value["Period"].IsNull())
    {
        if (!value["Period"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManual.Period` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_period.Deserialize(value["Period"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_periodHasBeenSet = true;
    }

    if (value.HasMember("PeriodNum") && !value["PeriodNum"].IsNull())
    {
        if (!value["PeriodNum"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManual.PeriodNum` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_periodNum.Deserialize(value["PeriodNum"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_periodNumHasBeenSet = true;
    }

    if (value.HasMember("StatType") && !value["StatType"].IsNull())
    {
        if (!value["StatType"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManual.StatType` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_statType.Deserialize(value["StatType"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_statTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyConditionListConfigManual::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_calcTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_calcType.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_calcValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalcValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_calcValue.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_continueTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContinueTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_continueTime.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_periodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Period";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_period.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_periodNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PeriodNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_periodNum.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_statTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StatType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_statType.ToJsonObject(value[key.c_str()], allocator);
    }

}


DescribePolicyConditionListConfigManualCalcType DescribePolicyConditionListConfigManual::GetCalcType() const
{
    return m_calcType;
}

void DescribePolicyConditionListConfigManual::SetCalcType(const DescribePolicyConditionListConfigManualCalcType& _calcType)
{
    m_calcType = _calcType;
    m_calcTypeHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManual::CalcTypeHasBeenSet() const
{
    return m_calcTypeHasBeenSet;
}

DescribePolicyConditionListConfigManualCalcValue DescribePolicyConditionListConfigManual::GetCalcValue() const
{
    return m_calcValue;
}

void DescribePolicyConditionListConfigManual::SetCalcValue(const DescribePolicyConditionListConfigManualCalcValue& _calcValue)
{
    m_calcValue = _calcValue;
    m_calcValueHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManual::CalcValueHasBeenSet() const
{
    return m_calcValueHasBeenSet;
}

DescribePolicyConditionListConfigManualContinueTime DescribePolicyConditionListConfigManual::GetContinueTime() const
{
    return m_continueTime;
}

void DescribePolicyConditionListConfigManual::SetContinueTime(const DescribePolicyConditionListConfigManualContinueTime& _continueTime)
{
    m_continueTime = _continueTime;
    m_continueTimeHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManual::ContinueTimeHasBeenSet() const
{
    return m_continueTimeHasBeenSet;
}

DescribePolicyConditionListConfigManualPeriod DescribePolicyConditionListConfigManual::GetPeriod() const
{
    return m_period;
}

void DescribePolicyConditionListConfigManual::SetPeriod(const DescribePolicyConditionListConfigManualPeriod& _period)
{
    m_period = _period;
    m_periodHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManual::PeriodHasBeenSet() const
{
    return m_periodHasBeenSet;
}

DescribePolicyConditionListConfigManualPeriodNum DescribePolicyConditionListConfigManual::GetPeriodNum() const
{
    return m_periodNum;
}

void DescribePolicyConditionListConfigManual::SetPeriodNum(const DescribePolicyConditionListConfigManualPeriodNum& _periodNum)
{
    m_periodNum = _periodNum;
    m_periodNumHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManual::PeriodNumHasBeenSet() const
{
    return m_periodNumHasBeenSet;
}

DescribePolicyConditionListConfigManualStatType DescribePolicyConditionListConfigManual::GetStatType() const
{
    return m_statType;
}

void DescribePolicyConditionListConfigManual::SetStatType(const DescribePolicyConditionListConfigManualStatType& _statType)
{
    m_statType = _statType;
    m_statTypeHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManual::StatTypeHasBeenSet() const
{
    return m_statTypeHasBeenSet;
}

