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

#include <tencentcloud/trocket/v20230308/model/MigratingTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

MigratingTopic::MigratingTopic() :
    m_topicNameHasBeenSet(false),
    m_migrationStatusHasBeenSet(false),
    m_healthCheckPassedHasBeenSet(false),
    m_healthCheckErrorHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_namespaceV4HasBeenSet(false),
    m_topicNameV4HasBeenSet(false),
    m_fullNamespaceV4HasBeenSet(false),
    m_healthCheckErrorListHasBeenSet(false)
{
}

CoreInternalOutcome MigratingTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("MigrationStatus") && !value["MigrationStatus"].IsNull())
    {
        if (!value["MigrationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.MigrationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrationStatus = string(value["MigrationStatus"].GetString());
        m_migrationStatusHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPassed") && !value["HealthCheckPassed"].IsNull())
    {
        if (!value["HealthCheckPassed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.HealthCheckPassed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPassed = value["HealthCheckPassed"].GetBool();
        m_healthCheckPassedHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckError") && !value["HealthCheckError"].IsNull())
    {
        if (!value["HealthCheckError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.HealthCheckError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckError = string(value["HealthCheckError"].GetString());
        m_healthCheckErrorHasBeenSet = true;
    }

    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("NamespaceV4") && !value["NamespaceV4"].IsNull())
    {
        if (!value["NamespaceV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.NamespaceV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespaceV4 = string(value["NamespaceV4"].GetString());
        m_namespaceV4HasBeenSet = true;
    }

    if (value.HasMember("TopicNameV4") && !value["TopicNameV4"].IsNull())
    {
        if (!value["TopicNameV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.TopicNameV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicNameV4 = string(value["TopicNameV4"].GetString());
        m_topicNameV4HasBeenSet = true;
    }

    if (value.HasMember("FullNamespaceV4") && !value["FullNamespaceV4"].IsNull())
    {
        if (!value["FullNamespaceV4"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.FullNamespaceV4` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_fullNamespaceV4 = string(value["FullNamespaceV4"].GetString());
        m_fullNamespaceV4HasBeenSet = true;
    }

    if (value.HasMember("HealthCheckErrorList") && !value["HealthCheckErrorList"].IsNull())
    {
        if (!value["HealthCheckErrorList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MigratingTopic.HealthCheckErrorList` is not array type"));

        const rapidjson::Value &tmpValue = value["HealthCheckErrorList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_healthCheckErrorList.push_back((*itr).GetString());
        }
        m_healthCheckErrorListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigratingTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_topicNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicName.c_str(), allocator).Move(), allocator);
    }

    if (m_migrationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MigrationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_migrationStatus.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckPassedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckPassed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_healthCheckPassed, allocator);
    }

    if (m_healthCheckErrorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckError";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_healthCheckError.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Namespace";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespace.c_str(), allocator).Move(), allocator);
    }

    if (m_namespaceV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NamespaceV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_namespaceV4.c_str(), allocator).Move(), allocator);
    }

    if (m_topicNameV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TopicNameV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_topicNameV4.c_str(), allocator).Move(), allocator);
    }

    if (m_fullNamespaceV4HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FullNamespaceV4";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_fullNamespaceV4.c_str(), allocator).Move(), allocator);
    }

    if (m_healthCheckErrorListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HealthCheckErrorList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_healthCheckErrorList.begin(); itr != m_healthCheckErrorList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string MigratingTopic::GetTopicName() const
{
    return m_topicName;
}

void MigratingTopic::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool MigratingTopic::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string MigratingTopic::GetMigrationStatus() const
{
    return m_migrationStatus;
}

void MigratingTopic::SetMigrationStatus(const string& _migrationStatus)
{
    m_migrationStatus = _migrationStatus;
    m_migrationStatusHasBeenSet = true;
}

bool MigratingTopic::MigrationStatusHasBeenSet() const
{
    return m_migrationStatusHasBeenSet;
}

bool MigratingTopic::GetHealthCheckPassed() const
{
    return m_healthCheckPassed;
}

void MigratingTopic::SetHealthCheckPassed(const bool& _healthCheckPassed)
{
    m_healthCheckPassed = _healthCheckPassed;
    m_healthCheckPassedHasBeenSet = true;
}

bool MigratingTopic::HealthCheckPassedHasBeenSet() const
{
    return m_healthCheckPassedHasBeenSet;
}

string MigratingTopic::GetHealthCheckError() const
{
    return m_healthCheckError;
}

void MigratingTopic::SetHealthCheckError(const string& _healthCheckError)
{
    m_healthCheckError = _healthCheckError;
    m_healthCheckErrorHasBeenSet = true;
}

bool MigratingTopic::HealthCheckErrorHasBeenSet() const
{
    return m_healthCheckErrorHasBeenSet;
}

string MigratingTopic::GetNamespace() const
{
    return m_namespace;
}

void MigratingTopic::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool MigratingTopic::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string MigratingTopic::GetNamespaceV4() const
{
    return m_namespaceV4;
}

void MigratingTopic::SetNamespaceV4(const string& _namespaceV4)
{
    m_namespaceV4 = _namespaceV4;
    m_namespaceV4HasBeenSet = true;
}

bool MigratingTopic::NamespaceV4HasBeenSet() const
{
    return m_namespaceV4HasBeenSet;
}

string MigratingTopic::GetTopicNameV4() const
{
    return m_topicNameV4;
}

void MigratingTopic::SetTopicNameV4(const string& _topicNameV4)
{
    m_topicNameV4 = _topicNameV4;
    m_topicNameV4HasBeenSet = true;
}

bool MigratingTopic::TopicNameV4HasBeenSet() const
{
    return m_topicNameV4HasBeenSet;
}

string MigratingTopic::GetFullNamespaceV4() const
{
    return m_fullNamespaceV4;
}

void MigratingTopic::SetFullNamespaceV4(const string& _fullNamespaceV4)
{
    m_fullNamespaceV4 = _fullNamespaceV4;
    m_fullNamespaceV4HasBeenSet = true;
}

bool MigratingTopic::FullNamespaceV4HasBeenSet() const
{
    return m_fullNamespaceV4HasBeenSet;
}

vector<string> MigratingTopic::GetHealthCheckErrorList() const
{
    return m_healthCheckErrorList;
}

void MigratingTopic::SetHealthCheckErrorList(const vector<string>& _healthCheckErrorList)
{
    m_healthCheckErrorList = _healthCheckErrorList;
    m_healthCheckErrorListHasBeenSet = true;
}

bool MigratingTopic::HealthCheckErrorListHasBeenSet() const
{
    return m_healthCheckErrorListHasBeenSet;
}

