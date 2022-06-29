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

#include <tencentcloud/mna/v20210119/model/NetworkData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mna::V20210119::Model;
using namespace std;

NetworkData::NetworkData() :
    m_rTTHasBeenSet(false),
    m_lossHasBeenSet(false),
    m_jitterHasBeenSet(false),
    m_timestampHasBeenSet(false)
{
}

CoreInternalOutcome NetworkData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RTT") && !value["RTT"].IsNull())
    {
        if (!value["RTT"].IsArray())
            return CoreInternalOutcome(Core::Error("response `NetworkData.RTT` is not array type"));

        const rapidjson::Value &tmpValue = value["RTT"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_rTT.push_back((*itr).GetDouble());
        }
        m_rTTHasBeenSet = true;
    }

    if (value.HasMember("Loss") && !value["Loss"].IsNull())
    {
        if (!value["Loss"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkData.Loss` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_loss = value["Loss"].GetDouble();
        m_lossHasBeenSet = true;
    }

    if (value.HasMember("Jitter") && !value["Jitter"].IsNull())
    {
        if (!value["Jitter"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkData.Jitter` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_jitter = value["Jitter"].GetDouble();
        m_jitterHasBeenSet = true;
    }

    if (value.HasMember("Timestamp") && !value["Timestamp"].IsNull())
    {
        if (!value["Timestamp"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `NetworkData.Timestamp` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_timestamp = value["Timestamp"].GetInt64();
        m_timestampHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void NetworkData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_rTTHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RTT";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_rTT.begin(); itr != m_rTT.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetDouble(*itr), allocator);
        }
    }

    if (m_lossHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Loss";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loss, allocator);
    }

    if (m_jitterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Jitter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_jitter, allocator);
    }

    if (m_timestampHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timestamp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_timestamp, allocator);
    }

}


vector<double> NetworkData::GetRTT() const
{
    return m_rTT;
}

void NetworkData::SetRTT(const vector<double>& _rTT)
{
    m_rTT = _rTT;
    m_rTTHasBeenSet = true;
}

bool NetworkData::RTTHasBeenSet() const
{
    return m_rTTHasBeenSet;
}

double NetworkData::GetLoss() const
{
    return m_loss;
}

void NetworkData::SetLoss(const double& _loss)
{
    m_loss = _loss;
    m_lossHasBeenSet = true;
}

bool NetworkData::LossHasBeenSet() const
{
    return m_lossHasBeenSet;
}

double NetworkData::GetJitter() const
{
    return m_jitter;
}

void NetworkData::SetJitter(const double& _jitter)
{
    m_jitter = _jitter;
    m_jitterHasBeenSet = true;
}

bool NetworkData::JitterHasBeenSet() const
{
    return m_jitterHasBeenSet;
}

int64_t NetworkData::GetTimestamp() const
{
    return m_timestamp;
}

void NetworkData::SetTimestamp(const int64_t& _timestamp)
{
    m_timestamp = _timestamp;
    m_timestampHasBeenSet = true;
}

bool NetworkData::TimestampHasBeenSet() const
{
    return m_timestampHasBeenSet;
}

