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

#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicConfigOutput.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

RocketMQTopicConfigOutput::RocketMQTopicConfigOutput() :
    m_namespaceHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_partitionsHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_importedHasBeenSet(false)
{
}

CoreInternalOutcome RocketMQTopicConfigOutput::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfigOutput.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfigOutput.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfigOutput.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Partitions") && !value["Partitions"].IsNull())
    {
        if (!value["Partitions"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfigOutput.Partitions` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_partitions = value["Partitions"].GetInt64();
        m_partitionsHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfigOutput.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Imported") && !value["Imported"].IsNull())
    {
        if (!value["Imported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `RocketMQTopicConfigOutput.Imported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_imported = value["Imported"].GetBool();
        m_importedHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void RocketMQTopicConfigOutput::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

    if (m_importedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Imported";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imported, allocator);
    }

}


string RocketMQTopicConfigOutput::GetNamespace() const
{
    return m_namespace;
}

void RocketMQTopicConfigOutput::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool RocketMQTopicConfigOutput::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string RocketMQTopicConfigOutput::GetTopicName() const
{
    return m_topicName;
}

void RocketMQTopicConfigOutput::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool RocketMQTopicConfigOutput::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string RocketMQTopicConfigOutput::GetType() const
{
    return m_type;
}

void RocketMQTopicConfigOutput::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool RocketMQTopicConfigOutput::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

int64_t RocketMQTopicConfigOutput::GetPartitions() const
{
    return m_partitions;
}

void RocketMQTopicConfigOutput::SetPartitions(const int64_t& _partitions)
{
    m_partitions = _partitions;
    m_partitionsHasBeenSet = true;
}

bool RocketMQTopicConfigOutput::PartitionsHasBeenSet() const
{
    return m_partitionsHasBeenSet;
}

string RocketMQTopicConfigOutput::GetRemark() const
{
    return m_remark;
}

void RocketMQTopicConfigOutput::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool RocketMQTopicConfigOutput::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool RocketMQTopicConfigOutput::GetImported() const
{
    return m_imported;
}

void RocketMQTopicConfigOutput::SetImported(const bool& _imported)
{
    m_imported = _imported;
    m_importedHasBeenSet = true;
}

bool RocketMQTopicConfigOutput::ImportedHasBeenSet() const
{
    return m_importedHasBeenSet;
}

