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

#include <tencentcloud/tdmysql/v20211122/model/AutoScalingConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmysql::V20211122::Model;
using namespace std;

AutoScalingConfig::AutoScalingConfig() :
    m_rangeMinHasBeenSet(false),
    m_rangeMaxHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

CoreInternalOutcome AutoScalingConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RangeMin") && !value["RangeMin"].IsNull())
    {
        if (!value["RangeMin"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingConfig.RangeMin` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rangeMin = value["RangeMin"].GetDouble();
        m_rangeMinHasBeenSet = true;
    }

    if (value.HasMember("RangeMax") && !value["RangeMax"].IsNull())
    {
        if (!value["RangeMax"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingConfig.RangeMax` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_rangeMax = value["RangeMax"].GetDouble();
        m_rangeMaxHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AutoScalingConfig.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AutoScalingConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rangeMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rangeMin, allocator);
    }

    if (m_rangeMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RangeMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rangeMax, allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

}


double AutoScalingConfig::GetRangeMin() const
{
    return m_rangeMin;
}

void AutoScalingConfig::SetRangeMin(const double& _rangeMin)
{
    m_rangeMin = _rangeMin;
    m_rangeMinHasBeenSet = true;
}

bool AutoScalingConfig::RangeMinHasBeenSet() const
{
    return m_rangeMinHasBeenSet;
}

double AutoScalingConfig::GetRangeMax() const
{
    return m_rangeMax;
}

void AutoScalingConfig::SetRangeMax(const double& _rangeMax)
{
    m_rangeMax = _rangeMax;
    m_rangeMaxHasBeenSet = true;
}

bool AutoScalingConfig::RangeMaxHasBeenSet() const
{
    return m_rangeMaxHasBeenSet;
}

string AutoScalingConfig::GetResourceType() const
{
    return m_resourceType;
}

void AutoScalingConfig::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool AutoScalingConfig::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

