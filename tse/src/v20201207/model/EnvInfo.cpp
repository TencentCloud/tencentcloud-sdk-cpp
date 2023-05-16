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

#include <tencentcloud/tse/v20201207/model/EnvInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tse::V20201207::Model;
using namespace std;

EnvInfo::EnvInfo() :
    m_envNameHasBeenSet(false),
    m_vpcInfosHasBeenSet(false),
    m_storageCapacityHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_adminServiceIpHasBeenSet(false),
    m_configServiceIpHasBeenSet(false),
    m_enableConfigInternetHasBeenSet(false),
    m_configInternetServiceIpHasBeenSet(false),
    m_specIdHasBeenSet(false),
    m_envReplicaHasBeenSet(false),
    m_runningCountHasBeenSet(false),
    m_aliasEnvNameHasBeenSet(false),
    m_envDescHasBeenSet(false),
    m_clientBandWidthHasBeenSet(false),
    m_enableConfigIntranetHasBeenSet(false)
{
}

CoreInternalOutcome EnvInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EnvName") && !value["EnvName"].IsNull())
    {
        if (!value["EnvName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.EnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envName = string(value["EnvName"].GetString());
        m_envNameHasBeenSet = true;
    }

    if (value.HasMember("VpcInfos") && !value["VpcInfos"].IsNull())
    {
        if (!value["VpcInfos"].IsArray())
            return CoreInternalOutcome(Core::Error("response `EnvInfo.VpcInfos` is not array type"));

        const rapidjson::Value &tmpValue = value["VpcInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            VpcInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_vpcInfos.push_back(item);
        }
        m_vpcInfosHasBeenSet = true;
    }

    if (value.HasMember("StorageCapacity") && !value["StorageCapacity"].IsNull())
    {
        if (!value["StorageCapacity"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.StorageCapacity` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_storageCapacity = value["StorageCapacity"].GetInt64();
        m_storageCapacityHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("AdminServiceIp") && !value["AdminServiceIp"].IsNull())
    {
        if (!value["AdminServiceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.AdminServiceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_adminServiceIp = string(value["AdminServiceIp"].GetString());
        m_adminServiceIpHasBeenSet = true;
    }

    if (value.HasMember("ConfigServiceIp") && !value["ConfigServiceIp"].IsNull())
    {
        if (!value["ConfigServiceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.ConfigServiceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configServiceIp = string(value["ConfigServiceIp"].GetString());
        m_configServiceIpHasBeenSet = true;
    }

    if (value.HasMember("EnableConfigInternet") && !value["EnableConfigInternet"].IsNull())
    {
        if (!value["EnableConfigInternet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.EnableConfigInternet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableConfigInternet = value["EnableConfigInternet"].GetBool();
        m_enableConfigInternetHasBeenSet = true;
    }

    if (value.HasMember("ConfigInternetServiceIp") && !value["ConfigInternetServiceIp"].IsNull())
    {
        if (!value["ConfigInternetServiceIp"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.ConfigInternetServiceIp` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_configInternetServiceIp = string(value["ConfigInternetServiceIp"].GetString());
        m_configInternetServiceIpHasBeenSet = true;
    }

    if (value.HasMember("SpecId") && !value["SpecId"].IsNull())
    {
        if (!value["SpecId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.SpecId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_specId = string(value["SpecId"].GetString());
        m_specIdHasBeenSet = true;
    }

    if (value.HasMember("EnvReplica") && !value["EnvReplica"].IsNull())
    {
        if (!value["EnvReplica"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.EnvReplica` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_envReplica = value["EnvReplica"].GetInt64();
        m_envReplicaHasBeenSet = true;
    }

    if (value.HasMember("RunningCount") && !value["RunningCount"].IsNull())
    {
        if (!value["RunningCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.RunningCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_runningCount = value["RunningCount"].GetInt64();
        m_runningCountHasBeenSet = true;
    }

    if (value.HasMember("AliasEnvName") && !value["AliasEnvName"].IsNull())
    {
        if (!value["AliasEnvName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.AliasEnvName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_aliasEnvName = string(value["AliasEnvName"].GetString());
        m_aliasEnvNameHasBeenSet = true;
    }

    if (value.HasMember("EnvDesc") && !value["EnvDesc"].IsNull())
    {
        if (!value["EnvDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.EnvDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envDesc = string(value["EnvDesc"].GetString());
        m_envDescHasBeenSet = true;
    }

    if (value.HasMember("ClientBandWidth") && !value["ClientBandWidth"].IsNull())
    {
        if (!value["ClientBandWidth"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.ClientBandWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_clientBandWidth = value["ClientBandWidth"].GetUint64();
        m_clientBandWidthHasBeenSet = true;
    }

    if (value.HasMember("EnableConfigIntranet") && !value["EnableConfigIntranet"].IsNull())
    {
        if (!value["EnableConfigIntranet"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `EnvInfo.EnableConfigIntranet` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_enableConfigIntranet = value["EnableConfigIntranet"].GetBool();
        m_enableConfigIntranetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EnvInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_envNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VpcInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_vpcInfos.begin(); itr != m_vpcInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_storageCapacityHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageCapacity";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_storageCapacity, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_adminServiceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AdminServiceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_adminServiceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_configServiceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigServiceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configServiceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_enableConfigInternetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableConfigInternet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableConfigInternet, allocator);
    }

    if (m_configInternetServiceIpHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigInternetServiceIp";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_configInternetServiceIp.c_str(), allocator).Move(), allocator);
    }

    if (m_specIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpecId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_specId.c_str(), allocator).Move(), allocator);
    }

    if (m_envReplicaHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvReplica";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_envReplica, allocator);
    }

    if (m_runningCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RunningCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_runningCount, allocator);
    }

    if (m_aliasEnvNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasEnvName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_aliasEnvName.c_str(), allocator).Move(), allocator);
    }

    if (m_envDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_clientBandWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClientBandWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_clientBandWidth, allocator);
    }

    if (m_enableConfigIntranetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableConfigIntranet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_enableConfigIntranet, allocator);
    }

}


string EnvInfo::GetEnvName() const
{
    return m_envName;
}

void EnvInfo::SetEnvName(const string& _envName)
{
    m_envName = _envName;
    m_envNameHasBeenSet = true;
}

bool EnvInfo::EnvNameHasBeenSet() const
{
    return m_envNameHasBeenSet;
}

vector<VpcInfo> EnvInfo::GetVpcInfos() const
{
    return m_vpcInfos;
}

void EnvInfo::SetVpcInfos(const vector<VpcInfo>& _vpcInfos)
{
    m_vpcInfos = _vpcInfos;
    m_vpcInfosHasBeenSet = true;
}

bool EnvInfo::VpcInfosHasBeenSet() const
{
    return m_vpcInfosHasBeenSet;
}

int64_t EnvInfo::GetStorageCapacity() const
{
    return m_storageCapacity;
}

void EnvInfo::SetStorageCapacity(const int64_t& _storageCapacity)
{
    m_storageCapacity = _storageCapacity;
    m_storageCapacityHasBeenSet = true;
}

bool EnvInfo::StorageCapacityHasBeenSet() const
{
    return m_storageCapacityHasBeenSet;
}

string EnvInfo::GetStatus() const
{
    return m_status;
}

void EnvInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool EnvInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string EnvInfo::GetAdminServiceIp() const
{
    return m_adminServiceIp;
}

void EnvInfo::SetAdminServiceIp(const string& _adminServiceIp)
{
    m_adminServiceIp = _adminServiceIp;
    m_adminServiceIpHasBeenSet = true;
}

bool EnvInfo::AdminServiceIpHasBeenSet() const
{
    return m_adminServiceIpHasBeenSet;
}

string EnvInfo::GetConfigServiceIp() const
{
    return m_configServiceIp;
}

void EnvInfo::SetConfigServiceIp(const string& _configServiceIp)
{
    m_configServiceIp = _configServiceIp;
    m_configServiceIpHasBeenSet = true;
}

bool EnvInfo::ConfigServiceIpHasBeenSet() const
{
    return m_configServiceIpHasBeenSet;
}

bool EnvInfo::GetEnableConfigInternet() const
{
    return m_enableConfigInternet;
}

void EnvInfo::SetEnableConfigInternet(const bool& _enableConfigInternet)
{
    m_enableConfigInternet = _enableConfigInternet;
    m_enableConfigInternetHasBeenSet = true;
}

bool EnvInfo::EnableConfigInternetHasBeenSet() const
{
    return m_enableConfigInternetHasBeenSet;
}

string EnvInfo::GetConfigInternetServiceIp() const
{
    return m_configInternetServiceIp;
}

void EnvInfo::SetConfigInternetServiceIp(const string& _configInternetServiceIp)
{
    m_configInternetServiceIp = _configInternetServiceIp;
    m_configInternetServiceIpHasBeenSet = true;
}

bool EnvInfo::ConfigInternetServiceIpHasBeenSet() const
{
    return m_configInternetServiceIpHasBeenSet;
}

string EnvInfo::GetSpecId() const
{
    return m_specId;
}

void EnvInfo::SetSpecId(const string& _specId)
{
    m_specId = _specId;
    m_specIdHasBeenSet = true;
}

bool EnvInfo::SpecIdHasBeenSet() const
{
    return m_specIdHasBeenSet;
}

int64_t EnvInfo::GetEnvReplica() const
{
    return m_envReplica;
}

void EnvInfo::SetEnvReplica(const int64_t& _envReplica)
{
    m_envReplica = _envReplica;
    m_envReplicaHasBeenSet = true;
}

bool EnvInfo::EnvReplicaHasBeenSet() const
{
    return m_envReplicaHasBeenSet;
}

int64_t EnvInfo::GetRunningCount() const
{
    return m_runningCount;
}

void EnvInfo::SetRunningCount(const int64_t& _runningCount)
{
    m_runningCount = _runningCount;
    m_runningCountHasBeenSet = true;
}

bool EnvInfo::RunningCountHasBeenSet() const
{
    return m_runningCountHasBeenSet;
}

string EnvInfo::GetAliasEnvName() const
{
    return m_aliasEnvName;
}

void EnvInfo::SetAliasEnvName(const string& _aliasEnvName)
{
    m_aliasEnvName = _aliasEnvName;
    m_aliasEnvNameHasBeenSet = true;
}

bool EnvInfo::AliasEnvNameHasBeenSet() const
{
    return m_aliasEnvNameHasBeenSet;
}

string EnvInfo::GetEnvDesc() const
{
    return m_envDesc;
}

void EnvInfo::SetEnvDesc(const string& _envDesc)
{
    m_envDesc = _envDesc;
    m_envDescHasBeenSet = true;
}

bool EnvInfo::EnvDescHasBeenSet() const
{
    return m_envDescHasBeenSet;
}

uint64_t EnvInfo::GetClientBandWidth() const
{
    return m_clientBandWidth;
}

void EnvInfo::SetClientBandWidth(const uint64_t& _clientBandWidth)
{
    m_clientBandWidth = _clientBandWidth;
    m_clientBandWidthHasBeenSet = true;
}

bool EnvInfo::ClientBandWidthHasBeenSet() const
{
    return m_clientBandWidthHasBeenSet;
}

bool EnvInfo::GetEnableConfigIntranet() const
{
    return m_enableConfigIntranet;
}

void EnvInfo::SetEnableConfigIntranet(const bool& _enableConfigIntranet)
{
    m_enableConfigIntranet = _enableConfigIntranet;
    m_enableConfigIntranetHasBeenSet = true;
}

bool EnvInfo::EnableConfigIntranetHasBeenSet() const
{
    return m_enableConfigIntranetHasBeenSet;
}

