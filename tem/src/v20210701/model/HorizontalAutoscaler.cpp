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

#include <tencentcloud/tem/v20210701/model/HorizontalAutoscaler.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

HorizontalAutoscaler::HorizontalAutoscaler() :
    m_minReplicasHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_metricsHasBeenSet(false),
    m_thresholdHasBeenSet(false),
    m_enabledHasBeenSet(false),
    m_doubleThresholdHasBeenSet(false)
{
}

CoreInternalOutcome HorizontalAutoscaler::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinReplicas") && !value["MinReplicas"].IsNull())
    {
        if (!value["MinReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalAutoscaler.MinReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicas = value["MinReplicas"].GetInt64();
        m_minReplicasHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalAutoscaler.MaxReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetInt64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("Metrics") && !value["Metrics"].IsNull())
    {
        if (!value["Metrics"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalAutoscaler.Metrics` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_metrics = string(value["Metrics"].GetString());
        m_metricsHasBeenSet = true;
    }

    if (value.HasMember("Threshold") && !value["Threshold"].IsNull())
    {
        if (!value["Threshold"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalAutoscaler.Threshold` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_threshold = value["Threshold"].GetInt64();
        m_thresholdHasBeenSet = true;
    }

    if (value.HasMember("Enabled") && !value["Enabled"].IsNull())
    {
        if (!value["Enabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalAutoscaler.Enabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enabled = value["Enabled"].GetBool();
        m_enabledHasBeenSet = true;
    }

    if (value.HasMember("DoubleThreshold") && !value["DoubleThreshold"].IsNull())
    {
        if (!value["DoubleThreshold"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalAutoscaler.DoubleThreshold` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_doubleThreshold = value["DoubleThreshold"].GetDouble();
        m_doubleThresholdHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HorizontalAutoscaler::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_minReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicas, allocator);
    }

    if (m_maxReplicasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_metricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Metrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_metrics.c_str(), allocator).Move(), allocator);
    }

    if (m_thresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Threshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_threshold, allocator);
    }

    if (m_enabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Enabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enabled, allocator);
    }

    if (m_doubleThresholdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DoubleThreshold";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_doubleThreshold, allocator);
    }

}


int64_t HorizontalAutoscaler::GetMinReplicas() const
{
    return m_minReplicas;
}

void HorizontalAutoscaler::SetMinReplicas(const int64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool HorizontalAutoscaler::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

int64_t HorizontalAutoscaler::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void HorizontalAutoscaler::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool HorizontalAutoscaler::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

string HorizontalAutoscaler::GetMetrics() const
{
    return m_metrics;
}

void HorizontalAutoscaler::SetMetrics(const string& _metrics)
{
    m_metrics = _metrics;
    m_metricsHasBeenSet = true;
}

bool HorizontalAutoscaler::MetricsHasBeenSet() const
{
    return m_metricsHasBeenSet;
}

int64_t HorizontalAutoscaler::GetThreshold() const
{
    return m_threshold;
}

void HorizontalAutoscaler::SetThreshold(const int64_t& _threshold)
{
    m_threshold = _threshold;
    m_thresholdHasBeenSet = true;
}

bool HorizontalAutoscaler::ThresholdHasBeenSet() const
{
    return m_thresholdHasBeenSet;
}

bool HorizontalAutoscaler::GetEnabled() const
{
    return m_enabled;
}

void HorizontalAutoscaler::SetEnabled(const bool& _enabled)
{
    m_enabled = _enabled;
    m_enabledHasBeenSet = true;
}

bool HorizontalAutoscaler::EnabledHasBeenSet() const
{
    return m_enabledHasBeenSet;
}

double HorizontalAutoscaler::GetDoubleThreshold() const
{
    return m_doubleThreshold;
}

void HorizontalAutoscaler::SetDoubleThreshold(const double& _doubleThreshold)
{
    m_doubleThreshold = _doubleThreshold;
    m_doubleThresholdHasBeenSet = true;
}

bool HorizontalAutoscaler::DoubleThresholdHasBeenSet() const
{
    return m_doubleThresholdHasBeenSet;
}

