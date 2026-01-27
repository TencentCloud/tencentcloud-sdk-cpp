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

#include <tencentcloud/es/v20180416/model/CollectorTarget.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Es::V20180416::Model;
using namespace std;

CollectorTarget::CollectorTarget() :
    m_targetNameHasBeenSet(false),
    m_namespacesHasBeenSet(false),
    m_podLabelsHasBeenSet(false),
    m_containerNameHasBeenSet(false),
    m_indexPrefixHasBeenSet(false),
    m_logFiltersHasBeenSet(false),
    m_configContentHasBeenSet(false),
    m_kafkaTopicHasBeenSet(false),
    m_indexAliasHasBeenSet(false),
    m_inputTypeHasBeenSet(false),
    m_inputPathHasBeenSet(false),
    m_inputsTailFilesHasBeenSet(false)
{
}

CoreInternalOutcome CollectorTarget::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TargetName") && !value["TargetName"].IsNull())
    {
        if (!value["TargetName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.TargetName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_targetName = string(value["TargetName"].GetString());
        m_targetNameHasBeenSet = true;
    }

    if (value.HasMember("Namespaces") && !value["Namespaces"].IsNull())
    {
        if (!value["Namespaces"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.Namespaces` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_namespaces.Deserialize(value["Namespaces"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_namespacesHasBeenSet = true;
    }

    if (value.HasMember("PodLabels") && !value["PodLabels"].IsNull())
    {
        if (!value["PodLabels"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.PodLabels` is not array type"));

        const rapidjson::Value &tmpValue = value["PodLabels"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PodLabel item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_podLabels.push_back(item);
        }
        m_podLabelsHasBeenSet = true;
    }

    if (value.HasMember("ContainerName") && !value["ContainerName"].IsNull())
    {
        if (!value["ContainerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.ContainerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_containerName = string(value["ContainerName"].GetString());
        m_containerNameHasBeenSet = true;
    }

    if (value.HasMember("IndexPrefix") && !value["IndexPrefix"].IsNull())
    {
        if (!value["IndexPrefix"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.IndexPrefix` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexPrefix = string(value["IndexPrefix"].GetString());
        m_indexPrefixHasBeenSet = true;
    }

    if (value.HasMember("LogFilters") && !value["LogFilters"].IsNull())
    {
        if (!value["LogFilters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.LogFilters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_logFilters = string(value["LogFilters"].GetString());
        m_logFiltersHasBeenSet = true;
    }

    if (value.HasMember("ConfigContent") && !value["ConfigContent"].IsNull())
    {
        if (!value["ConfigContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.ConfigContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configContent = string(value["ConfigContent"].GetString());
        m_configContentHasBeenSet = true;
    }

    if (value.HasMember("KafkaTopic") && !value["KafkaTopic"].IsNull())
    {
        if (!value["KafkaTopic"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.KafkaTopic` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kafkaTopic = string(value["KafkaTopic"].GetString());
        m_kafkaTopicHasBeenSet = true;
    }

    if (value.HasMember("IndexAlias") && !value["IndexAlias"].IsNull())
    {
        if (!value["IndexAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.IndexAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_indexAlias = string(value["IndexAlias"].GetString());
        m_indexAliasHasBeenSet = true;
    }

    if (value.HasMember("InputType") && !value["InputType"].IsNull())
    {
        if (!value["InputType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.InputType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputType = string(value["InputType"].GetString());
        m_inputTypeHasBeenSet = true;
    }

    if (value.HasMember("InputPath") && !value["InputPath"].IsNull())
    {
        if (!value["InputPath"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.InputPath` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_inputPath = string(value["InputPath"].GetString());
        m_inputPathHasBeenSet = true;
    }

    if (value.HasMember("InputsTailFiles") && !value["InputsTailFiles"].IsNull())
    {
        if (!value["InputsTailFiles"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CollectorTarget.InputsTailFiles` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_inputsTailFiles = value["InputsTailFiles"].GetBool();
        m_inputsTailFilesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CollectorTarget::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_namespacesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespaces";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_namespaces.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_podLabelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PodLabels";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_podLabels.begin(); itr != m_podLabels.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_containerNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ContainerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_containerName.c_str(), allocator).Move(), allocator);
    }

    if (m_indexPrefixHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexPrefix";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexPrefix.c_str(), allocator).Move(), allocator);
    }

    if (m_logFiltersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LogFilters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_logFilters.c_str(), allocator).Move(), allocator);
    }

    if (m_configContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configContent.c_str(), allocator).Move(), allocator);
    }

    if (m_kafkaTopicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KafkaTopic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kafkaTopic.c_str(), allocator).Move(), allocator);
    }

    if (m_indexAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IndexAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_indexAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_inputTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputType.c_str(), allocator).Move(), allocator);
    }

    if (m_inputPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputPath";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_inputPath.c_str(), allocator).Move(), allocator);
    }

    if (m_inputsTailFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputsTailFiles";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputsTailFiles, allocator);
    }

}


string CollectorTarget::GetTargetName() const
{
    return m_targetName;
}

void CollectorTarget::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool CollectorTarget::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

Namespaces CollectorTarget::GetNamespaces() const
{
    return m_namespaces;
}

void CollectorTarget::SetNamespaces(const Namespaces& _namespaces)
{
    m_namespaces = _namespaces;
    m_namespacesHasBeenSet = true;
}

bool CollectorTarget::NamespacesHasBeenSet() const
{
    return m_namespacesHasBeenSet;
}

vector<PodLabel> CollectorTarget::GetPodLabels() const
{
    return m_podLabels;
}

void CollectorTarget::SetPodLabels(const vector<PodLabel>& _podLabels)
{
    m_podLabels = _podLabels;
    m_podLabelsHasBeenSet = true;
}

bool CollectorTarget::PodLabelsHasBeenSet() const
{
    return m_podLabelsHasBeenSet;
}

string CollectorTarget::GetContainerName() const
{
    return m_containerName;
}

void CollectorTarget::SetContainerName(const string& _containerName)
{
    m_containerName = _containerName;
    m_containerNameHasBeenSet = true;
}

bool CollectorTarget::ContainerNameHasBeenSet() const
{
    return m_containerNameHasBeenSet;
}

string CollectorTarget::GetIndexPrefix() const
{
    return m_indexPrefix;
}

void CollectorTarget::SetIndexPrefix(const string& _indexPrefix)
{
    m_indexPrefix = _indexPrefix;
    m_indexPrefixHasBeenSet = true;
}

bool CollectorTarget::IndexPrefixHasBeenSet() const
{
    return m_indexPrefixHasBeenSet;
}

string CollectorTarget::GetLogFilters() const
{
    return m_logFilters;
}

void CollectorTarget::SetLogFilters(const string& _logFilters)
{
    m_logFilters = _logFilters;
    m_logFiltersHasBeenSet = true;
}

bool CollectorTarget::LogFiltersHasBeenSet() const
{
    return m_logFiltersHasBeenSet;
}

string CollectorTarget::GetConfigContent() const
{
    return m_configContent;
}

void CollectorTarget::SetConfigContent(const string& _configContent)
{
    m_configContent = _configContent;
    m_configContentHasBeenSet = true;
}

bool CollectorTarget::ConfigContentHasBeenSet() const
{
    return m_configContentHasBeenSet;
}

string CollectorTarget::GetKafkaTopic() const
{
    return m_kafkaTopic;
}

void CollectorTarget::SetKafkaTopic(const string& _kafkaTopic)
{
    m_kafkaTopic = _kafkaTopic;
    m_kafkaTopicHasBeenSet = true;
}

bool CollectorTarget::KafkaTopicHasBeenSet() const
{
    return m_kafkaTopicHasBeenSet;
}

string CollectorTarget::GetIndexAlias() const
{
    return m_indexAlias;
}

void CollectorTarget::SetIndexAlias(const string& _indexAlias)
{
    m_indexAlias = _indexAlias;
    m_indexAliasHasBeenSet = true;
}

bool CollectorTarget::IndexAliasHasBeenSet() const
{
    return m_indexAliasHasBeenSet;
}

string CollectorTarget::GetInputType() const
{
    return m_inputType;
}

void CollectorTarget::SetInputType(const string& _inputType)
{
    m_inputType = _inputType;
    m_inputTypeHasBeenSet = true;
}

bool CollectorTarget::InputTypeHasBeenSet() const
{
    return m_inputTypeHasBeenSet;
}

string CollectorTarget::GetInputPath() const
{
    return m_inputPath;
}

void CollectorTarget::SetInputPath(const string& _inputPath)
{
    m_inputPath = _inputPath;
    m_inputPathHasBeenSet = true;
}

bool CollectorTarget::InputPathHasBeenSet() const
{
    return m_inputPathHasBeenSet;
}

bool CollectorTarget::GetInputsTailFiles() const
{
    return m_inputsTailFiles;
}

void CollectorTarget::SetInputsTailFiles(const bool& _inputsTailFiles)
{
    m_inputsTailFiles = _inputsTailFiles;
    m_inputsTailFilesHasBeenSet = true;
}

bool CollectorTarget::InputsTailFilesHasBeenSet() const
{
    return m_inputsTailFilesHasBeenSet;
}

