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

#include <tencentcloud/cmq/v20190304/model/DeadLetterPolicy.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cmq::V20190304::Model;
using namespace std;

DeadLetterPolicy::DeadLetterPolicy() :
    m_deadLetterQueueHasBeenSet(false),
    m_deadLetterQueueNameHasBeenSet(false),
    m_maxTimeToLiveHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_maxReceiveCountHasBeenSet(false)
{
}

CoreInternalOutcome DeadLetterPolicy::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DeadLetterQueue") && !value["DeadLetterQueue"].IsNull())
    {
        if (!value["DeadLetterQueue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterPolicy.DeadLetterQueue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterQueue = string(value["DeadLetterQueue"].GetString());
        m_deadLetterQueueHasBeenSet = true;
    }

    if (value.HasMember("DeadLetterQueueName") && !value["DeadLetterQueueName"].IsNull())
    {
        if (!value["DeadLetterQueueName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterPolicy.DeadLetterQueueName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_deadLetterQueueName = string(value["DeadLetterQueueName"].GetString());
        m_deadLetterQueueNameHasBeenSet = true;
    }

    if (value.HasMember("MaxTimeToLive") && !value["MaxTimeToLive"].IsNull())
    {
        if (!value["MaxTimeToLive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterPolicy.MaxTimeToLive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxTimeToLive = value["MaxTimeToLive"].GetUint64();
        m_maxTimeToLiveHasBeenSet = true;
    }

    if (value.HasMember("Policy") && !value["Policy"].IsNull())
    {
        if (!value["Policy"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterPolicy.Policy` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_policy = value["Policy"].GetUint64();
        m_policyHasBeenSet = true;
    }

    if (value.HasMember("MaxReceiveCount") && !value["MaxReceiveCount"].IsNull())
    {
        if (!value["MaxReceiveCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DeadLetterPolicy.MaxReceiveCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxReceiveCount = value["MaxReceiveCount"].GetUint64();
        m_maxReceiveCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DeadLetterPolicy::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_deadLetterQueueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterQueue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadLetterQueue.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterQueueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterQueueName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_deadLetterQueueName.c_str(), allocator).Move(), allocator);
    }

    if (m_maxTimeToLiveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxTimeToLive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxTimeToLive, allocator);
    }

    if (m_policyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Policy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_policy, allocator);
    }

    if (m_maxReceiveCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxReceiveCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxReceiveCount, allocator);
    }

}


string DeadLetterPolicy::GetDeadLetterQueue() const
{
    return m_deadLetterQueue;
}

void DeadLetterPolicy::SetDeadLetterQueue(const string& _deadLetterQueue)
{
    m_deadLetterQueue = _deadLetterQueue;
    m_deadLetterQueueHasBeenSet = true;
}

bool DeadLetterPolicy::DeadLetterQueueHasBeenSet() const
{
    return m_deadLetterQueueHasBeenSet;
}

string DeadLetterPolicy::GetDeadLetterQueueName() const
{
    return m_deadLetterQueueName;
}

void DeadLetterPolicy::SetDeadLetterQueueName(const string& _deadLetterQueueName)
{
    m_deadLetterQueueName = _deadLetterQueueName;
    m_deadLetterQueueNameHasBeenSet = true;
}

bool DeadLetterPolicy::DeadLetterQueueNameHasBeenSet() const
{
    return m_deadLetterQueueNameHasBeenSet;
}

uint64_t DeadLetterPolicy::GetMaxTimeToLive() const
{
    return m_maxTimeToLive;
}

void DeadLetterPolicy::SetMaxTimeToLive(const uint64_t& _maxTimeToLive)
{
    m_maxTimeToLive = _maxTimeToLive;
    m_maxTimeToLiveHasBeenSet = true;
}

bool DeadLetterPolicy::MaxTimeToLiveHasBeenSet() const
{
    return m_maxTimeToLiveHasBeenSet;
}

uint64_t DeadLetterPolicy::GetPolicy() const
{
    return m_policy;
}

void DeadLetterPolicy::SetPolicy(const uint64_t& _policy)
{
    m_policy = _policy;
    m_policyHasBeenSet = true;
}

bool DeadLetterPolicy::PolicyHasBeenSet() const
{
    return m_policyHasBeenSet;
}

uint64_t DeadLetterPolicy::GetMaxReceiveCount() const
{
    return m_maxReceiveCount;
}

void DeadLetterPolicy::SetMaxReceiveCount(const uint64_t& _maxReceiveCount)
{
    m_maxReceiveCount = _maxReceiveCount;
    m_maxReceiveCountHasBeenSet = true;
}

bool DeadLetterPolicy::MaxReceiveCountHasBeenSet() const
{
    return m_maxReceiveCountHasBeenSet;
}

