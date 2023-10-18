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

#include <tencentcloud/tdmq/v20200217/model/MigrateTopic.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

MigrateTopic::MigrateTopic() :
    m_namespaceHasBeenSet(false),
    m_topicNameHasBeenSet(false),
    m_migrationStatusHasBeenSet(false),
    m_healthCheckPassedHasBeenSet(false),
    m_healthCheckErrorHasBeenSet(false)
{
}

CoreInternalOutcome MigrateTopic::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Namespace") && !value["Namespace"].IsNull())
    {
        if (!value["Namespace"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTopic.Namespace` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_namespace = string(value["Namespace"].GetString());
        m_namespaceHasBeenSet = true;
    }

    if (value.HasMember("TopicName") && !value["TopicName"].IsNull())
    {
        if (!value["TopicName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTopic.TopicName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_topicName = string(value["TopicName"].GetString());
        m_topicNameHasBeenSet = true;
    }

    if (value.HasMember("MigrationStatus") && !value["MigrationStatus"].IsNull())
    {
        if (!value["MigrationStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTopic.MigrationStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_migrationStatus = string(value["MigrationStatus"].GetString());
        m_migrationStatusHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckPassed") && !value["HealthCheckPassed"].IsNull())
    {
        if (!value["HealthCheckPassed"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTopic.HealthCheckPassed` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckPassed = value["HealthCheckPassed"].GetBool();
        m_healthCheckPassedHasBeenSet = true;
    }

    if (value.HasMember("HealthCheckError") && !value["HealthCheckError"].IsNull())
    {
        if (!value["HealthCheckError"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `MigrateTopic.HealthCheckError` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_healthCheckError = string(value["HealthCheckError"].GetString());
        m_healthCheckErrorHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MigrateTopic::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
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

}


string MigrateTopic::GetNamespace() const
{
    return m_namespace;
}

void MigrateTopic::SetNamespace(const string& _namespace)
{
    m_namespace = _namespace;
    m_namespaceHasBeenSet = true;
}

bool MigrateTopic::NamespaceHasBeenSet() const
{
    return m_namespaceHasBeenSet;
}

string MigrateTopic::GetTopicName() const
{
    return m_topicName;
}

void MigrateTopic::SetTopicName(const string& _topicName)
{
    m_topicName = _topicName;
    m_topicNameHasBeenSet = true;
}

bool MigrateTopic::TopicNameHasBeenSet() const
{
    return m_topicNameHasBeenSet;
}

string MigrateTopic::GetMigrationStatus() const
{
    return m_migrationStatus;
}

void MigrateTopic::SetMigrationStatus(const string& _migrationStatus)
{
    m_migrationStatus = _migrationStatus;
    m_migrationStatusHasBeenSet = true;
}

bool MigrateTopic::MigrationStatusHasBeenSet() const
{
    return m_migrationStatusHasBeenSet;
}

bool MigrateTopic::GetHealthCheckPassed() const
{
    return m_healthCheckPassed;
}

void MigrateTopic::SetHealthCheckPassed(const bool& _healthCheckPassed)
{
    m_healthCheckPassed = _healthCheckPassed;
    m_healthCheckPassedHasBeenSet = true;
}

bool MigrateTopic::HealthCheckPassedHasBeenSet() const
{
    return m_healthCheckPassedHasBeenSet;
}

string MigrateTopic::GetHealthCheckError() const
{
    return m_healthCheckError;
}

void MigrateTopic::SetHealthCheckError(const string& _healthCheckError)
{
    m_healthCheckError = _healthCheckError;
    m_healthCheckErrorHasBeenSet = true;
}

bool MigrateTopic::HealthCheckErrorHasBeenSet() const
{
    return m_healthCheckErrorHasBeenSet;
}

