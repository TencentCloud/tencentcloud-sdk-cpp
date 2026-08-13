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

#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionTrigger.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ConfigGroupFunctionTrigger::ConfigGroupFunctionTrigger() :
    m_conditionHasBeenSet(false),
    m_triggerTypeHasBeenSet(false),
    m_functionHasBeenSet(false),
    m_regionMappingSelectionsHasBeenSet(false),
    m_weightedSelectionsHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome ConfigGroupFunctionTrigger::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Condition") && !value["Condition"].IsNull())
    {
        if (!value["Condition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionTrigger.Condition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_condition = string(value["Condition"].GetString());
        m_conditionHasBeenSet = true;
    }

    if (value.HasMember("TriggerType") && !value["TriggerType"].IsNull())
    {
        if (!value["TriggerType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionTrigger.TriggerType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_triggerType = string(value["TriggerType"].GetString());
        m_triggerTypeHasBeenSet = true;
    }

    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionTrigger.Function` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_function = string(value["Function"].GetString());
        m_functionHasBeenSet = true;
    }

    if (value.HasMember("RegionMappingSelections") && !value["RegionMappingSelections"].IsNull())
    {
        if (!value["RegionMappingSelections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionTrigger.RegionMappingSelections` is not array type"));

        const rapidjson::Value &tmpValue = value["RegionMappingSelections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigGroupFunctionRegionSelection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_regionMappingSelections.push_back(item);
        }
        m_regionMappingSelectionsHasBeenSet = true;
    }

    if (value.HasMember("WeightedSelections") && !value["WeightedSelections"].IsNull())
    {
        if (!value["WeightedSelections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionTrigger.WeightedSelections` is not array type"));

        const rapidjson::Value &tmpValue = value["WeightedSelections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ConfigGroupFunctionWeightedSelection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_weightedSelections.push_back(item);
        }
        m_weightedSelectionsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionTrigger.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigGroupFunctionTrigger::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_conditionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Condition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_condition.c_str(), allocator).Move(), allocator);
    }

    if (m_triggerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TriggerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_triggerType.c_str(), allocator).Move(), allocator);
    }

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_function.c_str(), allocator).Move(), allocator);
    }

    if (m_regionMappingSelectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegionMappingSelections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_regionMappingSelections.begin(); itr != m_regionMappingSelections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_weightedSelectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WeightedSelections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_weightedSelections.begin(); itr != m_weightedSelections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string ConfigGroupFunctionTrigger::GetCondition() const
{
    return m_condition;
}

void ConfigGroupFunctionTrigger::SetCondition(const string& _condition)
{
    m_condition = _condition;
    m_conditionHasBeenSet = true;
}

bool ConfigGroupFunctionTrigger::ConditionHasBeenSet() const
{
    return m_conditionHasBeenSet;
}

string ConfigGroupFunctionTrigger::GetTriggerType() const
{
    return m_triggerType;
}

void ConfigGroupFunctionTrigger::SetTriggerType(const string& _triggerType)
{
    m_triggerType = _triggerType;
    m_triggerTypeHasBeenSet = true;
}

bool ConfigGroupFunctionTrigger::TriggerTypeHasBeenSet() const
{
    return m_triggerTypeHasBeenSet;
}

string ConfigGroupFunctionTrigger::GetFunction() const
{
    return m_function;
}

void ConfigGroupFunctionTrigger::SetFunction(const string& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool ConfigGroupFunctionTrigger::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

vector<ConfigGroupFunctionRegionSelection> ConfigGroupFunctionTrigger::GetRegionMappingSelections() const
{
    return m_regionMappingSelections;
}

void ConfigGroupFunctionTrigger::SetRegionMappingSelections(const vector<ConfigGroupFunctionRegionSelection>& _regionMappingSelections)
{
    m_regionMappingSelections = _regionMappingSelections;
    m_regionMappingSelectionsHasBeenSet = true;
}

bool ConfigGroupFunctionTrigger::RegionMappingSelectionsHasBeenSet() const
{
    return m_regionMappingSelectionsHasBeenSet;
}

vector<ConfigGroupFunctionWeightedSelection> ConfigGroupFunctionTrigger::GetWeightedSelections() const
{
    return m_weightedSelections;
}

void ConfigGroupFunctionTrigger::SetWeightedSelections(const vector<ConfigGroupFunctionWeightedSelection>& _weightedSelections)
{
    m_weightedSelections = _weightedSelections;
    m_weightedSelectionsHasBeenSet = true;
}

bool ConfigGroupFunctionTrigger::WeightedSelectionsHasBeenSet() const
{
    return m_weightedSelectionsHasBeenSet;
}

string ConfigGroupFunctionTrigger::GetRemark() const
{
    return m_remark;
}

void ConfigGroupFunctionTrigger::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ConfigGroupFunctionTrigger::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

