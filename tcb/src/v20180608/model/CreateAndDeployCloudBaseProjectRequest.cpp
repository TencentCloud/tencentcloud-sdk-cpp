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

#include <tencentcloud/tcb/v20180608/model/CreateAndDeployCloudBaseProjectRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcb::V20180608::Model;
using namespace rapidjson;
using namespace std;

CreateAndDeployCloudBaseProjectRequest::CreateAndDeployCloudBaseProjectRequest() :
    m_nameHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_envAliasHasBeenSet(false),
    m_rcJsonHasBeenSet(false),
    m_addonConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_networkConfigHasBeenSet(false),
    m_freeQuotaHasBeenSet(false),
    m_autoDeployOnCodeChangeHasBeenSet(false),
    m_repoUrlHasBeenSet(false)
{
}

string CreateAndDeployCloudBaseProjectRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_source.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_envIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_typeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_parameters.begin(); itr != m_parameters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_envAliasHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvAlias";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_envAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_rcJsonHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RcJson";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_rcJson.c_str(), allocator).Move(), allocator);
    }

    if (m_addonConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AddonConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_addonConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_networkConfigHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "NetworkConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_networkConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_freeQuotaHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FreeQuota";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_freeQuota.c_str(), allocator).Move(), allocator);
    }

    if (m_autoDeployOnCodeChangeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AutoDeployOnCodeChange";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_autoDeployOnCodeChange, allocator);
    }

    if (m_repoUrlHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RepoUrl";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_repoUrl.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateAndDeployCloudBaseProjectRequest::GetName() const
{
    return m_name;
}

void CreateAndDeployCloudBaseProjectRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

CodeSource CreateAndDeployCloudBaseProjectRequest::GetSource() const
{
    return m_source;
}

void CreateAndDeployCloudBaseProjectRequest::SetSource(const CodeSource& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

string CreateAndDeployCloudBaseProjectRequest::GetEnvId() const
{
    return m_envId;
}

void CreateAndDeployCloudBaseProjectRequest::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CreateAndDeployCloudBaseProjectRequest::GetType() const
{
    return m_type;
}

void CreateAndDeployCloudBaseProjectRequest::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

vector<KVPair> CreateAndDeployCloudBaseProjectRequest::GetParameters() const
{
    return m_parameters;
}

void CreateAndDeployCloudBaseProjectRequest::SetParameters(const vector<KVPair>& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

string CreateAndDeployCloudBaseProjectRequest::GetEnvAlias() const
{
    return m_envAlias;
}

void CreateAndDeployCloudBaseProjectRequest::SetEnvAlias(const string& _envAlias)
{
    m_envAlias = _envAlias;
    m_envAliasHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::EnvAliasHasBeenSet() const
{
    return m_envAliasHasBeenSet;
}

string CreateAndDeployCloudBaseProjectRequest::GetRcJson() const
{
    return m_rcJson;
}

void CreateAndDeployCloudBaseProjectRequest::SetRcJson(const string& _rcJson)
{
    m_rcJson = _rcJson;
    m_rcJsonHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::RcJsonHasBeenSet() const
{
    return m_rcJsonHasBeenSet;
}

string CreateAndDeployCloudBaseProjectRequest::GetAddonConfig() const
{
    return m_addonConfig;
}

void CreateAndDeployCloudBaseProjectRequest::SetAddonConfig(const string& _addonConfig)
{
    m_addonConfig = _addonConfig;
    m_addonConfigHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::AddonConfigHasBeenSet() const
{
    return m_addonConfigHasBeenSet;
}

vector<string> CreateAndDeployCloudBaseProjectRequest::GetTags() const
{
    return m_tags;
}

void CreateAndDeployCloudBaseProjectRequest::SetTags(const vector<string>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

string CreateAndDeployCloudBaseProjectRequest::GetNetworkConfig() const
{
    return m_networkConfig;
}

void CreateAndDeployCloudBaseProjectRequest::SetNetworkConfig(const string& _networkConfig)
{
    m_networkConfig = _networkConfig;
    m_networkConfigHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::NetworkConfigHasBeenSet() const
{
    return m_networkConfigHasBeenSet;
}

string CreateAndDeployCloudBaseProjectRequest::GetFreeQuota() const
{
    return m_freeQuota;
}

void CreateAndDeployCloudBaseProjectRequest::SetFreeQuota(const string& _freeQuota)
{
    m_freeQuota = _freeQuota;
    m_freeQuotaHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::FreeQuotaHasBeenSet() const
{
    return m_freeQuotaHasBeenSet;
}

bool CreateAndDeployCloudBaseProjectRequest::GetAutoDeployOnCodeChange() const
{
    return m_autoDeployOnCodeChange;
}

void CreateAndDeployCloudBaseProjectRequest::SetAutoDeployOnCodeChange(const bool& _autoDeployOnCodeChange)
{
    m_autoDeployOnCodeChange = _autoDeployOnCodeChange;
    m_autoDeployOnCodeChangeHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::AutoDeployOnCodeChangeHasBeenSet() const
{
    return m_autoDeployOnCodeChangeHasBeenSet;
}

string CreateAndDeployCloudBaseProjectRequest::GetRepoUrl() const
{
    return m_repoUrl;
}

void CreateAndDeployCloudBaseProjectRequest::SetRepoUrl(const string& _repoUrl)
{
    m_repoUrl = _repoUrl;
    m_repoUrlHasBeenSet = true;
}

bool CreateAndDeployCloudBaseProjectRequest::RepoUrlHasBeenSet() const
{
    return m_repoUrlHasBeenSet;
}


