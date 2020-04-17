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

#include <tencentcloud/cmq/v20190304/model/DeleteSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cmq::V20190304::Model;
using namespace rapidjson;
using namespace std;

DeleteSubscribeRequest::DeleteSubscribeRequest() :
    m_topicNameHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false)
{
}

string DeleteSubscribeRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


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


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DeleteSubscribeRequest::GetTopicName() const
{
    return m_topicName;
}

void DeleteSubscribeRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool DeleteSubscribeRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string DeleteSubscribeRequest::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void DeleteSubscribeRequest::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool DeleteSubscribeRequest::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}


