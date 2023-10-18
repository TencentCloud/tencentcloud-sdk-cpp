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

#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQTopicConfig::RocketMQTopicConfig() :
    m_namespaceHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_remarkHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQTopicConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfig.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfig.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfig.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfig.Partitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = value["Partitions"].GetInt64();
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQTopicConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_partitionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Partitions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_partitions, allocator);
    }

    if (m_remarkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Remark";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_remark.c_str(), allocator).Move(), allocator);
    }

}


string RocketMQTopicConfig::GetNamespace() const
{
    return m_namespace;
}

void RocketMQTopicConfig::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RocketMQTopicConfig::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string RocketMQTopicConfig::GetTopicName() const
{
    return m_topicName;
}

void RocketMQTopicConfig::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool RocketMQTopicConfig::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string RocketMQTopicConfig::GetType() const
{
    return m_type;
}

void RocketMQTopicConfig::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RocketMQTopicConfig::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RocketMQTopicConfig::GetPartitions() const
{
    return m_partitions;
}

void RocketMQTopicConfig::SetPartitions(const int64_t& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool RocketMQTopicConfig::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string RocketMQTopicConfig::GetRemark() const
{
    return m_remark;
}

void RocketMQTopicConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQTopicConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

