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

#include <tencentcloud/tcb/v20180608/model/CloudBaseRunForGatewayConf.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tcb::V20180608::Model;
using namespace std;

CloudBaseRunForGatewayConf::CloudBaseRunForGatewayConf() :
    m_isZeroHasBeenSet(false),
    m_weightHasBeenSet(false),
    m_grayKeyHasBeenSet(false),
    m_grayValueHasBeenSet(false),
    m_isDefaultHasBeenSet(false),
    m_accessTypeHasBeenSet(false),
    m_uRLsHasBeenSet(false),
    m_envIdHasBeenSet(false),
    m_serverNameHasBeenSet(false),
    m_versionNameHasBeenSet(false),
    m_grayTypeHasBeenSet(false),
    m_lbAddrHasBeenSet(false),
    m_configTypeHasBeenSet(false)
{
}

CoreInternalOutcome CloudBaseRunForGatewayConf::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("IsZero") && !value["IsZero"].IsNull())
    {
        if (!value["IsZero"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.IsZero` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isZero = value["IsZero"].GetBool();
        m_isZeroHasBeenSet = true;
    }

    if (value.HasMember("Weight") && !value["Weight"].IsNull())
    {
        if (!value["Weight"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.Weight` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_weight = value["Weight"].GetInt64();
        m_weightHasBeenSet = true;
    }

    if (value.HasMember("GrayKey") && !value["GrayKey"].IsNull())
    {
        if (!value["GrayKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.GrayKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grayKey = string(value["GrayKey"].GetString());
        m_grayKeyHasBeenSet = true;
    }

    if (value.HasMember("GrayValue") && !value["GrayValue"].IsNull())
    {
        if (!value["GrayValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.GrayValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grayValue = string(value["GrayValue"].GetString());
        m_grayValueHasBeenSet = true;
    }

    if (value.HasMember("IsDefault") && !value["IsDefault"].IsNull())
    {
        if (!value["IsDefault"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.IsDefault` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_isDefault = value["IsDefault"].GetBool();
        m_isDefaultHasBeenSet = true;
    }

    if (value.HasMember("AccessType") && !value["AccessType"].IsNull())
    {
        if (!value["AccessType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.AccessType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_accessType = value["AccessType"].GetInt64();
        m_accessTypeHasBeenSet = true;
    }

    if (value.HasMember("URLs") && !value["URLs"].IsNull())
    {
        if (!value["URLs"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.URLs` is not array type"));

        const rapidjson::Value &tmpValue = value["URLs"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_uRLs.push_back((*itr).GetString());
        }
        m_uRLsHasBeenSet = true;
    }

    if (value.HasMember("EnvId") && !value["EnvId"].IsNull())
    {
        if (!value["EnvId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.EnvId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_envId = string(value["EnvId"].GetString());
        m_envIdHasBeenSet = true;
    }

    if (value.HasMember("ServerName") && !value["ServerName"].IsNull())
    {
        if (!value["ServerName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.ServerName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_serverName = string(value["ServerName"].GetString());
        m_serverNameHasBeenSet = true;
    }

    if (value.HasMember("VersionName") && !value["VersionName"].IsNull())
    {
        if (!value["VersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.VersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_versionName = string(value["VersionName"].GetString());
        m_versionNameHasBeenSet = true;
    }

    if (value.HasMember("GrayType") && !value["GrayType"].IsNull())
    {
        if (!value["GrayType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.GrayType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_grayType = string(value["GrayType"].GetString());
        m_grayTypeHasBeenSet = true;
    }

    if (value.HasMember("LbAddr") && !value["LbAddr"].IsNull())
    {
        if (!value["LbAddr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.LbAddr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lbAddr = string(value["LbAddr"].GetString());
        m_lbAddrHasBeenSet = true;
    }

    if (value.HasMember("ConfigType") && !value["ConfigType"].IsNull())
    {
        if (!value["ConfigType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudBaseRunForGatewayConf.ConfigType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_configType = value["ConfigType"].GetInt64();
        m_configTypeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudBaseRunForGatewayConf::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_isZeroHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsZero";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isZero, allocator);
    }

    if (m_weightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_weight, allocator);
    }

    if (m_grayKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grayKey.c_str(), allocator).Move(), allocator);
    }

    if (m_grayValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grayValue.c_str(), allocator).Move(), allocator);
    }

    if (m_isDefaultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsDefault";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isDefault, allocator);
    }

    if (m_accessTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AccessType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_accessType, allocator);
    }

    if (m_uRLsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "URLs";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_uRLs.begin(); itr != m_uRLs.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_envIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_envId.c_str(), allocator).Move(), allocator);
    }

    if (m_serverNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServerName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_serverName.c_str(), allocator).Move(), allocator);
    }

    if (m_versionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_versionName.c_str(), allocator).Move(), allocator);
    }

    if (m_grayTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GrayType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_grayType.c_str(), allocator).Move(), allocator);
    }

    if (m_lbAddrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LbAddr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lbAddr.c_str(), allocator).Move(), allocator);
    }

    if (m_configTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ConfigType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_configType, allocator);
    }

}


bool CloudBaseRunForGatewayConf::GetIsZero() const
{
    return m_isZero;
}

void CloudBaseRunForGatewayConf::SetIsZero(const bool& _isZero)
{
    m_isZero = _isZero;
    m_isZeroHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::IsZeroHasBeenSet() const
{
    return m_isZeroHasBeenSet;
}

int64_t CloudBaseRunForGatewayConf::GetWeight() const
{
    return m_weight;
}

void CloudBaseRunForGatewayConf::SetWeight(const int64_t& _weight)
{
    m_weight = _weight;
    m_weightHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::WeightHasBeenSet() const
{
    return m_weightHasBeenSet;
}

string CloudBaseRunForGatewayConf::GetGrayKey() const
{
    return m_grayKey;
}

void CloudBaseRunForGatewayConf::SetGrayKey(const string& _grayKey)
{
    m_grayKey = _grayKey;
    m_grayKeyHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::GrayKeyHasBeenSet() const
{
    return m_grayKeyHasBeenSet;
}

string CloudBaseRunForGatewayConf::GetGrayValue() const
{
    return m_grayValue;
}

void CloudBaseRunForGatewayConf::SetGrayValue(const string& _grayValue)
{
    m_grayValue = _grayValue;
    m_grayValueHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::GrayValueHasBeenSet() const
{
    return m_grayValueHasBeenSet;
}

bool CloudBaseRunForGatewayConf::GetIsDefault() const
{
    return m_isDefault;
}

void CloudBaseRunForGatewayConf::SetIsDefault(const bool& _isDefault)
{
    m_isDefault = _isDefault;
    m_isDefaultHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::IsDefaultHasBeenSet() const
{
    return m_isDefaultHasBeenSet;
}

int64_t CloudBaseRunForGatewayConf::GetAccessType() const
{
    return m_accessType;
}

void CloudBaseRunForGatewayConf::SetAccessType(const int64_t& _accessType)
{
    m_accessType = _accessType;
    m_accessTypeHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::AccessTypeHasBeenSet() const
{
    return m_accessTypeHasBeenSet;
}

vector<string> CloudBaseRunForGatewayConf::GetURLs() const
{
    return m_uRLs;
}

void CloudBaseRunForGatewayConf::SetURLs(const vector<string>& _uRLs)
{
    m_uRLs = _uRLs;
    m_uRLsHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::URLsHasBeenSet() const
{
    return m_uRLsHasBeenSet;
}

string CloudBaseRunForGatewayConf::GetEnvId() const
{
    return m_envId;
}

void CloudBaseRunForGatewayConf::SetEnvId(const string& _envId)
{
    m_envId = _envId;
    m_envIdHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::EnvIdHasBeenSet() const
{
    return m_envIdHasBeenSet;
}

string CloudBaseRunForGatewayConf::GetServerName() const
{
    return m_serverName;
}

void CloudBaseRunForGatewayConf::SetServerName(const string& _serverName)
{
    m_serverName = _serverName;
    m_serverNameHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::ServerNameHasBeenSet() const
{
    return m_serverNameHasBeenSet;
}

string CloudBaseRunForGatewayConf::GetVersionName() const
{
    return m_versionName;
}

void CloudBaseRunForGatewayConf::SetVersionName(const string& _versionName)
{
    m_versionName = _versionName;
    m_versionNameHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::VersionNameHasBeenSet() const
{
    return m_versionNameHasBeenSet;
}

string CloudBaseRunForGatewayConf::GetGrayType() const
{
    return m_grayType;
}

void CloudBaseRunForGatewayConf::SetGrayType(const string& _grayType)
{
    m_grayType = _grayType;
    m_grayTypeHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::GrayTypeHasBeenSet() const
{
    return m_grayTypeHasBeenSet;
}

string CloudBaseRunForGatewayConf::GetLbAddr() const
{
    return m_lbAddr;
}

void CloudBaseRunForGatewayConf::SetLbAddr(const string& _lbAddr)
{
    m_lbAddr = _lbAddr;
    m_lbAddrHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::LbAddrHasBeenSet() const
{
    return m_lbAddrHasBeenSet;
}

int64_t CloudBaseRunForGatewayConf::GetConfigType() const
{
    return m_configType;
}

void CloudBaseRunForGatewayConf::SetConfigType(const int64_t& _configType)
{
    m_configType = _configType;
    m_configTypeHasBeenSet = true;
}

bool CloudBaseRunForGatewayConf::ConfigTypeHasBeenSet() const
{
    return m_configTypeHasBeenSet;
}

