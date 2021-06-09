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

#include <tencentcloud/tdmq/v20200217/model/CreateCmqSubscribeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CreateCmqSubscribeRequest::CreateCmqSubscribeRequest() :
    m_topicNameHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_notifyStrategyHasBeenSet(false),
    m_filterTagHasBeenSet(false),
    m_bindingKeyHasBeenSet(false),
    m_notifyContentFormatHasBeenSet(false)
{
}

string CreateCmqSubscribeRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriptionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_subscriptionName.c_str(), allocator).Move(), allocator);
    }

    if (m_protocolHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_endpointHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_filterTagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTag";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterTag.begin(); itr != m_filterTag.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bindingKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BindingKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_bindingKey.begin(); itr != m_bindingKey.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_notifyContentFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyContentFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyContentFormat.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateCmqSubscribeRequest::GetTopicName() const
{
    return m_topicName;
}

void CreateCmqSubscribeRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CreateCmqSubscribeRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string CreateCmqSubscribeRequest::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void CreateCmqSubscribeRequest::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool CreateCmqSubscribeRequest::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

string CreateCmqSubscribeRequest::GetProtocol() const
{
    return m_protocol;
}

void CreateCmqSubscribeRequest::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CreateCmqSubscribeRequest::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CreateCmqSubscribeRequest::GetEndpoint() const
{
    return m_endpoint;
}

void CreateCmqSubscribeRequest::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CreateCmqSubscribeRequest::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

string CreateCmqSubscribeRequest::GetNotifyStrategy() const
{
    return m_notifyStrategy;
}

void CreateCmqSubscribeRequest::SetNotifyStrategy(const string& _notifyStrategy)
{
    m_notifyStrategy = _notifyStrategy;
    m_notifyStrategyHasBeenSet = true;
}

bool CreateCmqSubscribeRequest::NotifyStrategyHasBeenSet() const
{
    return m_notifyStrategyHasBeenSet;
}

vector<string> CreateCmqSubscribeRequest::GetFilterTag() const
{
    return m_filterTag;
}

void CreateCmqSubscribeRequest::SetFilterTag(const vector<string>& _filterTag)
{
    m_filterTag = _filterTag;
    m_filterTagHasBeenSet = true;
}

bool CreateCmqSubscribeRequest::FilterTagHasBeenSet() const
{
    return m_filterTagHasBeenSet;
}

vector<string> CreateCmqSubscribeRequest::GetBindingKey() const
{
    return m_bindingKey;
}

void CreateCmqSubscribeRequest::SetBindingKey(const vector<string>& _bindingKey)
{
    m_bindingKey = _bindingKey;
    m_bindingKeyHasBeenSet = true;
}

bool CreateCmqSubscribeRequest::BindingKeyHasBeenSet() const
{
    return m_bindingKeyHasBeenSet;
}

string CreateCmqSubscribeRequest::GetNotifyContentFormat() const
{
    return m_notifyContentFormat;
}

void CreateCmqSubscribeRequest::SetNotifyContentFormat(const string& _notifyContentFormat)
{
    m_notifyContentFormat = _notifyContentFormat;
    m_notifyContentFormatHasBeenSet = true;
}

bool CreateCmqSubscribeRequest::NotifyContentFormatHasBeenSet() const
{
    return m_notifyContentFormatHasBeenSet;
}


