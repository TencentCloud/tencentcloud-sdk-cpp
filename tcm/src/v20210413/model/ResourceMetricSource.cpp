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

#include <tencentcloud/tcm/v20210413/model/ResourceMetricSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

ResourceMetricSource::ResourceMetricSource() :
    m_nameHasBeenSet(false),
    m_targetAverageUtilizationHasBeenSet(false),
    m_targetAverageValueHasBeenSet(false)
{
}

CoreInternalOutcome ResourceMetricSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceMetricSource.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("TargetAverageUtilization") && !value["TargetAverageUtilization"].IsNull())
    {
        if (!value["TargetAverageUtilization"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceMetricSource.TargetAverageUtilization` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetAverageUtilization = value["TargetAverageUtilization"].GetInt64();
        m_targetAverageUtilizationHasBeenSet = true;
    }

    if (value.HasMember("TargetAverageValue") && !value["TargetAverageValue"].IsNull())
    {
        if (!value["TargetAverageValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceMetricSource.TargetAverageValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAverageValue = string(value["TargetAverageValue"].GetString());
        m_targetAverageValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceMetricSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAverageUtilizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAverageUtilization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetAverageUtilization, allocator);
    }

    if (m_targetAverageValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAverageValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetAverageValue.c_str(), allocator).Move(), allocator);
    }

}


string ResourceMetricSource::GetName() const
{
    return m_name;
}

void ResourceMetricSource::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ResourceMetricSource::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

int64_t ResourceMetricSource::GetTargetAverageUtilization() const
{
    return m_targetAverageUtilization;
}

void ResourceMetricSource::SetTargetAverageUtilization(const int64_t& _targetAverageUtilization)
{
    m_targetAverageUtilization = _targetAverageUtilization;
    m_targetAverageUtilizationHasBeenSet = true;
}

bool ResourceMetricSource::TargetAverageUtilizationHasBeenSet() const
{
    return m_targetAverageUtilizationHasBeenSet;
}

string ResourceMetricSource::GetTargetAverageValue() const
{
    return m_targetAverageValue;
}

void ResourceMetricSource::SetTargetAverageValue(const string& _targetAverageValue)
{
    m_targetAverageValue = _targetAverageValue;
    m_targetAverageValueHasBeenSet = true;
}

bool ResourceMetricSource::TargetAverageValueHasBeenSet() const
{
    return m_targetAverageValueHasBeenSet;
}

