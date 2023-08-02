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

#include <tencentcloud/tdmq/v20200217/model/CmqTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

CmqTopic::CmqTopic() :
    m_topicIdHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_msgRetentionSecondsHasBeenSet(false),
    m_maxMsgSizeHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_lastModifyTimeHasBeenSet(false),
    m_msgCountHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_traceHasBeenSet(false),
    m_tenantIdHasBeenSet(false),
    m_namespaceNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_brokerTypeHasBeenSet(false),
    m_subscriptionCountHasBeenSet(false)
{
}

CoreInternalOutcome CmqTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicId") && !value["TopicId"].IsNull())
    {
        if (!value["TopicId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.TopicId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicId = string(value["TopicId"].GetString());
        m_topicIdHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("MsgRetentionSeconds") && !value["MsgRetentionSeconds"].IsNull())
    {
        if (!value["MsgRetentionSeconds"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.MsgRetentionSeconds` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgRetentionSeconds = value["MsgRetentionSeconds"].GetUint64();
        m_msgRetentionSecondsHasBeenSet = true;
    }

    if (value.HasMember("MaxMsgSize") && !value["MaxMsgSize"].IsNull())
    {
        if (!value["MaxMsgSize"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.MaxMsgSize` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_maxMsgSize = value["MaxMsgSize"].GetUint64();
        m_maxMsgSizeHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.Qps` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetUint64();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.FilterType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = value["FilterType"].GetUint64();
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("LastModifyTime") && !value["LastModifyTime"].IsNull())
    {
        if (!value["LastModifyTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.LastModifyTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_lastModifyTime = value["LastModifyTime"].GetUint64();
        m_lastModifyTimeHasBeenSet = true;
    }

    if (value.HasMember("MsgCount") && !value["MsgCount"].IsNull())
    {
        if (!value["MsgCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.MsgCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_msgCount = value["MsgCount"].GetUint64();
        m_msgCountHasBeenSet = true;
    }

    if (value.HasMember("CreateUin") && !value["CreateUin"].IsNull())
    {
        if (!value["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = value["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CmqTopic.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("Trace") && !value["Trace"].IsNull())
    {
        if (!value["Trace"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.Trace` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_trace = value["Trace"].GetBool();
        m_traceHasBeenSet = true;
    }

    if (value.HasMember("TenantId") && !value["TenantId"].IsNull())
    {
        if (!value["TenantId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.TenantId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tenantId = string(value["TenantId"].GetString());
        m_tenantIdHasBeenSet = true;
    }

    if (value.HasMember("NamespaceName") && !value["NamespaceName"].IsNull())
    {
        if (!value["NamespaceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.NamespaceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceName = string(value["NamespaceName"].GetString());
        m_namespaceNameHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("BrokerType") && !value["BrokerType"].IsNull())
    {
        if (!value["BrokerType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.BrokerType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_brokerType = value["BrokerType"].GetInt64();
        m_brokerTypeHasBeenSet = true;
    }

    if (value.HasMember("SubscriptionCount") && !value["SubscriptionCount"].IsNull())
    {
        if (!value["SubscriptionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CmqTopic.SubscriptionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_subscriptionCount = value["SubscriptionCount"].GetInt64();
        m_subscriptionCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CmqTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicId.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_msgRetentionSecondsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgRetentionSeconds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgRetentionSeconds, allocator);
    }

    if (m_maxMsgSizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxMsgSize";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxMsgSize, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterType, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_lastModifyTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LastModifyTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_lastModifyTime, allocator);
    }

    if (m_msgCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MsgCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_msgCount, allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUin, allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_traceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Trace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_trace, allocator);
    }

    if (m_tenantIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TenantId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tenantId.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceName.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_brokerTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BrokerType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_brokerType, allocator);
    }

    if (m_subscriptionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubscriptionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subscriptionCount, allocator);
    }

}


string CmqTopic::GetTopicId() const
{
    return m_topicId;
}

void CmqTopic::SetTopicId(const string& _topicId)
{
    m_topicId = _topicId;
    m_topicIdHasBeenSet = true;
}

bool CmqTopic::TopicIdHasBeenSet() const
{
    return m_topicIdHasBeenSet;
}

string CmqTopic::GetTopicName() const
{
    return m_topicName;
}

void CmqTopic::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool CmqTopic::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

uint64_t CmqTopic::GetMsgRetentionSeconds() const
{
    return m_msgRetentionSeconds;
}

void CmqTopic::SetMsgRetentionSeconds(const uint64_t& _msgRetentionSeconds)
{
    m_msgRetentionSeconds = _msgRetentionSeconds;
    m_msgRetentionSecondsHasBeenSet = true;
}

bool CmqTopic::MsgRetentionSecondsHasBeenSet() const
{
    return m_msgRetentionSecondsHasBeenSet;
}

uint64_t CmqTopic::GetMaxMsgSize() const
{
    return m_maxMsgSize;
}

void CmqTopic::SetMaxMsgSize(const uint64_t& _maxMsgSize)
{
    m_maxMsgSize = _maxMsgSize;
    m_maxMsgSizeHasBeenSet = true;
}

bool CmqTopic::MaxMsgSizeHasBeenSet() const
{
    return m_maxMsgSizeHasBeenSet;
}

uint64_t CmqTopic::GetQps() const
{
    return m_qps;
}

void CmqTopic::SetQps(const uint64_t& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool CmqTopic::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

uint64_t CmqTopic::GetFilterType() const
{
    return m_filterType;
}

void CmqTopic::SetFilterType(const uint64_t& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool CmqTopic::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

uint64_t CmqTopic::GetCreateTime() const
{
    return m_createTime;
}

void CmqTopic::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CmqTopic::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t CmqTopic::GetLastModifyTime() const
{
    return m_lastModifyTime;
}

void CmqTopic::SetLastModifyTime(const uint64_t& _lastModifyTime)
{
    m_lastModifyTime = _lastModifyTime;
    m_lastModifyTimeHasBeenSet = true;
}

bool CmqTopic::LastModifyTimeHasBeenSet() const
{
    return m_lastModifyTimeHasBeenSet;
}

uint64_t CmqTopic::GetMsgCount() const
{
    return m_msgCount;
}

void CmqTopic::SetMsgCount(const uint64_t& _msgCount)
{
    m_msgCount = _msgCount;
    m_msgCountHasBeenSet = true;
}

bool CmqTopic::MsgCountHasBeenSet() const
{
    return m_msgCountHasBeenSet;
}

uint64_t CmqTopic::GetCreateUin() const
{
    return m_createUin;
}

void CmqTopic::SetCreateUin(const uint64_t& _createUin)
{
    m_createUin = _createUin;
    m_createUinHasBeenSet = true;
}

bool CmqTopic::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

vector<Tag> CmqTopic::GetTags() const
{
    return m_tags;
}

void CmqTopic::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CmqTopic::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

bool CmqTopic::GetTrace() const
{
    return m_trace;
}

void CmqTopic::SetTrace(const bool& _trace)
{
    m_trace = _trace;
    m_traceHasBeenSet = true;
}

bool CmqTopic::TraceHasBeenSet() const
{
    return m_traceHasBeenSet;
}

string CmqTopic::GetTenantId() const
{
    return m_tenantId;
}

void CmqTopic::SetTenantId(const string& _tenantId)
{
    m_tenantId = _tenantId;
    m_tenantIdHasBeenSet = true;
}

bool CmqTopic::TenantIdHasBeenSet() const
{
    return m_tenantIdHasBeenSet;
}

string CmqTopic::GetNamespaceName() const
{
    return m_namespaceName;
}

void CmqTopic::SetNamespaceName(const string& _namespaceName)
{
    m_namespaceName = _namespaceName;
    m_namespaceNameHasBeenSet = true;
}

bool CmqTopic::NamespaceNameHasBeenSet() const
{
    return m_namespaceNameHasBeenSet;
}

int64_t CmqTopic::GetStatus() const
{
    return m_status;
}

void CmqTopic::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CmqTopic::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

int64_t CmqTopic::GetBrokerType() const
{
    return m_brokerType;
}

void CmqTopic::SetBrokerType(const int64_t& _brokerType)
{
    m_brokerType = _brokerType;
    m_brokerTypeHasBeenSet = true;
}

bool CmqTopic::BrokerTypeHasBeenSet() const
{
    return m_brokerTypeHasBeenSet;
}

int64_t CmqTopic::GetSubscriptionCount() const
{
    return m_subscriptionCount;
}

void CmqTopic::SetSubscriptionCount(const int64_t& _subscriptionCount)
{
    m_subscriptionCount = _subscriptionCount;
    m_subscriptionCountHasBeenSet = true;
}

bool CmqTopic::SubscriptionCountHasBeenSet() const
{
    return m_subscriptionCountHasBeenSet;
}

