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

#include <tencentcloud/monitor/v20180724/model/DescribePolicyConditionListMetric.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Monitor::V20180724::Model;
using namespace std;

DescribePolicyConditionListMetric::DescribePolicyConditionListMetric() :
    m_configManualHasBeenSet(false),
    m_metricIdHasBeenSet(false),
    m_metricShowNameHasBeenSet(false),
    m_metricUnitHasBeenSet(false)
{
}

CoreInternalOutcome DescribePolicyConditionListMetric::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ConfigManual") && !value["ConfigManual"].IsNull())
    {
        if (!value["ConfigManual"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListMetric.ConfigManual` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_configManual.Deserialize(value["ConfigManual"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_configManualHasBeenSet = true;
    }

    if (value.HasMember("MetricId") && !value["MetricId"].IsNull())
    {
        if (!value["MetricId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListMetric.MetricId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_metricId = value["MetricId"].GetInt64();
        m_metricIdHasBeenSet = true;
    }

    if (value.HasMember("MetricShowName") && !value["MetricShowName"].IsNull())
    {
        if (!value["MetricShowName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListMetric.MetricShowName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricShowName = string(value["MetricShowName"].GetString());
        m_metricShowNameHasBeenSet = true;
    }

    if (value.HasMember("MetricUnit") && !value["MetricUnit"].IsNull())
    {
        if (!value["MetricUnit"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribePolicyConditionListMetric.MetricUnit` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricUnit = string(value["MetricUnit"].GetString());
        m_metricUnitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribePolicyConditionListMetric::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_configManualHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigManual";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_configManual.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_metricIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_metricId, allocator);
    }

    if (m_metricShowNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricShowName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricShowName.c_str(), allocator).Move(), allocator);
    }

    if (m_metricUnitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricUnit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricUnit.c_str(), allocator).Move(), allocator);
    }

}


DescribePolicyConditionListConfigManual DescribePolicyConditionListMetric::GetConfigManual() const
{
    return m_configManual;
}

void DescribePolicyConditionListMetric::SetConfigManual(const DescribePolicyConditionListConfigManual& _configManual)
{
    m_configManual = _configManual;
    m_configManualHasBeenSet = true;
}

bool DescribePolicyConditionListMetric::ConfigManualHasBeenSet() const
{
    return m_configManualHasBeenSet;
}

int64_t DescribePolicyConditionListMetric::GetMetricId() const
{
    return m_metricId;
}

void DescribePolicyConditionListMetric::SetMetricId(const int64_t& _metricId)
{
    m_metricId = _metricId;
    m_metricIdHasBeenSet = true;
}

bool DescribePolicyConditionListMetric::MetricIdHasBeenSet() const
{
    return m_metricIdHasBeenSet;
}

string DescribePolicyConditionListMetric::GetMetricShowName() const
{
    return m_metricShowName;
}

void DescribePolicyConditionListMetric::SetMetricShowName(const string& _metricShowName)
{
    m_metricShowName = _metricShowName;
    m_metricShowNameHasBeenSet = true;
}

bool DescribePolicyConditionListMetric::MetricShowNameHasBeenSet() const
{
    return m_metricShowNameHasBeenSet;
}

string DescribePolicyConditionListMetric::GetMetricUnit() const
{
    return m_metricUnit;
}

void DescribePolicyConditionListMetric::SetMetricUnit(const string& _metricUnit)
{
    m_metricUnit = _metricUnit;
    m_metricUnitHasBeenSet = true;
}

bool DescribePolicyConditionListMetric::MetricUnitHasBeenSet() const
{
    return m_metricUnitHasBeenSet;
}

