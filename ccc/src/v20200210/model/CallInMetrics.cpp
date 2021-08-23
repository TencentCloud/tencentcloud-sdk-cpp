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

#include <tencentcloud/ccc/v20200210/model/CallInMetrics.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ccc::V20200210::Model;
using namespace std;

CallInMetrics::CallInMetrics() :
    m_ivrCountHasBeenSet(false),
    m_queueCountHasBeenSet(false),
    m_ringCountHasBeenSet(false),
    m_acceptCountHasBeenSet(false),
    m_transferOuterCountHasBeenSet(false),
    m_maxQueueDurationHasBeenSet(false),
    m_avgQueueDurationHasBeenSet(false),
    m_maxRingDurationHasBeenSet(false),
    m_avgRingDurationHasBeenSet(false),
    m_maxAcceptDurationHasBeenSet(false),
    m_avgAcceptDurationHasBeenSet(false)
{
}

CoreInternalOutcome CallInMetrics::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IvrCount") && !value["IvrCount"].IsNull())
    {
        if (!value["IvrCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.IvrCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ivrCount = value["IvrCount"].GetInt64();
        m_ivrCountHasBeenSet = true;
    }

    if (value.HasMember("QueueCount") && !value["QueueCount"].IsNull())
    {
        if (!value["QueueCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.QueueCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueCount = value["QueueCount"].GetInt64();
        m_queueCountHasBeenSet = true;
    }

    if (value.HasMember("RingCount") && !value["RingCount"].IsNull())
    {
        if (!value["RingCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.RingCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ringCount = value["RingCount"].GetInt64();
        m_ringCountHasBeenSet = true;
    }

    if (value.HasMember("AcceptCount") && !value["AcceptCount"].IsNull())
    {
        if (!value["AcceptCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.AcceptCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_acceptCount = value["AcceptCount"].GetInt64();
        m_acceptCountHasBeenSet = true;
    }

    if (value.HasMember("TransferOuterCount") && !value["TransferOuterCount"].IsNull())
    {
        if (!value["TransferOuterCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.TransferOuterCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_transferOuterCount = value["TransferOuterCount"].GetInt64();
        m_transferOuterCountHasBeenSet = true;
    }

    if (value.HasMember("MaxQueueDuration") && !value["MaxQueueDuration"].IsNull())
    {
        if (!value["MaxQueueDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.MaxQueueDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueueDuration = value["MaxQueueDuration"].GetInt64();
        m_maxQueueDurationHasBeenSet = true;
    }

    if (value.HasMember("AvgQueueDuration") && !value["AvgQueueDuration"].IsNull())
    {
        if (!value["AvgQueueDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.AvgQueueDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgQueueDuration = value["AvgQueueDuration"].GetInt64();
        m_avgQueueDurationHasBeenSet = true;
    }

    if (value.HasMember("MaxRingDuration") && !value["MaxRingDuration"].IsNull())
    {
        if (!value["MaxRingDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.MaxRingDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxRingDuration = value["MaxRingDuration"].GetInt64();
        m_maxRingDurationHasBeenSet = true;
    }

    if (value.HasMember("AvgRingDuration") && !value["AvgRingDuration"].IsNull())
    {
        if (!value["AvgRingDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.AvgRingDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgRingDuration = value["AvgRingDuration"].GetInt64();
        m_avgRingDurationHasBeenSet = true;
    }

    if (value.HasMember("MaxAcceptDuration") && !value["MaxAcceptDuration"].IsNull())
    {
        if (!value["MaxAcceptDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.MaxAcceptDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxAcceptDuration = value["MaxAcceptDuration"].GetInt64();
        m_maxAcceptDurationHasBeenSet = true;
    }

    if (value.HasMember("AvgAcceptDuration") && !value["AvgAcceptDuration"].IsNull())
    {
        if (!value["AvgAcceptDuration"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CallInMetrics.AvgAcceptDuration` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_avgAcceptDuration = value["AvgAcceptDuration"].GetInt64();
        m_avgAcceptDurationHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CallInMetrics::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ivrCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IvrCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ivrCount, allocator);
    }

    if (m_queueCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueCount, allocator);
    }

    if (m_ringCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RingCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ringCount, allocator);
    }

    if (m_acceptCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AcceptCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_acceptCount, allocator);
    }

    if (m_transferOuterCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransferOuterCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_transferOuterCount, allocator);
    }

    if (m_maxQueueDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueueDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueueDuration, allocator);
    }

    if (m_avgQueueDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgQueueDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgQueueDuration, allocator);
    }

    if (m_maxRingDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxRingDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxRingDuration, allocator);
    }

    if (m_avgRingDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgRingDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgRingDuration, allocator);
    }

    if (m_maxAcceptDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxAcceptDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxAcceptDuration, allocator);
    }

    if (m_avgAcceptDurationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgAcceptDuration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgAcceptDuration, allocator);
    }

}


int64_t CallInMetrics::GetIvrCount() const
{
    return m_ivrCount;
}

void CallInMetrics::SetIvrCount(const int64_t& _ivrCount)
{
    m_ivrCount = _ivrCount;
    m_ivrCountHasBeenSet = true;
}

bool CallInMetrics::IvrCountHasBeenSet() const
{
    return m_ivrCountHasBeenSet;
}

int64_t CallInMetrics::GetQueueCount() const
{
    return m_queueCount;
}

void CallInMetrics::SetQueueCount(const int64_t& _queueCount)
{
    m_queueCount = _queueCount;
    m_queueCountHasBeenSet = true;
}

bool CallInMetrics::QueueCountHasBeenSet() const
{
    return m_queueCountHasBeenSet;
}

int64_t CallInMetrics::GetRingCount() const
{
    return m_ringCount;
}

void CallInMetrics::SetRingCount(const int64_t& _ringCount)
{
    m_ringCount = _ringCount;
    m_ringCountHasBeenSet = true;
}

bool CallInMetrics::RingCountHasBeenSet() const
{
    return m_ringCountHasBeenSet;
}

int64_t CallInMetrics::GetAcceptCount() const
{
    return m_acceptCount;
}

void CallInMetrics::SetAcceptCount(const int64_t& _acceptCount)
{
    m_acceptCount = _acceptCount;
    m_acceptCountHasBeenSet = true;
}

bool CallInMetrics::AcceptCountHasBeenSet() const
{
    return m_acceptCountHasBeenSet;
}

int64_t CallInMetrics::GetTransferOuterCount() const
{
    return m_transferOuterCount;
}

void CallInMetrics::SetTransferOuterCount(const int64_t& _transferOuterCount)
{
    m_transferOuterCount = _transferOuterCount;
    m_transferOuterCountHasBeenSet = true;
}

bool CallInMetrics::TransferOuterCountHasBeenSet() const
{
    return m_transferOuterCountHasBeenSet;
}

int64_t CallInMetrics::GetMaxQueueDuration() const
{
    return m_maxQueueDuration;
}

void CallInMetrics::SetMaxQueueDuration(const int64_t& _maxQueueDuration)
{
    m_maxQueueDuration = _maxQueueDuration;
    m_maxQueueDurationHasBeenSet = true;
}

bool CallInMetrics::MaxQueueDurationHasBeenSet() const
{
    return m_maxQueueDurationHasBeenSet;
}

int64_t CallInMetrics::GetAvgQueueDuration() const
{
    return m_avgQueueDuration;
}

void CallInMetrics::SetAvgQueueDuration(const int64_t& _avgQueueDuration)
{
    m_avgQueueDuration = _avgQueueDuration;
    m_avgQueueDurationHasBeenSet = true;
}

bool CallInMetrics::AvgQueueDurationHasBeenSet() const
{
    return m_avgQueueDurationHasBeenSet;
}

int64_t CallInMetrics::GetMaxRingDuration() const
{
    return m_maxRingDuration;
}

void CallInMetrics::SetMaxRingDuration(const int64_t& _maxRingDuration)
{
    m_maxRingDuration = _maxRingDuration;
    m_maxRingDurationHasBeenSet = true;
}

bool CallInMetrics::MaxRingDurationHasBeenSet() const
{
    return m_maxRingDurationHasBeenSet;
}

int64_t CallInMetrics::GetAvgRingDuration() const
{
    return m_avgRingDuration;
}

void CallInMetrics::SetAvgRingDuration(const int64_t& _avgRingDuration)
{
    m_avgRingDuration = _avgRingDuration;
    m_avgRingDurationHasBeenSet = true;
}

bool CallInMetrics::AvgRingDurationHasBeenSet() const
{
    return m_avgRingDurationHasBeenSet;
}

int64_t CallInMetrics::GetMaxAcceptDuration() const
{
    return m_maxAcceptDuration;
}

void CallInMetrics::SetMaxAcceptDuration(const int64_t& _maxAcceptDuration)
{
    m_maxAcceptDuration = _maxAcceptDuration;
    m_maxAcceptDurationHasBeenSet = true;
}

bool CallInMetrics::MaxAcceptDurationHasBeenSet() const
{
    return m_maxAcceptDurationHasBeenSet;
}

int64_t CallInMetrics::GetAvgAcceptDuration() const
{
    return m_avgAcceptDuration;
}

void CallInMetrics::SetAvgAcceptDuration(const int64_t& _avgAcceptDuration)
{
    m_avgAcceptDuration = _avgAcceptDuration;
    m_avgAcceptDurationHasBeenSet = true;
}

bool CallInMetrics::AvgAcceptDurationHasBeenSet() const
{
    return m_avgAcceptDurationHasBeenSet;
}

