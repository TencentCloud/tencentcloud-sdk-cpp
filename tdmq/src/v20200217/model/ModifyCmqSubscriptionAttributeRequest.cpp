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

#include <tencentcloud/tdmq/v20200217/model/ModifyCmqSubscriptionAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

ModifyCmqSubscriptionAttributeRequest::ModifyCmqSubscriptionAttributeRequest() :
    m_topicNameHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_notifyStrategyHasBeenSet(false),
    m_notifyContentFormatHasBeenSet(false),
    m_filterTagsHasBeenSet(false),
    m_bindingKeyHasBeenSet(false)
{
}

string ModifyCmqSubscriptionAttributeRequest::ToJsonString() const
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

    if (m_notifyStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyContentFormatHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotifyContentFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_notifyContentFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_filterTagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_filterTags.begin(); itr != m_filterTags.end(); ++itr)
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyCmqSubscriptionAttributeRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifyCmqSubscriptionAttributeRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifyCmqSubscriptionAttributeRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ModifyCmqSubscriptionAttributeRequest::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void ModifyCmqSubscriptionAttributeRequest::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool ModifyCmqSubscriptionAttributeRequest::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

string ModifyCmqSubscriptionAttributeRequest::GetNotifyStrategy() const
{
    return m_notifyStrategy;
}

void ModifyCmqSubscriptionAttributeRequest::SetNotifyStrategy(const string& _notifyStrategy)
{
    m_notifyStrategy = _notifyStrategy;
    m_notifyStrategyHasBeenSet = true;
}

bool ModifyCmqSubscriptionAttributeRequest::NotifyStrategyHasBeenSet() const
{
    return m_notifyStrategyHasBeenSet;
}

string ModifyCmqSubscriptionAttributeRequest::GetNotifyContentFormat() const
{
    return m_notifyContentFormat;
}

void ModifyCmqSubscriptionAttributeRequest::SetNotifyContentFormat(const string& _notifyContentFormat)
{
    m_notifyContentFormat = _notifyContentFormat;
    m_notifyContentFormatHasBeenSet = true;
}

bool ModifyCmqSubscriptionAttributeRequest::NotifyContentFormatHasBeenSet() const
{
    return m_notifyContentFormatHasBeenSet;
}

vector<string> ModifyCmqSubscriptionAttributeRequest::GetFilterTags() const
{
    return m_filterTags;
}

void ModifyCmqSubscriptionAttributeRequest::SetFilterTags(const vector<string>& _filterTags)
{
    m_filterTags = _filterTags;
    m_filterTagsHasBeenSet = true;
}

bool ModifyCmqSubscriptionAttributeRequest::FilterTagsHasBeenSet() const
{
    return m_filterTagsHasBeenSet;
}

vector<string> ModifyCmqSubscriptionAttributeRequest::GetBindingKey() const
{
    return m_bindingKey;
}

void ModifyCmqSubscriptionAttributeRequest::SetBindingKey(const vector<string>& _bindingKey)
{
    m_bindingKey = _bindingKey;
    m_bindingKeyHasBeenSet = true;
}

bool ModifyCmqSubscriptionAttributeRequest::BindingKeyHasBeenSet() const
{
    return m_bindingKeyHasBeenSet;
}


