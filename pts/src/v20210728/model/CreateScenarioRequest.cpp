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

#include <tencentcloud/pts/v20210728/model/CreateScenarioRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Pts::V20210728::Model;
using namespace std;

CreateScenarioRequest::CreateScenarioRequest() :
    m_nameHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_loadHasBeenSet(false),
    m_configsHasBeenSet(false),
    m_datasetsHasBeenSet(false),
    m_extensionsHasBeenSet(false),
    m_sLAIdHasBeenSet(false),
    m_cronIdHasBeenSet(false),
    m_scriptsHasBeenSet(false),
    m_testScriptsHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_requestFilesHasBeenSet(false),
    m_sLAPolicyHasBeenSet(false),
    m_pluginsHasBeenSet(false),
    m_domainNameConfigHasBeenSet(false),
    m_ownerHasBeenSet(false)
{
}

string CreateScenarioRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_loadHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Load";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_load.ToJsonObject(d[key.c_str()], allocator);
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

    if (m_scriptsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Scripts";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_scripts.begin(); itr != m_scripts.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

    if (m_ownerHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Owner";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_owner.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateScenarioRequest::GetName() const
{
    return m_name;
}

void CreateScenarioRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateScenarioRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateScenarioRequest::GetType() const
{
    return m_type;
}

void CreateScenarioRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateScenarioRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string CreateScenarioRequest::GetProjectId() const
{
    return m_projectId;
}

void CreateScenarioRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool CreateScenarioRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string CreateScenarioRequest::GetDescription() const
{
    return m_description;
}

void CreateScenarioRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateScenarioRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

Load CreateScenarioRequest::GetLoad() const
{
    return m_load;
}

void CreateScenarioRequest::SetLoad(const Load& _load)
{
    m_load = _load;
    m_loadHasBeenSet = true;
}

bool CreateScenarioRequest::LoadHasBeenSet() const
{
    return m_loadHasBeenSet;
}

vector<string> CreateScenarioRequest::GetConfigs() const
{
    return m_configs;
}

void CreateScenarioRequest::SetConfigs(const vector<string>& _configs)
{
    m_configs = _configs;
    m_configsHasBeenSet = true;
}

bool CreateScenarioRequest::ConfigsHasBeenSet() const
{
    return m_configsHasBeenSet;
}

vector<TestData> CreateScenarioRequest::GetDatasets() const
{
    return m_datasets;
}

void CreateScenarioRequest::SetDatasets(const vector<TestData>& _datasets)
{
    m_datasets = _datasets;
    m_datasetsHasBeenSet = true;
}

bool CreateScenarioRequest::DatasetsHasBeenSet() const
{
    return m_datasetsHasBeenSet;
}

vector<string> CreateScenarioRequest::GetExtensions() const
{
    return m_extensions;
}

void CreateScenarioRequest::SetExtensions(const vector<string>& _extensions)
{
    m_extensions = _extensions;
    m_extensionsHasBeenSet = true;
}

bool CreateScenarioRequest::ExtensionsHasBeenSet() const
{
    return m_extensionsHasBeenSet;
}

string CreateScenarioRequest::GetSLAId() const
{
    return m_sLAId;
}

void CreateScenarioRequest::SetSLAId(const string& _sLAId)
{
    m_sLAId = _sLAId;
    m_sLAIdHasBeenSet = true;
}

bool CreateScenarioRequest::SLAIdHasBeenSet() const
{
    return m_sLAIdHasBeenSet;
}

string CreateScenarioRequest::GetCronId() const
{
    return m_cronId;
}

void CreateScenarioRequest::SetCronId(const string& _cronId)
{
    m_cronId = _cronId;
    m_cronIdHasBeenSet = true;
}

bool CreateScenarioRequest::CronIdHasBeenSet() const
{
    return m_cronIdHasBeenSet;
}

vector<string> CreateScenarioRequest::GetScripts() const
{
    return m_scripts;
}

void CreateScenarioRequest::SetScripts(const vector<string>& _scripts)
{
    m_scripts = _scripts;
    m_scriptsHasBeenSet = true;
}

bool CreateScenarioRequest::ScriptsHasBeenSet() const
{
    return m_scriptsHasBeenSet;
}

vector<ScriptInfo> CreateScenarioRequest::GetTestScripts() const
{
    return m_testScripts;
}

void CreateScenarioRequest::SetTestScripts(const vector<ScriptInfo>& _testScripts)
{
    m_testScripts = _testScripts;
    m_testScriptsHasBeenSet = true;
}

bool CreateScenarioRequest::TestScriptsHasBeenSet() const
{
    return m_testScriptsHasBeenSet;
}

vector<ProtocolInfo> CreateScenarioRequest::GetProtocols() const
{
    return m_protocols;
}

void CreateScenarioRequest::SetProtocols(const vector<ProtocolInfo>& _protocols)
{
    m_protocols = _protocols;
    m_protocolsHasBeenSet = true;
}

bool CreateScenarioRequest::ProtocolsHasBeenSet() const
{
    return m_protocolsHasBeenSet;
}

vector<FileInfo> CreateScenarioRequest::GetRequestFiles() const
{
    return m_requestFiles;
}

void CreateScenarioRequest::SetRequestFiles(const vector<FileInfo>& _requestFiles)
{
    m_requestFiles = _requestFiles;
    m_requestFilesHasBeenSet = true;
}

bool CreateScenarioRequest::RequestFilesHasBeenSet() const
{
    return m_requestFilesHasBeenSet;
}

SLAPolicy CreateScenarioRequest::GetSLAPolicy() const
{
    return m_sLAPolicy;
}

void CreateScenarioRequest::SetSLAPolicy(const SLAPolicy& _sLAPolicy)
{
    m_sLAPolicy = _sLAPolicy;
    m_sLAPolicyHasBeenSet = true;
}

bool CreateScenarioRequest::SLAPolicyHasBeenSet() const
{
    return m_sLAPolicyHasBeenSet;
}

vector<FileInfo> CreateScenarioRequest::GetPlugins() const
{
    return m_plugins;
}

void CreateScenarioRequest::SetPlugins(const vector<FileInfo>& _plugins)
{
    m_plugins = _plugins;
    m_pluginsHasBeenSet = true;
}

bool CreateScenarioRequest::PluginsHasBeenSet() const
{
    return m_pluginsHasBeenSet;
}

DomainNameConfig CreateScenarioRequest::GetDomainNameConfig() const
{
    return m_domainNameConfig;
}

void CreateScenarioRequest::SetDomainNameConfig(const DomainNameConfig& _domainNameConfig)
{
    m_domainNameConfig = _domainNameConfig;
    m_domainNameConfigHasBeenSet = true;
}

bool CreateScenarioRequest::DomainNameConfigHasBeenSet() const
{
    return m_domainNameConfigHasBeenSet;
}

string CreateScenarioRequest::GetOwner() const
{
    return m_owner;
}

void CreateScenarioRequest::SetOwner(const string& _owner)
{
    m_owner = _owner;
    m_ownerHasBeenSet = true;
}

bool CreateScenarioRequest::OwnerHasBeenSet() const
{
    return m_ownerHasBeenSet;
}


