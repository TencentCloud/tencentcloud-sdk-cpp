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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMsgTraceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQMsgTraceRequest::DescribeRocketMQMsgTraceRequest() :
    m_clusterIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_queryDLQMsgHasBeenSet(false),
    m_queryDeadLetterMessageHasBeenSet(false)
{
}

string DescribeRocketMQMsgTraceRequest::ToJsonString() const
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

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDLQMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDLQMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDLQMsg, allocator);
    }

    if (m_queryDeadLetterMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDeadLetterMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_queryDeadLetterMessage.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRocketMQMsgTraceRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeRocketMQMsgTraceRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeRocketMQMsgTraceRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeRocketMQMsgTraceRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DescribeRocketMQMsgTraceRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DescribeRocketMQMsgTraceRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DescribeRocketMQMsgTraceRequest::GetTopicName() const
{
    return m_topicName;
}

void DescribeRocketMQMsgTraceRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DescribeRocketMQMsgTraceRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DescribeRocketMQMsgTraceRequest::GetMsgId() const
{
    return m_msgId;
}

void DescribeRocketMQMsgTraceRequest::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool DescribeRocketMQMsgTraceRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string DescribeRocketMQMsgTraceRequest::GetGroupName() const
{
    return m_groupName;
}

void DescribeRocketMQMsgTraceRequest::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool DescribeRocketMQMsgTraceRequest::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

bool DescribeRocketMQMsgTraceRequest::GetQueryDLQMsg() const
{
    return m_queryDLQMsg;
}

void DescribeRocketMQMsgTraceRequest::SetQueryDLQMsg(const bool& _queryDLQMsg)
{
    m_queryDLQMsg = _queryDLQMsg;
    m_queryDLQMsgHasBeenSet = true;
}

bool DescribeRocketMQMsgTraceRequest::QueryDLQMsgHasBeenSet() const
{
    return m_queryDLQMsgHasBeenSet;
}

string DescribeRocketMQMsgTraceRequest::GetQueryDeadLetterMessage() const
{
    return m_queryDeadLetterMessage;
}

void DescribeRocketMQMsgTraceRequest::SetQueryDeadLetterMessage(const string& _queryDeadLetterMessage)
{
    m_queryDeadLetterMessage = _queryDeadLetterMessage;
    m_queryDeadLetterMessageHasBeenSet = true;
}

bool DescribeRocketMQMsgTraceRequest::QueryDeadLetterMessageHasBeenSet() const
{
    return m_queryDeadLetterMessageHasBeenSet;
}


