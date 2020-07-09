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

#include <tencentcloud/tdmq/v20200217/model/ResetMsgSubOffsetByTimestampRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

ResetMsgSubOffsetByTimestampRequest::ResetMsgSubOffsetByTimestampRequest() :
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_subscriptionHasBeenSet(false),
    m_toTimestampHasBeenSet(false)
{
}

string ResetMsgSubOffsetByTimestampRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Subscription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subscription.c_str(), allocator).Move(), allocator);
    }

    if (m_toTimestampHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ToTimestamp";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_toTimestamp, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetMsgSubOffsetByTimestampRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void ResetMsgSubOffsetByTimestampRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool ResetMsgSubOffsetByTimestampRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string ResetMsgSubOffsetByTimestampRequest::GetTopicName() const
{
    return m_topicName;
}

void ResetMsgSubOffsetByTimestampRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ResetMsgSubOffsetByTimestampRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ResetMsgSubOffsetByTimestampRequest::GetSubscription() const
{
    return m_subscription;
}

void ResetMsgSubOffsetByTimestampRequest::SetSubscription(const string& _subscription)
{
    m_subscription = _subscription;
    m_subscriptionHasBeenSet = true;
}

bool ResetMsgSubOffsetByTimestampRequest::SubscriptionHasBeenSet() const
{
    return m_subscriptionHasBeenSet;
}

uint64_t ResetMsgSubOffsetByTimestampRequest::GetToTimestamp() const
{
    return m_toTimestamp;
}

void ResetMsgSubOffsetByTimestampRequest::SetToTimestamp(const uint64_t& _toTimestamp)
{
    m_toTimestamp = _toTimestamp;
    m_toTimestampHasBeenSet = true;
}

bool ResetMsgSubOffsetByTimestampRequest::ToTimestampHasBeenSet() const
{
    return m_toTimestampHasBeenSet;
}


