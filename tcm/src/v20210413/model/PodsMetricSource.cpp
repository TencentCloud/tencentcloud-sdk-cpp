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

#include <tencentcloud/tcm/v20210413/model/PodsMetricSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

PodsMetricSource::PodsMetricSource() :
    m_metricNameHasBeenSet(false),
    m_targetAverageValueHasBeenSet(false)
{
}

CoreInternalOutcome PodsMetricSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MetricName") && !value["MetricName"].IsNull())
    {
        if (!value["MetricName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodsMetricSource.MetricName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metricName = string(value["MetricName"].GetString());
        m_metricNameHasBeenSet = true;
    }

    if (value.HasMember("TargetAverageValue") && !value["TargetAverageValue"].IsNull())
    {
        if (!value["TargetAverageValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `PodsMetricSource.TargetAverageValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetAverageValue = string(value["TargetAverageValue"].GetString());
        m_targetAverageValueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void PodsMetricSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_metricNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metricName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetAverageValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetAverageValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetAverageValue.c_str(), allocator).Move(), allocator);
    }

}


string PodsMetricSource::GetMetricName() const
{
    return m_metricName;
}

void PodsMetricSource::SetMetricName(const string& _metricName)
{
    m_metricName = _metricName;
    m_metricNameHasBeenSet = true;
}

bool PodsMetricSource::MetricNameHasBeenSet() const
{
    return m_metricNameHasBeenSet;
}

string PodsMetricSource::GetTargetAverageValue() const
{
    return m_targetAverageValue;
}

void PodsMetricSource::SetTargetAverageValue(const string& _targetAverageValue)
{
    m_targetAverageValue = _targetAverageValue;
    m_targetAverageValueHasBeenSet = true;
}

bool PodsMetricSource::TargetAverageValueHasBeenSet() const
{
    return m_targetAverageValueHasBeenSet;
}

