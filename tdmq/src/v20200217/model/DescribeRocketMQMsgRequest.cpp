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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQMsgRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQMsgRequest::DescribeRocketMQMsgRequest() :
    m_clusterIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_pulsarMsgIdHasBeenSet(false),
    m_queryDlqMsgHasBeenSet(false),
    m_queryDeadLetterMessageHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_filterTrackGroupHasBeenSet(false)
{
}

string DescribeRocketMQMsgRequest::ToJsonString() const
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

    if (m_pulsarMsgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PulsarMsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pulsarMsgId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDlqMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDlqMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDlqMsg, allocator);
    }

    if (m_queryDeadLetterMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDeadLetterMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDeadLetterMessage, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_filterTrackGroupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTrackGroup";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_filterTrackGroup.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRocketMQMsgRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeRocketMQMsgRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeRocketMQMsgRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DescribeRocketMQMsgRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DescribeRocketMQMsgRequest::GetTopicName() const
{
    return m_topicName;
}

void DescribeRocketMQMsgRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DescribeRocketMQMsgRequest::GetMsgId() const
{
    return m_msgId;
}

void DescribeRocketMQMsgRequest::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string DescribeRocketMQMsgRequest::GetPulsarMsgId() const
{
    return m_pulsarMsgId;
}

void DescribeRocketMQMsgRequest::SetPulsarMsgId(const string& _pulsarMsgId)
{
    m_pulsarMsgId = _pulsarMsgId;
    m_pulsarMsgIdHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::PulsarMsgIdHasBeenSet() const
{
    return m_pulsarMsgIdHasBeenSet;
}

bool DescribeRocketMQMsgRequest::GetQueryDlqMsg() const
{
    return m_queryDlqMsg;
}

void DescribeRocketMQMsgRequest::SetQueryDlqMsg(const bool& _queryDlqMsg)
{
    m_queryDlqMsg = _queryDlqMsg;
    m_queryDlqMsgHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::QueryDlqMsgHasBeenSet() const
{
    return m_queryDlqMsgHasBeenSet;
}

bool DescribeRocketMQMsgRequest::GetQueryDeadLetterMessage() const
{
    return m_queryDeadLetterMessage;
}

void DescribeRocketMQMsgRequest::SetQueryDeadLetterMessage(const bool& _queryDeadLetterMessage)
{
    m_queryDeadLetterMessage = _queryDeadLetterMessage;
    m_queryDeadLetterMessageHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::QueryDeadLetterMessageHasBeenSet() const
{
    return m_queryDeadLetterMessageHasBeenSet;
}

int64_t DescribeRocketMQMsgRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRocketMQMsgRequest::SetOffset(const int64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

int64_t DescribeRocketMQMsgRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRocketMQMsgRequest::SetLimit(const int64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRocketMQMsgRequest::GetFilterTrackGroup() const
{
    return m_filterTrackGroup;
}

void DescribeRocketMQMsgRequest::SetFilterTrackGroup(const string& _filterTrackGroup)
{
    m_filterTrackGroup = _filterTrackGroup;
    m_filterTrackGroupHasBeenSet = true;
}

bool DescribeRocketMQMsgRequest::FilterTrackGroupHasBeenSet() const
{
    return m_filterTrackGroupHasBeenSet;
}


