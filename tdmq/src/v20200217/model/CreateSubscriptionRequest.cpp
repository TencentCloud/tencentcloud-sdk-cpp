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

#include <tencentcloud/tdmq/v20200217/model/CreateSubscriptionRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

CreateSubscriptionRequest::CreateSubscriptionRequest() :
    m_environmentIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_isIdempotentHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

string CreateSubscriptionRequest::ToJsonString() const
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

    if (m_subscriptionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubscriptionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_subscriptionName.c_str(), allocator).Move(), allocator);
    }

    if (m_isIdempotentHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsIdempotent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isIdempotent, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_remark.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateSubscriptionRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void CreateSubscriptionRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool CreateSubscriptionRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}

string CreateSubscriptionRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateSubscriptionRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateSubscriptionRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CreateSubscriptionRequest::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void CreateSubscriptionRequest::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool CreateSubscriptionRequest::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

bool CreateSubscriptionRequest::GetIsIdempotent() const
{
    return m_isIdempotent;
}

void CreateSubscriptionRequest::SetIsIdempotent(const bool& _isIdempotent)
{
    m_isIdempotent = _isIdempotent;
    m_isIdempotentHasBeenSet = true;
}

bool CreateSubscriptionRequest::IsIdempotentHasBeenSet() const
{
    return m_isIdempotentHasBeenSet;
}

string CreateSubscriptionRequest::GetRemark() const
{
    return m_remark;
}

void CreateSubscriptionRequest::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool CreateSubscriptionRequest::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}


