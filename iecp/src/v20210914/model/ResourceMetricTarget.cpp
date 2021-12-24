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

#include <tencentcloud/iecp/v20210914/model/ResourceMetricTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iecp::V20210914::Model;
using namespace std;

ResourceMetricTarget::ResourceMetricTarget() :
    m_typeHasBeenSet(false),
    m_averageValueHasBeenSet(false),
    m_scaleHasBeenSet(false),
    m_averageUtilizationHasBeenSet(false)
{
}

CoreInternalOutcome ResourceMetricTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceMetricTarget.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("AverageValue") && !value["AverageValue"].IsNull())
    {
        if (!value["AverageValue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceMetricTarget.AverageValue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageValue = value["AverageValue"].GetInt64();
        m_averageValueHasBeenSet = true;
    }

    if (value.HasMember("Scale") && !value["Scale"].IsNull())
    {
        if (!value["Scale"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceMetricTarget.Scale` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scale = string(value["Scale"].GetString());
        m_scaleHasBeenSet = true;
    }

    if (value.HasMember("AverageUtilization") && !value["AverageUtilization"].IsNull())
    {
        if (!value["AverageUtilization"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ResourceMetricTarget.AverageUtilization` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_averageUtilization = value["AverageUtilization"].GetInt64();
        m_averageUtilizationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ResourceMetricTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_averageValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageValue, allocator);
    }

    if (m_scaleHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scale";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scale.c_str(), allocator).Move(), allocator);
    }

    if (m_averageUtilizationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AverageUtilization";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_averageUtilization, allocator);
    }

}


string ResourceMetricTarget::GetType() const
{
    return m_type;
}

void ResourceMetricTarget::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ResourceMetricTarget::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t ResourceMetricTarget::GetAverageValue() const
{
    return m_averageValue;
}

void ResourceMetricTarget::SetAverageValue(const int64_t& _averageValue)
{
    m_averageValue = _averageValue;
    m_averageValueHasBeenSet = true;
}

bool ResourceMetricTarget::AverageValueHasBeenSet() const
{
    return m_averageValueHasBeenSet;
}

string ResourceMetricTarget::GetScale() const
{
    return m_scale;
}

void ResourceMetricTarget::SetScale(const string& _scale)
{
    m_scale = _scale;
    m_scaleHasBeenSet = true;
}

bool ResourceMetricTarget::ScaleHasBeenSet() const
{
    return m_scaleHasBeenSet;
}

int64_t ResourceMetricTarget::GetAverageUtilization() const
{
    return m_averageUtilization;
}

void ResourceMetricTarget::SetAverageUtilization(const int64_t& _averageUtilization)
{
    m_averageUtilization = _averageUtilization;
    m_averageUtilizationHasBeenSet = true;
}

bool ResourceMetricTarget::AverageUtilizationHasBeenSet() const
{
    return m_averageUtilizationHasBeenSet;
}

