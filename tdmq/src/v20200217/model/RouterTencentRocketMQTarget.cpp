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

#include <tencentcloud/tdmq/v20200217/model/RouterTencentRocketMQTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RouterTencentRocketMQTarget::RouterTencentRocketMQTarget() :
    m_topicHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_targetProduceConcurrentThreadCountHasBeenSet(false),
    m_targetRegionHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_accessKeyHasBeenSet(false),
    m_secretKeyHasBeenSet(false)
{
}

CoreInternalOutcome RouterTencentRocketMQTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQTarget.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("ClusterId") && !value["ClusterId"].IsNull())
    {
        if (!value["ClusterId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQTarget.ClusterId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterId = string(value["ClusterId"].GetString());
        m_clusterIdHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQTarget.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("TargetProduceConcurrentThreadCount") && !value["TargetProduceConcurrentThreadCount"].IsNull())
    {
        if (!value["TargetProduceConcurrentThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQTarget.TargetProduceConcurrentThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetProduceConcurrentThreadCount = value["TargetProduceConcurrentThreadCount"].GetInt64();
        m_targetProduceConcurrentThreadCountHasBeenSet = true;
    }

    if (value.HasMember("TargetRegion") && !value["TargetRegion"].IsNull())
    {
        if (!value["TargetRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQTarget.TargetRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetRegion = string(value["TargetRegion"].GetString());
        m_targetRegionHasBeenSet = true;
    }

    if (value.HasMember("RoleName") && !value["RoleName"].IsNull())
    {
        if (!value["RoleName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQTarget.RoleName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_roleName = string(value["RoleName"].GetString());
        m_roleNameHasBeenSet = true;
    }

    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQTarget.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterTencentRocketMQTarget.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterTencentRocketMQTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

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

    if (m_targetProduceConcurrentThreadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetProduceConcurrentThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetProduceConcurrentThreadCount, allocator);
    }

    if (m_targetRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetRegion.c_str(), allocator).Move(), allocator);
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


string RouterTencentRocketMQTarget::GetTopic() const
{
    return m_topic;
}

void RouterTencentRocketMQTarget::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RouterTencentRocketMQTarget::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RouterTencentRocketMQTarget::GetClusterId() const
{
    return m_clusterId;
}

void RouterTencentRocketMQTarget::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool RouterTencentRocketMQTarget::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string RouterTencentRocketMQTarget::GetNamespace() const
{
    return m_namespace;
}

void RouterTencentRocketMQTarget::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RouterTencentRocketMQTarget::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t RouterTencentRocketMQTarget::GetTargetProduceConcurrentThreadCount() const
{
    return m_targetProduceConcurrentThreadCount;
}

void RouterTencentRocketMQTarget::SetTargetProduceConcurrentThreadCount(const int64_t& _targetProduceConcurrentThreadCount)
{
    m_targetProduceConcurrentThreadCount = _targetProduceConcurrentThreadCount;
    m_targetProduceConcurrentThreadCountHasBeenSet = true;
}

bool RouterTencentRocketMQTarget::TargetProduceConcurrentThreadCountHasBeenSet() const
{
    return m_targetProduceConcurrentThreadCountHasBeenSet;
}

string RouterTencentRocketMQTarget::GetTargetRegion() const
{
    return m_targetRegion;
}

void RouterTencentRocketMQTarget::SetTargetRegion(const string& _targetRegion)
{
    m_targetRegion = _targetRegion;
    m_targetRegionHasBeenSet = true;
}

bool RouterTencentRocketMQTarget::TargetRegionHasBeenSet() const
{
    return m_targetRegionHasBeenSet;
}

string RouterTencentRocketMQTarget::GetRoleName() const
{
    return m_roleName;
}

void RouterTencentRocketMQTarget::SetRoleName(const string& _roleName)
{
    m_roleName = _roleName;
    m_roleNameHasBeenSet = true;
}

bool RouterTencentRocketMQTarget::RoleNameHasBeenSet() const
{
    return m_roleNameHasBeenSet;
}

string RouterTencentRocketMQTarget::GetAccessKey() const
{
    return m_accessKey;
}

void RouterTencentRocketMQTarget::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool RouterTencentRocketMQTarget::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string RouterTencentRocketMQTarget::GetSecretKey() const
{
    return m_secretKey;
}

void RouterTencentRocketMQTarget::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool RouterTencentRocketMQTarget::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

