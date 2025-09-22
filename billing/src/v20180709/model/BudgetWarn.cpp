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

#include <tencentcloud/billing/v20180709/model/BudgetWarn.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Billing::V20180709::Model;
using namespace std;

BudgetWarn::BudgetWarn() :
    m_warnTypeHasBeenSet(false),
    m_calTypeHasBeenSet(false),
    m_thresholdValueHasBeenSet(false)
{
}

CoreInternalOutcome BudgetWarn::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("WarnType") && !value["WarnType"].IsNull())
    {
        if (!value["WarnType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetWarn.WarnType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_warnType = string(value["WarnType"].GetString());
        m_warnTypeHasBeenSet = true;
    }

    if (value.HasMember("CalType") && !value["CalType"].IsNull())
    {
        if (!value["CalType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetWarn.CalType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_calType = string(value["CalType"].GetString());
        m_calTypeHasBeenSet = true;
    }

    if (value.HasMember("ThresholdValue") && !value["ThresholdValue"].IsNull())
    {
        if (!value["ThresholdValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BudgetWarn.ThresholdValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_thresholdValue = string(value["ThresholdValue"].GetString());
        m_thresholdValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void BudgetWarn::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_warnTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WarnType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_warnType.c_str(), allocator).Move(), allocator);
    }

    if (m_calTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CalType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_calType.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ThresholdValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_thresholdValue.c_str(), allocator).Move(), allocator);
    }

}


string BudgetWarn::GetWarnType() const
{
    return m_warnType;
}

void BudgetWarn::SetWarnType(const string& _warnType)
{
    m_warnType = _warnType;
    m_warnTypeHasBeenSet = true;
}

bool BudgetWarn::WarnTypeHasBeenSet() const
{
    return m_warnTypeHasBeenSet;
}

string BudgetWarn::GetCalType() const
{
    return m_calType;
}

void BudgetWarn::SetCalType(const string& _calType)
{
    m_calType = _calType;
    m_calTypeHasBeenSet = true;
}

bool BudgetWarn::CalTypeHasBeenSet() const
{
    return m_calTypeHasBeenSet;
}

string BudgetWarn::GetThresholdValue() const
{
    return m_thresholdValue;
}

void BudgetWarn::SetThresholdValue(const string& _thresholdValue)
{
    m_thresholdValue = _thresholdValue;
    m_thresholdValueHasBeenSet = true;
}

bool BudgetWarn::ThresholdValueHasBeenSet() const
{
    return m_thresholdValueHasBeenSet;
}

