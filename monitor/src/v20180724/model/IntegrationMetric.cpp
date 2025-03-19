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

#include <tencentcloud/monitor/v20180724/model/IntegrationMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

IntegrationMetric::IntegrationMetric() :
    m_metricNameHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_metricTypeHasBeenSet(false),
    m_unitHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome IntegrationMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationMetric.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationMetric.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("MetricType") && !value["MetricType"].IsNull())
    {
        if (!value["MetricType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationMetric.MetricType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricType = string(value["MetricType"].GetString());
        m_metricTypeHasBeenSet = true;
    }

    if (value.HasMember("Unit") && !value["Unit"].IsNull())
    {
        if (!value["Unit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationMetric.Unit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_unit = string(value["Unit"].GetString());
        m_unitHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IntegrationMetric.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IntegrationMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_metricTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricType.c_str(), allocator).Move(), allocator);
    }

    if (m_unitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Unit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_unit.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

}


string IntegrationMetric::GetMetricName() const
{
    return m_metricName;
}

void IntegrationMetric::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool IntegrationMetric::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string IntegrationMetric::GetName() const
{
    return m_name;
}

void IntegrationMetric::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IntegrationMetric::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string IntegrationMetric::GetMetricType() const
{
    return m_metricType;
}

void IntegrationMetric::SetMetricType(const string& _metricType)
{
    m_metricType = _metricType;
    m_metricTypeHasBeenSet = true;
}

bool IntegrationMetric::MetricTypeHasBeenSet() const
{
    return m_metricTypeHasBeenSet;
}

string IntegrationMetric::GetUnit() const
{
    return m_unit;
}

void IntegrationMetric::SetUnit(const string& _unit)
{
    m_unit = _unit;
    m_unitHasBeenSet = true;
}

bool IntegrationMetric::UnitHasBeenSet() const
{
    return m_unitHasBeenSet;
}

string IntegrationMetric::GetDescription() const
{
    return m_description;
}

void IntegrationMetric::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool IntegrationMetric::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

