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

#include <tencentcloud/tdmq/v20200217/model/DescribeRocketMQTopicMsgsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

DescribeRocketMQTopicMsgsRequest::DescribeRocketMQTopicMsgsRequest() :
    m_clusterIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_msgIdHasBeenSet(false),
    m_msgKeyHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_taskRequestIdHasBeenSet(false),
    m_queryDlqMsgHasBeenSet(false),
    m_numOfLatestMsgHasBeenSet(false),
    m_tagHasBeenSet(false),
    m_queryDeadLetterMessageHasBeenSet(false)
{
}

string DescribeRocketMQTopicMsgsRequest::ToJsonString() const
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

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_msgIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgId.c_str(), allocator).Move(), allocator);
    }

    if (m_msgKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_msgKey.c_str(), allocator).Move(), allocator);
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

    if (m_taskRequestIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskRequestId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDlqMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDlqMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDlqMsg, allocator);
    }

    if (m_numOfLatestMsgHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NumOfLatestMsg";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_numOfLatestMsg, allocator);
    }

    if (m_tagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_tag.c_str(), allocator).Move(), allocator);
    }

    if (m_queryDeadLetterMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueryDeadLetterMessage";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_queryDeadLetterMessage, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRocketMQTopicMsgsRequest::GetClusterId() const
{
    return m_clusterId;
}

void DescribeRocketMQTopicMsgsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DescribeRocketMQTopicMsgsRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DescribeRocketMQTopicMsgsRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string DescribeRocketMQTopicMsgsRequest::GetTopicName() const
{
    return m_topicName;
}

void DescribeRocketMQTopicMsgsRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DescribeRocketMQTopicMsgsRequest::GetStartTime() const
{
    return m_startTime;
}

void DescribeRocketMQTopicMsgsRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string DescribeRocketMQTopicMsgsRequest::GetEndTime() const
{
    return m_endTime;
}

void DescribeRocketMQTopicMsgsRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

string DescribeRocketMQTopicMsgsRequest::GetMsgId() const
{
    return m_msgId;
}

void DescribeRocketMQTopicMsgsRequest::SetMsgId(const string& _msgId)
{
    m_msgId = _msgId;
    m_msgIdHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::MsgIdHasBeenSet() const
{
    return m_msgIdHasBeenSet;
}

string DescribeRocketMQTopicMsgsRequest::GetMsgKey() const
{
    return m_msgKey;
}

void DescribeRocketMQTopicMsgsRequest::SetMsgKey(const string& _msgKey)
{
    m_msgKey = _msgKey;
    m_msgKeyHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::MsgKeyHasBeenSet() const
{
    return m_msgKeyHasBeenSet;
}

uint64_t DescribeRocketMQTopicMsgsRequest::GetOffset() const
{
    return m_offset;
}

void DescribeRocketMQTopicMsgsRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

uint64_t DescribeRocketMQTopicMsgsRequest::GetLimit() const
{
    return m_limit;
}

void DescribeRocketMQTopicMsgsRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

string DescribeRocketMQTopicMsgsRequest::GetTaskRequestId() const
{
    return m_taskRequestId;
}

void DescribeRocketMQTopicMsgsRequest::SetTaskRequestId(const string& _taskRequestId)
{
    m_taskRequestId = _taskRequestId;
    m_taskRequestIdHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::TaskRequestIdHasBeenSet() const
{
    return m_taskRequestIdHasBeenSet;
}

bool DescribeRocketMQTopicMsgsRequest::GetQueryDlqMsg() const
{
    return m_queryDlqMsg;
}

void DescribeRocketMQTopicMsgsRequest::SetQueryDlqMsg(const bool& _queryDlqMsg)
{
    m_queryDlqMsg = _queryDlqMsg;
    m_queryDlqMsgHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::QueryDlqMsgHasBeenSet() const
{
    return m_queryDlqMsgHasBeenSet;
}

int64_t DescribeRocketMQTopicMsgsRequest::GetNumOfLatestMsg() const
{
    return m_numOfLatestMsg;
}

void DescribeRocketMQTopicMsgsRequest::SetNumOfLatestMsg(const int64_t& _numOfLatestMsg)
{
    m_numOfLatestMsg = _numOfLatestMsg;
    m_numOfLatestMsgHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::NumOfLatestMsgHasBeenSet() const
{
    return m_numOfLatestMsgHasBeenSet;
}

string DescribeRocketMQTopicMsgsRequest::GetTag() const
{
    return m_tag;
}

void DescribeRocketMQTopicMsgsRequest::SetTag(const string& _tag)
{
    m_tag = _tag;
    m_tagHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::TagHasBeenSet() const
{
    return m_tagHasBeenSet;
}

bool DescribeRocketMQTopicMsgsRequest::GetQueryDeadLetterMessage() const
{
    return m_queryDeadLetterMessage;
}

void DescribeRocketMQTopicMsgsRequest::SetQueryDeadLetterMessage(const bool& _queryDeadLetterMessage)
{
    m_queryDeadLetterMessage = _queryDeadLetterMessage;
    m_queryDeadLetterMessageHasBeenSet = true;
}

bool DescribeRocketMQTopicMsgsRequest::QueryDeadLetterMessageHasBeenSet() const
{
    return m_queryDeadLetterMessageHasBeenSet;
}


