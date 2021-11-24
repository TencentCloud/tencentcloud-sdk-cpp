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

#include <tencentcloud/tdmq/v20200217/model/ModifyAMQPQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyAMQPQueueRequest::ModifyAMQPQueueRequest() :
    m_clusterIdHasBeenSet(false),
    m_vHostIdHasBeenSet(false),
    m_queueHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_deadLetterExchangeHasBeenSet(false),
    m_deadLetterRoutingKeyHasBeenSet(false)
{
}

string ModifyAMQPQueueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_vHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterExchangeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterExchange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadLetterExchange.c_str(), allocator).Move(), allocator);
    }

    if (m_deadLetterRoutingKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeadLetterRoutingKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deadLetterRoutingKey.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAMQPQueueRequest::GetClusterId() const
{
    return m_clusterId;
}

void ModifyAMQPQueueRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool ModifyAMQPQueueRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string ModifyAMQPQueueRequest::GetVHostId() const
{
    return m_vHostId;
}

void ModifyAMQPQueueRequest::SetVHostId(const string& _vHostId)
{
    m_vHostId = _vHostId;
    m_vHostIdHasBeenSet = true;
}

bool ModifyAMQPQueueRequest::VHostIdHasBeenSet() const
{
    return m_vHostIdHasBeenSet;
}

string ModifyAMQPQueueRequest::GetQueue() const
{
    return m_queue;
}

void ModifyAMQPQueueRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool ModifyAMQPQueueRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

bool ModifyAMQPQueueRequest::GetAutoDelete() const
{
    return m_autoDelete;
}

void ModifyAMQPQueueRequest::SetAutoDelete(const bool& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool ModifyAMQPQueueRequest::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

string ModifyAMQPQueueRequest::GetRemark() const
{
    return m_remark;
}

void ModifyAMQPQueueRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool ModifyAMQPQueueRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string ModifyAMQPQueueRequest::GetDeadLetterExchange() const
{
    return m_deadLetterExchange;
}

void ModifyAMQPQueueRequest::SetDeadLetterExchange(const string& _deadLetterExchange)
{
    m_deadLetterExchange = _deadLetterExchange;
    m_deadLetterExchangeHasBeenSet = true;
}

bool ModifyAMQPQueueRequest::DeadLetterExchangeHasBeenSet() const
{
    return m_deadLetterExchangeHasBeenSet;
}

string ModifyAMQPQueueRequest::GetDeadLetterRoutingKey() const
{
    return m_deadLetterRoutingKey;
}

void ModifyAMQPQueueRequest::SetDeadLetterRoutingKey(const string& _deadLetterRoutingKey)
{
    m_deadLetterRoutingKey = _deadLetterRoutingKey;
    m_deadLetterRoutingKeyHasBeenSet = true;
}

bool ModifyAMQPQueueRequest::DeadLetterRoutingKeyHasBeenSet() const
{
    return m_deadLetterRoutingKeyHasBeenSet;
}


