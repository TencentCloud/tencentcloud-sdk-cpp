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

#include <tencentcloud/dlc/v20210125/model/MetricValue.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

MetricValue::MetricValue() :
    m_metricKeyHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_labelsHasBeenSet(false)
{
}

CoreInternalOutcome MetricValue::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricKey") && !value["MetricKey"].IsNull())
    {
        if (!value["MetricKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricValue.MetricKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricKey = string(value["MetricKey"].GetString());
        m_metricKeyHasBeenSet = true;
    }

    if (value.HasMember("Value") && !value["Value"].IsNull())
    {
        if (!value["Value"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `MetricValue.Value` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_value = value["Value"].GetDouble();
        m_valueHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricValue.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MetricValue.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("Labels") && !value["Labels"].IsNull())
    {
        if (!value["Labels"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MetricValue.Labels` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_labels.Deserialize(value["Labels"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_labelsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MetricValue::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricKey.c_str(), allocator).Move(), allocator);
    }

    if (m_valueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Value";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_value, allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_labelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Labels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_labels.ToJsonObject(value[key.c_str()], allocator);
    }

}


string MetricValue::GetMetricKey() const
{
    return m_metricKey;
}

void MetricValue::SetMetricKey(const string& _metricKey)
{
    m_metricKey = _metricKey;
    m_metricKeyHasBeenSet = true;
}

bool MetricValue::MetricKeyHasBeenSet() const
{
    return m_metricKeyHasBeenSet;
}

double MetricValue::GetValue() const
{
    return m_value;
}

void MetricValue::SetValue(const double& _value)
{
    m_value = _value;
    m_valueHasBeenSet = true;
}

bool MetricValue::ValueHasBeenSet() const
{
    return m_valueHasBeenSet;
}

string MetricValue::GetUnit() const
{
    return m_unit;
}

void MetricValue::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool MetricValue::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string MetricValue::GetResourceType() const
{
    return m_resourceType;
}

void MetricValue::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool MetricValue::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

MetricLabels MetricValue::GetLabels() const
{
    return m_labels;
}

void MetricValue::SetLabels(const MetricLabels& _labels)
{
    m_labels = _labels;
    m_labelsHasBeenSet = true;
}

bool MetricValue::LabelsHasBeenSet() const
{
    return m_labelsHasBeenSet;
}

