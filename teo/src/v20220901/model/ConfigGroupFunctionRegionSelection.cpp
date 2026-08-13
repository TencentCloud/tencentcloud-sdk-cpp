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

#include <tencentcloud/teo/v20220901/model/ConfigGroupFunctionRegionSelection.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ConfigGroupFunctionRegionSelection::ConfigGroupFunctionRegionSelection() :
    m_functionHasBeenSet(false),
    m_regionsHasBeenSet(false)
{
}

CoreInternalOutcome ConfigGroupFunctionRegionSelection::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Function") && !value["Function"].IsNull())
    {
        if (!value["Function"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionRegionSelection.Function` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_function = string(value["Function"].GetString());
        m_functionHasBeenSet = true;
    }

    if (value.HasMember("Regions") && !value["Regions"].IsNull())
    {
        if (!value["Regions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ConfigGroupFunctionRegionSelection.Regions` is not array type"));

        const rapidjson::Value &tmpValue = value["Regions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_regions.push_back((*itr).GetString());
        }
        m_regionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ConfigGroupFunctionRegionSelection::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_functionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Function";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_function.c_str(), allocator).Move(), allocator);
    }

    if (m_regionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Regions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_regions.begin(); itr != m_regions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ConfigGroupFunctionRegionSelection::GetFunction() const
{
    return m_function;
}

void ConfigGroupFunctionRegionSelection::SetFunction(const string& _function)
{
    m_function = _function;
    m_functionHasBeenSet = true;
}

bool ConfigGroupFunctionRegionSelection::FunctionHasBeenSet() const
{
    return m_functionHasBeenSet;
}

vector<string> ConfigGroupFunctionRegionSelection::GetRegions() const
{
    return m_regions;
}

void ConfigGroupFunctionRegionSelection::SetRegions(const vector<string>& _regions)
{
    m_regions = _regions;
    m_regionsHasBeenSet = true;
}

bool ConfigGroupFunctionRegionSelection::RegionsHasBeenSet() const
{
    return m_regionsHasBeenSet;
}

