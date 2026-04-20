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

#include <tencentcloud/apis/v20240801/model/CreateModelServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

CreateModelServiceRequest::CreateModelServiceRequest() :
    m_instanceIDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_pubPathHasBeenSet(false),
    m_targetModelsHasBeenSet(false),
    m_pathMatchTypeHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_tokenLimitStatusHasBeenSet(false),
    m_tokenLimitConfigHasBeenSet(false),
    m_tmsStatusHasBeenSet(false),
    m_tmsConfigHasBeenSet(false),
    m_ipWhiteStatusHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_ipBlackListHasBeenSet(false),
    m_pluginConfigsHasBeenSet(false),
    m_timeoutHasBeenSet(false),
    m_promptModerateStatusHasBeenSet(false),
    m_promptModerateConfigHasBeenSet(false),
    m_sensitiveDataCheckStatusHasBeenSet(false),
    m_sensitiveDataCheckConfigHasBeenSet(false)
{
}

string CreateModelServiceRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_instanceID.c_str(), allocator).Move(), allocator);
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

    if (m_pubPathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PubPath";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pubPath.c_str(), allocator).Move(), allocator);
    }

    if (m_targetModelsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetModels";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_targetModels.begin(); itr != m_targetModels.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_pathMatchTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PathMatchType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_pathMatchType.c_str(), allocator).Move(), allocator);
    }

    if (m_invokeLimitConfigStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfigStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_invokeLimitConfigStatus, allocator);
    }

    if (m_invokeLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InvokeLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_invokeLimitConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tokenLimitStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLimitStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tokenLimitStatus, allocator);
    }

    if (m_tokenLimitConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TokenLimitConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tokenLimitConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_tmsStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmsStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_tmsStatus, allocator);
    }

    if (m_tmsConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TmsConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tmsConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_ipWhiteStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipWhiteStatus, allocator);
    }

    if (m_ipWhiteListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpWhiteList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipWhiteList.begin(); itr != m_ipWhiteList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipBlackListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipBlackList.begin(); itr != m_ipBlackList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_pluginConfigsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PluginConfigs";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_pluginConfigs.begin(); itr != m_pluginConfigs.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_timeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Timeout";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_timeout, allocator);
    }

    if (m_promptModerateStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptModerateStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_promptModerateStatus, allocator);
    }

    if (m_promptModerateConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PromptModerateConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_promptModerateConfig.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_sensitiveDataCheckStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataCheckStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sensitiveDataCheckStatus, allocator);
    }

    if (m_sensitiveDataCheckConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SensitiveDataCheckConfig";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sensitiveDataCheckConfig.ToJsonObject(d[key.c_str()], allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateModelServiceRequest::GetInstanceID() const
{
    return m_instanceID;
}

void CreateModelServiceRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool CreateModelServiceRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string CreateModelServiceRequest::GetName() const
{
    return m_name;
}

void CreateModelServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CreateModelServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CreateModelServiceRequest::GetDescription() const
{
    return m_description;
}

void CreateModelServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateModelServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateModelServiceRequest::GetPubPath() const
{
    return m_pubPath;
}

void CreateModelServiceRequest::SetPubPath(const string& _pubPath)
{
    m_pubPath = _pubPath;
    m_pubPathHasBeenSet = true;
}

bool CreateModelServiceRequest::PubPathHasBeenSet() const
{
    return m_pubPathHasBeenSet;
}

vector<TargetModelDTO> CreateModelServiceRequest::GetTargetModels() const
{
    return m_targetModels;
}

void CreateModelServiceRequest::SetTargetModels(const vector<TargetModelDTO>& _targetModels)
{
    m_targetModels = _targetModels;
    m_targetModelsHasBeenSet = true;
}

bool CreateModelServiceRequest::TargetModelsHasBeenSet() const
{
    return m_targetModelsHasBeenSet;
}

string CreateModelServiceRequest::GetPathMatchType() const
{
    return m_pathMatchType;
}

void CreateModelServiceRequest::SetPathMatchType(const string& _pathMatchType)
{
    m_pathMatchType = _pathMatchType;
    m_pathMatchTypeHasBeenSet = true;
}

bool CreateModelServiceRequest::PathMatchTypeHasBeenSet() const
{
    return m_pathMatchTypeHasBeenSet;
}

bool CreateModelServiceRequest::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void CreateModelServiceRequest::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool CreateModelServiceRequest::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO CreateModelServiceRequest::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void CreateModelServiceRequest::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool CreateModelServiceRequest::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

bool CreateModelServiceRequest::GetTokenLimitStatus() const
{
    return m_tokenLimitStatus;
}

void CreateModelServiceRequest::SetTokenLimitStatus(const bool& _tokenLimitStatus)
{
    m_tokenLimitStatus = _tokenLimitStatus;
    m_tokenLimitStatusHasBeenSet = true;
}

bool CreateModelServiceRequest::TokenLimitStatusHasBeenSet() const
{
    return m_tokenLimitStatusHasBeenSet;
}

TokenLimitConfigDTO CreateModelServiceRequest::GetTokenLimitConfig() const
{
    return m_tokenLimitConfig;
}

void CreateModelServiceRequest::SetTokenLimitConfig(const TokenLimitConfigDTO& _tokenLimitConfig)
{
    m_tokenLimitConfig = _tokenLimitConfig;
    m_tokenLimitConfigHasBeenSet = true;
}

bool CreateModelServiceRequest::TokenLimitConfigHasBeenSet() const
{
    return m_tokenLimitConfigHasBeenSet;
}

bool CreateModelServiceRequest::GetTmsStatus() const
{
    return m_tmsStatus;
}

void CreateModelServiceRequest::SetTmsStatus(const bool& _tmsStatus)
{
    m_tmsStatus = _tmsStatus;
    m_tmsStatusHasBeenSet = true;
}

bool CreateModelServiceRequest::TmsStatusHasBeenSet() const
{
    return m_tmsStatusHasBeenSet;
}

TmsConfigDTO CreateModelServiceRequest::GetTmsConfig() const
{
    return m_tmsConfig;
}

void CreateModelServiceRequest::SetTmsConfig(const TmsConfigDTO& _tmsConfig)
{
    m_tmsConfig = _tmsConfig;
    m_tmsConfigHasBeenSet = true;
}

bool CreateModelServiceRequest::TmsConfigHasBeenSet() const
{
    return m_tmsConfigHasBeenSet;
}

bool CreateModelServiceRequest::GetIpWhiteStatus() const
{
    return m_ipWhiteStatus;
}

void CreateModelServiceRequest::SetIpWhiteStatus(const bool& _ipWhiteStatus)
{
    m_ipWhiteStatus = _ipWhiteStatus;
    m_ipWhiteStatusHasBeenSet = true;
}

bool CreateModelServiceRequest::IpWhiteStatusHasBeenSet() const
{
    return m_ipWhiteStatusHasBeenSet;
}

vector<string> CreateModelServiceRequest::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void CreateModelServiceRequest::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool CreateModelServiceRequest::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

vector<string> CreateModelServiceRequest::GetIpBlackList() const
{
    return m_ipBlackList;
}

void CreateModelServiceRequest::SetIpBlackList(const vector<string>& _ipBlackList)
{
    m_ipBlackList = _ipBlackList;
    m_ipBlackListHasBeenSet = true;
}

bool CreateModelServiceRequest::IpBlackListHasBeenSet() const
{
    return m_ipBlackListHasBeenSet;
}

vector<PluginConfigDTO> CreateModelServiceRequest::GetPluginConfigs() const
{
    return m_pluginConfigs;
}

void CreateModelServiceRequest::SetPluginConfigs(const vector<PluginConfigDTO>& _pluginConfigs)
{
    m_pluginConfigs = _pluginConfigs;
    m_pluginConfigsHasBeenSet = true;
}

bool CreateModelServiceRequest::PluginConfigsHasBeenSet() const
{
    return m_pluginConfigsHasBeenSet;
}

int64_t CreateModelServiceRequest::GetTimeout() const
{
    return m_timeout;
}

void CreateModelServiceRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool CreateModelServiceRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}

