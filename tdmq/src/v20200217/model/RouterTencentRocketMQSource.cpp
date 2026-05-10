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

#include <tencentcloud/tdmq/v20200217/model/RouterTencentRocketMQSource.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RouterTencentRocketMQSource::RouterTencentRocketMQSource() :
    m_filterExpressionHasBeenSet(false),
    m_filterFromTimestampMsHasBeenSet(false),
    m_filterTypeHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_sourceConsumeConcurrentThreadCountHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
}

CoreInternalOutcome RouterTencentRocketMQSource::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("FilterExpression") && !value["FilterExpression"].IsNull())
    {
        if (!value["FilterExpression"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.FilterExpression` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterExpression = string(value["FilterExpression"].GetString());
        m_filterExpressionHasBeenSet = true;
    }

    if (value.HasMember("FilterFromTimestampMs") && !value["FilterFromTimestampMs"].IsNull())
    {
        if (!value["FilterFromTimestampMs"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.FilterFromTimestampMs` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_filterFromTimestampMs = value["FilterFromTimestampMs"].GetInt64();
        m_filterFromTimestampMsHasBeenSet = true;
    }

    if (value.HasMember("FilterType") && !value["FilterType"].IsNull())
    {
        if (!value["FilterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.FilterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_filterType = string(value["FilterType"].GetString());
        m_filterTypeHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("SourceConsumeConcurrentThreadCount") && !value["SourceConsumeConcurrentThreadCount"].IsNull())
    {
        if (!value["SourceConsumeConcurrentThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.SourceConsumeConcurrentThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sourceConsumeConcurrentThreadCount = value["SourceConsumeConcurrentThreadCount"].GetInt64();
        m_sourceConsumeConcurrentThreadCountHasBeenSet = true;
    }

    if (value.HasMember("SourceRegion") && !value["SourceRegion"].IsNull())
    {
        if (!value["SourceRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.SourceRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sourceRegion = string(value["SourceRegion"].GetString());
        m_sourceRegionHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQSource.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterTencentRocketMQSource::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_topicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Topic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topic.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterId.c_str(), allocator).Move(), allocator);
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

    if (m_sourceRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sourceRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_roleNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RoleName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_roleName.c_str(), allocator).Move(), allocator);
    }

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
    }

    if (m_secretKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretKey.c_str(), allocator).Move(), allocator);
    }

}


string RouterTencentRocketMQSource::GetFilterExpression() const
{
    return m_filterExpression;
}

void RouterTencentRocketMQSource::SetFilterExpression(const string& _filterExpression)
{
    m_filterExpression = _filterExpression;
    m_filterExpressionHasBeenSet = true;
}

bool RouterTencentRocketMQSource::FilterExpressionHasBeenSet() const
{
    return m_filterExpressionHasBeenSet;
}

int64_t RouterTencentRocketMQSource::GetFilterFromTimestampMs() const
{
    return m_filterFromTimestampMs;
}

void RouterTencentRocketMQSource::SetFilterFromTimestampMs(const int64_t& _filterFromTimestampMs)
{
    m_filterFromTimestampMs = _filterFromTimestampMs;
    m_filterFromTimestampMsHasBeenSet = true;
}

bool RouterTencentRocketMQSource::FilterFromTimestampMsHasBeenSet() const
{
    return m_filterFromTimestampMsHasBeenSet;
}

string RouterTencentRocketMQSource::GetFilterType() const
{
    return m_filterType;
}

void RouterTencentRocketMQSource::SetFilterType(const string& _filterType)
{
    m_filterType = _filterType;
    m_filterTypeHasBeenSet = true;
}

bool RouterTencentRocketMQSource::FilterTypeHasBeenSet() const
{
    return m_filterTypeHasBeenSet;
}

string RouterTencentRocketMQSource::GetTopic() const
{
    return m_topic;
}

void RouterTencentRocketMQSource::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RouterTencentRocketMQSource::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RouterTencentRocketMQSource::GetClusterId() const
{
    return m_clusterId;
}

void RouterTencentRocketMQSource::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RouterTencentRocketMQSource::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RouterTencentRocketMQSource::GetNamespace() const
{
    return m_namespace;
}

void RouterTencentRocketMQSource::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RouterTencentRocketMQSource::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t RouterTencentRocketMQSource::GetSourceConsumeConcurrentThreadCount() const
{
    return m_sourceConsumeConcurrentThreadCount;
}

void RouterTencentRocketMQSource::SetSourceConsumeConcurrentThreadCount(const int64_t& _sourceConsumeConcurrentThreadCount)
{
    m_sourceConsumeConcurrentThreadCount = _sourceConsumeConcurrentThreadCount;
    m_sourceConsumeConcurrentThreadCountHasBeenSet = true;
}

bool RouterTencentRocketMQSource::SourceConsumeConcurrentThreadCountHasBeenSet() const
{
    return m_sourceConsumeConcurrentThreadCountHasBeenSet;
}

string RouterTencentRocketMQSource::GetSourceRegion() const
{
    return m_sourceRegion;
}

void RouterTencentRocketMQSource::SetSourceRegion(const string& _sourceRegion)
{
    m_sourceRegion = _sourceRegion;
    m_sourceRegionHasBeenSet = true;
}

bool RouterTencentRocketMQSource::SourceRegionHasBeenSet() const
{
    return m_sourceRegionHasBeenSet;
}

string RouterTencentRocketMQSource::GetRoleName() const
{
    return m_roleName;
}

void RouterTencentRocketMQSource::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RouterTencentRocketMQSource::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RouterTencentRocketMQSource::GetAccessKey() const
{
    return m_accessKey;
}

void RouterTencentRocketMQSource::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool RouterTencentRocketMQSource::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string RouterTencentRocketMQSource::GetSecretKey() const
{
    return m_secretKey;
}

void RouterTencentRocketMQSource::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool RouterTencentRocketMQSource::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

