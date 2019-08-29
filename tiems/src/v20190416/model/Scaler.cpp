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

#include <tencentcloud/tiems/v20190416/model/Scaler.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tiems::V20190416::Model;
using namespace rapidjson;
using namespace std;

Scaler::Scaler() :
    m_maxReplicasHasBeenSet(false),
    m_minReplicasHasBeenSet(false),
    m_startReplicasHasBeenSet(false),
    m_hpaMetricsHasBeenSet(false)
{
}

CoreInternalOutcome Scaler::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxReplicas") && !value["MaxReplicas"].IsNull())
    {
        if (!value["MaxReplicas"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Scaler.MaxReplicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReplicas = value["MaxReplicas"].GetUint64();
        m_maxReplicasHasBeenSet = true;
    }

    if (value.HasMember("MinReplicas") && !value["MinReplicas"].IsNull())
    {
        if (!value["MinReplicas"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Scaler.MinReplicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_minReplicas = value["MinReplicas"].GetUint64();
        m_minReplicasHasBeenSet = true;
    }

    if (value.HasMember("StartReplicas") && !value["StartReplicas"].IsNull())
    {
        if (!value["StartReplicas"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Scaler.StartReplicas` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_startReplicas = value["StartReplicas"].GetUint64();
        m_startReplicasHasBeenSet = true;
    }

    if (value.HasMember("HpaMetrics") && !value["HpaMetrics"].IsNull())
    {
        if (!value["HpaMetrics"].IsArray())
            return CoreInternalOutcome(Error("response `Scaler.HpaMetrics` is not array type"));

        const Value &tmpValue = value["HpaMetrics"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
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


    return CoreInternalOutcome(true);
}

void Scaler::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_maxReplicasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MaxReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReplicas, allocator);
    }

    if (m_minReplicasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MinReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minReplicas, allocator);
    }

    if (m_startReplicasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "StartReplicas";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startReplicas, allocator);
    }

    if (m_hpaMetricsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "HpaMetrics";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_hpaMetrics.begin(); itr != m_hpaMetrics.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


uint64_t Scaler::GetMaxReplicas() const
{
    return m_maxReplicas;
}

void Scaler::SetMaxReplicas(const uint64_t& _maxReplicas)
{
    m_maxReplicas = _maxReplicas;
    m_maxReplicasHasBeenSet = true;
}

bool Scaler::MaxReplicasHasBeenSet() const
{
    return m_maxReplicasHasBeenSet;
}

uint64_t Scaler::GetMinReplicas() const
{
    return m_minReplicas;
}

void Scaler::SetMinReplicas(const uint64_t& _minReplicas)
{
    m_minReplicas = _minReplicas;
    m_minReplicasHasBeenSet = true;
}

bool Scaler::MinReplicasHasBeenSet() const
{
    return m_minReplicasHasBeenSet;
}

uint64_t Scaler::GetStartReplicas() const
{
    return m_startReplicas;
}

void Scaler::SetStartReplicas(const uint64_t& _startReplicas)
{
    m_startReplicas = _startReplicas;
    m_startReplicasHasBeenSet = true;
}

bool Scaler::StartReplicasHasBeenSet() const
{
    return m_startReplicasHasBeenSet;
}

vector<Option> Scaler::GetHpaMetrics() const
{
    return m_hpaMetrics;
}

void Scaler::SetHpaMetrics(const vector<Option>& _hpaMetrics)
{
    m_hpaMetrics = _hpaMetrics;
    m_hpaMetricsHasBeenSet = true;
}

bool Scaler::HpaMetricsHasBeenSet() const
{
    return m_hpaMetricsHasBeenSet;
}

