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

#include <tencentcloud/tione/v20211111/model/HorizontalPodAutoscaler.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

HorizontalPodAutoscaler::HorizontalPodAutoscaler() :
    m_minReplicasHasBeenSet(false),
    m_maxReplicasHasBeenSet(false),
    m_hpaMetricsHasBeenSet(false),
    m_scaleUpStabilizationWindowSecondsHasBeenSet(false),
    m_scaleDownStabilizationWindowSecondsHasBeenSet(false)
{
}

CoreInternalOutcome HorizontalPodAutoscaler::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MinReplicas") && !value["MinReplicas"].IsNull())
    {
        if (!value["MinReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.MinReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicas = value["MinReplicas"].GetInt64();
        m_minReplicasHasBeenSet = true;
    }

    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.MaxReplicas` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetInt64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("HpaMetrics") && !value["HpaMetrics"].IsNull())
    {
        if (!value["HpaMetrics"].IsArray())
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.HpaMetrics` is not array type"));

        const rapidjson::Value &tmpValue = value["HpaMetrics"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Option item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_hpaMetrics.push_back(item);
        }
        m_hpaMetricsHasBeenSet = true;
    }

    if (value.HasMember("ScaleUpStabilizationWindowSeconds") && !value["ScaleUpStabilizationWindowSeconds"].IsNull())
    {
        if (!value["ScaleUpStabilizationWindowSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.ScaleUpStabilizationWindowSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleUpStabilizationWindowSeconds = value["ScaleUpStabilizationWindowSeconds"].GetInt64();
        m_scaleUpStabilizationWindowSecondsHasBeenSet = true;
    }

    if (value.HasMember("ScaleDownStabilizationWindowSeconds") && !value["ScaleDownStabilizationWindowSeconds"].IsNull())
    {
        if (!value["ScaleDownStabilizationWindowSeconds"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `HorizontalPodAutoscaler.ScaleDownStabilizationWindowSeconds` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_scaleDownStabilizationWindowSeconds = value["ScaleDownStabilizationWindowSeconds"].GetInt64();
        m_scaleDownStabilizationWindowSecondsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void HorizontalPodAutoscaler::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_hpaMetricsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HpaMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hpaMetrics.begin(); itr != m_hpaMetrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_scaleUpStabilizationWindowSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleUpStabilizationWindowSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleUpStabilizationWindowSeconds, allocator);
    }

    if (m_scaleDownStabilizationWindowSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScaleDownStabilizationWindowSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_scaleDownStabilizationWindowSeconds, allocator);
    }

}


int64_t HorizontalPodAutoscaler::GetMinReplicas() const
{
    return m_minReplicas;
}

void HorizontalPodAutoscaler::SetMinReplicas(const int64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool HorizontalPodAutoscaler::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

int64_t HorizontalPodAutoscaler::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void HorizontalPodAutoscaler::SetMaxReplicas(const int64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool HorizontalPodAutoscaler::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

vector<Option> HorizontalPodAutoscaler::GetHpaMetrics() const
{
    return m_hpaMetrics;
}

void HorizontalPodAutoscaler::SetHpaMetrics(const vector<Option>& _hpaMetrics)
{
    m_hpaMetrics = _hpaMetrics;
    m_hpaMetricsHasBeenSet = true;
}

bool HorizontalPodAutoscaler::HpaMetricsHasBeenSet() const
{
    return m_hpaMetricsHasBeenSet;
}

int64_t HorizontalPodAutoscaler::GetScaleUpStabilizationWindowSeconds() const
{
    return m_scaleUpStabilizationWindowSeconds;
}

void HorizontalPodAutoscaler::SetScaleUpStabilizationWindowSeconds(const int64_t& _scaleUpStabilizationWindowSeconds)
{
    m_scaleUpStabilizationWindowSeconds = _scaleUpStabilizationWindowSeconds;
    m_scaleUpStabilizationWindowSecondsHasBeenSet = true;
}

bool HorizontalPodAutoscaler::ScaleUpStabilizationWindowSecondsHasBeenSet() const
{
    return m_scaleUpStabilizationWindowSecondsHasBeenSet;
}

int64_t HorizontalPodAutoscaler::GetScaleDownStabilizationWindowSeconds() const
{
    return m_scaleDownStabilizationWindowSeconds;
}

void HorizontalPodAutoscaler::SetScaleDownStabilizationWindowSeconds(const int64_t& _scaleDownStabilizationWindowSeconds)
{
    m_scaleDownStabilizationWindowSeconds = _scaleDownStabilizationWindowSeconds;
    m_scaleDownStabilizationWindowSecondsHasBeenSet = true;
}

bool HorizontalPodAutoscaler::ScaleDownStabilizationWindowSecondsHasBeenSet() const
{
    return m_scaleDownStabilizationWindowSecondsHasBeenSet;
}

