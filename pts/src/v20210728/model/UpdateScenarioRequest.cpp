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

#include <tencentcloud/pts/v20210728/model/UpdateScenarioRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

UpdateScenarioRequest::UpdateScenarioRequest() :
    m_scenarioIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_loadHasBeenSet(false),
    m_encodedScriptsHasBeenSet(false),
    m_configsHasBeenSet(false),
    m_datasetsHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_sLAIdHasBeenSet(false),
    m_cronIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_testScriptsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_requestFilesHasBeenSet(false),
    m_sLAPolicyHasBeenSet(false),
    m_pluginsHasBeenSet(false),
    m_domainNameConfigHasBeenSet(false),
    m_notificationHooksHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_envIdHasBeenSet(false)
{
}

string UpdateScenarioRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_scenarioIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScenarioId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_scenarioId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_loadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Load";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_load.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_encodedScriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EncodedScripts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_encodedScripts.c_str(), allocator).Move(), allocator);
    }

    if (m_configsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Configs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_configs.begin(); itr != m_configs.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_datasetsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Datasets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_datasets.begin(); itr != m_datasets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_extensionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Extensions";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_extensions.begin(); itr != m_extensions.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_sLAIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SLAId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_sLAId.c_str(), allocator).Move(), allocator);
    }

    if (m_cronIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CronId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_cronId.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_status, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_testScriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TestScripts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_testScripts.begin(); itr != m_testScripts.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_protocolsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Protocols";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_protocols.begin(); itr != m_protocols.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_requestFilesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestFiles";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_requestFiles.begin(); itr != m_requestFiles.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_sLAPolicyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SLAPolicy";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sLAPolicy.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_pluginsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Plugins";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_plugins.begin(); itr != m_plugins.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_domainNameConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainNameConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_domainNameConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_notificationHooksHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NotificationHooks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_notificationHooks.begin(); itr != m_notificationHooks.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UpdateScenarioRequest::GetScenarioId() const
{
    return m_scenarioId;
}

void UpdateScenarioRequest::SetScenarioId(const string& _scenarioId)
{
    m_scenarioId = _scenarioId;
    m_scenarioIdHasBeenSet = true;
}

bool UpdateScenarioRequest::ScenarioIdHasBeenSet() const
{
    return m_scenarioIdHasBeenSet;
}

string UpdateScenarioRequest::GetName() const
{
    return m_name;
}

void UpdateScenarioRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool UpdateScenarioRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string UpdateScenarioRequest::GetDescription() const
{
    return m_description;
}

void UpdateScenarioRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool UpdateScenarioRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string UpdateScenarioRequest::GetType() const
{
    return m_type;
}

void UpdateScenarioRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool UpdateScenarioRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

Load UpdateScenarioRequest::GetLoad() const
{
    return m_load;
}

void UpdateScenarioRequest::SetLoad(const Load& _load)
{
    m_load = _load;
    m_loadHasBeenSet = true;
}

bool UpdateScenarioRequest::LoadHasBeenSet() const
{
    return m_loadHasBeenSet;
}

string UpdateScenarioRequest::GetEncodedScripts() const
{
    return m_encodedScripts;
}

void UpdateScenarioRequest::SetEncodedScripts(const string& _encodedScripts)
{
    m_encodedScripts = _encodedScripts;
    m_encodedScriptsHasBeenSet = true;
}

bool UpdateScenarioRequest::EncodedScriptsHasBeenSet() const
{
    return m_encodedScriptsHasBeenSet;
}

vector<string> UpdateScenarioRequest::GetConfigs() const
{
    return m_configs;
}

void UpdateScenarioRequest::SetConfigs(const vector<string>& _configs)
{
    m_configs = _configs;
    m_configsHasBeenSet = true;
}

bool UpdateScenarioRequest::ConfigsHasBeenSet() const
{
    return m_configsHasBeenSet;
}

vector<TestData> UpdateScenarioRequest::GetDatasets() const
{
    return m_datasets;
}

void UpdateScenarioRequest::SetDatasets(const vector<TestData>& _datasets)
{
    m_datasets = _datasets;
    m_datasetsHasBeenSet = true;
}

bool UpdateScenarioRequest::DatasetsHasBeenSet() const
{
    return m_datasetsHasBeenSet;
}

vector<string> UpdateScenarioRequest::GetExtensions() const
{
    return m_extensions;
}

void UpdateScenarioRequest::SetExtensions(const vector<string>& _extensions)
{
    m_extensions = _extensions;
    m_extensionsHasBeenSet = true;
}

bool UpdateScenarioRequest::ExtensionsHasBeenSet() const
{
    return m_extensionsHasBeenSet;
}

string UpdateScenarioRequest::GetSLAId() const
{
    return m_sLAId;
}

void UpdateScenarioRequest::SetSLAId(const string& _sLAId)
{
    m_sLAId = _sLAId;
    m_sLAIdHasBeenSet = true;
}

bool UpdateScenarioRequest::SLAIdHasBeenSet() const
{
    return m_sLAIdHasBeenSet;
}

string UpdateScenarioRequest::GetCronId() const
{
    return m_cronId;
}

void UpdateScenarioRequest::SetCronId(const string& _cronId)
{
    m_cronId = _cronId;
    m_cronIdHasBeenSet = true;
}

bool UpdateScenarioRequest::CronIdHasBeenSet() const
{
    return m_cronIdHasBeenSet;
}

int64_t UpdateScenarioRequest::GetStatus() const
{
    return m_status;
}

void UpdateScenarioRequest::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UpdateScenarioRequest::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UpdateScenarioRequest::GetProjectId() const
{
    return m_projectId;
}

void UpdateScenarioRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool UpdateScenarioRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

vector<ScriptInfo> UpdateScenarioRequest::GetTestScripts() const
{
    return m_testScripts;
}

void UpdateScenarioRequest::SetTestScripts(const vector<ScriptInfo>& _testScripts)
{
    m_testScripts = _testScripts;
    m_testScriptsHasBeenSet = true;
}

bool UpdateScenarioRequest::TestScriptsHasBeenSet() const
{
    return m_testScriptsHasBeenSet;
}

vector<ProtocolInfo> UpdateScenarioRequest::GetProtocols() const
{
    return m_protocols;
}

void UpdateScenarioRequest::SetProtocols(const vector<ProtocolInfo>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool UpdateScenarioRequest::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

vector<FileInfo> UpdateScenarioRequest::GetRequestFiles() const
{
    return m_requestFiles;
}

void UpdateScenarioRequest::SetRequestFiles(const vector<FileInfo>& _requestFiles)
{
    m_requestFiles = _requestFiles;
    m_requestFilesHasBeenSet = true;
}

bool UpdateScenarioRequest::RequestFilesHasBeenSet() const
{
    return m_requestFilesHasBeenSet;
}

SLAPolicy UpdateScenarioRequest::GetSLAPolicy() const
{
    return m_sLAPolicy;
}

void UpdateScenarioRequest::SetSLAPolicy(const SLAPolicy& _sLAPolicy)
{
    m_sLAPolicy = _sLAPolicy;
    m_sLAPolicyHasBeenSet = true;
}

bool UpdateScenarioRequest::SLAPolicyHasBeenSet() const
{
    return m_sLAPolicyHasBeenSet;
}

vector<FileInfo> UpdateScenarioRequest::GetPlugins() const
{
    return m_plugins;
}

void UpdateScenarioRequest::SetPlugins(const vector<FileInfo>& _plugins)
{
    m_plugins = _plugins;
    m_pluginsHasBeenSet = true;
}

bool UpdateScenarioRequest::PluginsHasBeenSet() const
{
    return m_pluginsHasBeenSet;
}

DomainNameConfig UpdateScenarioRequest::GetDomainNameConfig() const
{
    return m_domainNameConfig;
}

void UpdateScenarioRequest::SetDomainNameConfig(const DomainNameConfig& _domainNameConfig)
{
    m_domainNameConfig = _domainNameConfig;
    m_domainNameConfigHasBeenSet = true;
}

bool UpdateScenarioRequest::DomainNameConfigHasBeenSet() const
{
    return m_domainNameConfigHasBeenSet;
}

vector<Notification> UpdateScenarioRequest::GetNotificationHooks() const
{
    return m_notificationHooks;
}

void UpdateScenarioRequest::SetNotificationHooks(const vector<Notification>& _notificationHooks)
{
    m_notificationHooks = _notificationHooks;
    m_notificationHooksHasBeenSet = true;
}

bool UpdateScenarioRequest::NotificationHooksHasBeenSet() const
{
    return m_notificationHooksHasBeenSet;
}

string UpdateScenarioRequest::GetOwner() const
{
    return m_owner;
}

void UpdateScenarioRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool UpdateScenarioRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}

string UpdateScenarioRequest::GetEnvId() const
{
    return m_envId;
}

void UpdateScenarioRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool UpdateScenarioRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}


