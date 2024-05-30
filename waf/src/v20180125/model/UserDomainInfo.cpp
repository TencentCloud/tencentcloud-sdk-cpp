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

#include <tencentcloud/waf/v20180125/model/UserDomainInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

UserDomainInfo::UserDomainInfo() :
    m_appidHasBeenSet(false),
    m_domainHasBeenSet(false),
    m_domainIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_editionHasBeenSet(false),
    m_levelHasBeenSet(false),
    m_writeConfigHasBeenSet(false),
    m_clsHasBeenSet(false),
    m_cloudTypeHasBeenSet(false),
    m_albTypeHasBeenSet(false),
    m_botStatusHasBeenSet(false),
    m_apiStatusHasBeenSet(false)
{
}

CoreInternalOutcome UserDomainInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Appid") && !value["Appid"].IsNull())
    {
        if (!value["Appid"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.Appid` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_appid = value["Appid"].GetUint64();
        m_appidHasBeenSet = true;
    }

    if (value.HasMember("Domain") && !value["Domain"].IsNull())
    {
        if (!value["Domain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.Domain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domain = string(value["Domain"].GetString());
        m_domainHasBeenSet = true;
    }

    if (value.HasMember("DomainId") && !value["DomainId"].IsNull())
    {
        if (!value["DomainId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.DomainId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_domainId = string(value["DomainId"].GetString());
        m_domainIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("Edition") && !value["Edition"].IsNull())
    {
        if (!value["Edition"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.Edition` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edition = string(value["Edition"].GetString());
        m_editionHasBeenSet = true;
    }

    if (value.HasMember("Level") && !value["Level"].IsNull())
    {
        if (!value["Level"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.Level` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_level = string(value["Level"].GetString());
        m_levelHasBeenSet = true;
    }

    if (value.HasMember("WriteConfig") && !value["WriteConfig"].IsNull())
    {
        if (!value["WriteConfig"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.WriteConfig` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_writeConfig = string(value["WriteConfig"].GetString());
        m_writeConfigHasBeenSet = true;
    }

    if (value.HasMember("Cls") && !value["Cls"].IsNull())
    {
        if (!value["Cls"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.Cls` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cls = value["Cls"].GetUint64();
        m_clsHasBeenSet = true;
    }

    if (value.HasMember("CloudType") && !value["CloudType"].IsNull())
    {
        if (!value["CloudType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.CloudType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cloudType = string(value["CloudType"].GetString());
        m_cloudTypeHasBeenSet = true;
    }

    if (value.HasMember("AlbType") && !value["AlbType"].IsNull())
    {
        if (!value["AlbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.AlbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_albType = string(value["AlbType"].GetString());
        m_albTypeHasBeenSet = true;
    }

    if (value.HasMember("BotStatus") && !value["BotStatus"].IsNull())
    {
        if (!value["BotStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.BotStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_botStatus = value["BotStatus"].GetInt64();
        m_botStatusHasBeenSet = true;
    }

    if (value.HasMember("ApiStatus") && !value["ApiStatus"].IsNull())
    {
        if (!value["ApiStatus"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `UserDomainInfo.ApiStatus` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_apiStatus = value["ApiStatus"].GetInt64();
        m_apiStatusHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UserDomainInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_appidHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Appid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appid, allocator);
    }

    if (m_domainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_domainIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DomainId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_domainId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_editionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Edition";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edition.c_str(), allocator).Move(), allocator);
    }

    if (m_levelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Level";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_level.c_str(), allocator).Move(), allocator);
    }

    if (m_writeConfigHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WriteConfig";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_writeConfig.c_str(), allocator).Move(), allocator);
    }

    if (m_clsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cls, allocator);
    }

    if (m_cloudTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CloudType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cloudType.c_str(), allocator).Move(), allocator);
    }

    if (m_albTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_albType.c_str(), allocator).Move(), allocator);
    }

    if (m_botStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BotStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_botStatus, allocator);
    }

    if (m_apiStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApiStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apiStatus, allocator);
    }

}


uint64_t UserDomainInfo::GetAppid() const
{
    return m_appid;
}

void UserDomainInfo::SetAppid(const uint64_t& _appid)
{
    m_appid = _appid;
    m_appidHasBeenSet = true;
}

bool UserDomainInfo::AppidHasBeenSet() const
{
    return m_appidHasBeenSet;
}

string UserDomainInfo::GetDomain() const
{
    return m_domain;
}

void UserDomainInfo::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool UserDomainInfo::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string UserDomainInfo::GetDomainId() const
{
    return m_domainId;
}

void UserDomainInfo::SetDomainId(const string& _domainId)
{
    m_domainId = _domainId;
    m_domainIdHasBeenSet = true;
}

bool UserDomainInfo::DomainIdHasBeenSet() const
{
    return m_domainIdHasBeenSet;
}

string UserDomainInfo::GetInstanceId() const
{
    return m_instanceId;
}

void UserDomainInfo::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool UserDomainInfo::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string UserDomainInfo::GetInstanceName() const
{
    return m_instanceName;
}

void UserDomainInfo::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool UserDomainInfo::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string UserDomainInfo::GetEdition() const
{
    return m_edition;
}

void UserDomainInfo::SetEdition(const string& _edition)
{
    m_edition = _edition;
    m_editionHasBeenSet = true;
}

bool UserDomainInfo::EditionHasBeenSet() const
{
    return m_editionHasBeenSet;
}

string UserDomainInfo::GetLevel() const
{
    return m_level;
}

void UserDomainInfo::SetLevel(const string& _level)
{
    m_level = _level;
    m_levelHasBeenSet = true;
}

bool UserDomainInfo::LevelHasBeenSet() const
{
    return m_levelHasBeenSet;
}

string UserDomainInfo::GetWriteConfig() const
{
    return m_writeConfig;
}

void UserDomainInfo::SetWriteConfig(const string& _writeConfig)
{
    m_writeConfig = _writeConfig;
    m_writeConfigHasBeenSet = true;
}

bool UserDomainInfo::WriteConfigHasBeenSet() const
{
    return m_writeConfigHasBeenSet;
}

uint64_t UserDomainInfo::GetCls() const
{
    return m_cls;
}

void UserDomainInfo::SetCls(const uint64_t& _cls)
{
    m_cls = _cls;
    m_clsHasBeenSet = true;
}

bool UserDomainInfo::ClsHasBeenSet() const
{
    return m_clsHasBeenSet;
}

string UserDomainInfo::GetCloudType() const
{
    return m_cloudType;
}

void UserDomainInfo::SetCloudType(const string& _cloudType)
{
    m_cloudType = _cloudType;
    m_cloudTypeHasBeenSet = true;
}

bool UserDomainInfo::CloudTypeHasBeenSet() const
{
    return m_cloudTypeHasBeenSet;
}

string UserDomainInfo::GetAlbType() const
{
    return m_albType;
}

void UserDomainInfo::SetAlbType(const string& _albType)
{
    m_albType = _albType;
    m_albTypeHasBeenSet = true;
}

bool UserDomainInfo::AlbTypeHasBeenSet() const
{
    return m_albTypeHasBeenSet;
}

int64_t UserDomainInfo::GetBotStatus() const
{
    return m_botStatus;
}

void UserDomainInfo::SetBotStatus(const int64_t& _botStatus)
{
    m_botStatus = _botStatus;
    m_botStatusHasBeenSet = true;
}

bool UserDomainInfo::BotStatusHasBeenSet() const
{
    return m_botStatusHasBeenSet;
}

int64_t UserDomainInfo::GetApiStatus() const
{
    return m_apiStatus;
}

void UserDomainInfo::SetApiStatus(const int64_t& _apiStatus)
{
    m_apiStatus = _apiStatus;
    m_apiStatusHasBeenSet = true;
}

bool UserDomainInfo::ApiStatusHasBeenSet() const
{
    return m_apiStatusHasBeenSet;
}

