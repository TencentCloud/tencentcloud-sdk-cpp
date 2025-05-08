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

#include <tencentcloud/tdmq/v20200217/model/DescribeMqMsgTraceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeMqMsgTraceRequest::DescribeMqMsgTraceRequest() :
    m_protocolHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_queueNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_queryDlqMsgHasBeenSet(false),
    m_produceTimeHasBeenSet(false)
{
}

string DescribeMqMsgTraceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queueName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDlqMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDlqMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDlqMsg, allocator);
    }

    if (m_produceTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProduceTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_produceTime.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMqMsgTraceRequest::GetProtocol() const
{
    return m_protocol;
}

void DescribeMqMsgTraceRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string DescribeMqMsgTraceRequest::GetMsgId() const
{
    return m_msgId;
}

void DescribeMqMsgTraceRequest::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string DescribeMqMsgTraceRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeMqMsgTraceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeMqMsgTraceRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DescribeMqMsgTraceRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DescribeMqMsgTraceRequest::GetTopicName() const
{
    return m_topicName;
}

void DescribeMqMsgTraceRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DescribeMqMsgTraceRequest::GetQueueName() const
{
    return m_queueName;
}

void DescribeMqMsgTraceRequest::SetQueueName(const string& _queueName)
{
    m_queueName = _queueName;
    m_queueNameHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::QueueNameHasBeenSet() const
{
    return m_queueNameHasBeenSet;
}

string DescribeMqMsgTraceRequest::GetGroupName() const
{
    return m_groupName;
}

void DescribeMqMsgTraceRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

bool DescribeMqMsgTraceRequest::GetQueryDlqMsg() const
{
    return m_queryDlqMsg;
}

void DescribeMqMsgTraceRequest::SetQueryDlqMsg(const bool& _queryDlqMsg)
{
    m_queryDlqMsg = _queryDlqMsg;
    m_queryDlqMsgHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::QueryDlqMsgHasBeenSet() const
{
    return m_queryDlqMsgHasBeenSet;
}

string DescribeMqMsgTraceRequest::GetProduceTime() const
{
    return m_produceTime;
}

void DescribeMqMsgTraceRequest::SetProduceTime(const string& _produceTime)
{
    m_produceTime = _produceTime;
    m_produceTimeHasBeenSet = true;
}

bool DescribeMqMsgTraceRequest::ProduceTimeHasBeenSet() const
{
    return m_produceTimeHasBeenSet;
}


