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

#include <tencentcloud/tdmq/v20200217/model/RouterRocketMQTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RouterRocketMQTarget::RouterRocketMQTarget() :
    m_accessKeyHasBeenSet(false),
    m_nameServerAddressListHasBeenSet(false),
    m_secretKeyHasBeenSet(false),
    m_topicHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_targetProduceConcurrentThreadCountHasBeenSet(false)
{
}

CoreInternalOutcome RouterRocketMQTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("AccessKey") && !value["AccessKey"].IsNull())
    {
        if (!value["AccessKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQTarget.AccessKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_accessKey = string(value["AccessKey"].GetString());
        m_accessKeyHasBeenSet = true;
    }

    if (value.HasMember("NameServerAddressList") && !value["NameServerAddressList"].IsNull())
    {
        if (!value["NameServerAddressList"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQTarget.NameServerAddressList` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nameServerAddressList = string(value["NameServerAddressList"].GetString());
        m_nameServerAddressListHasBeenSet = true;
    }

    if (value.HasMember("SecretKey") && !value["SecretKey"].IsNull())
    {
        if (!value["SecretKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQTarget.SecretKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretKey = string(value["SecretKey"].GetString());
        m_secretKeyHasBeenSet = true;
    }

    if (value.HasMember("Topic") && !value["Topic"].IsNull())
    {
        if (!value["Topic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQTarget.Topic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topic = string(value["Topic"].GetString());
        m_topicHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQTarget.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("TargetProduceConcurrentThreadCount") && !value["TargetProduceConcurrentThreadCount"].IsNull())
    {
        if (!value["TargetProduceConcurrentThreadCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RouterRocketMQTarget.TargetProduceConcurrentThreadCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_targetProduceConcurrentThreadCount = value["TargetProduceConcurrentThreadCount"].GetInt64();
        m_targetProduceConcurrentThreadCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RouterRocketMQTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_accessKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_accessKey.c_str(), allocator).Move(), allocator);
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

    if (m_targetProduceConcurrentThreadCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetProduceConcurrentThreadCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_targetProduceConcurrentThreadCount, allocator);
    }

}


string RouterRocketMQTarget::GetAccessKey() const
{
    return m_accessKey;
}

void RouterRocketMQTarget::SetAccessKey(const string& _accessKey)
{
    m_accessKey = _accessKey;
    m_accessKeyHasBeenSet = true;
}

bool RouterRocketMQTarget::AccessKeyHasBeenSet() const
{
    return m_accessKeyHasBeenSet;
}

string RouterRocketMQTarget::GetNameServerAddressList() const
{
    return m_nameServerAddressList;
}

void RouterRocketMQTarget::SetNameServerAddressList(const string& _nameServerAddressList)
{
    m_nameServerAddressList = _nameServerAddressList;
    m_nameServerAddressListHasBeenSet = true;
}

bool RouterRocketMQTarget::NameServerAddressListHasBeenSet() const
{
    return m_nameServerAddressListHasBeenSet;
}

string RouterRocketMQTarget::GetSecretKey() const
{
    return m_secretKey;
}

void RouterRocketMQTarget::SetSecretKey(const string& _secretKey)
{
    m_secretKey = _secretKey;
    m_secretKeyHasBeenSet = true;
}

bool RouterRocketMQTarget::SecretKeyHasBeenSet() const
{
    return m_secretKeyHasBeenSet;
}

string RouterRocketMQTarget::GetTopic() const
{
    return m_topic;
}

void RouterRocketMQTarget::SetTopic(const string& _topic)
{
    m_topic = _topic;
    m_topicHasBeenSet = true;
}

bool RouterRocketMQTarget::TopicHasBeenSet() const
{
    return m_topicHasBeenSet;
}

string RouterRocketMQTarget::GetNamespace() const
{
    return m_namespace;
}

void RouterRocketMQTarget::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RouterRocketMQTarget::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

int64_t RouterRocketMQTarget::GetTargetProduceConcurrentThreadCount() const
{
    return m_targetProduceConcurrentThreadCount;
}

void RouterRocketMQTarget::SetTargetProduceConcurrentThreadCount(const int64_t& _targetProduceConcurrentThreadCount)
{
    m_targetProduceConcurrentThreadCount = _targetProduceConcurrentThreadCount;
    m_targetProduceConcurrentThreadCountHasBeenSet = true;
}

bool RouterRocketMQTarget::TargetProduceConcurrentThreadCountHasBeenSet() const
{
    return m_targetProduceConcurrentThreadCountHasBeenSet;
}

