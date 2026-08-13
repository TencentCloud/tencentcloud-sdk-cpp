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

#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionWeightedSelection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ConfigGroupFunctionWeightedSelection::ConfigGroupFunctionWeightedSelection() :
    m_functionHasBeenSet(false),
    m_weightHasBeenSet(false)
{
}

CoreInternalOutcome ConfigGroupFunctionWeightedSelection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionWeightedSelection.Function` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_function = string(value["Function"].GetString());
        m_functionHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionWeightedSelection.Weight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetUint64();
        m_weightHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigGroupFunctionWeightedSelection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_function.c_str(), allocator).Move(), allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

}


string ConfigGroupFunctionWeightedSelection::GetFunction() const
{
    return m_function;
}

void ConfigGroupFunctionWeightedSelection::SetFunction(const string& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool ConfigGroupFunctionWeightedSelection::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

uint64_t ConfigGroupFunctionWeightedSelection::GetWeight() const
{
    return m_weight;
}

void ConfigGroupFunctionWeightedSelection::SetWeight(const uint64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool ConfigGroupFunctionWeightedSelection::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

