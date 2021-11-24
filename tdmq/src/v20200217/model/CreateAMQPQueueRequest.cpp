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

#include <tencentcloud/tdmq/v20200217/model/CreateAMQPQueueRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateAMQPQueueRequest::CreateAMQPQueueRequest() :
    m_queueHasBeenSet(false),
    m_vHostIdHasBeenSet(false),
    m_autoDeleteHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_deadLetterExchangeHasBeenSet(false),
    m_deadLetterRoutingKeyHasBeenSet(false)
{
}

string CreateAMQPQueueRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_queueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Queue";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queue.c_str(), allocator).Move(), allocator);
    }

    if (m_vHostIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VHostId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vHostId.c_str(), allocator).Move(), allocator);
    }

    if (m_autoDeleteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoDelete";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDelete, allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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


string CreateAMQPQueueRequest::GetQueue() const
{
    return m_queue;
}

void CreateAMQPQueueRequest::SetQueue(const string& _queue)
{
    m_queue = _queue;
    m_queueHasBeenSet = true;
}

bool CreateAMQPQueueRequest::QueueHasBeenSet() const
{
    return m_queueHasBeenSet;
}

string CreateAMQPQueueRequest::GetVHostId() const
{
    return m_vHostId;
}

void CreateAMQPQueueRequest::SetVHostId(const string& _vHostId)
{
    m_vHostId = _vHostId;
    m_vHostIdHasBeenSet = true;
}

bool CreateAMQPQueueRequest::VHostIdHasBeenSet() const
{
    return m_vHostIdHasBeenSet;
}

bool CreateAMQPQueueRequest::GetAutoDelete() const
{
    return m_autoDelete;
}

void CreateAMQPQueueRequest::SetAutoDelete(const bool& _autoDelete)
{
    m_autoDelete = _autoDelete;
    m_autoDeleteHasBeenSet = true;
}

bool CreateAMQPQueueRequest::AutoDeleteHasBeenSet() const
{
    return m_autoDeleteHasBeenSet;
}

string CreateAMQPQueueRequest::GetClusterId() const
{
    return m_clusterId;
}

void CreateAMQPQueueRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool CreateAMQPQueueRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string CreateAMQPQueueRequest::GetRemark() const
{
    return m_remark;
}

void CreateAMQPQueueRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateAMQPQueueRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

string CreateAMQPQueueRequest::GetDeadLetterExchange() const
{
    return m_deadLetterExchange;
}

void CreateAMQPQueueRequest::SetDeadLetterExchange(const string& _deadLetterExchange)
{
    m_deadLetterExchange = _deadLetterExchange;
    m_deadLetterExchangeHasBeenSet = true;
}

bool CreateAMQPQueueRequest::DeadLetterExchangeHasBeenSet() const
{
    return m_deadLetterExchangeHasBeenSet;
}

string CreateAMQPQueueRequest::GetDeadLetterRoutingKey() const
{
    return m_deadLetterRoutingKey;
}

void CreateAMQPQueueRequest::SetDeadLetterRoutingKey(const string& _deadLetterRoutingKey)
{
    m_deadLetterRoutingKey = _deadLetterRoutingKey;
    m_deadLetterRoutingKeyHasBeenSet = true;
}

bool CreateAMQPQueueRequest::DeadLetterRoutingKeyHasBeenSet() const
{
    return m_deadLetterRoutingKeyHasBeenSet;
}


