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

#include <tencentcloud/tdmq/v20200217/model/QueueQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

QueueQuota::QueueQuota() :
    m_maxQueueHasBeenSet(false),
    m_usedQueueHasBeenSet(false)
{
}

CoreInternalOutcome QueueQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxQueue") && !value["MaxQueue"].IsNull())
    {
        if (!value["MaxQueue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueQuota.MaxQueue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxQueue = value["MaxQueue"].GetInt64();
        m_maxQueueHasBeenSet = true;
    }

    if (value.HasMember("UsedQueue") && !value["UsedQueue"].IsNull())
    {
        if (!value["UsedQueue"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `QueueQuota.UsedQueue` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedQueue = value["UsedQueue"].GetInt64();
        m_usedQueueHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void QueueQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxQueue, allocator);
    }

    if (m_usedQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedQueue, allocator);
    }

}


int64_t QueueQuota::GetMaxQueue() const
{
    return m_maxQueue;
}

void QueueQuota::SetMaxQueue(const int64_t& _maxQueue)
{
    m_maxQueue = _maxQueue;
    m_maxQueueHasBeenSet = true;
}

bool QueueQuota::MaxQueueHasBeenSet() const
{
    return m_maxQueueHasBeenSet;
}

int64_t QueueQuota::GetUsedQueue() const
{
    return m_usedQueue;
}

void QueueQuota::SetUsedQueue(const int64_t& _usedQueue)
{
    m_usedQueue = _usedQueue;
    m_usedQueueHasBeenSet = true;
}

bool QueueQuota::UsedQueueHasBeenSet() const
{
    return m_usedQueueHasBeenSet;
}

