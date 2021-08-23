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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListConfigManualCalcValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyConditionListConfigManualCalcValue::DescribePolicyConditionListConfigManualCalcValue() :
    m_defaultHasBeenSet(false),
    m_fixedHasBeenSet(false),
    m_maxHasBeenSet(false),
    m_minHasBeenSet(false),
    m_needHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyConditionListConfigManualCalcValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Default") && !value["Default"].IsNull())
    {
        if (!value["Default"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualCalcValue.Default` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_default = string(value["Default"].GetString());
        m_defaultHasBeenSet = true;
    }

    if (value.HasMember("Fixed") && !value["Fixed"].IsNull())
    {
        if (!value["Fixed"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualCalcValue.Fixed` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fixed = string(value["Fixed"].GetString());
        m_fixedHasBeenSet = true;
    }

    if (value.HasMember("Max") && !value["Max"].IsNull())
    {
        if (!value["Max"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualCalcValue.Max` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_max = string(value["Max"].GetString());
        m_maxHasBeenSet = true;
    }

    if (value.HasMember("Min") && !value["Min"].IsNull())
    {
        if (!value["Min"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualCalcValue.Min` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_min = string(value["Min"].GetString());
        m_minHasBeenSet = true;
    }

    if (value.HasMember("Need") && !value["Need"].IsNull())
    {
        if (!value["Need"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListConfigManualCalcValue.Need` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_need = value["Need"].GetBool();
        m_needHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyConditionListConfigManualCalcValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_defaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Default";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_default.c_str(), allocator).Move(), allocator);
    }

    if (m_fixedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Fixed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fixed.c_str(), allocator).Move(), allocator);
    }

    if (m_maxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Max";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_max.c_str(), allocator).Move(), allocator);
    }

    if (m_minHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Min";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_min.c_str(), allocator).Move(), allocator);
    }

    if (m_needHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Need";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_need, allocator);
    }

}


string DescribePolicyConditionListConfigManualCalcValue::GetDefault() const
{
    return m_default;
}

void DescribePolicyConditionListConfigManualCalcValue::SetDefault(const string& _default)
{
    m_default = _default;
    m_defaultHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualCalcValue::DefaultHasBeenSet() const
{
    return m_defaultHasBeenSet;
}

string DescribePolicyConditionListConfigManualCalcValue::GetFixed() const
{
    return m_fixed;
}

void DescribePolicyConditionListConfigManualCalcValue::SetFixed(const string& _fixed)
{
    m_fixed = _fixed;
    m_fixedHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualCalcValue::FixedHasBeenSet() const
{
    return m_fixedHasBeenSet;
}

string DescribePolicyConditionListConfigManualCalcValue::GetMax() const
{
    return m_max;
}

void DescribePolicyConditionListConfigManualCalcValue::SetMax(const string& _max)
{
    m_max = _max;
    m_maxHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualCalcValue::MaxHasBeenSet() const
{
    return m_maxHasBeenSet;
}

string DescribePolicyConditionListConfigManualCalcValue::GetMin() const
{
    return m_min;
}

void DescribePolicyConditionListConfigManualCalcValue::SetMin(const string& _min)
{
    m_min = _min;
    m_minHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualCalcValue::MinHasBeenSet() const
{
    return m_minHasBeenSet;
}

bool DescribePolicyConditionListConfigManualCalcValue::GetNeed() const
{
    return m_need;
}

void DescribePolicyConditionListConfigManualCalcValue::SetNeed(const bool& _need)
{
    m_need = _need;
    m_needHasBeenSet = true;
}

bool DescribePolicyConditionListConfigManualCalcValue::NeedHasBeenSet() const
{
    return m_needHasBeenSet;
}

