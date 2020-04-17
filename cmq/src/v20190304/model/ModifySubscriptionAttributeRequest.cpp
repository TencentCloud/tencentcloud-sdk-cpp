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

#include <tencentcloud/cmq/v20190304/model/ModifySubscriptionAttributeRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cmq::V20190304::Model;
using namespace rapidjson;
using namespace std;

ModifySubscriptionAttributeRequest::ModifySubscriptionAttributeRequest() :
    m_topicNameHasBeenSet(false),
    m_subscriptionNameHasBeenSet(false),
    m_notifyStrategyHasBeenSet(false),
    m_notifyContentFormatHasBeenSet(false),
    m_filterTagsHasBeenSet(false),
    m_bindingKeyHasBeenSet(false)
{
}

string ModifySubscriptionAttributeRequest::ToJsonString() const
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

    if (m_notifyStrategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotifyStrategy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_notifyStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyContentFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotifyContentFormat";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_notifyContentFormat.c_str(), allocator).Move(), allocator);
    }

    if (m_filterTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FilterTags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_filterTags.begin(); itr != m_filterTags.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_bindingKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindingKey";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_bindingKey.begin(); itr != m_bindingKey.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifySubscriptionAttributeRequest::GetTopicName() const
{
    return m_topicName;
}

void ModifySubscriptionAttributeRequest::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool ModifySubscriptionAttributeRequest::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string ModifySubscriptionAttributeRequest::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void ModifySubscriptionAttributeRequest::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool ModifySubscriptionAttributeRequest::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

string ModifySubscriptionAttributeRequest::GetNotifyStrategy() const
{
    return m_notifyStrategy;
}

void ModifySubscriptionAttributeRequest::SetNotifyStrategy(const string& _notifyStrategy)
{
    m_notifyStrategy = _notifyStrategy;
    m_notifyStrategyHasBeenSet = true;
}

bool ModifySubscriptionAttributeRequest::NotifyStrategyHasBeenSet() const
{
    return m_notifyStrategyHasBeenSet;
}

string ModifySubscriptionAttributeRequest::GetNotifyContentFormat() const
{
    return m_notifyContentFormat;
}

void ModifySubscriptionAttributeRequest::SetNotifyContentFormat(const string& _notifyContentFormat)
{
    m_notifyContentFormat = _notifyContentFormat;
    m_notifyContentFormatHasBeenSet = true;
}

bool ModifySubscriptionAttributeRequest::NotifyContentFormatHasBeenSet() const
{
    return m_notifyContentFormatHasBeenSet;
}

vector<string> ModifySubscriptionAttributeRequest::GetFilterTags() const
{
    return m_filterTags;
}

void ModifySubscriptionAttributeRequest::SetFilterTags(const vector<string>& _filterTags)
{
    m_filterTags = _filterTags;
    m_filterTagsHasBeenSet = true;
}

bool ModifySubscriptionAttributeRequest::FilterTagsHasBeenSet() const
{
    return m_filterTagsHasBeenSet;
}

vector<string> ModifySubscriptionAttributeRequest::GetBindingKey() const
{
    return m_bindingKey;
}

void ModifySubscriptionAttributeRequest::SetBindingKey(const vector<string>& _bindingKey)
{
    m_bindingKey = _bindingKey;
    m_bindingKeyHasBeenSet = true;
}

bool ModifySubscriptionAttributeRequest::BindingKeyHasBeenSet() const
{
    return m_bindingKeyHasBeenSet;
}


