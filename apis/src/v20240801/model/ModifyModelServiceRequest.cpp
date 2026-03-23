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

#include <tencentcloud/apis/v20240801/model/ModifyModelServiceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Apis::V20240801::Model;
using namespace std;

ModifyModelServiceRequest::ModifyModelServiceRequest() :
    m_instanceIDHasBeenSet(false),
    m_iDHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_targetModelsHasBeenSet(false),
    m_invokeLimitConfigStatusHasBeenSet(false),
    m_invokeLimitConfigHasBeenSet(false),
    m_tokenLimitStatusHasBeenSet(false),
    m_tokenLimitConfigHasBeenSet(false),
    m_tmsStatusHasBeenSet(false),
    m_tmsConfigHasBeenSet(false),
    m_ipWhiteStatusHasBeenSet(false),
    m_ipWhiteListHasBeenSet(false),
    m_ipBlackStatusHasBeenSet(false),
    m_ipBlackListHasBeenSet(false),
    m_pluginConfigsHasBeenSet(false),
    m_timeoutHasBeenSet(false)
{
}

string ModifyModelServiceRequest::ToJsonString() const
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

    if (m_iDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_iD.c_str(), allocator).Move(), allocator);
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

    if (m_ipBlackStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpBlackStatus";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ipBlackStatus, allocator);
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


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyModelServiceRequest::GetInstanceID() const
{
    return m_instanceID;
}

void ModifyModelServiceRequest::SetInstanceID(const string& _instanceID)
{
    m_instanceID = _instanceID;
    m_instanceIDHasBeenSet = true;
}

bool ModifyModelServiceRequest::InstanceIDHasBeenSet() const
{
    return m_instanceIDHasBeenSet;
}

string ModifyModelServiceRequest::GetID() const
{
    return m_iD;
}

void ModifyModelServiceRequest::SetID(const string& _iD)
{
    m_iD = _iD;
    m_iDHasBeenSet = true;
}

bool ModifyModelServiceRequest::IDHasBeenSet() const
{
    return m_iDHasBeenSet;
}

string ModifyModelServiceRequest::GetName() const
{
    return m_name;
}

void ModifyModelServiceRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyModelServiceRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ModifyModelServiceRequest::GetDescription() const
{
    return m_description;
}

void ModifyModelServiceRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyModelServiceRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

vector<TargetModelDTO> ModifyModelServiceRequest::GetTargetModels() const
{
    return m_targetModels;
}

void ModifyModelServiceRequest::SetTargetModels(const vector<TargetModelDTO>& _targetModels)
{
    m_targetModels = _targetModels;
    m_targetModelsHasBeenSet = true;
}

bool ModifyModelServiceRequest::TargetModelsHasBeenSet() const
{
    return m_targetModelsHasBeenSet;
}

bool ModifyModelServiceRequest::GetInvokeLimitConfigStatus() const
{
    return m_invokeLimitConfigStatus;
}

void ModifyModelServiceRequest::SetInvokeLimitConfigStatus(const bool& _invokeLimitConfigStatus)
{
    m_invokeLimitConfigStatus = _invokeLimitConfigStatus;
    m_invokeLimitConfigStatusHasBeenSet = true;
}

bool ModifyModelServiceRequest::InvokeLimitConfigStatusHasBeenSet() const
{
    return m_invokeLimitConfigStatusHasBeenSet;
}

InvokeLimitConfigDTO ModifyModelServiceRequest::GetInvokeLimitConfig() const
{
    return m_invokeLimitConfig;
}

void ModifyModelServiceRequest::SetInvokeLimitConfig(const InvokeLimitConfigDTO& _invokeLimitConfig)
{
    m_invokeLimitConfig = _invokeLimitConfig;
    m_invokeLimitConfigHasBeenSet = true;
}

bool ModifyModelServiceRequest::InvokeLimitConfigHasBeenSet() const
{
    return m_invokeLimitConfigHasBeenSet;
}

bool ModifyModelServiceRequest::GetTokenLimitStatus() const
{
    return m_tokenLimitStatus;
}

void ModifyModelServiceRequest::SetTokenLimitStatus(const bool& _tokenLimitStatus)
{
    m_tokenLimitStatus = _tokenLimitStatus;
    m_tokenLimitStatusHasBeenSet = true;
}

bool ModifyModelServiceRequest::TokenLimitStatusHasBeenSet() const
{
    return m_tokenLimitStatusHasBeenSet;
}

TokenLimitConfigDTO ModifyModelServiceRequest::GetTokenLimitConfig() const
{
    return m_tokenLimitConfig;
}

void ModifyModelServiceRequest::SetTokenLimitConfig(const TokenLimitConfigDTO& _tokenLimitConfig)
{
    m_tokenLimitConfig = _tokenLimitConfig;
    m_tokenLimitConfigHasBeenSet = true;
}

bool ModifyModelServiceRequest::TokenLimitConfigHasBeenSet() const
{
    return m_tokenLimitConfigHasBeenSet;
}

bool ModifyModelServiceRequest::GetTmsStatus() const
{
    return m_tmsStatus;
}

void ModifyModelServiceRequest::SetTmsStatus(const bool& _tmsStatus)
{
    m_tmsStatus = _tmsStatus;
    m_tmsStatusHasBeenSet = true;
}

bool ModifyModelServiceRequest::TmsStatusHasBeenSet() const
{
    return m_tmsStatusHasBeenSet;
}

TmsConfigDTO ModifyModelServiceRequest::GetTmsConfig() const
{
    return m_tmsConfig;
}

void ModifyModelServiceRequest::SetTmsConfig(const TmsConfigDTO& _tmsConfig)
{
    m_tmsConfig = _tmsConfig;
    m_tmsConfigHasBeenSet = true;
}

bool ModifyModelServiceRequest::TmsConfigHasBeenSet() const
{
    return m_tmsConfigHasBeenSet;
}

bool ModifyModelServiceRequest::GetIpWhiteStatus() const
{
    return m_ipWhiteStatus;
}

void ModifyModelServiceRequest::SetIpWhiteStatus(const bool& _ipWhiteStatus)
{
    m_ipWhiteStatus = _ipWhiteStatus;
    m_ipWhiteStatusHasBeenSet = true;
}

bool ModifyModelServiceRequest::IpWhiteStatusHasBeenSet() const
{
    return m_ipWhiteStatusHasBeenSet;
}

vector<string> ModifyModelServiceRequest::GetIpWhiteList() const
{
    return m_ipWhiteList;
}

void ModifyModelServiceRequest::SetIpWhiteList(const vector<string>& _ipWhiteList)
{
    m_ipWhiteList = _ipWhiteList;
    m_ipWhiteListHasBeenSet = true;
}

bool ModifyModelServiceRequest::IpWhiteListHasBeenSet() const
{
    return m_ipWhiteListHasBeenSet;
}

bool ModifyModelServiceRequest::GetIpBlackStatus() const
{
    return m_ipBlackStatus;
}

void ModifyModelServiceRequest::SetIpBlackStatus(const bool& _ipBlackStatus)
{
    m_ipBlackStatus = _ipBlackStatus;
    m_ipBlackStatusHasBeenSet = true;
}

bool ModifyModelServiceRequest::IpBlackStatusHasBeenSet() const
{
    return m_ipBlackStatusHasBeenSet;
}

vector<string> ModifyModelServiceRequest::GetIpBlackList() const
{
    return m_ipBlackList;
}

void ModifyModelServiceRequest::SetIpBlackList(const vector<string>& _ipBlackList)
{
    m_ipBlackList = _ipBlackList;
    m_ipBlackListHasBeenSet = true;
}

bool ModifyModelServiceRequest::IpBlackListHasBeenSet() const
{
    return m_ipBlackListHasBeenSet;
}

vector<PluginConfigDTO> ModifyModelServiceRequest::GetPluginConfigs() const
{
    return m_pluginConfigs;
}

void ModifyModelServiceRequest::SetPluginConfigs(const vector<PluginConfigDTO>& _pluginConfigs)
{
    m_pluginConfigs = _pluginConfigs;
    m_pluginConfigsHasBeenSet = true;
}

bool ModifyModelServiceRequest::PluginConfigsHasBeenSet() const
{
    return m_pluginConfigsHasBeenSet;
}

int64_t ModifyModelServiceRequest::GetTimeout() const
{
    return m_timeout;
}

void ModifyModelServiceRequest::SetTimeout(const int64_t& _timeout)
{
    m_timeout = _timeout;
    m_timeoutHasBeenSet = true;
}

bool ModifyModelServiceRequest::TimeoutHasBeenSet() const
{
    return m_timeoutHasBeenSet;
}