bool CreateModelServiceRequest::GetPromptModerateStatus() const
{
    return m_promptModerateStatus;
}

void CreateModelServiceRequest::SetPromptModerateStatus(const bool& _promptModerateStatus)
{
    m_promptModerateStatus = _promptModerateStatus;
    m_promptModerateStatusHasBeenSet = true;
}

bool CreateModelServiceRequest::PromptModerateStatusHasBeenSet() const
{
    return m_promptModerateStatusHasBeenSet;
}

PromptModerateConfigDTO CreateModelServiceRequest::GetPromptModerateConfig() const
{
    return m_promptModerateConfig;
}

void CreateModelServiceRequest::SetPromptModerateConfig(const PromptModerateConfigDTO& _promptModerateConfig)
{
    m_promptModerateConfig = _promptModerateConfig;
    m_promptModerateConfigHasBeenSet = true;
}

bool CreateModelServiceRequest::PromptModerateConfigHasBeenSet() const
{
    return m_promptModerateConfigHasBeenSet;
}

bool CreateModelServiceRequest::GetSensitiveDataCheckStatus() const
{
    return m_sensitiveDataCheckStatus;
}

void CreateModelServiceRequest::SetSensitiveDataCheckStatus(const bool& _sensitiveDataCheckStatus)
{
    m_sensitiveDataCheckStatus = _sensitiveDataCheckStatus;
    m_sensitiveDataCheckStatusHasBeenSet = true;
}

bool CreateModelServiceRequest::SensitiveDataCheckStatusHasBeenSet() const
{
    return m_sensitiveDataCheckStatusHasBeenSet;
}

SensitiveDataCheckConfigDTO CreateModelServiceRequest::GetSensitiveDataCheckConfig() const
{
    return m_sensitiveDataCheckConfig;
}

void CreateModelServiceRequest::SetSensitiveDataCheckConfig(const SensitiveDataCheckConfigDTO& _sensitiveDataCheckConfig)
{
    m_sensitiveDataCheckConfig = _sensitiveDataCheckConfig;
    m_sensitiveDataCheckConfigHasBeenSet = true;
}

bool CreateModelServiceRequest::SensitiveDataCheckConfigHasBeenSet() const
{
    return m_sensitiveDataCheckConfigHasBeenSet;
}


