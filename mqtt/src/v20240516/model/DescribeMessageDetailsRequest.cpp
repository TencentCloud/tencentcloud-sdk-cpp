/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/mqtt/v20240516/model/DescribeMessageDetailsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

DescribeMessageDetailsRequest::DescribeMessageDetailsRequest() :
    m_instanceIdHasBeenSet(false),
    m_messageIdHasBeenSet(false),
    m_subscriptionHasBeenSet(false)
{
}

string DescribeMessageDetailsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_messageIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MessageId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_messageId.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Subscription";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscription.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMessageDetailsRequest::GetInstanceId() const
{
    return m_instanceId;
}

void DescribeMessageDetailsRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool DescribeMessageDetailsRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string DescribeMessageDetailsRequest::GetMessageId() const
{
    return m_messageId;
}

void DescribeMessageDetailsRequest::SetMessageId(const string& _messageId)
{
    m_messageId = _messageId;
    m_messageIdHasBeenSet = true;
}

bool DescribeMessageDetailsRequest::MessageIdHasBeenSet() const
{
    return m_messageIdHasBeenSet;
}

string DescribeMessageDetailsRequest::GetSubscription() const
{
    return m_subscription;
}

void DescribeMessageDetailsRequest::SetSubscription(const string& _subscription)
{
    m_subscription = _subscription;
    m_subscriptionHasBeenSet = true;
}

bool DescribeMessageDetailsRequest::SubscriptionHasBeenSet() const
{
    return m_subscriptionHasBeenSet;
}


