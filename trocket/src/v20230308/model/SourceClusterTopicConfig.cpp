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

#include <tencentcloud/trocket/v20230308/model/SourceClusterTopicConfig.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

SourceClusterTopicConfig::SourceClusterTopicConfig() :
    m_topicNameHasBeenSet(false),
    m_topicTypeHasBeenSet(false),
    m_queueNumHasBeenSet(false),
    m_remarkHasBeenSet(false),
    m_importedHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_importStatusHasBeenSet(false)
{
}

CoreInternalOutcome SourceClusterTopicConfig::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterTopicConfig.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("TopicType") && !value["TopicType"].IsNull())
    {
        if (!value["TopicType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterTopicConfig.TopicType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicType = string(value["TopicType"].GetString());
        m_topicTypeHasBeenSet = true;
    }

    if (value.HasMember("QueueNum") && !value["QueueNum"].IsNull())
    {
        if (!value["QueueNum"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterTopicConfig.QueueNum` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_queueNum = value["QueueNum"].GetInt64();
        m_queueNumHasBeenSet = true;
    }

    if (value.HasMember("Remark") && !value["Remark"].IsNull())
    {
        if (!value["Remark"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterTopicConfig.Remark` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_remark = string(value["Remark"].GetString());
        m_remarkHasBeenSet = true;
    }

    if (value.HasMember("Imported") && !value["Imported"].IsNull())
    {
        if (!value["Imported"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterTopicConfig.Imported` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_imported = value["Imported"].GetBool();
        m_importedHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterTopicConfig.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("ImportStatus") && !value["ImportStatus"].IsNull())
    {
        if (!value["ImportStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SourceClusterTopicConfig.ImportStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_importStatus = string(value["ImportStatus"].GetString());
        m_importStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SourceClusterTopicConfig::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_topicTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicType.c_str(), allocator).Move(), allocator);
    }

    if (m_queueNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QueueNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_queueNum, allocator);
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

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_importStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImportStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_importStatus.c_str(), allocator).Move(), allocator);
    }

}


string SourceClusterTopicConfig::GetTopicName() const
{
    return m_topicName;
}

void SourceClusterTopicConfig::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool SourceClusterTopicConfig::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string SourceClusterTopicConfig::GetTopicType() const
{
    return m_topicType;
}

void SourceClusterTopicConfig::SetTopicType(const string& _topicType)
{
    m_topicType = _topicType;
    m_topicTypeHasBeenSet = true;
}

bool SourceClusterTopicConfig::TopicTypeHasBeenSet() const
{
    return m_topicTypeHasBeenSet;
}

int64_t SourceClusterTopicConfig::GetQueueNum() const
{
    return m_queueNum;
}

void SourceClusterTopicConfig::SetQueueNum(const int64_t& _queueNum)
{
    m_queueNum = _queueNum;
    m_queueNumHasBeenSet = true;
}

bool SourceClusterTopicConfig::QueueNumHasBeenSet() const
{
    return m_queueNumHasBeenSet;
}

string SourceClusterTopicConfig::GetRemark() const
{
    return m_remark;
}

void SourceClusterTopicConfig::SetRemark(const string& _remark)
{
    m_remark = _remark;
    m_remarkHasBeenSet = true;
}

bool SourceClusterTopicConfig::RemarkHasBeenSet() const
{
    return m_remarkHasBeenSet;
}

bool SourceClusterTopicConfig::GetImported() const
{
    return m_imported;
}

void SourceClusterTopicConfig::SetImported(const bool& _imported)
{
    m_imported = _imported;
    m_importedHasBeenSet = true;
}

bool SourceClusterTopicConfig::ImportedHasBeenSet() const
{
    return m_importedHasBeenSet;
}

string SourceClusterTopicConfig::GetNamespace() const
{
    return m_namespace;
}

void SourceClusterTopicConfig::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool SourceClusterTopicConfig::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string SourceClusterTopicConfig::GetImportStatus() const
{
    return m_importStatus;
}

void SourceClusterTopicConfig::SetImportStatus(const string& _importStatus)
{
    m_importStatus = _importStatus;
    m_importStatusHasBeenSet = true;
}

bool SourceClusterTopicConfig::ImportStatusHasBeenSet() const
{
    return m_importStatusHasBeenSet;
}

