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

#include <tencentcloud/tdmq/v20200217/model/RouterRocketMQSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RouterRocketMQSource::RouterRocketMQSource() :
    m_accessKeyHasBeenSet(false),
    m_filterExpressionHasBeenSet(false),
    m_filterFromTimestampMsHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_groupHasBeenSet(false),
    m_nameServerAddressListHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_sourceConsumeConcurrentThreadCountHasBeenSet(false)
{
}

CoreInternalOutcome RouterRocketMQSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("FilterExpression") && !value["FilterExpression"].IsNull())
    {
        if (!value["FilterExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.FilterExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterExpression = string(value["FilterExpression"].GetString());
        m_filterExpressionHasBeenSet = true;
    }

    if (value.HasMember("FilterFromTimestampMs") && !value["FilterFromTimestampMs"].IsNull())
    {
        if (!value["FilterFromTimestampMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.FilterFromTimestampMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filterFromTimestampMs = value["FilterFromTimestampMs"].GetInt64();
        m_filterFromTimestampMsHasBeenSet = true;
    }

    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.FilterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = string(value["FilterType"].GetString());
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("Group") && !value["Group"].IsNull())
    {
        if (!value["Group"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.Group` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_group = string(value["Group"].GetString());
        m_groupHasBeenSet = true;
    }

    if (value.HasMember("NameServerAddressList") && !value["NameServerAddressList"].IsNull())
    {
        if (!value["NameServerAddressList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.NameServerAddressList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameServerAddressList = string(value["NameServerAddressList"].GetString());
        m_nameServerAddressListHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("SourceConsumeConcurrentThreadCount") && !value["SourceConsumeConcurrentThreadCount"].IsNull())
    {
        if (!value["SourceConsumeConcurrentThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQSource.SourceConsumeConcurrentThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceConsumeConcurrentThreadCount = value["SourceConsumeConcurrentThreadCount"].GetInt64();
        m_sourceConsumeConcurrentThreadCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterRocketMQSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_filterExpressionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterExpression";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterExpression.c_str(), allocator).Move(), allocator);
    }

    if (m_filterFromTimestampMsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterFromTimestampMs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_filterFromTimestampMs, allocator);
    }

    if (m_filterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_filterType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Group";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_group.c_str(), allocator).Move(), allocator);
    }

    if (m_nameServerAddressListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NameServerAddressList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nameServerAddressList.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceConsumeConcurrentThreadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceConsumeConcurrentThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sourceConsumeConcurrentThreadCount, allocator);
    }

}


string RouterRocketMQSource::GetAccessKey() const
{
    return m_accessKey;
}

void RouterRocketMQSource::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool RouterRocketMQSource::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string RouterRocketMQSource::GetFilterExpression() const
{
    return m_filterExpression;
}

void RouterRocketMQSource::SetFilterExpression(const string& _filterExpression)
{
    m_filterExpression = _filterExpression;
    m_filterExpressionHasBeenSet = true;
}

bool RouterRocketMQSource::FilterExpressionHasBeenSet() const
{
    return m_filterExpressionHasBeenSet;
}

int64_t RouterRocketMQSource::GetFilterFromTimestampMs() const
{
    return m_filterFromTimestampMs;
}

void RouterRocketMQSource::SetFilterFromTimestampMs(const int64_t& _filterFromTimestampMs)
{
    m_filterFromTimestampMs = _filterFromTimestampMs;
    m_filterFromTimestampMsHasBeenSet = true;
}

bool RouterRocketMQSource::FilterFromTimestampMsHasBeenSet() const
{
    return m_filterFromTimestampMsHasBeenSet;
}

string RouterRocketMQSource::GetFilterType() const
{
    return m_filterType;
}

void RouterRocketMQSource::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool RouterRocketMQSource::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string RouterRocketMQSource::GetGroup() const
{
    return m_group;
}

void RouterRocketMQSource::SetGroup(const string& _group)
{
    m_group = _group;
    m_groupHasBeenSet = true;
}

bool RouterRocketMQSource::GroupHasBeenSet() const
{
    return m_groupHasBeenSet;
}

string RouterRocketMQSource::GetNameServerAddressList() const
{
    return m_nameServerAddressList;
}

void RouterRocketMQSource::SetNameServerAddressList(const string& _nameServerAddressList)
{
    m_nameServerAddressList = _nameServerAddressList;
    m_nameServerAddressListHasBeenSet = true;
}

bool RouterRocketMQSource::NameServerAddressListHasBeenSet() const
{
    return m_nameServerAddressListHasBeenSet;
}

string RouterRocketMQSource::GetSecretKey() const
{
    return m_secretKey;
}

void RouterRocketMQSource::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool RouterRocketMQSource::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string RouterRocketMQSource::GetTopic() const
{
    return m_topic;
}

void RouterRocketMQSource::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RouterRocketMQSource::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RouterRocketMQSource::GetNamespace() const
{
    return m_namespace;
}

void RouterRocketMQSource::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RouterRocketMQSource::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t RouterRocketMQSource::GetSourceConsumeConcurrentThreadCount() const
{
    return m_sourceConsumeConcurrentThreadCount;
}

void RouterRocketMQSource::SetSourceConsumeConcurrentThreadCount(const int64_t& _sourceConsumeConcurrentThreadCount)
{
    m_sourceConsumeConcurrentThreadCount = _sourceConsumeConcurrentThreadCount;
    m_sourceConsumeConcurrentThreadCountHasBeenSet = true;
}

bool RouterRocketMQSource::SourceConsumeConcurrentThreadCountHasBeenSet() const
{
    return m_sourceConsumeConcurrentThreadCountHasBeenSet;
}

