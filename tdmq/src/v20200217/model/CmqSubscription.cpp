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

#include <tencentcloud/tdmq/v20200217/model/CmqSubscription.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

CmqSubscription::CmqSubscription() :
    m_subscriptionNameHasBeenSet(false),
    m_subscriptionIdHasBeenSet(false),
    m_topicOwnerHasBeenSet(false),
    m_msgCountHasBeenSet(false),
    m_lastModifyTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_bindingKeyHasBeenSet(false),
    m_endpointHasBeenSet(false),
    m_filterTagsHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_notifyStrategyHasBeenSet(false),
    m_notifyContentFormatHasBeenSet(false)
{
}

CoreInternalOutcome CmqSubscription::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("SubscriptionName") && !value["SubscriptionName"].IsNull())
    {
        if (!value["SubscriptionName"].IsString())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.SubscriptionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionName = string(value["SubscriptionName"].GetString());
        m_subscriptionNameHasBeenSet = true;
    }

    if (value.HasMember("SubscriptionId") && !value["SubscriptionId"].IsNull())
    {
        if (!value["SubscriptionId"].IsString())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.SubscriptionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionId = string(value["SubscriptionId"].GetString());
        m_subscriptionIdHasBeenSet = true;
    }

    if (value.HasMember("TopicOwner") && !value["TopicOwner"].IsNull())
    {
        if (!value["TopicOwner"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.TopicOwner` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_topicOwner = value["TopicOwner"].GetUint64();
        m_topicOwnerHasBeenSet = true;
    }

    if (value.HasMember("MsgCount") && !value["MsgCount"].IsNull())
    {
        if (!value["MsgCount"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.MsgCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgCount = value["MsgCount"].GetUint64();
        m_msgCountHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTime") && !value["LastModifyTime"].IsNull())
    {
        if (!value["LastModifyTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.LastModifyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTime = value["LastModifyTime"].GetUint64();
        m_lastModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("BindingKey") && !value["BindingKey"].IsNull())
    {
        if (!value["BindingKey"].IsArray())
            return CoreInternalOutcome(Error("response `CmqSubscription.BindingKey` is not array type"));

        const Value &tmpValue = value["BindingKey"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_bindingKey.push_back((*itr).GetString());
        }
        m_bindingKeyHasBeenSet = true;
    }

    if (value.HasMember("Endpoint") && !value["Endpoint"].IsNull())
    {
        if (!value["Endpoint"].IsString())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.Endpoint` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_endpoint = string(value["Endpoint"].GetString());
        m_endpointHasBeenSet = true;
    }

    if (value.HasMember("FilterTags") && !value["FilterTags"].IsNull())
    {
        if (!value["FilterTags"].IsArray())
            return CoreInternalOutcome(Error("response `CmqSubscription.FilterTags` is not array type"));

        const Value &tmpValue = value["FilterTags"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_filterTags.push_back((*itr).GetString());
        }
        m_filterTagsHasBeenSet = true;
    }

    if (value.HasMember("Protocol") && !value["Protocol"].IsNull())
    {
        if (!value["Protocol"].IsString())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.Protocol` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protocol = string(value["Protocol"].GetString());
        m_protocolHasBeenSet = true;
    }

    if (value.HasMember("NotifyStrategy") && !value["NotifyStrategy"].IsNull())
    {
        if (!value["NotifyStrategy"].IsString())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.NotifyStrategy` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyStrategy = string(value["NotifyStrategy"].GetString());
        m_notifyStrategyHasBeenSet = true;
    }

    if (value.HasMember("NotifyContentFormat") && !value["NotifyContentFormat"].IsNull())
    {
        if (!value["NotifyContentFormat"].IsString())
        {
            return CoreInternalOutcome(Error("response `CmqSubscription.NotifyContentFormat` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_notifyContentFormat = string(value["NotifyContentFormat"].GetString());
        m_notifyContentFormatHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmqSubscription::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_subscriptionNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubscriptionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subscriptionName.c_str(), allocator).Move(), allocator);
    }

    if (m_subscriptionIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubscriptionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_subscriptionId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicOwnerHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TopicOwner";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_topicOwner, allocator);
    }

    if (m_msgCountHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MsgCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgCount, allocator);
    }

    if (m_lastModifyTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LastModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_bindingKeyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BindingKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_bindingKey.begin(); itr != m_bindingKey.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_endpointHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Endpoint";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_endpoint.c_str(), allocator).Move(), allocator);
    }

    if (m_filterTagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FilterTags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_filterTags.begin(); itr != m_filterTags.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_protocolHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Protocol";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_protocol.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyStrategyHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotifyStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notifyStrategy.c_str(), allocator).Move(), allocator);
    }

    if (m_notifyContentFormatHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NotifyContentFormat";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_notifyContentFormat.c_str(), allocator).Move(), allocator);
    }

}


string CmqSubscription::GetSubscriptionName() const
{
    return m_subscriptionName;
}

void CmqSubscription::SetSubscriptionName(const string& _subscriptionName)
{
    m_subscriptionName = _subscriptionName;
    m_subscriptionNameHasBeenSet = true;
}

bool CmqSubscription::SubscriptionNameHasBeenSet() const
{
    return m_subscriptionNameHasBeenSet;
}

string CmqSubscription::GetSubscriptionId() const
{
    return m_subscriptionId;
}

void CmqSubscription::SetSubscriptionId(const string& _subscriptionId)
{
    m_subscriptionId = _subscriptionId;
    m_subscriptionIdHasBeenSet = true;
}

bool CmqSubscription::SubscriptionIdHasBeenSet() const
{
    return m_subscriptionIdHasBeenSet;
}

uint64_t CmqSubscription::GetTopicOwner() const
{
    return m_topicOwner;
}

void CmqSubscription::SetTopicOwner(const uint64_t& _topicOwner)
{
    m_topicOwner = _topicOwner;
    m_topicOwnerHasBeenSet = true;
}

bool CmqSubscription::TopicOwnerHasBeenSet() const
{
    return m_topicOwnerHasBeenSet;
}

uint64_t CmqSubscription::GetMsgCount() const
{
    return m_msgCount;
}

void CmqSubscription::SetMsgCount(const uint64_t& _msgCount)
{
    m_msgCount = _msgCount;
    m_msgCountHasBeenSet = true;
}

bool CmqSubscription::MsgCountHasBeenSet() const
{
    return m_msgCountHasBeenSet;
}

uint64_t CmqSubscription::GetLastModifyTime() const
{
    return m_lastModifyTime;
}

void CmqSubscription::SetLastModifyTime(const uint64_t& _lastModifyTime)
{
    m_lastModifyTime = _lastModifyTime;
    m_lastModifyTimeHasBeenSet = true;
}

bool CmqSubscription::LastModifyTimeHasBeenSet() const
{
    return m_lastModifyTimeHasBeenSet;
}

uint64_t CmqSubscription::GetCreateTime() const
{
    return m_createTime;
}

void CmqSubscription::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CmqSubscription::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

vector<string> CmqSubscription::GetBindingKey() const
{
    return m_bindingKey;
}

void CmqSubscription::SetBindingKey(const vector<string>& _bindingKey)
{
    m_bindingKey = _bindingKey;
    m_bindingKeyHasBeenSet = true;
}

bool CmqSubscription::BindingKeyHasBeenSet() const
{
    return m_bindingKeyHasBeenSet;
}

string CmqSubscription::GetEndpoint() const
{
    return m_endpoint;
}

void CmqSubscription::SetEndpoint(const string& _endpoint)
{
    m_endpoint = _endpoint;
    m_endpointHasBeenSet = true;
}

bool CmqSubscription::EndpointHasBeenSet() const
{
    return m_endpointHasBeenSet;
}

vector<string> CmqSubscription::GetFilterTags() const
{
    return m_filterTags;
}

void CmqSubscription::SetFilterTags(const vector<string>& _filterTags)
{
    m_filterTags = _filterTags;
    m_filterTagsHasBeenSet = true;
}

bool CmqSubscription::FilterTagsHasBeenSet() const
{
    return m_filterTagsHasBeenSet;
}

string CmqSubscription::GetProtocol() const
{
    return m_protocol;
}

void CmqSubscription::SetProtocol(const string& _protocol)
{
    m_protocol = _protocol;
    m_protocolHasBeenSet = true;
}

bool CmqSubscription::ProtocolHasBeenSet() const
{
    return m_protocolHasBeenSet;
}

string CmqSubscription::GetNotifyStrategy() const
{
    return m_notifyStrategy;
}

void CmqSubscription::SetNotifyStrategy(const string& _notifyStrategy)
{
    m_notifyStrategy = _notifyStrategy;
    m_notifyStrategyHasBeenSet = true;
}

bool CmqSubscription::NotifyStrategyHasBeenSet() const
{
    return m_notifyStrategyHasBeenSet;
}

string CmqSubscription::GetNotifyContentFormat() const
{
    return m_notifyContentFormat;
}

void CmqSubscription::SetNotifyContentFormat(const string& _notifyContentFormat)
{
    m_notifyContentFormat = _notifyContentFormat;
    m_notifyContentFormatHasBeenSet = true;
}

bool CmqSubscription::NotifyContentFormatHasBeenSet() const
{
    return m_notifyContentFormatHasBeenSet;
}

